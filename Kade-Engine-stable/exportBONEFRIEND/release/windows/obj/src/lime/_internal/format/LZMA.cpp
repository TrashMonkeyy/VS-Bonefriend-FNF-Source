#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__internal_format_LZMA
#include <lime/_internal/format/LZMA.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_335285a16ed3a766_21_compress,"lime._internal.format.LZMA","compress",0x0f40ff02,"lime._internal.format.LZMA.compress","lime/_internal/format/LZMA.hx",21,0x658d9751)
HX_LOCAL_STACK_FRAME(_hx_pos_335285a16ed3a766_44_decompress,"lime._internal.format.LZMA","decompress",0x92fad783,"lime._internal.format.LZMA.decompress","lime/_internal/format/LZMA.hx",44,0x658d9751)
namespace lime{
namespace _internal{
namespace format{

void LZMA_obj::__construct() { }

Dynamic LZMA_obj::__CreateEmpty() { return new LZMA_obj; }

void *LZMA_obj::_hx_vtable = 0;

Dynamic LZMA_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LZMA_obj > _hx_result = new LZMA_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LZMA_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fa54a88;
}

 ::haxe::io::Bytes LZMA_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_335285a16ed3a766_21_compress)
HXDLIN(  21)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_lzma_compress;
HXDLIN(  21)		return ( ( ::Dynamic)(_hx_tmp(::hx::DynamicPtr(bytes),::hx::DynamicPtr(::haxe::io::Bytes_obj::alloc(0)))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,compress,return )

 ::haxe::io::Bytes LZMA_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_335285a16ed3a766_44_decompress)
HXDLIN(  44)		::cpp::Function<  ::hx::Object *  ( ::hx::Object *, ::hx::Object *) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_lzma_decompress;
HXDLIN(  44)		return ( ( ::Dynamic)(_hx_tmp(::hx::DynamicPtr(bytes),::hx::DynamicPtr(::haxe::io::Bytes_obj::alloc(0)))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decompress,return )


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LZMA_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LZMA_obj_sStaticStorageInfo = 0;
#endif

::hx::Class LZMA_obj::__mClass;

static ::String LZMA_obj_sStaticFields[] = {
	HX_("compress",a2,47,bf,83),
	HX_("decompress",23,88,14,da),
	::String(null())
};

void LZMA_obj::__register()
{
	LZMA_obj _hx_dummy;
	LZMA_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.format.LZMA",0e,15,e7,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LZMA_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LZMA_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LZMA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LZMA_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace format
