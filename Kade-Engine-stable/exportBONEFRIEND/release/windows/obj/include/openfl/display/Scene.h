#ifndef INCLUDED_openfl_display_Scene
#define INCLUDED_openfl_display_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,FrameLabel)
HX_DECLARE_CLASS2(openfl,display,Scene)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Scene_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Scene_obj OBJ_;
		Scene_obj();

	public:
		enum { _hx_ClassId = 0x473af5de };

		void __construct(::String name,::Array< ::Dynamic> labels,int numFrames);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Scene")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Scene"); }
		static ::hx::ObjectPtr< Scene_obj > __new(::String name,::Array< ::Dynamic> labels,int numFrames);
		static ::hx::ObjectPtr< Scene_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::Array< ::Dynamic> labels,int numFrames);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Scene",2c,49,ff,0b); }

		::Array< ::Dynamic> labels;
		::String name;
		int numFrames;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Scene */ 
