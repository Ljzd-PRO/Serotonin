make
ldid -S../../launchdentitlements.plist -Cadhoc .theos/obj/debug/nfcdhook.dylib
/Users/ibarahime/ChOma/ct_bypass -i .theos/obj/debug/nfcdhook.dylib -r -o nfcdhooksigned.dylib