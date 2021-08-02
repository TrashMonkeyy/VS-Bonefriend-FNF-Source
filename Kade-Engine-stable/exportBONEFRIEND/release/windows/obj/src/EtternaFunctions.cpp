#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EtternaFunctions
#include <EtternaFunctions.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_12_erf,"EtternaFunctions","erf",0x9d312b21,"EtternaFunctions.erf","EtternaFunctions.hx",12,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_27_getNotes,"EtternaFunctions","getNotes",0x9d3f1303,"EtternaFunctions.getNotes","EtternaFunctions.hx",27,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_42_getHolds,"EtternaFunctions","getHolds",0x28d18516,"EtternaFunctions.getHolds","EtternaFunctions.hx",42,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_60_getMapMaxScore,"EtternaFunctions","getMapMaxScore",0x97f63d0c,"EtternaFunctions.getMapMaxScore","EtternaFunctions.hx",60,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_64_wife3,"EtternaFunctions","wife3",0x836ed30a,"EtternaFunctions.wife3","EtternaFunctions.hx",64,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_4_boot,"EtternaFunctions","boot",0xebd6af6a,"EtternaFunctions.boot","EtternaFunctions.hx",4,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_5_boot,"EtternaFunctions","boot",0xebd6af6a,"EtternaFunctions.boot","EtternaFunctions.hx",5,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_6_boot,"EtternaFunctions","boot",0xebd6af6a,"EtternaFunctions.boot","EtternaFunctions.hx",6,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_7_boot,"EtternaFunctions","boot",0xebd6af6a,"EtternaFunctions.boot","EtternaFunctions.hx",7,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_8_boot,"EtternaFunctions","boot",0xebd6af6a,"EtternaFunctions.boot","EtternaFunctions.hx",8,0x1b1bc848)
HX_LOCAL_STACK_FRAME(_hx_pos_35ae3dd307ef836b_9_boot,"EtternaFunctions","boot",0xebd6af6a,"EtternaFunctions.boot","EtternaFunctions.hx",9,0x1b1bc848)

void EtternaFunctions_obj::__construct() { }

Dynamic EtternaFunctions_obj::__CreateEmpty() { return new EtternaFunctions_obj; }

void *EtternaFunctions_obj::_hx_vtable = 0;

Dynamic EtternaFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EtternaFunctions_obj > _hx_result = new EtternaFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EtternaFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x79c641ea;
}

Float EtternaFunctions_obj::a1;

Float EtternaFunctions_obj::a2;

Float EtternaFunctions_obj::a3;

Float EtternaFunctions_obj::a4;

Float EtternaFunctions_obj::a5;

Float EtternaFunctions_obj::p;

Float EtternaFunctions_obj::erf(Float x){
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_12_erf)
HXLINE(  14)		int sign = 1;
HXLINE(  15)		if ((x < 0)) {
HXLINE(  16)			sign = -1;
            		}
HXLINE(  17)		x = ::Math_obj::abs(x);
HXLINE(  20)		Float t = (((Float)1.0) / (((Float)1.0) + (::EtternaFunctions_obj::p * x)));
HXLINE(  21)		Float y = (((Float)1.0) - ((((((((((::EtternaFunctions_obj::a5 * t) + ::EtternaFunctions_obj::a4) * t) + ::EtternaFunctions_obj::a3) * t) + ::EtternaFunctions_obj::a2) * t) + ::EtternaFunctions_obj::a1) * t) * ::Math_obj::exp((-(x) * x))));
HXLINE(  23)		return (( (Float)(sign) ) * y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EtternaFunctions_obj,erf,return )

int EtternaFunctions_obj::getNotes(){
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_27_getNotes)
HXLINE(  28)		int notes = 0;
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			int _g1 = ( (::Array< ::Dynamic>)(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN(  29)			while((_g < _g1)){
HXLINE(  29)				_g = (_g + 1);
HXDLIN(  29)				int i = (_g - 1);
HXLINE(  31)				{
HXLINE(  31)					int _g1 = 0;
HXDLIN(  31)					int _g2 = ( (::cpp::VirtualArray)( ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic)) )->get_length();
HXDLIN(  31)					while((_g1 < _g2)){
HXLINE(  31)						_g1 = (_g1 + 1);
HXDLIN(  31)						int ii = (_g1 - 1);
HXLINE(  33)						::Array< int > n = ( (::Array< int >)( ::Dynamic( ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic))->__GetItem(ii)) );
HXLINE(  34)						if ((n->__get(1) <= 0)) {
HXLINE(  35)							notes = (notes + 1);
            						}
            					}
            				}
            			}
            		}
