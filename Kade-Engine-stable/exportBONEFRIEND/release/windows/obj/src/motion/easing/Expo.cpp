#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Expo
#include <motion/easing/Expo.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Expo_ExpoEaseIn
#include <motion/easing/_Expo/ExpoEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing__Expo_ExpoEaseInOut
#include <motion/easing/_Expo/ExpoEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing__Expo_ExpoEaseOut
#include <motion/easing/_Expo/ExpoEaseOut.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f13e66f4391f88ab_11_boot,"motion.easing.Expo","boot",0x0f795483,"motion.easing.Expo.boot","motion/easing/Expo.hx",11,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_f13e66f4391f88ab_12_boot,"motion.easing.Expo","boot",0x0f795483,"motion.easing.Expo.boot","motion/easing/Expo.hx",12,0xaf90d701)
HX_LOCAL_STACK_FRAME(_hx_pos_f13e66f4391f88ab_13_boot,"motion.easing.Expo","boot",0x0f795483,"motion.easing.Expo.boot","motion/easing/Expo.hx",13,0xaf90d701)
namespace motion{
namespace easing{

void Expo_obj::__construct() { }

Dynamic Expo_obj::__CreateEmpty() { return new Expo_obj; }

void *Expo_obj::_hx_vtable = 0;

Dynamic Expo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Expo_obj > _hx_result = new Expo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Expo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f45fd8b;
}

::Dynamic Expo_obj::easeIn;

::Dynamic Expo_obj::easeInOut;

::Dynamic Expo_obj::easeOut;


Expo_obj::Expo_obj()
{
}

bool Expo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { outValue = ( easeIn ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { outValue = ( easeOut ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { outValue = ( easeInOut ); return true; }
	}
	return false;
}

bool Expo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { easeIn=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { easeOut=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { easeInOut=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Expo_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Expo_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Expo_obj::easeIn,HX_("easeIn",73,23,3a,88)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Expo_obj::easeInOut,HX_("easeInOut",db,9e,bd,46)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Expo_obj::easeOut,HX_("easeOut",40,75,a9,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Expo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Expo_obj::easeIn,"easeIn");
	HX_MARK_MEMBER_NAME(Expo_obj::easeInOut,"easeInOut");
	HX_MARK_MEMBER_NAME(Expo_obj::easeOut,"easeOut");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Expo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Expo_obj::easeIn,"easeIn");
	HX_VISIT_MEMBER_NAME(Expo_obj::easeInOut,"easeInOut");
	HX_VISIT_MEMBER_NAME(Expo_obj::easeOut,"easeOut");
};

#endif

::hx::Class Expo_obj::__mClass;

static ::String Expo_obj_sStaticFields[] = {
	HX_("easeIn",73,23,3a,88),
	HX_("easeInOut",db,9e,bd,46),
	HX_("easeOut",40,75,a9,aa),
	::String(null())
};

void Expo_obj::__register()
{
	Expo_obj _hx_dummy;
	Expo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing.Expo",bd,71,0a,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Expo_obj::__GetStatic;
	__mClass->mSetStaticField = &Expo_obj::__SetStatic;
	__mClass->mMarkFunc = Expo_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Expo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Expo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Expo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Expo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Expo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Expo_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f13e66f4391f88ab_11_boot)
HXDLIN(  11)		easeIn =  ::motion::easing::_Expo::ExpoEaseIn_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f13e66f4391f88ab_12_boot)
HXDLIN(  12)		easeInOut =  ::motion::easing::_Expo::ExpoEaseInOut_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f13e66f4391f88ab_13_boot)
HXDLIN(  13)		easeOut =  ::motion::easing::_Expo::ExpoEaseOut_obj::__alloc( HX_CTX );
            	}
}

} // end namespace motion
} // end namespace easing
