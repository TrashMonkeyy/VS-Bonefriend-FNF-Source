#ifndef INCLUDED_webm_WebmPlayer
#define INCLUDED_webm_WebmPlayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,SampleDataEvent)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS1(webm,VpxDecoder)
HX_DECLARE_CLASS1(webm,WebmIo)
HX_DECLARE_CLASS1(webm,WebmPlayer)

namespace webm{


class HXCPP_CLASS_ATTRIBUTES WebmPlayer_obj : public  ::openfl::display::Bitmap_obj
{
	public:
		typedef  ::openfl::display::Bitmap_obj super;
		typedef WebmPlayer_obj OBJ_;
		WebmPlayer_obj();

	public:
		enum { _hx_ClassId = 0x1e6b1e13 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="webm.WebmPlayer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"webm.WebmPlayer"); }
		static ::hx::ObjectPtr< WebmPlayer_obj > __new();
		static ::hx::ObjectPtr< WebmPlayer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebmPlayer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebmPlayer",ba,c9,cd,98); }

		static void __boot();
		static int BYTES_PER_SAMPLE;
		static  ::openfl::utils::ByteArrayData BLANK_BYTES;
		static int SKIP_STEP_LIMIT;
		static  ::Dynamic hx_webm_decoder_create;
		static Dynamic hx_webm_decoder_create_dyn() { return hx_webm_decoder_create;}
		static  ::Dynamic hx_webm_decoder_get_info;
		static Dynamic hx_webm_decoder_get_info_dyn() { return hx_webm_decoder_get_info;}
		static  ::Dynamic hx_webm_decoder_has_more;
		static Dynamic hx_webm_decoder_has_more_dyn() { return hx_webm_decoder_has_more;}
		static  ::Dynamic hx_webm_decoder_step;
		static Dynamic hx_webm_decoder_step_dyn() { return hx_webm_decoder_step;}
		static  ::Dynamic hx_webm_decoder_restart;
		static Dynamic hx_webm_decoder_restart_dyn() { return hx_webm_decoder_restart;}
		Float frameRate;
		Float duration;
		 ::webm::VpxDecoder vpxDecoder;
		 ::Dynamic webmDecoder;
		 ::openfl::utils::ByteArrayData outputSound;
		 ::openfl::media::SoundChannel soundChannel;
		 ::openfl::media::Sound sound;
		bool soundEnabled;
		int skippedSteps;
		Float startTime;
		Float lastDecodedVideoFrame;
		Float lastRequestedVideoFrame;
		bool playing;
		int renderedCount;
		int renderedCount2;
		Float lastDecodedVideoFrame2;
		Float fkingElapsed;
		bool wasHitOnce;
		void fuck( ::webm::WebmIo io,::hx::Null< bool >  soundEnabled);
		::Dynamic fuck_dyn();

		void generateSound( ::openfl::events::SampleDataEvent e);
		::Dynamic generateSound_dyn();

		Float getElapsedTime();
		::Dynamic getElapsedTime_dyn();

		Float elapsedTimeDiff();
		::Dynamic elapsedTimeDiff_dyn();

		void removePause();
		::Dynamic removePause_dyn();

		void restart();
		::Dynamic restart_dyn();

		void changePlaying(bool isPlay);
		::Dynamic changePlaying_dyn();

		void play();
		::Dynamic play_dyn();

		void stop( ::Dynamic pRestart);
		::Dynamic stop_dyn();

		void onSpriteEnterFrame( ::openfl::events::Event e);
		::Dynamic onSpriteEnterFrame_dyn();

		void stepVideoFrame();
		::Dynamic stepVideoFrame_dyn();

		void decodeVideoFrame(Float time,::Array< unsigned char > data);
		::Dynamic decodeVideoFrame_dyn();

		void outputAudioFrame(Float time,::Array< unsigned char > data);
		::Dynamic outputAudioFrame_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace webm

#endif /* INCLUDED_webm_WebmPlayer */ 
