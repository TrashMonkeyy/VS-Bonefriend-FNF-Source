#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_250a368a61325748_29_new,"haxe.io.Eof","new",0x2166e64e,"haxe.io.Eof.new","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/io/Eof.hx",29,0xd2d457de)
HX_LOCAL_STACK_FRAME(_hx_pos_250a368a61325748_33_toString,"haxe.io.Eof","toString",0xf9ff7bfe,"haxe.io.Eof.toString","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/io/Eof.hx",33,0xd2d457de)
namespace haxe{
namespace io{

void Eof_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_250a368a61325748_29_new)
            	}

Dynamic Eof_obj::__CreateEmpty() { return new Eof_obj; }

void *Eof_obj::_hx_vtable = 0;

Dynamic Eof_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Eof_obj > _hx_result = new Eof_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Eof_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d7955d0;
}

::String Eof_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_250a368a61325748_33_toString)
HXDLIN(  33)		return HX_("Eof",9c,bc,34,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Eof_obj,toString,return )


Eof_obj::Eof_obj()
{
}

::hx::Val Eof_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Eof_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Eof_obj_sStaticStorageInfo = 0;
#endif

static ::String Eof_obj_sMemberFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Eof_obj::__mClass;

void Eof_obj::__register()
{
	Eof_obj _hx_dummy;
	Eof_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Eof",5c,67,0e,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Eof_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Eof_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Eof_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Eof_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
