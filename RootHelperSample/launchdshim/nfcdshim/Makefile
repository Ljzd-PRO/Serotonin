TARGET := iphone:clang:latest
ARCHS = arm64

include $(THEOS)/makefiles/common.mk

TOOL_NAME = nfcdshim

nfcdshim_FILES = main.c
nfcdshim_CFLAGS = -fobjc-arc -isystem
nfcdshim_LDFLAGS = -L./ -lbsm
nfcdshim_CODESIGN_FLAGS = -SNfcdEnts.plist
#springboardshim_PRIVATE_FRAMEWORKS = SpringBoard SpringBoardServices Foundation // adding SpringBoard to privateframeworks here will add it into load command before the tweak dylib is loaded, which causes the platform check to fail - thanks DuyKhanhTran

after-package::
	echo "[*] Signing nfcdshim"
	ct_bypass -i .theos/obj/debug/arm64/nfcdshim -r -o nfcdshimsigned
	echo "[*] Injecting nfcdhook to nfcdshim"
	insert_dylib @loader_path/nfcdhook.dylib nfcdshimsigned nfcdshimsignedinjected --all-yes

include $(THEOS_MAKE_PATH)/tool.mk
