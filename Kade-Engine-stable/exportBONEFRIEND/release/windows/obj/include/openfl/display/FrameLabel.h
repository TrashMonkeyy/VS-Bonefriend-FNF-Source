#ifndef INCLUDED_openfl_display_FrameLabel
#define INCLUDED_openfl_display_FrameLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,display,FrameLabel)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FrameLabel_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef FrameLabel_obj OBJ_;
		FrameLabel_obj();

	public:
		enum { _hx_ClassId = 0x060154b5 };

		void __construct(::String name,int frame);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.FrameLabel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.FrameLabel"); }
		static ::hx::ObjectPtr< FrameLabel_obj > __new(::String name,int frame);
		static ::hx::ObjectPtr< FrameLabel_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int frame);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FrameLabel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FrameLabel",a7,46,86,49); }

		int frame;
		::String name;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_FrameLabel */ 
