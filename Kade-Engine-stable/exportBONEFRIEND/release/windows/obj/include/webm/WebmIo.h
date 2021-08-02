#ifndef INCLUDED_webm_WebmIo
#define INCLUDED_webm_WebmIo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_be1b71502565239e_11_new)
HX_DECLARE_CLASS1(webm,WebmIo)

namespace webm{


class HXCPP_CLASS_ATTRIBUTES WebmIo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebmIo_obj OBJ_;
		WebmIo_obj();

	public:
		enum { _hx_ClassId = 0x50d2cd98 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="webm.WebmIo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"webm.WebmIo"); }

		inline static ::hx::ObjectPtr< WebmIo_obj > __new() {
			::hx::ObjectPtr< WebmIo_obj > __this = new WebmIo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WebmIo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			WebmIo_obj *__this = (WebmIo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebmIo_obj), true, "webm.WebmIo"));
			*(void **)__this = WebmIo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_be1b71502565239e_11_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebmIo_obj();

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
		::String __ToString() const { return HX_("WebmIo",bf,d9,9e,31); }

		static void __boot();
		static  ::Dynamic hx_create_io;
		static Dynamic hx_create_io_dyn() { return hx_create_io;}
		 ::Dynamic io;
		void create();
		::Dynamic create_dyn();

		virtual ::Array< unsigned char > read(int count);
		::Dynamic read_dyn();

		virtual int seek(Float offset,int whence);
		::Dynamic seek_dyn();

		virtual Float tell();
		::Dynamic tell_dyn();

};

} // end namespace webm

#endif /* INCLUDED_webm_WebmIo */ 
