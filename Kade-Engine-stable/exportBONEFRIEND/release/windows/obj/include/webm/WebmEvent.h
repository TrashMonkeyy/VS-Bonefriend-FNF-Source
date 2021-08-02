#ifndef INCLUDED_webm_WebmEvent
#define INCLUDED_webm_WebmEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS1(webm,WebmEvent)

namespace webm{


class HXCPP_CLASS_ATTRIBUTES WebmEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef WebmEvent_obj OBJ_;
		WebmEvent_obj();

	public:
		enum { _hx_ClassId = 0x1af6f1a8 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="webm.WebmEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"webm.WebmEvent"); }
		static ::hx::ObjectPtr< WebmEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< WebmEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebmEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebmEvent",e1,b7,01,ca); }

		static void __boot();
		static ::String PLAY;
		static ::String STOP;
		static ::String COMPLETE;
		static ::String RESTART;
};

} // end namespace webm

#endif /* INCLUDED_webm_WebmEvent */ 
