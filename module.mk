local_root := $(subdirectory)

local_inc_dirs := $(local_root)/inc

$(eval $(call add-module, , $(local_inc_dirs), ))

ifeq ($(BUILD), RELEASE)

# If we are building for RELEASE, add functionality for publishing all used
# include files in this CO to the out folder. We do this by looking in all
# produced *.d dependency files and extracting "our" header files.

included_abp = $(sort $(subst :,,$(foreach var, $(subst /,\\,$(dependencies)), $(subst //,/,$(filter lib/abp//inc/%.h:, $(shell type $(var)))))))

all:
	$(Q)echo Publishing used ABP header files
	$(Q)for %%I in ( $(subst /,\,$(included_abp)) ) do copy %%I $(OUT_DIR) >NUL:

clean::
	$(Q)echo Cleaning published header files
	$(Q)if exist $(OUT_DIR)\*.h del /Q $(OUT_DIR)\*.h

endif
