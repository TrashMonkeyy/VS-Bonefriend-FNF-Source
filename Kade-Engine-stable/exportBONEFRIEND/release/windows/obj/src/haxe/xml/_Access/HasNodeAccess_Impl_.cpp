#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasNodeAccess_Impl_
#include <haxe/xml/_Access/HasNodeAccess_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8da71d1421841c1f_69_resolve,"haxe.xml._Access.HasNodeAccess_Impl_","resolve",0x5a406854,"haxe.xml._Access.HasNodeAccess_Impl_.resolve","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/xml/Access.hx",69,0x7eaf9175)
namespace haxe{
namespace xml{
namespace _Access{

void HasNodeAccess_Impl__obj::__construct() { }

Dynamic HasNodeAccess_Impl__obj::__CreateEmpty() { return new HasNodeAccess_Impl__obj; }

void *HasNodeAccess_Impl__obj::_hx_vtable = 0;

Dynamic HasNodeAccess_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HasNodeAccess_Impl__obj > _hx_result = new HasNodeAccess_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HasNodeAccess_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a2d9dae;
}

bool HasNodeAccess_Impl__obj::resolve( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_8da71d1421841c1f_69_resolve)
HXDLIN(  69)		return ( (bool)(this1->elementsNamed(name)->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HasNodeAccess_Impl__obj,resolve,return )


HasNodeAccess_Impl__obj::HasNodeAccess_Impl__obj()
{
}

bool HasNodeAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HasNodeAccess_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HasNodeAccess_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HasNodeAccess_Impl__obj::__mClass;

static ::String HasNodeAccess_Impl__obj_sStaticFields[] = {
	HX_("resolve",ec,12,60,67),
	::String(null())
};

void HasNodeAccess_Impl__obj::__register()
{
	HasNodeAccess_Impl__obj _hx_dummy;
	HasNodeAccess_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.xml._Access.HasNodeAccess_Impl_",d6,0d,ad,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HasNodeAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HasNodeAccess_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HasNodeAccess_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HasNodeAccess_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HasNodeAccess_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Access