HXLINE(  38)		return notes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EtternaFunctions_obj,getNotes,return )

int EtternaFunctions_obj::getHolds(){
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_42_getHolds)
HXLINE(  43)		int notes = 0;
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			int _g1 = ( (::Array< ::Dynamic>)(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN(  44)			while((_g < _g1)){
HXLINE(  44)				_g = (_g + 1);
HXDLIN(  44)				int i = (_g - 1);
HXLINE(  46)				::haxe::Log_obj::trace( ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i),::hx::SourceInfo(HX_("source_bonefriend/EtternaFunctions.hx",3f,d5,6a,fd),46,HX_("EtternaFunctions",36,00,59,c6),HX_("getHolds",de,5d,34,8b)));
HXLINE(  47)				{
HXLINE(  47)					int _g1 = 0;
HXDLIN(  47)					int _g2 = ( (::cpp::VirtualArray)( ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic)) )->get_length();
HXDLIN(  47)					while((_g1 < _g2)){
HXLINE(  47)						_g1 = (_g1 + 1);
HXDLIN(  47)						int ii = (_g1 - 1);
HXLINE(  49)						::Array< int > n = ( (::Array< int >)( ::Dynamic( ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic))->__GetItem(ii)) );
HXLINE(  50)						::haxe::Log_obj::trace(n,::hx::SourceInfo(HX_("source_bonefriend/EtternaFunctions.hx",3f,d5,6a,fd),50,HX_("EtternaFunctions",36,00,59,c6),HX_("getHolds",de,5d,34,8b)));
HXLINE(  51)						if ((n->__get(1) > 0)) {
HXLINE(  52)							notes = (notes + 1);
            						}
            					}
            				}
            			}
            		}
HXLINE(  55)		return notes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EtternaFunctions_obj,getHolds,return )

int EtternaFunctions_obj::getMapMaxScore(){
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_60_getMapMaxScore)
HXDLIN(  60)		return (::EtternaFunctions_obj::getNotes() * 350);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EtternaFunctions_obj,getMapMaxScore,return )

Float EtternaFunctions_obj::wife3(Float maxms,Float ts){
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_64_wife3)
HXLINE(  65)		Float max_points = ((Float)1.0);
HXLINE(  66)		Float miss_weight = ((Float)-5.5);
HXLINE(  67)		Float ridic = (( (Float)(5) ) * ts);
HXLINE(  68)		Float max_boo_weight = (( (Float)(180) ) * ts);
HXLINE(  69)		Float ts_pow = ((Float)0.75);
HXLINE(  70)		Float zero = (( (Float)(65) ) * ::Math_obj::pow(ts,ts_pow));
HXLINE(  71)		Float power = ((Float)2.5);
HXLINE(  72)		Float dev = (((Float)22.7) * ::Math_obj::pow(ts,ts_pow));
HXLINE(  74)		if ((maxms <= ridic)) {
HXLINE(  75)			return max_points;
            		}
            		else {
HXLINE(  76)			if ((maxms <= zero)) {
HXLINE(  77)				return (max_points * ::EtternaFunctions_obj::erf(((zero - maxms) / dev)));
            			}
            			else {
HXLINE(  78)				if ((maxms <= max_boo_weight)) {
HXLINE(  79)					return (((maxms - zero) * miss_weight) / (max_boo_weight - zero));
            				}
            				else {
HXLINE(  81)					return miss_weight;
            				}
            			}
            		}
HXLINE(  74)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EtternaFunctions_obj,wife3,return )


EtternaFunctions_obj::EtternaFunctions_obj()
{
}

