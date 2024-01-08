TARGET := iphone:clang:latest:15.0
ARCHS = arm64
THEOS_PACKAGE_SCHEME=roothide
INSTALL_TARGET_PROCESSES = nfcd

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = nfcdhook

nfcdhook_FILES = Tweak.x
nfcdhook_CFLAGS = -fobjc-arc -lbsm

after-package::
	echo "[*] Signing nfcd hook"
	ct_bypass -i .theos/obj/debug/nfcdhook.dylib -o nfcdhooksigned.dylib
include $(THEOS_MAKE_PATH)/tweak.mk
