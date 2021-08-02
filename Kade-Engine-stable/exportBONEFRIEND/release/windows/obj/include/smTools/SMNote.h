#ifndef INCLUDED_smTools_SMNote
#define INCLUDED_smTools_SMNote

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(smTools,SMNote)

namespace smTools{


class HXCPP_CLASS_ATTRIBUTES SMNote_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SMNote_obj OBJ_;
		SMNote_obj();

	public:
		enum { _hx_ClassId = 0x0e2410e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="smTools.SMNote")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"smTools.SMNote"); }

		inline static ::hx::ObjectPtr< SMNote_obj > __new() {
			::hx::ObjectPtr< SMNote_obj > __this = new SMNote_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SMNote_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SMNote_obj *__this = (SMNote_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SMNote_obj), false, "smTools.SMNote"));
			*(void **)__this = SMNote_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SMNote_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SMNote",ac,e1,5c,b9); }

		Float time;
		int data;
		Float length;
};

} // end namespace smTools

#endif /* INCLUDED_smTools_SMNote */ 
