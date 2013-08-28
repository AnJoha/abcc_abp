local_root := $(subdirectory)

local_inc_dirs := $(local_root)/inc
                  
$(eval $(call add-module, , $(local_inc_dirs), ))