bool EtternaFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { outValue = ( p ); return true; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { outValue = ( a1 ); return true; }
		if (HX_FIELD_EQ(inName,"a2") ) { outValue = ( a2 ); return true; }
		if (HX_FIELD_EQ(inName,"a3") ) { outValue = ( a3 ); return true; }
		if (HX_FIELD_EQ(inName,"a4") ) { outValue = ( a4 ); return true; }
		if (HX_FIELD_EQ(inName,"a5") ) { outValue = ( a5 ); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"erf") ) { outValue = erf_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wife3") ) { outValue = wife3_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getNotes") ) { outValue = getNotes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getHolds") ) { outValue = getHolds_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMapMaxScore") ) { outValue = getMapMaxScore_dyn(); return true; }
	}
	return false;
}

bool EtternaFunctions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=ioValue.Cast< Float >(); return true; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { a1=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"a2") ) { a2=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"a3") ) { a3=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"a4") ) { a4=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"a5") ) { a5=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EtternaFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo EtternaFunctions_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &EtternaFunctions_obj::a1,HX_("a1",b0,54,00,00)},
	{::hx::fsFloat,(void *) &EtternaFunctions_obj::a2,HX_("a2",b1,54,00,00)},
	{::hx::fsFloat,(void *) &EtternaFunctions_obj::a3,HX_("a3",b2,54,00,00)},
	{::hx::fsFloat,(void *) &EtternaFunctions_obj::a4,HX_("a4",b3,54,00,00)},
	{::hx::fsFloat,(void *) &EtternaFunctions_obj::a5,HX_("a5",b4,54,00,00)},
	{::hx::fsFloat,(void *) &EtternaFunctions_obj::p,HX_("p",70,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void EtternaFunctions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EtternaFunctions_obj::a1,"a1");
	HX_MARK_MEMBER_NAME(EtternaFunctions_obj::a2,"a2");
	HX_MARK_MEMBER_NAME(EtternaFunctions_obj::a3,"a3");
	HX_MARK_MEMBER_NAME(EtternaFunctions_obj::a4,"a4");
	HX_MARK_MEMBER_NAME(EtternaFunctions_obj::a5,"a5");
	HX_MARK_MEMBER_NAME(EtternaFunctions_obj::p,"p");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EtternaFunctions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EtternaFunctions_obj::a1,"a1");
	HX_VISIT_MEMBER_NAME(EtternaFunctions_obj::a2,"a2");
	HX_VISIT_MEMBER_NAME(EtternaFunctions_obj::a3,"a3");
	HX_VISIT_MEMBER_NAME(EtternaFunctions_obj::a4,"a4");
	HX_VISIT_MEMBER_NAME(EtternaFunctions_obj::a5,"a5");
	HX_VISIT_MEMBER_NAME(EtternaFunctions_obj::p,"p");
};

#endif

::hx::Class EtternaFunctions_obj::__mClass;

static ::String EtternaFunctions_obj_sStaticFields[] = {
	HX_("a1",b0,54,00,00),
	HX_("a2",b1,54,00,00),
	HX_("a3",b2,54,00,00),
	HX_("a4",b3,54,00,00),
	HX_("a5",b4,54,00,00),
	HX_("p",70,00,00,00),
	HX_("erf",59,07,4d,00),
	HX_("getNotes",cb,eb,a1,ff),
	HX_("getHolds",de,5d,34,8b),
	HX_("getMapMaxScore",d4,db,cf,88),
	HX_("wife3",42,2d,64,ca),
	::String(null())
};

void EtternaFunctions_obj::__register()
{
	EtternaFunctions_obj _hx_dummy;
	EtternaFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EtternaFunctions",36,00,59,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EtternaFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &EtternaFunctions_obj::__SetStatic;
	__mClass->mMarkFunc = EtternaFunctions_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EtternaFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EtternaFunctions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EtternaFunctions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EtternaFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EtternaFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EtternaFunctions_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_4_boot)
HXDLIN(   4)		a1 = ((Float)0.254829592);
            	}
{
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_5_boot)
HXDLIN(   5)		a2 = ((Float)-0.284496736);
            	}
{
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_6_boot)
HXDLIN(   6)		a3 = ((Float)1.421413741);
            	}
{
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_7_boot)
HXDLIN(   7)		a4 = ((Float)-1.453152027);
            	}
{
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_8_boot)
HXDLIN(   8)		a5 = ((Float)1.061405429);
            	}
{
            	HX_STACKFRAME(&_hx_pos_35ae3dd307ef836b_9_boot)
HXDLIN(   9)		p = ((Float)0.3275911);
            	}
}

