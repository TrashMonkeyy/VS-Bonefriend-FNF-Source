#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ScoreScreen
#include <ScoreScreen.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c43211bb2dff3c7_365_new,"ScoreScreen","new",0x96db9c30,"ScoreScreen.new","Options.hx",365,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2c43211bb2dff3c7_371_press,"ScoreScreen","press",0xe976b353,"ScoreScreen.press","Options.hx",371,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2c43211bb2dff3c7_379_updateDisplay,"ScoreScreen","updateDisplay",0x3fc33f09,"ScoreScreen.updateDisplay","Options.hx",379,0x9d9a0240)

void ScoreScreen_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_2c43211bb2dff3c7_365_new)
HXLINE( 366)		super::__construct();
HXLINE( 367)		this->description = desc;
            	}

Dynamic ScoreScreen_obj::__CreateEmpty() { return new ScoreScreen_obj; }

void *ScoreScreen_obj::_hx_vtable = 0;

Dynamic ScoreScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScoreScreen_obj > _hx_result = new ScoreScreen_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScoreScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0895d25e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0895d25e;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool ScoreScreen_obj::press(){
            	HX_STACKFRAME(&_hx_pos_2c43211bb2dff3c7_371_press)
HXLINE( 372)		::flixel::FlxG_obj::save->data->__SetField(HX_("scoreScreen",5e,6c,c3,13),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("scoreScreen",5e,6c,c3,13),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 373)		this->display = this->updateDisplay();
HXLINE( 374)		return true;
            	}


::String ScoreScreen_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_2c43211bb2dff3c7_379_updateDisplay)
HXDLIN( 379)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("scoreScreen",5e,6c,c3,13),::hx::paccDynamic)) )) {
HXDLIN( 379)			return HX_("Show Score Screen",9d,cf,bf,e6);
            		}
            		else {
HXDLIN( 379)			return HX_("No Score Screen",d9,d1,47,3c);
            		}
HXDLIN( 379)		return null();
            	}



::hx::ObjectPtr< ScoreScreen_obj > ScoreScreen_obj::__new(::String desc) {
	::hx::ObjectPtr< ScoreScreen_obj > __this = new ScoreScreen_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ScoreScreen_obj > ScoreScreen_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ScoreScreen_obj *__this = (ScoreScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScoreScreen_obj), true, "ScoreScreen"));
	*(void **)__this = ScoreScreen_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ScoreScreen_obj::ScoreScreen_obj()
{
}

::hx::Val ScoreScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScoreScreen_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScoreScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String ScoreScreen_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ScoreScreen_obj::__mClass;

void ScoreScreen_obj::__register()
{
	ScoreScreen_obj _hx_dummy;
	ScoreScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ScoreScreen",3e,04,f6,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScoreScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScoreScreen_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScoreScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScoreScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

