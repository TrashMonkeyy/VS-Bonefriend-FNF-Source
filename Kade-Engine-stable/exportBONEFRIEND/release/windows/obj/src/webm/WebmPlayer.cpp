#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_webm_VpxDecoder
#include <webm/VpxDecoder.h>
#endif
#ifndef INCLUDED_webm_WebmEvent
#include <webm/WebmEvent.h>
#endif
#ifndef INCLUDED_webm_WebmIo
#include <webm/WebmIo.h>
#endif
#ifndef INCLUDED_webm_WebmPlayer
#include <webm/WebmPlayer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3304422c1571237f_18_new,"webm.WebmPlayer","new",0x95ba1321,"webm.WebmPlayer.new","webm/WebmPlayer.hx",18,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_51_fuck,"webm.WebmPlayer","fuck",0x67d907d6,"webm.WebmPlayer.fuck","webm/WebmPlayer.hx",51,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_82_generateSound,"webm.WebmPlayer","generateSound",0x3784fb5b,"webm.WebmPlayer.generateSound","webm/WebmPlayer.hx",82,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_112_getElapsedTime,"webm.WebmPlayer","getElapsedTime",0x725a5452,"webm.WebmPlayer.getElapsedTime","webm/WebmPlayer.hx",112,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_117_elapsedTimeDiff,"webm.WebmPlayer","elapsedTimeDiff",0x4b09af4f,"webm.WebmPlayer.elapsedTimeDiff","webm/WebmPlayer.hx",117,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_121_removePause,"webm.WebmPlayer","removePause",0x6c041fd3,"webm.WebmPlayer.removePause","webm/WebmPlayer.hx",121,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_127_restart,"webm.WebmPlayer","restart",0x3daaff10,"webm.WebmPlayer.restart","webm/WebmPlayer.hx",127,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_137_changePlaying,"webm.WebmPlayer","changePlaying",0xfb2851df,"webm.WebmPlayer.changePlaying","webm/WebmPlayer.hx",137,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_157_play,"webm.WebmPlayer","play",0x6e6e5413,"webm.WebmPlayer.play","webm/WebmPlayer.hx",157,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_176_stop,"webm.WebmPlayer","stop",0x70701621,"webm.WebmPlayer.stop","webm/WebmPlayer.hx",176,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_190_onSpriteEnterFrame,"webm.WebmPlayer","onSpriteEnterFrame",0xecb0a5f8,"webm.WebmPlayer.onSpriteEnterFrame","webm/WebmPlayer.hx",190,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_197_stepVideoFrame,"webm.WebmPlayer","stepVideoFrame",0x5ddbdafd,"webm.WebmPlayer.stepVideoFrame","webm/WebmPlayer.hx",197,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_221_decodeVideoFrame,"webm.WebmPlayer","decodeVideoFrame",0x7421f51f,"webm.WebmPlayer.decodeVideoFrame","webm/WebmPlayer.hx",221,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_243_outputAudioFrame,"webm.WebmPlayer","outputAudioFrame",0x347a3e77,"webm.WebmPlayer.outputAudioFrame","webm/WebmPlayer.hx",243,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_251_dispose,"webm.WebmPlayer","dispose",0x8e51b7e0,"webm.WebmPlayer.dispose","webm/WebmPlayer.hx",251,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_20_boot,"webm.WebmPlayer","boot",0x652faa51,"webm.WebmPlayer.boot","webm/WebmPlayer.hx",20,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_22_boot,"webm.WebmPlayer","boot",0x652faa51,"webm.WebmPlayer.boot","webm/WebmPlayer.hx",22,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_273_boot,"webm.WebmPlayer","boot",0x652faa51,"webm.WebmPlayer.boot","webm/WebmPlayer.hx",273,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_274_boot,"webm.WebmPlayer","boot",0x652faa51,"webm.WebmPlayer.boot","webm/WebmPlayer.hx",274,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_275_boot,"webm.WebmPlayer","boot",0x652faa51,"webm.WebmPlayer.boot","webm/WebmPlayer.hx",275,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_276_boot,"webm.WebmPlayer","boot",0x652faa51,"webm.WebmPlayer.boot","webm/WebmPlayer.hx",276,0x2055bece)
HX_LOCAL_STACK_FRAME(_hx_pos_3304422c1571237f_277_boot,"webm.WebmPlayer","boot",0x652faa51,"webm.WebmPlayer.boot","webm/WebmPlayer.hx",277,0x2055bece)
namespace webm{

void WebmPlayer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_18_new)
HXLINE(  43)		this->wasHitOnce = false;
HXLINE(  42)		this->fkingElapsed = ((Float)0.0);
HXLINE(  41)		this->lastDecodedVideoFrame2 = ((Float)0.0);
HXLINE(  40)		this->renderedCount2 = 0;
HXLINE(  39)		this->renderedCount = 0;
HXLINE(  38)		this->playing = false;
HXLINE(  37)		this->lastRequestedVideoFrame = ((Float)0.0);
HXLINE(  36)		this->lastDecodedVideoFrame = ((Float)0.0);
HXLINE(  35)		this->startTime = ((Float)0.0);
HXLINE(  33)		this->skippedSteps = 0;
HXLINE(  47)		super::__construct(null(),null(),null());
            	}

