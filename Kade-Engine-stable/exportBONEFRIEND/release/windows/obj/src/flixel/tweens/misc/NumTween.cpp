#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_48a467e39416ef35_8_new,"flixel.tweens.misc.NumTween","new",0x5bbfa6a5,"flixel.tweens.misc.NumTween.new","flixel/tweens/misc/NumTween.hx",8,0x6392d42a)
HX_LOCAL_STACK_FRAME(_hx_pos_48a467e39416ef35_24_destroy,"flixel.tweens.misc.NumTween","destroy",0x8c3b09bf,"flixel.tweens.misc.NumTween.destroy","flixel/tweens/misc/NumTween.hx",24,0x6392d42a)
HX_LOCAL_STACK_FRAME(_hx_pos_48a467e39416ef35_38_tween,"flixel.tweens.misc.NumTween","tween",0x08325bf0,"flixel.tweens.misc.NumTween.tween","flixel/tweens/misc/NumTween.hx",38,0x6392d42a)
HX_LOCAL_STACK_FRAME(_hx_pos_48a467e39416ef35_48_update,"flixel.tweens.misc.NumTween","update",0x81bf28e4,"flixel.tweens.misc.NumTween.update","flixel/tweens/misc/NumTween.hx",48,0x6392d42a)
namespace flixel{
namespace tweens{
namespace misc{

void NumTween_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_48a467e39416ef35_8_new)
HXDLIN(   8)		super::__construct(Options,manager);
            	}

Dynamic NumTween_obj::__CreateEmpty() { return new NumTween_obj; }

void *NumTween_obj::_hx_vtable = 0;

Dynamic NumTween_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NumTween_obj > _hx_result = new NumTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NumTween_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x104846c5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
	} else {
		return inClassId==(int)0x70fdc21d;
	}
}

void NumTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_48a467e39416ef35_24_destroy)
HXLINE(  25)		this->super::destroy();
HXLINE(  26)		this->_tweenFunction = null();
            	}


 ::flixel::tweens::misc::NumTween NumTween_obj::tween(Float fromValue,Float toValue,Float duration, ::Dynamic tweenFunction){
            	HX_STACKFRAME(&_hx_pos_48a467e39416ef35_38_tween)
HXLINE(  39)		this->_tweenFunction = tweenFunction;
HXLINE(  40)		this->_start = (this->value = fromValue);
HXLINE(  41)		this->_range = (toValue - this->value);
HXLINE(  42)		this->duration = duration;
HXLINE(  43)		this->start();
HXLINE(  44)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(NumTween_obj,tween,return )

void NumTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_48a467e39416ef35_48_update)
HXLINE(  49)		this->super::update(elapsed);
HXLINE(  50)		this->value = (this->_start + (this->_range * this->scale));
HXLINE(  52)		if (::hx::IsNotNull( this->_tweenFunction )) {
HXLINE(  53)			this->_tweenFunction(this->value);
            		}
            	}



::hx::ObjectPtr< NumTween_obj > NumTween_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< NumTween_obj > __this = new NumTween_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< NumTween_obj > NumTween_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	NumTween_obj *__this = (NumTween_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NumTween_obj), true, "flixel.tweens.misc.NumTween"));
	*(void **)__this = NumTween_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

NumTween_obj::NumTween_obj()
{
}

void NumTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NumTween);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_tweenFunction,"_tweenFunction");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_range,"_range");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NumTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_tweenFunction,"_tweenFunction");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NumTween_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"tween") ) { return ::hx::Val( tween_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { return ::hx::Val( _start ); }
		if (HX_FIELD_EQ(inName,"_range") ) { return ::hx::Val( _range ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tweenFunction") ) { return ::hx::Val( _tweenFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NumTween_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tweenFunction") ) { _tweenFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NumTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("_start",a3,bb,f2,7f));
	outFields->push(HX_("_range",fe,ec,06,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NumTween_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(NumTween_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NumTween_obj,_tweenFunction),HX_("_tweenFunction",e4,e4,67,b0)},
	{::hx::fsFloat,(int)offsetof(NumTween_obj,_start),HX_("_start",a3,bb,f2,7f)},
	{::hx::fsFloat,(int)offsetof(NumTween_obj,_range),HX_("_range",fe,ec,06,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NumTween_obj_sStaticStorageInfo = 0;
#endif

static ::String NumTween_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("_tweenFunction",e4,e4,67,b0),
	HX_("_start",a3,bb,f2,7f),
	HX_("_range",fe,ec,06,e0),
	HX_("destroy",fa,2c,86,24),
	HX_("tween",6b,aa,70,19),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class NumTween_obj::__mClass;

void NumTween_obj::__register()
{
	NumTween_obj _hx_dummy;
	NumTween_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.misc.NumTween",33,70,9c,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NumTween_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NumTween_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NumTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NumTween_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
