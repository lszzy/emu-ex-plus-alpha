include $(IMAGINE_PATH)/make/config.mk
LTO_MODE ?= lto
ios_makefileOpts ?= O_RELEASE=1
include $(buildSysPath)/shortcut/meta-builds/ios.mk