Dynamic WebmPlayer_obj::__CreateEmpty() { return new WebmPlayer_obj; }

void *WebmPlayer_obj::_hx_vtable = 0;

Dynamic WebmPlayer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebmPlayer_obj > _hx_result = new WebmPlayer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WebmPlayer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e6b1e13) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x1e6b1e13;
		}
	} else {
		return inClassId==(int)0x4cc42801 || inClassId==(int)0x6b353933;
	}
}

void WebmPlayer_obj::fuck( ::webm::WebmIo io,::hx::Null< bool >  __o_soundEnabled){
            		bool soundEnabled = __o_soundEnabled.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_3304422c1571237f_51_fuck)
HXLINE(  52)		this->wasHitOnce = false;
HXLINE(  53)		this->soundEnabled = soundEnabled;
HXLINE(  55)		if (::hx::IsNull( ::webm::WebmPlayer_obj::BLANK_BYTES )) {
HXLINE(  57)			 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  57)			::webm::WebmPlayer_obj::BLANK_BYTES = this1;
HXLINE(  58)			{
HXLINE(  58)				int _g = 0;
HXDLIN(  58)				while((_g < 32768)){
HXLINE(  58)					_g = (_g + 1);
HXDLIN(  58)					int i = (_g - 1);
HXLINE(  59)					::webm::WebmPlayer_obj::BLANK_BYTES->writeByte(0);
            				}
            			}
            		}
HXLINE(  62)		this->pixelSnapping = 1;
HXLINE(  63)		this->smoothing = true;
HXLINE(  65)		this->vpxDecoder =  ::webm::VpxDecoder_obj::__alloc( HX_CTX );
HXLINE(  67)		this->webmDecoder = ::webm::WebmPlayer_obj::hx_webm_decoder_create(io->io,soundEnabled);
HXLINE(  69)		::Array< Float > info = ( (::Array< Float >)(::webm::WebmPlayer_obj::hx_webm_decoder_get_info(this->webmDecoder)) );
HXLINE(  70)		int _hx_tmp = ::Std_obj::_hx_int(info->__get(0));
HXDLIN(  70)		this->set_bitmapData( ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int(info->__get(1)),false,0));
HXLINE(  71)		this->frameRate = info->__get(2);
HXLINE(  72)		this->duration = info->__get(3);
HXLINE(  74)		if (soundEnabled) {
HXLINE(  76)			 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  76)			this->outputSound = this1;
HXLINE(  77)			this->outputSound->_hx___endian = 1;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(WebmPlayer_obj,fuck,(void))

void WebmPlayer_obj::generateSound( ::openfl::events::SampleDataEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_3304422c1571237f_82_generateSound)
HXLINE(  83)		if (::hx::IsNull( e->data )) {
HXLINE(  84)			 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  84)			e->data = this1;
            		}
HXLINE(  86)		int totalOutputLength = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->outputSound);
HXLINE(  87)		int _hx_int = totalOutputLength;
HXDLIN(  87)		Float outputBytesToWrite;
HXDLIN(  87)		if ((_hx_int < 0)) {
HXLINE(  87)			outputBytesToWrite = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  87)			outputBytesToWrite = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  87)		int outputBytesToWrite1 = ::Std_obj::_hx_int(::Math_obj::min(outputBytesToWrite,( (Float)(32768) )));
HXLINE(  88)		int blankBytesToWrite = (32768 - outputBytesToWrite1);
HXLINE(  90)		if ((blankBytesToWrite > 0)) {
HXLINE(  91)			e->data->writeBytes(::webm::WebmPlayer_obj::BLANK_BYTES,0,blankBytesToWrite);
            		}
