#ifndef INCLUDED_WebmHandler
#define INCLUDED_WebmHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WebmHandler)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(webm,WebmIo)
HX_DECLARE_CLASS1(webm,WebmPlayer)



class HXCPP_CLASS_ATTRIBUTES WebmHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebmHandler_obj OBJ_;
		WebmHandler_obj();

	public:
		enum { _hx_ClassId = 0x0ac0e0c5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WebmHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WebmHandler"); }
		static ::hx::ObjectPtr< WebmHandler_obj > __new();
		static ::hx::ObjectPtr< WebmHandler_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebmHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebmHandler",51,5f,03,d7); }

		 ::webm::WebmPlayer webm;
		::String vidPath;
		 ::webm::WebmIo io;
		bool initialized;
		void source(::String vPath);
		::Dynamic source_dyn();

		void makePlayer();
		::Dynamic makePlayer_dyn();

		void updatePlayer();
		::Dynamic updatePlayer_dyn();

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

		void onPlay();
		::Dynamic onPlay_dyn();

		void onEnd();
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


#endif /* INCLUDED_WebmHandler */ 
