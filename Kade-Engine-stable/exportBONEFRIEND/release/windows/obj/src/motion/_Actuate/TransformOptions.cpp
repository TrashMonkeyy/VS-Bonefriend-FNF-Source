#include <hxcpp.h>

#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_TransformOptions
#include <motion/_Actuate/TransformOptions.h>
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
#ifndef INCLUDED_motion_actuators_TransformActuator
#include <motion/actuators/TransformActuator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e493db57ac90f1ea_570_new,"motion._Actuate.TransformOptions","new",0x91b60fea,"motion._Actuate.TransformOptions.new","motion/Actuate.hx",570,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_e493db57ac90f1ea_586_color,"motion._Actuate.TransformOptions","color",0xa875276d,"motion._Actuate.TransformOptions.color","motion/Actuate.hx",586,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_e493db57ac90f1ea_607_sound,"motion._Actuate.TransformOptions","sound",0xdee542d9,"motion._Actuate.TransformOptions.sound","motion/Actuate.hx",607,0xcac92ba8)
namespace motion{
namespace _Actuate{

void TransformOptions_obj::__construct( ::Dynamic target,Float duration,bool overwrite){
            	HX_STACKFRAME(&_hx_pos_e493db57ac90f1ea_570_new)
HXLINE( 572)		this->target = target;
HXLINE( 573)		this->duration = duration;
HXLINE( 574)		this->overwrite = overwrite;
            	}

Dynamic TransformOptions_obj::__CreateEmpty() { return new TransformOptions_obj; }

void *TransformOptions_obj::_hx_vtable = 0;

Dynamic TransformOptions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransformOptions_obj > _hx_result = new TransformOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TransformOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cdaa958;
}

::Dynamic TransformOptions_obj::color(::hx::Null< int >  __o_value,::hx::Null< Float >  __o_strength, ::Dynamic alpha){
            		int value = __o_value.Default(0);
            		Float strength = __o_strength.Default(1);
            	HX_STACKFRAME(&_hx_pos_e493db57ac90f1ea_586_color)
HXLINE( 588)		 ::Dynamic properties =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("colorStrength",04,9b,51,91),strength)
            			->setFixed(1,HX_("colorValue",0e,97,24,56),value));
HXLINE( 590)		if (::hx::IsNotNull( alpha )) {
HXLINE( 592)			properties->__SetField(HX_("colorAlpha",fb,be,02,46),alpha,::hx::paccDynamic);
            		}
HXLINE( 596)		return ::motion::Actuate_obj::tween(this->target,this->duration,properties,this->overwrite,::hx::ClassOf< ::motion::actuators::TransformActuator >());
            	}


HX_DEFINE_DYNAMIC_FUNC3(TransformOptions_obj,color,return )

::Dynamic TransformOptions_obj::sound( ::Dynamic volume, ::Dynamic pan){
            	HX_STACKFRAME(&_hx_pos_e493db57ac90f1ea_607_sound)
HXLINE( 609)		 ::Dynamic properties =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 611)		if (::hx::IsNotNull( volume )) {
HXLINE( 613)			properties->__SetField(HX_("soundVolume",09,30,80,12),volume,::hx::paccDynamic);
            		}
HXLINE( 617)		if (::hx::IsNotNull( pan )) {
HXLINE( 619)			properties->__SetField(HX_("soundPan",ce,27,a3,19),pan,::hx::paccDynamic);
            		}
HXLINE( 623)		return ::motion::Actuate_obj::tween(this->target,this->duration,properties,this->overwrite,::hx::ClassOf< ::motion::actuators::TransformActuator >());
            	}


HX_DEFINE_DYNAMIC_FUNC2(TransformOptions_obj,sound,return )


::hx::ObjectPtr< TransformOptions_obj > TransformOptions_obj::__new( ::Dynamic target,Float duration,bool overwrite) {
	::hx::ObjectPtr< TransformOptions_obj > __this = new TransformOptions_obj();
	__this->__construct(target,duration,overwrite);
	return __this;
}

::hx::ObjectPtr< TransformOptions_obj > TransformOptions_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration,bool overwrite) {
	TransformOptions_obj *__this = (TransformOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransformOptions_obj), true, "motion._Actuate.TransformOptions"));
	*(void **)__this = TransformOptions_obj::_hx_vtable;
	__this->__construct(target,duration,overwrite);
	return __this;
}

TransformOptions_obj::TransformOptions_obj()
{
}

void TransformOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransformOptions);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(overwrite,"overwrite");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void TransformOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(overwrite,"overwrite");
	HX_VISIT_MEMBER_NAME(target,"target");
}

::hx::Val TransformOptions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color_dyn() ); }
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { return ::hx::Val( overwrite ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransformOptions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { overwrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransformOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("overwrite",0b,8b,ed,a0));
	outFields->push(HX_("target",51,f3,ec,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransformOptions_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TransformOptions_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsBool,(int)offsetof(TransformOptions_obj,overwrite),HX_("overwrite",0b,8b,ed,a0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TransformOptions_obj,target),HX_("target",51,f3,ec,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransformOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String TransformOptions_obj_sMemberFields[] = {
	HX_("duration",54,0f,8e,14),
	HX_("overwrite",0b,8b,ed,a0),
	HX_("target",51,f3,ec,86),
	HX_("color",63,71,5c,4a),
	HX_("sound",cf,8c,cc,80),
	::String(null()) };

::hx::Class TransformOptions_obj::__mClass;

void TransformOptions_obj::__register()
{
	TransformOptions_obj _hx_dummy;
	TransformOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion._Actuate.TransformOptions",f8,92,69,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransformOptions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransformOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransformOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransformOptions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace _Actuate
