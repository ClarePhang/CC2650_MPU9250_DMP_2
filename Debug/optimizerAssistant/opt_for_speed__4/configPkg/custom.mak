## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em3 linker.cmd package/cfg/empty_pem3.oem3

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/empty_pem3.xdl
	$(SED) 's"^\"\(package/cfg/empty_pem3cfg.cmd\)\"$""\"C:/Users/Ein/Documents/GitHub/CC2650_MPU9250_DMP_2/Debug__opt_for_speed__4/configPkg/\1\""' package/cfg/empty_pem3.xdl > $@
	-$(SETDATE) -r:max package/cfg/empty_pem3.h compiler.opt compiler.opt.defs
