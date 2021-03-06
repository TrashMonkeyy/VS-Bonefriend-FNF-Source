#ifndef INCLUDED_ShowInput
#define INCLUDED_ShowInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(ShowInput)



class HXCPP_CLASS_ATTRIBUTES ShowInput_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef ShowInput_obj OBJ_;
		ShowInput_obj();

	public:
		enum { _hx_ClassId = 0x51987eed };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ShowInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ShowInput"); }
		static ::hx::ObjectPtr< ShowInput_obj > __new(::String desc);
		static ::hx::ObjectPtr< ShowInput_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShowInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShowInput",ad,09,55,8e); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_ShowInput */ 