HXLINE(  93)		if ((outputBytesToWrite1 > 0)) {
HXLINE(  95)			e->data->writeBytes(this->outputSound,0,outputBytesToWrite1);
HXLINE(  97)			bool aNeg = (totalOutputLength < 0);
HXDLIN(  97)			bool bNeg = (outputBytesToWrite1 < 0);
HXDLIN(  97)			bool _hx_tmp;
HXDLIN(  97)			if ((aNeg != bNeg)) {
HXLINE(  97)				_hx_tmp = aNeg;
            			}
            			else {
HXLINE(  97)				_hx_tmp = (totalOutputLength > outputBytesToWrite1);
            			}
HXDLIN(  97)			if (_hx_tmp) {
HXLINE(  99)				 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  99)				 ::openfl::utils::ByteArrayData remainingBytes = this1;
HXLINE( 100)				remainingBytes->writeBytes(this->outputSound,outputBytesToWrite1,0);
HXLINE( 101)				this->outputSound = remainingBytes;
            			}
            			else {
HXLINE( 105)				this->outputSound->clear();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmPlayer_obj,generateSound,(void))

Float WebmPlayer_obj::getElapsedTime(){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_112_getElapsedTime)
HXDLIN( 112)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 112)		Float _hx_tmp;
HXDLIN( 112)		if ((timer > 0)) {
HXDLIN( 112)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXDLIN( 112)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN( 112)		return (_hx_tmp - this->startTime);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmPlayer_obj,getElapsedTime,return )

Float WebmPlayer_obj::elapsedTimeDiff(){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_117_elapsedTimeDiff)
HXDLIN( 117)		Float _hx_tmp = this->getElapsedTime();
HXDLIN( 117)		return (_hx_tmp - this->fkingElapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmPlayer_obj,elapsedTimeDiff,return )

void WebmPlayer_obj::removePause(){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_121_removePause)
HXLINE( 122)		this->lastDecodedVideoFrame2 = ((Float)0.0);
HXLINE( 123)		this->renderedCount2 = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmPlayer_obj,removePause,(void))

void WebmPlayer_obj::restart(){
            	HX_GC_STACKFRAME(&_hx_pos_3304422c1571237f_127_restart)
HXLINE( 128)		this->stop(true);
HXLINE( 129)		this->renderedCount = 0;
HXLINE( 130)		this->lastDecodedVideoFrame = ( (Float)(0) );
HXLINE( 131)		::webm::WebmPlayer_obj::hx_webm_decoder_restart(this->webmDecoder);
HXLINE( 132)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("restart",cf,c7,a5,6a),null(),null()));
HXLINE( 133)		this->play();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmPlayer_obj,restart,(void))

void WebmPlayer_obj::changePlaying(bool isPlay){
            	HX_GC_STACKFRAME(&_hx_pos_3304422c1571237f_137_changePlaying)
HXLINE( 138)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("restart",cf,c7,a5,6a),null(),null()));
HXLINE( 139)		if (!(isPlay)) {
HXLINE( 141)			this->playing = false;
HXLINE( 142)			this->renderedCount2 = this->renderedCount;
HXLINE( 143)			this->lastDecodedVideoFrame2 = this->lastDecodedVideoFrame;
HXLINE( 144)			this->renderedCount = 0;
HXLINE( 145)			this->lastDecodedVideoFrame = ( (Float)(0) );
            		}
            		else {
HXLINE( 147)			this->renderedCount = this->renderedCount2;
HXLINE( 148)			this->lastDecodedVideoFrame = this->lastDecodedVideoFrame2;
HXLINE( 149)			 ::webm::WebmPlayer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 149)			Float _hx_tmp1 = _hx_tmp->startTime;
HXDLIN( 149)			_hx_tmp->startTime = (_hx_tmp1 + this->elapsedTimeDiff());
HXLINE( 150)			this->playing = true;
HXLINE( 151)			this->dispatchEvent( ::webm::WebmEvent_obj::__alloc( HX_CTX ,HX_("play",f4,2d,5a,4a),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmPlayer_obj,changePlaying,(void))

void WebmPlayer_obj::play(){
            	HX_GC_STACKFRAME(&_hx_pos_3304422c1571237f_157_play)
HXDLIN( 157)		if (!(this->playing)) {
HXLINE( 159)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 159)			Float _hx_tmp;
HXDLIN( 159)			if ((timer > 0)) {
HXLINE( 159)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 159)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 159)			this->startTime = _hx_tmp;
HXLINE( 161)			if (this->soundEnabled) {
HXLINE( 163)				this->sound =  ::openfl::media::Sound_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 164)				this->sound->addEventListener(HX_("sampleData",74,3f,0b,5e),this->generateSound_dyn(),null(),null(),null());
HXLINE( 165)				this->soundChannel = this->sound->play(null(),null(),null());
            			}
