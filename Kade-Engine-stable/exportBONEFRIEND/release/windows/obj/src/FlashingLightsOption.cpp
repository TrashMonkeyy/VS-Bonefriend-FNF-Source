#include <hxcpp.h>

#ifndef INCLUDED_FlashingLightsOption
#include <FlashingLightsOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_59e1436159e1af96_247_new,"FlashingLightsOption","new",0xa84c7996,"FlashingLightsOption.new","Options.hx",247,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_59e1436159e1af96_252_press,"FlashingLightsOption","press",0xdee63639,"FlashingLightsOption.press","Options.hx",252,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_59e1436159e1af96_260_updateDisplay,"FlashingLightsOption","updateDisplay",0xd86917ef,"FlashingLightsOption.updateDisplay","Options.hx",260,0x9d9a0240)

void FlashingLightsOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_59e1436159e1af96_247_new)
HXLINE( 248)		super::__construct();
HXLINE( 249)		this->description = desc;
            	}

Dynamic FlashingLightsOption_obj::__CreateEmpty() { return new FlashingLightsOption_obj; }

void *FlashingLightsOption_obj::_hx_vtable = 0;

Dynamic FlashingLightsOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashingLightsOption_obj > _hx_result = new FlashingLightsOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlashingLightsOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x095c0b90) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x095c0b90;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool FlashingLightsOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_59e1436159e1af96_252_press)
HXLINE( 253)		::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 254)		this->display = this->updateDisplay();
HXLINE( 255)		return true;
            	}


::String FlashingLightsOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_59e1436159e1af96_260_updateDisplay)
HXDLIN( 260)		::String _hx_tmp;
HXDLIN( 260)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) ))) {
HXDLIN( 260)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 260)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 260)		return (HX_("Flashing Lights ",b5,a5,19,88) + _hx_tmp);
            	}



::hx::ObjectPtr< FlashingLightsOption_obj > FlashingLightsOption_obj::__new(::String desc) {
	::hx::ObjectPtr< FlashingLightsOption_obj > __this = new FlashingLightsOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< FlashingLightsOption_obj > FlashingLightsOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	FlashingLightsOption_obj *__this = (FlashingLightsOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashingLightsOption_obj), true, "FlashingLightsOption"));
	*(void **)__this = FlashingLightsOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

FlashingLightsOption_obj::FlashingLightsOption_obj()
{
}

::hx::Val FlashingLightsOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *FlashingLightsOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlashingLightsOption_obj_sStaticStorageInfo = 0;
#endif

static ::String FlashingLightsOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class FlashingLightsOption_obj::__mClass;

void FlashingLightsOption_obj::__register()
{
	FlashingLightsOption_obj _hx_dummy;
	FlashingLightsOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FlashingLightsOption",a4,b6,46,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlashingLightsOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlashingLightsOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashingLightsOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashingLightsOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

