#ifndef INCLUDED_FlashingLightsOption
#define INCLUDED_FlashingLightsOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(FlashingLightsOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES FlashingLightsOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef FlashingLightsOption_obj OBJ_;
		FlashingLightsOption_obj();

	public:
		enum { _hx_ClassId = 0x095c0b90 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FlashingLightsOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FlashingLightsOption"); }
		static ::hx::ObjectPtr< FlashingLightsOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< FlashingLightsOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlashingLightsOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlashingLightsOption",a4,b6,46,13); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_FlashingLightsOption */ 