HXLINE( 168)			this->addEventListener(HX_("enterFrame",f5,03,50,02),this->onSpriteEnterFrame_dyn(),null(),null(),null());
HXLINE( 169)			this->playing = true;
HXLINE( 170)			this->dispatchEvent( ::webm::WebmEvent_obj::__alloc( HX_CTX ,HX_("play",f4,2d,5a,4a),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmPlayer_obj,play,(void))

void WebmPlayer_obj::stop( ::Dynamic __o_pRestart){
            		 ::Dynamic pRestart = __o_pRestart;
            		if (::hx::IsNull(__o_pRestart)) pRestart = false;
            	HX_GC_STACKFRAME(&_hx_pos_3304422c1571237f_176_stop)
HXDLIN( 176)		if (this->playing) {
HXLINE( 178)			if (this->soundEnabled) {
HXLINE( 180)				this->sound->removeEventListener(HX_("sampleData",74,3f,0b,5e),this->generateSound_dyn(),null());
HXLINE( 181)				this->sound->close();
            			}
HXLINE( 183)			this->playing = false;
HXLINE( 184)			if (!(( (bool)(pRestart) ))) {
HXLINE( 184)				this->dispatchEvent( ::webm::WebmEvent_obj::__alloc( HX_CTX ,HX_("stop",02,f0,5b,4c),null(),null()));
            			}
HXLINE( 185)			this->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmPlayer_obj,stop,(void))

void WebmPlayer_obj::onSpriteEnterFrame( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_190_onSpriteEnterFrame)
HXLINE( 191)		this->skippedSteps = 0;
HXLINE( 192)		this->stepVideoFrame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmPlayer_obj,onSpriteEnterFrame,(void))

void WebmPlayer_obj::stepVideoFrame(){
            	HX_GC_STACKFRAME(&_hx_pos_3304422c1571237f_197_stepVideoFrame)
HXDLIN( 197)		if (this->playing) {
HXLINE( 199)			this->wasHitOnce = true;
HXLINE( 200)			int startRenderedCount = this->renderedCount;
HXLINE( 201)			Float elapsedTime = this->getElapsedTime();
HXLINE( 202)			this->fkingElapsed = elapsedTime;
HXLINE( 204)			while(true){
HXLINE( 204)				bool _hx_tmp;
HXDLIN( 204)				if (( (bool)(::webm::WebmPlayer_obj::hx_webm_decoder_has_more(this->webmDecoder)) )) {
HXLINE( 204)					_hx_tmp = (this->lastDecodedVideoFrame < elapsedTime);
            				}
            				else {
HXLINE( 204)					_hx_tmp = false;
            				}
HXDLIN( 204)				if (!(_hx_tmp)) {
HXLINE( 204)					goto _hx_goto_12;
            				}
HXLINE( 206)				this->lastRequestedVideoFrame = elapsedTime;
HXLINE( 207)				::webm::WebmPlayer_obj::hx_webm_decoder_step(this->webmDecoder,this->decodeVideoFrame_dyn(),this->outputAudioFrame_dyn());
HXLINE( 208)				if ((this->renderedCount > startRenderedCount)) {
HXLINE( 208)					goto _hx_goto_12;
            				}
            			}
            			_hx_goto_12:;
HXLINE( 211)			if (!(( (bool)(::webm::WebmPlayer_obj::hx_webm_decoder_has_more(this->webmDecoder)) ))) {
HXLINE( 213)				this->dispatchEvent( ::webm::WebmEvent_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
HXLINE( 214)				this->stop(null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmPlayer_obj,stepVideoFrame,(void))

void WebmPlayer_obj::decodeVideoFrame(Float time,::Array< unsigned char > data){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_221_decodeVideoFrame)
HXDLIN( 221)		if (this->playing) {
HXLINE( 223)			this->lastDecodedVideoFrame = time;
HXLINE( 224)			++this->renderedCount;
HXLINE( 226)			this->vpxDecoder->decode(data);
HXLINE( 228)			bool _hx_tmp;
HXDLIN( 228)			bool _hx_tmp1;
HXDLIN( 228)			if ((this->skippedSteps < ::webm::WebmPlayer_obj::SKIP_STEP_LIMIT)) {
HXLINE( 228)				_hx_tmp1 = this->playing;
            			}
            			else {
HXLINE( 228)				_hx_tmp1 = false;
            			}
HXDLIN( 228)			if (_hx_tmp1) {
HXLINE( 228)				_hx_tmp = (this->lastDecodedVideoFrame < this->lastRequestedVideoFrame);
            			}
            			else {
HXLINE( 228)				_hx_tmp = false;
            			}
HXDLIN( 228)			if (_hx_tmp) {
HXLINE( 230)				this->skippedSteps++;
HXLINE( 231)				this->stepVideoFrame();
            			}
            			else {
HXLINE( 235)				 ::webm::VpxDecoder _hx_tmp = this->vpxDecoder;
HXDLIN( 235)				_hx_tmp->getAndRenderFrame(this->get_bitmapData());
            			}
            		}
            		else {
HXLINE( 238)			 ::webm::VpxDecoder _hx_tmp = this->vpxDecoder;
HXDLIN( 238)			_hx_tmp->getAndRenderFrame(this->get_bitmapData());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(WebmPlayer_obj,decodeVideoFrame,(void))

void WebmPlayer_obj::outputAudioFrame(Float time,::Array< unsigned char > data){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_243_outputAudioFrame)
HXLINE( 244)		if (!(this->soundEnabled)) {
HXLINE( 244)			return;
            		}
HXLINE( 245)		this->outputSound->position = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->outputSound);
HXLINE( 246)		{
HXLINE( 246)			 ::openfl::utils::ByteArrayData this1 = this->outputSound;
HXDLIN( 246)			this1->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::io::Bytes_obj::ofData(data)),0,0);
            		}
HXLINE( 247)		this->outputSound->position = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(WebmPlayer_obj,outputAudioFrame,(void))

void WebmPlayer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_251_dispose)
HXLINE( 252)		this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->onSpriteEnterFrame_dyn(),null());
HXLINE( 254)		if (::hx::IsNotNull( this->sound )) {
HXLINE( 256)			this->sound->removeEventListener(HX_("sampleData",74,3f,0b,5e),this->generateSound_dyn(),null());
HXLINE( 257)			this->sound = null();
            		}
HXLINE( 260)		if (::hx::IsNotNull( this->soundChannel )) {
HXLINE( 262)			this->soundChannel->stop();
HXLINE( 263)			this->soundChannel = null();
            		}
HXLINE( 266)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 268)			this->get_bitmapData()->dispose();
HXLINE( 269)			this->set_bitmapData(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmPlayer_obj,dispose,(void))

