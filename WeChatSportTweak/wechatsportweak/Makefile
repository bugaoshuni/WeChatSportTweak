

ARCHS = arm64
export SDKVERSION=11.2
export THEOS_DEVICE_IP=localhost
export THEOS_DEVICE_PORT=2223
TARGET = iphone:latest:8.0


include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WeChatSportWeak
WeChatSportWeak_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
