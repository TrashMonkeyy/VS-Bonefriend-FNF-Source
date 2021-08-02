#include <hxcpp.h>

#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_EffectsOptions
#include <motion/_Actuate/EffectsOptions.h>
#endif
#ifndef INCLUDED_motion_actuators_FilterActuator
#include <motion/actuators/FilterActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55f9ec2e90721649_535_new,"motion._Actuate.EffectsOptions","new",0xd8cd76d4,"motion._Actuate.EffectsOptions.new","motion/Actuate.hx",535,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_55f9ec2e90721649_550_filter,"motion._Actuate.EffectsOptions","filter",0x8473f9c4,"motion._Actuate.EffectsOptions.filter","motion/Actuate.hx",550,0xcac92ba8)
namespace motion{
namespace _Actuate{

void EffectsOptions_obj::__construct( ::openfl::display::DisplayObject target,Float duration,bool overwrite){
            	HX_STACKFRAME(&_hx_pos_55f9ec2e90721649_535_new)
HXLINE( 537)		this->target = target;
HXLINE( 538)		this->duration = duration;
HXLINE( 539)		this->overwrite = overwrite;
            	}

Dynamic EffectsOptions_obj::__CreateEmpty() { return new EffectsOptions_obj; }

void *EffectsOptions_obj::_hx_vtable = 0;

Dynamic EffectsOptions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EffectsOptions_obj > _hx_result = new EffectsOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool EffectsOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x22e54f6e;
}

::Dynamic EffectsOptions_obj::filter( ::Dynamic reference, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_55f9ec2e90721649_550_filter)
HXLINE( 552)		properties->__SetField(HX_("filter",b8,1f,35,85),reference,::hx::paccDynamic);
HXLINE( 554)		return ::motion::Actuate_obj::tween(this->target,this->duration,properties,this->overwrite,::hx::ClassOf< ::motion::actuators::FilterActuator >());
            	}


HX_DEFINE_DYNAMIC_FUNC2(EffectsOptions_obj,filter,return )


::hx::ObjectPtr< EffectsOptions_obj > EffectsOptions_obj::__new( ::openfl::display::DisplayObject target,Float duration,bool overwrite) {
	::hx::ObjectPtr< EffectsOptions_obj > __this = new EffectsOptions_obj();
	__this->__construct(target,duration,overwrite);
	return __this;
}

::hx::ObjectPtr< EffectsOptions_obj > EffectsOptions_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject target,Float duration,bool overwrite) {
	EffectsOptions_obj *__this = (EffectsOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EffectsOptions_obj), true, "motion._Actuate.EffectsOptions"));
	*(void **)__this = EffectsOptions_obj::_hx_vtable;
	__this->__construct(target,duration,overwrite);
	return __this;
}

EffectsOptions_obj::EffectsOptions_obj()
{
}

void EffectsOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EffectsOptions);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(overwrite,"overwrite");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void EffectsOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(overwrite,"overwrite");
	HX_VISIT_MEMBER_NAME(target,"target");
}

::hx::Val EffectsOptions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { return ::hx::Val( overwrite ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EffectsOptions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { overwrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EffectsOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("overwrite",0b,8b,ed,a0));
	outFields->push(HX_("target",51,f3,ec,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EffectsOptions_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(EffectsOptions_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsBool,(int)offsetof(EffectsOptions_obj,overwrite),HX_("overwrite",0b,8b,ed,a0)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(EffectsOptions_obj,target),HX_("target",51,f3,ec,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EffectsOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String EffectsOptions_obj_sMemberFields[] = {
	HX_("duration",54,0f,8e,14),
	HX_("overwrite",0b,8b,ed,a0),
	HX_("target",51,f3,ec,86),
	HX_("filter",b8,1f,35,85),
	::String(null()) };

::hx::Class EffectsOptions_obj::__mClass;

void EffectsOptions_obj::__register()
{
	EffectsOptions_obj _hx_dummy;
	EffectsOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion._Actuate.EffectsOptions",e2,bc,74,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EffectsOptions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EffectsOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EffectsOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EffectsOptions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace _Actuate