int WebmPlayer_obj::BYTES_PER_SAMPLE;

 ::openfl::utils::ByteArrayData WebmPlayer_obj::BLANK_BYTES;

int WebmPlayer_obj::SKIP_STEP_LIMIT;

 ::Dynamic WebmPlayer_obj::hx_webm_decoder_create;

 ::Dynamic WebmPlayer_obj::hx_webm_decoder_get_info;

 ::Dynamic WebmPlayer_obj::hx_webm_decoder_has_more;

 ::Dynamic WebmPlayer_obj::hx_webm_decoder_step;

 ::Dynamic WebmPlayer_obj::hx_webm_decoder_restart;


::hx::ObjectPtr< WebmPlayer_obj > WebmPlayer_obj::__new() {
	::hx::ObjectPtr< WebmPlayer_obj > __this = new WebmPlayer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WebmPlayer_obj > WebmPlayer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WebmPlayer_obj *__this = (WebmPlayer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebmPlayer_obj), true, "webm.WebmPlayer"));
	*(void **)__this = WebmPlayer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WebmPlayer_obj::WebmPlayer_obj()
{
}

void WebmPlayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebmPlayer);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(vpxDecoder,"vpxDecoder");
	HX_MARK_MEMBER_NAME(webmDecoder,"webmDecoder");
	HX_MARK_MEMBER_NAME(outputSound,"outputSound");
	HX_MARK_MEMBER_NAME(soundChannel,"soundChannel");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(soundEnabled,"soundEnabled");
	HX_MARK_MEMBER_NAME(skippedSteps,"skippedSteps");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(lastDecodedVideoFrame,"lastDecodedVideoFrame");
	HX_MARK_MEMBER_NAME(lastRequestedVideoFrame,"lastRequestedVideoFrame");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(renderedCount,"renderedCount");
	HX_MARK_MEMBER_NAME(renderedCount2,"renderedCount2");
	HX_MARK_MEMBER_NAME(lastDecodedVideoFrame2,"lastDecodedVideoFrame2");
	HX_MARK_MEMBER_NAME(fkingElapsed,"fkingElapsed");
	HX_MARK_MEMBER_NAME(wasHitOnce,"wasHitOnce");
	 ::openfl::display::Bitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WebmPlayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(vpxDecoder,"vpxDecoder");
	HX_VISIT_MEMBER_NAME(webmDecoder,"webmDecoder");
	HX_VISIT_MEMBER_NAME(outputSound,"outputSound");
	HX_VISIT_MEMBER_NAME(soundChannel,"soundChannel");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(soundEnabled,"soundEnabled");
	HX_VISIT_MEMBER_NAME(skippedSteps,"skippedSteps");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(lastDecodedVideoFrame,"lastDecodedVideoFrame");
	HX_VISIT_MEMBER_NAME(lastRequestedVideoFrame,"lastRequestedVideoFrame");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(renderedCount,"renderedCount");
	HX_VISIT_MEMBER_NAME(renderedCount2,"renderedCount2");
	HX_VISIT_MEMBER_NAME(lastDecodedVideoFrame2,"lastDecodedVideoFrame2");
	HX_VISIT_MEMBER_NAME(fkingElapsed,"fkingElapsed");
	HX_VISIT_MEMBER_NAME(wasHitOnce,"wasHitOnce");
	 ::openfl::display::Bitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WebmPlayer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fuck") ) { return ::hx::Val( fuck_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return ::hx::Val( playing ); }
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vpxDecoder") ) { return ::hx::Val( vpxDecoder ); }
		if (HX_FIELD_EQ(inName,"wasHitOnce") ) { return ::hx::Val( wasHitOnce ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"webmDecoder") ) { return ::hx::Val( webmDecoder ); }
		if (HX_FIELD_EQ(inName,"outputSound") ) { return ::hx::Val( outputSound ); }
		if (HX_FIELD_EQ(inName,"removePause") ) { return ::hx::Val( removePause_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"soundChannel") ) { return ::hx::Val( soundChannel ); }
		if (HX_FIELD_EQ(inName,"soundEnabled") ) { return ::hx::Val( soundEnabled ); }
		if (HX_FIELD_EQ(inName,"skippedSteps") ) { return ::hx::Val( skippedSteps ); }
		if (HX_FIELD_EQ(inName,"fkingElapsed") ) { return ::hx::Val( fkingElapsed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderedCount") ) { return ::hx::Val( renderedCount ); }
		if (HX_FIELD_EQ(inName,"generateSound") ) { return ::hx::Val( generateSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"changePlaying") ) { return ::hx::Val( changePlaying_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderedCount2") ) { return ::hx::Val( renderedCount2 ); }
		if (HX_FIELD_EQ(inName,"getElapsedTime") ) { return ::hx::Val( getElapsedTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepVideoFrame") ) { return ::hx::Val( stepVideoFrame_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elapsedTimeDiff") ) { return ::hx::Val( elapsedTimeDiff_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"decodeVideoFrame") ) { return ::hx::Val( decodeVideoFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"outputAudioFrame") ) { return ::hx::Val( outputAudioFrame_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onSpriteEnterFrame") ) { return ::hx::Val( onSpriteEnterFrame_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lastDecodedVideoFrame") ) { return ::hx::Val( lastDecodedVideoFrame ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lastDecodedVideoFrame2") ) { return ::hx::Val( lastDecodedVideoFrame2 ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lastRequestedVideoFrame") ) { return ::hx::Val( lastRequestedVideoFrame ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WebmPlayer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"BLANK_BYTES") ) { outValue = ( BLANK_BYTES ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SKIP_STEP_LIMIT") ) { outValue = ( SKIP_STEP_LIMIT ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_step") ) { outValue = ( hx_webm_decoder_step ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_create") ) { outValue = ( hx_webm_decoder_create ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_restart") ) { outValue = ( hx_webm_decoder_restart ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_get_info") ) { outValue = ( hx_webm_decoder_get_info ); return true; }
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_has_more") ) { outValue = ( hx_webm_decoder_has_more ); return true; }
	}
	return false;
}

::hx::Val WebmPlayer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vpxDecoder") ) { vpxDecoder=inValue.Cast<  ::webm::VpxDecoder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasHitOnce") ) { wasHitOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"webmDecoder") ) { webmDecoder=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outputSound") ) { outputSound=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"soundChannel") ) { soundChannel=inValue.Cast<  ::openfl::media::SoundChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundEnabled") ) { soundEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedSteps") ) { skippedSteps=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fkingElapsed") ) { fkingElapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderedCount") ) { renderedCount=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderedCount2") ) { renderedCount2=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lastDecodedVideoFrame") ) { lastDecodedVideoFrame=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lastDecodedVideoFrame2") ) { lastDecodedVideoFrame2=inValue.Cast< Float >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lastRequestedVideoFrame") ) { lastRequestedVideoFrame=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WebmPlayer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"BLANK_BYTES") ) { BLANK_BYTES=ioValue.Cast<  ::openfl::utils::ByteArrayData >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SKIP_STEP_LIMIT") ) { SKIP_STEP_LIMIT=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_step") ) { hx_webm_decoder_step=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_create") ) { hx_webm_decoder_create=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_restart") ) { hx_webm_decoder_restart=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_get_info") ) { hx_webm_decoder_get_info=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"hx_webm_decoder_has_more") ) { hx_webm_decoder_has_more=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void WebmPlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("vpxDecoder",26,03,ac,73));
	outFields->push(HX_("webmDecoder",2b,43,bf,97));
	outFields->push(HX_("outputSound",0e,ea,9d,d4));
	outFields->push(HX_("soundChannel",b4,63,0a,e1));
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("soundEnabled",72,67,69,92));
	outFields->push(HX_("skippedSteps",d7,f5,13,0f));
	outFields->push(HX_("startTime",8f,45,f0,05));
	outFields->push(HX_("lastDecodedVideoFrame",92,c9,6f,1f));
	outFields->push(HX_("lastRequestedVideoFrame",0a,f4,b6,59));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("renderedCount",5a,ef,d4,6f));
	outFields->push(HX_("renderedCount2",98,7f,7c,6a));
	outFields->push(HX_("lastDecodedVideoFrame2",60,96,60,62));
	outFields->push(HX_("fkingElapsed",ff,74,e0,1c));
	outFields->push(HX_("wasHitOnce",4b,03,49,ae));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WebmPlayer_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(WebmPlayer_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsFloat,(int)offsetof(WebmPlayer_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsObject /*  ::webm::VpxDecoder */ ,(int)offsetof(WebmPlayer_obj,vpxDecoder),HX_("vpxDecoder",26,03,ac,73)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(WebmPlayer_obj,webmDecoder),HX_("webmDecoder",2b,43,bf,97)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(WebmPlayer_obj,outputSound),HX_("outputSound",0e,ea,9d,d4)},
	{::hx::fsObject /*  ::openfl::media::SoundChannel */ ,(int)offsetof(WebmPlayer_obj,soundChannel),HX_("soundChannel",b4,63,0a,e1)},
	{::hx::fsObject /*  ::openfl::media::Sound */ ,(int)offsetof(WebmPlayer_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsBool,(int)offsetof(WebmPlayer_obj,soundEnabled),HX_("soundEnabled",72,67,69,92)},
	{::hx::fsInt,(int)offsetof(WebmPlayer_obj,skippedSteps),HX_("skippedSteps",d7,f5,13,0f)},
	{::hx::fsFloat,(int)offsetof(WebmPlayer_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{::hx::fsFloat,(int)offsetof(WebmPlayer_obj,lastDecodedVideoFrame),HX_("lastDecodedVideoFrame",92,c9,6f,1f)},
	{::hx::fsFloat,(int)offsetof(WebmPlayer_obj,lastRequestedVideoFrame),HX_("lastRequestedVideoFrame",0a,f4,b6,59)},
	{::hx::fsBool,(int)offsetof(WebmPlayer_obj,playing),HX_("playing",6e,0f,18,8a)},
	{::hx::fsInt,(int)offsetof(WebmPlayer_obj,renderedCount),HX_("renderedCount",5a,ef,d4,6f)},
	{::hx::fsInt,(int)offsetof(WebmPlayer_obj,renderedCount2),HX_("renderedCount2",98,7f,7c,6a)},
	{::hx::fsFloat,(int)offsetof(WebmPlayer_obj,lastDecodedVideoFrame2),HX_("lastDecodedVideoFrame2",60,96,60,62)},
	{::hx::fsFloat,(int)offsetof(WebmPlayer_obj,fkingElapsed),HX_("fkingElapsed",ff,74,e0,1c)},
	{::hx::fsBool,(int)offsetof(WebmPlayer_obj,wasHitOnce),HX_("wasHitOnce",4b,03,49,ae)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WebmPlayer_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &WebmPlayer_obj::BYTES_PER_SAMPLE,HX_("BYTES_PER_SAMPLE",60,19,04,7a)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(void *) &WebmPlayer_obj::BLANK_BYTES,HX_("BLANK_BYTES",c0,fd,54,b2)},
	{::hx::fsInt,(void *) &WebmPlayer_obj::SKIP_STEP_LIMIT,HX_("SKIP_STEP_LIMIT",a8,df,1b,80)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebmPlayer_obj::hx_webm_decoder_create,HX_("hx_webm_decoder_create",0e,b7,a9,73)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebmPlayer_obj::hx_webm_decoder_get_info,HX_("hx_webm_decoder_get_info",89,ec,51,94)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebmPlayer_obj::hx_webm_decoder_has_more,HX_("hx_webm_decoder_has_more",6c,ce,78,c3)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebmPlayer_obj::hx_webm_decoder_step,HX_("hx_webm_decoder_step",de,ae,c7,bb)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebmPlayer_obj::hx_webm_decoder_restart,HX_("hx_webm_decoder_restart",7d,87,11,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WebmPlayer_obj_sMemberFields[] = {
	HX_("frameRate",ad,11,25,39),
	HX_("duration",54,0f,8e,14),
	HX_("vpxDecoder",26,03,ac,73),
	HX_("webmDecoder",2b,43,bf,97),
	HX_("outputSound",0e,ea,9d,d4),
	HX_("soundChannel",b4,63,0a,e1),
	HX_("sound",cf,8c,cc,80),
	HX_("soundEnabled",72,67,69,92),
	HX_("skippedSteps",d7,f5,13,0f),
	HX_("startTime",8f,45,f0,05),
	HX_("lastDecodedVideoFrame",92,c9,6f,1f),
	HX_("lastRequestedVideoFrame",0a,f4,b6,59),
	HX_("playing",6e,0f,18,8a),
	HX_("renderedCount",5a,ef,d4,6f),
	HX_("renderedCount2",98,7f,7c,6a),
	HX_("lastDecodedVideoFrame2",60,96,60,62),
	HX_("fkingElapsed",ff,74,e0,1c),
	HX_("wasHitOnce",4b,03,49,ae),
	HX_("fuck",b7,e1,c4,43),
	HX_("generateSound",5a,5d,49,27),
	HX_("getElapsedTime",73,b1,6b,4e),
	HX_("elapsedTimeDiff",0e,cf,29,fe),
	HX_("removePause",12,b4,8b,bb),
	HX_("restart",cf,c7,a5,6a),
	HX_("changePlaying",de,b3,ec,ea),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("onSpriteEnterFrame",99,a7,6d,e9),
	HX_("stepVideoFrame",1e,38,ed,39),
	HX_("decodeVideoFrame",80,9c,1d,7d),
	HX_("outputAudioFrame",d8,e5,75,3d),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void WebmPlayer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::BYTES_PER_SAMPLE,"BYTES_PER_SAMPLE");
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::BLANK_BYTES,"BLANK_BYTES");
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::SKIP_STEP_LIMIT,"SKIP_STEP_LIMIT");
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_create,"hx_webm_decoder_create");
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_get_info,"hx_webm_decoder_get_info");
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_has_more,"hx_webm_decoder_has_more");
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_step,"hx_webm_decoder_step");
	HX_MARK_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_restart,"hx_webm_decoder_restart");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WebmPlayer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::BYTES_PER_SAMPLE,"BYTES_PER_SAMPLE");
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::BLANK_BYTES,"BLANK_BYTES");
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::SKIP_STEP_LIMIT,"SKIP_STEP_LIMIT");
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_create,"hx_webm_decoder_create");
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_get_info,"hx_webm_decoder_get_info");
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_has_more,"hx_webm_decoder_has_more");
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_step,"hx_webm_decoder_step");
	HX_VISIT_MEMBER_NAME(WebmPlayer_obj::hx_webm_decoder_restart,"hx_webm_decoder_restart");
};

