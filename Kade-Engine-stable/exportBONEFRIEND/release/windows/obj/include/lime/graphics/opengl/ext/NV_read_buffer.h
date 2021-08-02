#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer
#define INCLUDED_lime_graphics_opengl_ext_NV_read_buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7fd5b608eccbd553_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_read_buffer)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_read_buffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_read_buffer_obj OBJ_;
		NV_read_buffer_obj();

	public:
		enum { _hx_ClassId = 0x060fe9c4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_read_buffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_read_buffer"); }

		inline static ::hx::ObjectPtr< NV_read_buffer_obj > __new() {
			::hx::ObjectPtr< NV_read_buffer_obj > __this = new NV_read_buffer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_read_buffer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_read_buffer_obj *__this = (NV_read_buffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_read_buffer_obj), false, "lime.graphics.opengl.ext.NV_read_buffer"));
			*(void **)__this = NV_read_buffer_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7fd5b608eccbd553_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::NV_read_buffer)(__this) )->READ_BUFFER_NV = 3074;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_read_buffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_read_buffer",52,78,29,ea); }

		int READ_BUFFER_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_read_buffer */ 
