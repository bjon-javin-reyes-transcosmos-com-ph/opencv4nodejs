#include "videoCaptureProps.h"

using namespace cv;

void VideoCaptureProps::Init(v8::Local<v8::Object> target) {
	FF_SET_CV_CONSTANT(target, CAP_PROP_POS_MSEC);
	FF_SET_CV_CONSTANT(target, CAP_PROP_POS_FRAMES);
	FF_SET_CV_CONSTANT(target, CAP_PROP_POS_AVI_RATIO);
	FF_SET_CV_CONSTANT(target, CAP_PROP_FRAME_WIDTH);
	FF_SET_CV_CONSTANT(target, CAP_PROP_FRAME_HEIGHT);
	FF_SET_CV_CONSTANT(target, CAP_PROP_FPS);
	FF_SET_CV_CONSTANT(target, CAP_PROP_FOURCC);
	FF_SET_CV_CONSTANT(target, CAP_PROP_FRAME_COUNT);
	FF_SET_CV_CONSTANT(target, CAP_PROP_FORMAT);
	FF_SET_CV_CONSTANT(target, CAP_PROP_MODE);
	FF_SET_CV_CONSTANT(target, CAP_PROP_BRIGHTNESS);
	FF_SET_CV_CONSTANT(target, CAP_PROP_CONTRAST);
	FF_SET_CV_CONSTANT(target, CAP_PROP_SATURATION);
	FF_SET_CV_CONSTANT(target, CAP_PROP_HUE);
	FF_SET_CV_CONSTANT(target, CAP_PROP_GAIN);
	FF_SET_CV_CONSTANT(target, CAP_PROP_EXPOSURE);
	FF_SET_CV_CONSTANT(target, CAP_PROP_CONVERT_RGB);
	FF_SET_CV_CONSTANT(target, CAP_PROP_WHITE_BALANCE_BLUE_U);
	FF_SET_CV_CONSTANT(target, CAP_PROP_RECTIFICATION);
	FF_SET_CV_CONSTANT(target, CAP_PROP_MONOCHROME);
	FF_SET_CV_CONSTANT(target, CAP_PROP_SHARPNESS);
	FF_SET_CV_CONSTANT(target, CAP_PROP_AUTO_EXPOSURE);
	FF_SET_CV_CONSTANT(target, CAP_PROP_GAMMA);
	FF_SET_CV_CONSTANT(target, CAP_PROP_TEMPERATURE);
	FF_SET_CV_CONSTANT(target, CAP_PROP_TRIGGER);
	FF_SET_CV_CONSTANT(target, CAP_PROP_TRIGGER_DELAY);
	FF_SET_CV_CONSTANT(target, CAP_PROP_WHITE_BALANCE_RED_V);
	FF_SET_CV_CONSTANT(target, CAP_PROP_ZOOM);
	FF_SET_CV_CONSTANT(target, CAP_PROP_FOCUS);
	FF_SET_CV_CONSTANT(target, CAP_PROP_GUID);
	FF_SET_CV_CONSTANT(target, CAP_PROP_ISO_SPEED);
	FF_SET_CV_CONSTANT(target, CAP_PROP_BACKLIGHT);
	FF_SET_CV_CONSTANT(target, CAP_PROP_PAN);
	FF_SET_CV_CONSTANT(target, CAP_PROP_TILT);
	FF_SET_CV_CONSTANT(target, CAP_PROP_ROLL);
	FF_SET_CV_CONSTANT(target, CAP_PROP_IRIS);
	FF_SET_CV_CONSTANT(target, CAP_PROP_SETTINGS);
#if CV_VERSION_MINOR > 0
	FF_SET_CV_CONSTANT(target, CAP_PROP_BUFFERSIZE);
	FF_SET_CV_CONSTANT(target, CAP_PROP_AUTOFOCUS);
#endif
	FF_SET_CV_CONSTANT(target, CAP_MODE_BGR);
	FF_SET_CV_CONSTANT(target, CAP_MODE_RGB);
	FF_SET_CV_CONSTANT(target, CAP_MODE_GRAY);
	FF_SET_CV_CONSTANT(target, CAP_MODE_YUYV);

	FF_SET_CV_CONSTANT(target, CAP_ANY);
	FF_SET_CV_CONSTANT(target, CAP_VFW);
	FF_SET_CV_CONSTANT(target, CAP_V4L);
	FF_SET_CV_CONSTANT(target, CAP_V4L2);
	FF_SET_CV_CONSTANT(target, CAP_FIREWIRE);
	FF_SET_CV_CONSTANT(target, CAP_IEEE1394);
	FF_SET_CV_CONSTANT(target, CAP_DC1394);
	FF_SET_CV_CONSTANT(target, CAP_CMU1394);
	FF_SET_CV_CONSTANT(target, CAP_QT);
	FF_SET_CV_CONSTANT(target, CAP_UNICAP);
	FF_SET_CV_CONSTANT(target, CAP_DSHOW);
	FF_SET_CV_CONSTANT(target, CAP_PVAPI);
	FF_SET_CV_CONSTANT(target, CAP_OPENNI);
	FF_SET_CV_CONSTANT(target, CAP_OPENNI_ASUS);
	FF_SET_CV_CONSTANT(target, CAP_ANDROID);
	FF_SET_CV_CONSTANT(target, CAP_XIAPI);
	FF_SET_CV_CONSTANT(target, CAP_AVFOUNDATION);
	FF_SET_CV_CONSTANT(target, CAP_GIGANETIX);
	FF_SET_CV_CONSTANT(target, CAP_MSMF);
	FF_SET_CV_CONSTANT(target, CAP_WINRT);
	FF_SET_CV_CONSTANT(target, CAP_INTELPERC);
	FF_SET_CV_CONSTANT(target, CAP_OPENNI2);
	FF_SET_CV_CONSTANT(target, CAP_OPENNI2_ASUS);
	FF_SET_CV_CONSTANT(target, CAP_GPHOTO2);
#if CV_VERSION_MINOR > 0
	FF_SET_CV_CONSTANT(target, CAP_GSTREAMER);
	FF_SET_CV_CONSTANT(target, CAP_FFMPEG);
	FF_SET_CV_CONSTANT(target, CAP_IMAGES);
#endif
#if CV_VERSION_MINOR > 1
	FF_SET_CV_CONSTANT(target, CAP_ARAVIS);
#endif

	FF_SET_CV_CONSTANT(target, VIDEOWRITER_PROP_QUALITY);
	FF_SET_CV_CONSTANT(target, VIDEOWRITER_PROP_FRAMEBYTES);
	FF_SET_CV_CONSTANT(target, VIDEOWRITER_PROP_NSTRIPES);
}