#endif

::hx::Class WebmPlayer_obj::__mClass;

static ::String WebmPlayer_obj_sStaticFields[] = {
	HX_("BYTES_PER_SAMPLE",60,19,04,7a),
	HX_("BLANK_BYTES",c0,fd,54,b2),
	HX_("SKIP_STEP_LIMIT",a8,df,1b,80),
	HX_("hx_webm_decoder_create",0e,b7,a9,73),
	HX_("hx_webm_decoder_get_info",89,ec,51,94),
	HX_("hx_webm_decoder_has_more",6c,ce,78,c3),
	HX_("hx_webm_decoder_step",de,ae,c7,bb),
	HX_("hx_webm_decoder_restart",7d,87,11,1a),
	::String(null())
};

void WebmPlayer_obj::__register()
{
	WebmPlayer_obj _hx_dummy;
	WebmPlayer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("webm.WebmPlayer",af,ee,4f,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WebmPlayer_obj::__GetStatic;
	__mClass->mSetStaticField = &WebmPlayer_obj::__SetStatic;
	__mClass->mMarkFunc = WebmPlayer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WebmPlayer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WebmPlayer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WebmPlayer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WebmPlayer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebmPlayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebmPlayer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WebmPlayer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_20_boot)
HXDLIN(  20)		BYTES_PER_SAMPLE = 32768;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_22_boot)
HXDLIN(  22)		SKIP_STEP_LIMIT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_273_boot)
HXDLIN( 273)		hx_webm_decoder_create = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_webm_decoder_create",0e,b7,a9,73),2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_274_boot)
HXDLIN( 274)		hx_webm_decoder_get_info = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_webm_decoder_get_info",89,ec,51,94),1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_275_boot)
HXDLIN( 275)		hx_webm_decoder_has_more = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_webm_decoder_has_more",6c,ce,78,c3),1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_276_boot)
HXDLIN( 276)		hx_webm_decoder_step = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_webm_decoder_step",de,ae,c7,bb),3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3304422c1571237f_277_boot)
HXDLIN( 277)		hx_webm_decoder_restart = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_webm_decoder_restart",7d,87,11,1a),1);
            	}
}

} // end namespace webm
