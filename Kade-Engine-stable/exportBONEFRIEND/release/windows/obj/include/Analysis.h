#ifndef INCLUDED_Analysis
#define INCLUDED_Analysis

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Ana)
HX_DECLARE_CLASS0(Analysis)



class HXCPP_CLASS_ATTRIBUTES Analysis_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Analysis_obj OBJ_;
		Analysis_obj();

	public:
		enum { _hx_ClassId = 0x07d00a3c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Analysis")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Analysis"); }
		static ::hx::ObjectPtr< Analysis_obj > __new();
		static ::hx::ObjectPtr< Analysis_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Analysis_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Analysis",7c,17,3f,ac); }

		::Array< ::Dynamic> anaArray;
};


#endif /* INCLUDED_Analysis */ 
