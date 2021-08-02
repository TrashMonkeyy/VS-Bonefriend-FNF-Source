#ifndef INCLUDED_VideoHandler
#define INCLUDED_VideoHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(VideoHandler)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,AsyncErrorEvent)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,NetStatusEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,media,Video)
HX_DECLARE_CLASS2(openfl,net,NetStream)



class HXCPP_CLASS_ATTRIBUTES VideoHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VideoHandler_obj OBJ_;
		VideoHandler_obj();

	public:
		enum { _hx_ClassId = 0x10c5b76f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="VideoHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"VideoHandler"); }
		static ::hx::ObjectPtr< VideoHandler_obj > __new();
		static ::hx::ObjectPtr< VideoHandler_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoHandler",af,64,e4,27); }

		 ::openfl::net::NetStream netStream;
		 ::openfl::media::Video video;
		bool isReady;
		bool addOverlay;
		::String vidPath;
		bool ignoreShit;
		void source(::String vPath);
		::Dynamic source_dyn();

		void init1();
		::Dynamic init1_dyn();

		void init2();
		::Dynamic init2_dyn();

		void client_onMetaData( ::Dynamic metaData);
		::Dynamic client_onMetaData_dyn();

		void netStream_onAsyncError( ::openfl::events::AsyncErrorEvent event);
		::Dynamic netStream_onAsyncError_dyn();

		void netConnection_onNetStatus( ::openfl::events::NetStatusEvent event);
		::Dynamic netConnection_onNetStatus_dyn();

		void play();
		::Dynamic play_dyn();

		void stop();
		::Dynamic stop_dyn();

		void restart();
		::Dynamic restart_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		bool stopped;
		bool restarted;
		bool played;
		bool ended;
		bool paused;
		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void togglePause();
		::Dynamic togglePause_dyn();

		void clearPause();
		::Dynamic clearPause_dyn();

		void onStop();
		::Dynamic onStop_dyn();

		void onRestart();
		::Dynamic onRestart_dyn();

		void onPlay( ::openfl::events::NetStatusEvent event);
		::Dynamic onPlay_dyn();

		void onEnd( ::openfl::events::NetStatusEvent event);
		::Dynamic onEnd_dyn();

		void alpha();
		::Dynamic alpha_dyn();

		void unalpha();
		::Dynamic unalpha_dyn();

		void hide();
		::Dynamic hide_dyn();

		void show();
		::Dynamic show_dyn();

};


#endif /* INCLUDED_VideoHandler */ 
