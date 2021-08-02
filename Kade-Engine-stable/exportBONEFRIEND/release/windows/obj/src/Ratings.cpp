#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayStateChangeables
#include <PlayStateChangeables.h>
#endif
#ifndef INCLUDED_Ratings
#include <Ratings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_6_GenerateLetterRank,"Ratings","GenerateLetterRank",0x5d6db93f,"Ratings.GenerateLetterRank","Ratings.hx",6,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_96_CalculateRating,"Ratings","CalculateRating",0x7423532b,"Ratings.CalculateRating","Ratings.hx",96,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_121_checkRating,"Ratings","checkRating",0xba9f502d,"Ratings.checkRating","Ratings.hx",121,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_142_CalculateRanking,"Ratings","CalculateRanking",0xb7ac9fe8,"Ratings.CalculateRanking","Ratings.hx",142,0x142ad6e8)

void Ratings_obj::__construct() { }

Dynamic Ratings_obj::__CreateEmpty() { return new Ratings_obj; }

void *Ratings_obj::_hx_vtable = 0;

Dynamic Ratings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ratings_obj > _hx_result = new Ratings_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Ratings_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07eb05f2;
}

::String Ratings_obj::GenerateLetterRank(Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_6_GenerateLetterRank)
HXLINE(   7)		::String ranking = HX_("N/A",00,59,3b,00);
HXLINE(   8)		bool _hx_tmp;
HXDLIN(   8)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(   8)			_hx_tmp = !(::PlayState_obj::loadRep);
            		}
            		else {
HXLINE(   8)			_hx_tmp = false;
            		}
HXDLIN(   8)		if (_hx_tmp) {
HXLINE(   9)			ranking = HX_("BotPlay",7b,4f,d4,19);
            		}
HXLINE(  11)		bool _hx_tmp1;
HXDLIN(  11)		bool _hx_tmp2;
HXDLIN(  11)		bool _hx_tmp3;
HXDLIN(  11)		if ((::PlayState_obj::misses == 0)) {
HXLINE(  11)			_hx_tmp3 = (::PlayState_obj::bads == 0);
            		}
            		else {
HXLINE(  11)			_hx_tmp3 = false;
            		}
HXDLIN(  11)		if (_hx_tmp3) {
HXLINE(  11)			_hx_tmp2 = (::PlayState_obj::shits == 0);
            		}
            		else {
HXLINE(  11)			_hx_tmp2 = false;
            		}
HXDLIN(  11)		if (_hx_tmp2) {
HXLINE(  11)			_hx_tmp1 = (::PlayState_obj::goods == 0);
            		}
            		else {
HXLINE(  11)			_hx_tmp1 = false;
            		}
HXDLIN(  11)		if (_hx_tmp1) {
HXLINE(  12)			ranking = HX_("(MFC)",47,fa,21,3b);
            		}
            		else {
HXLINE(  13)			bool _hx_tmp;
HXDLIN(  13)			bool _hx_tmp1;
HXDLIN(  13)			bool _hx_tmp2;
HXDLIN(  13)			if ((::PlayState_obj::misses == 0)) {
HXLINE(  13)				_hx_tmp2 = (::PlayState_obj::bads == 0);
            			}
            			else {
HXLINE(  13)				_hx_tmp2 = false;
            			}
HXDLIN(  13)			if (_hx_tmp2) {
HXLINE(  13)				_hx_tmp1 = (::PlayState_obj::shits == 0);
            			}
            			else {
HXLINE(  13)				_hx_tmp1 = false;
            			}
HXDLIN(  13)			if (_hx_tmp1) {
HXLINE(  13)				_hx_tmp = (::PlayState_obj::goods >= 1);
            			}
            			else {
HXLINE(  13)				_hx_tmp = false;
            			}
HXDLIN(  13)			if (_hx_tmp) {
HXLINE(  14)				ranking = HX_("(GFC)",8d,b2,2a,37);
            			}
            			else {
HXLINE(  15)				if ((::PlayState_obj::misses == 0)) {
HXLINE(  16)					ranking = HX_("(FC)",24,e1,a5,1a);
            				}
            				else {
HXLINE(  17)					if ((::PlayState_obj::misses < 10)) {
HXLINE(  18)						ranking = HX_("(SDCB)",91,27,ae,f5);
            					}
            					else {
HXLINE(  20)						ranking = HX_("(Clear)",44,ec,96,bb);
            					}
            				}
            			}
            		}
HXLINE(  24)		::Array< bool > wifeConditions = ::Array_obj< bool >::__new(16)->init(0,(accuracy >= ((Float)99.9935)))->init(1,(accuracy >= ((Float)99.980)))->init(2,(accuracy >= ((Float)99.970)))->init(3,(accuracy >= ((Float)99.955)))->init(4,(accuracy >= ((Float)99.90)))->init(5,(accuracy >= ((Float)99.80)))->init(6,(accuracy >= ((Float)99.70)))->init(7,(accuracy >= 99))->init(8,(accuracy >= ((Float)96.50)))->init(9,(accuracy >= 93))->init(10,(accuracy >= 90))->init(11,(accuracy >= 85))->init(12,(accuracy >= 80))->init(13,(accuracy >= 70))->init(14,(accuracy >= 60))->init(15,(accuracy < 60));
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			int _g1 = wifeConditions->length;
HXDLIN(  43)			while((_g < _g1)){
HXLINE(  43)				_g = (_g + 1);
HXDLIN(  43)				int i = (_g - 1);
HXLINE(  45)				bool b = wifeConditions->__get(i);
HXLINE(  46)				if (b) {
HXLINE(  48)					switch((int)(i)){
            						case (int)0: {
HXLINE(  51)							ranking = (ranking + HX_(" AAAAA",61,aa,9f,63));
            						}
            						break;
            						case (int)1: {
HXLINE(  53)							ranking = (ranking + HX_(" AAAA:",5a,aa,9f,63));
            						}
            						break;
            						case (int)2: {
HXLINE(  55)							ranking = (ranking + HX_(" AAAA.",4e,aa,9f,63));
            						}
            						break;
            						case (int)3: {
HXLINE(  57)							ranking = (ranking + HX_(" AAAA",e0,f9,fa,97));
            						}
            						break;
            						case (int)4: {
HXLINE(  59)							ranking = (ranking + HX_(" AAA:",d9,f9,fa,97));
            						}
            						break;
            						case (int)5: {
HXLINE(  61)							ranking = (ranking + HX_(" AAA.",cd,f9,fa,97));
            						}
            						break;
            						case (int)6: {
HXLINE(  63)							ranking = (ranking + HX_(" AAA",41,5f,58,15));
            						}
            						break;
            						case (int)7: {
HXLINE(  65)							ranking = (ranking + HX_(" AA:",3a,5f,58,15));
            						}
            						break;
            						case (int)8: {
HXLINE(  67)							ranking = (ranking + HX_(" AA.",2e,5f,58,15));
            						}
            						break;
            						case (int)9: {
HXLINE(  69)							ranking = (ranking + HX_(" AA",00,81,18,00));
            						}
            						break;
            						case (int)10: {
HXLINE(  71)							ranking = (ranking + HX_(" A:",f9,80,18,00));
            						}
            						break;
            						case (int)11: {
HXLINE(  73)							ranking = (ranking + HX_(" A.",ed,80,18,00));
            						}
            						break;
            						case (int)12: {
HXLINE(  75)							ranking = (ranking + HX_(" A",21,1c,00,00));
            						}
            						break;
            						case (int)13: {
HXLINE(  77)							ranking = (ranking + HX_(" B",22,1c,00,00));
            						}
            						break;
            						case (int)14: {
HXLINE(  79)							ranking = (ranking + HX_(" C",23,1c,00,00));
            						}
            						break;
            						case (int)15: {
HXLINE(  81)							ranking = (ranking + HX_(" D",24,1c,00,00));
            						}
            						break;
            					}
HXLINE(  83)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE(  87)		if ((accuracy == 0)) {
HXLINE(  88)			ranking = HX_("N/A",00,59,3b,00);
            		}
            		else {
HXLINE(  89)			bool _hx_tmp;
HXDLIN(  89)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(  89)				_hx_tmp = !(::PlayState_obj::loadRep);
            			}
            			else {
HXLINE(  89)				_hx_tmp = false;
            			}
HXDLIN(  89)			if (_hx_tmp) {
HXLINE(  90)				ranking = HX_("BotPlay",7b,4f,d4,19);
            			}
            		}
HXLINE(  92)		return ranking;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ratings_obj,GenerateLetterRank,return )

::String Ratings_obj::CalculateRating(Float noteDiff, ::Dynamic customSafeZone){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_96_CalculateRating)
HXLINE(  98)		Float customTimeScale = ::Conductor_obj::timeScale;
HXLINE( 100)		if (::hx::IsNotNull( customSafeZone )) {
HXLINE( 101)			customTimeScale = (( (Float)(customSafeZone) ) / ( (Float)(166) ));
            		}
HXLINE( 110)		bool _hx_tmp;
HXDLIN( 110)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE( 110)			_hx_tmp = !(::PlayState_obj::loadRep);
            		}
            		else {
HXLINE( 110)			_hx_tmp = false;
            		}
HXDLIN( 110)		if (_hx_tmp) {
HXLINE( 111)			return HX_("sick",be,8c,53,4c);
            		}
HXLINE( 114)		::String rating = ::Ratings_obj::checkRating(noteDiff,customTimeScale);
HXLINE( 117)		return rating;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ratings_obj,CalculateRating,return )

::String Ratings_obj::checkRating(Float ms,Float ts){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_121_checkRating)
HXLINE( 122)		::String rating = HX_("sick",be,8c,53,4c);
HXLINE( 123)		bool _hx_tmp;
HXDLIN( 123)		if ((ms <= (( (Float)(166) ) * ts))) {
HXLINE( 123)			_hx_tmp = (ms >= (( (Float)(135) ) * ts));
            		}
            		else {
HXLINE( 123)			_hx_tmp = false;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXLINE( 124)			rating = HX_("shit",c0,cf,52,4c);
            		}
HXLINE( 125)		bool _hx_tmp1;
HXDLIN( 125)		if ((ms < (( (Float)(135) ) * ts))) {
HXLINE( 125)			_hx_tmp1 = (ms >= (( (Float)(90) ) * ts));
            		}
            		else {
HXLINE( 125)			_hx_tmp1 = false;
            		}
HXDLIN( 125)		if (_hx_tmp1) {
HXLINE( 126)			rating = HX_("bad",c5,b1,4a,00);
            		}
HXLINE( 127)		bool _hx_tmp2;
HXDLIN( 127)		if ((ms < (( (Float)(90) ) * ts))) {
HXLINE( 127)			_hx_tmp2 = (ms >= (( (Float)(45) ) * ts));
            		}
            		else {
HXLINE( 127)			_hx_tmp2 = false;
            		}
HXDLIN( 127)		if (_hx_tmp2) {
HXLINE( 128)			rating = HX_("good",3d,95,69,44);
            		}
HXLINE( 129)		bool _hx_tmp3;
HXDLIN( 129)		if ((ms < (( (Float)(45) ) * ts))) {
HXLINE( 129)			_hx_tmp3 = (ms >= (( (Float)(-45) ) * ts));
            		}
            		else {
HXLINE( 129)			_hx_tmp3 = false;
            		}
HXDLIN( 129)		if (_hx_tmp3) {
HXLINE( 130)			rating = HX_("sick",be,8c,53,4c);
            		}
HXLINE( 131)		bool _hx_tmp4;
HXDLIN( 131)		if ((ms > (( (Float)(-90) ) * ts))) {
HXLINE( 131)			_hx_tmp4 = (ms <= (( (Float)(-45) ) * ts));
            		}
            		else {
HXLINE( 131)			_hx_tmp4 = false;
            		}
HXDLIN( 131)		if (_hx_tmp4) {
HXLINE( 132)			rating = HX_("good",3d,95,69,44);
            		}
HXLINE( 133)		bool _hx_tmp5;
HXDLIN( 133)		if ((ms > (( (Float)(-135) ) * ts))) {
HXLINE( 133)			_hx_tmp5 = (ms <= (( (Float)(-90) ) * ts));
            		}
            		else {
HXLINE( 133)			_hx_tmp5 = false;
            		}
HXDLIN( 133)		if (_hx_tmp5) {
HXLINE( 134)			rating = HX_("bad",c5,b1,4a,00);
            		}
HXLINE( 135)		bool _hx_tmp6;
HXDLIN( 135)		if ((ms > (( (Float)(-166) ) * ts))) {
HXLINE( 135)			_hx_tmp6 = (ms <= (( (Float)(-135) ) * ts));
            		}
            		else {
HXLINE( 135)			_hx_tmp6 = false;
            		}
HXDLIN( 135)		if (_hx_tmp6) {
HXLINE( 136)			rating = HX_("shit",c0,cf,52,4c);
            		}
HXLINE( 137)		return rating;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ratings_obj,checkRating,return )

::String Ratings_obj::CalculateRanking(int score,int scoreDef,int nps,int maxNPS,Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_142_CalculateRanking)
HXLINE( 143)		::String _hx_tmp;
HXDLIN( 143)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic)) )) {
HXLINE( 144)			::String _hx_tmp1;
HXDLIN( 144)			bool _hx_tmp2;
HXDLIN( 144)			if (::PlayStateChangeables_obj::botPlay) {
HXLINE( 144)				_hx_tmp2 = ::PlayState_obj::loadRep;
            			}
            			else {
HXLINE( 144)				_hx_tmp2 = true;
            			}
HXDLIN( 144)			if (_hx_tmp2) {
HXLINE( 144)				_hx_tmp1 = HX_(" | ",44,b4,18,00);
            			}
            			else {
HXLINE( 144)				_hx_tmp1 = HX_("",00,00,00,00);
            			}
HXLINE( 143)			_hx_tmp = (((((HX_("NPS: ",b7,7e,61,1e) + nps) + HX_(" (Max ",24,31,a2,06)) + maxNPS) + HX_(")",29,00,00,00)) + _hx_tmp1);
            		}
            		else {
HXLINE( 143)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXLINE( 145)		::String _hx_tmp1;
HXDLIN( 145)		bool _hx_tmp2;
HXDLIN( 145)		if (::PlayStateChangeables_obj::botPlay) {
HXLINE( 145)			_hx_tmp2 = ::PlayState_obj::loadRep;
            		}
            		else {
HXLINE( 145)			_hx_tmp2 = true;
            		}
HXDLIN( 145)		if (_hx_tmp2) {
HXLINE( 145)			::String _hx_tmp;
HXDLIN( 145)			if ((::Conductor_obj::safeFrames != 10)) {
HXLINE( 145)				_hx_tmp = (((score + HX_(" (",08,1c,00,00)) + scoreDef) + HX_(")",29,00,00,00));
            			}
            			else {
HXLINE( 145)				_hx_tmp = (HX_("",00,00,00,00) + score);
            			}
HXLINE( 146)			::String _hx_tmp2;
HXDLIN( 146)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic)) )) {
HXLINE( 147)				::String _hx_tmp = ((HX_(" | Combo Breaks:",10,4a,42,f6) + ::PlayState_obj::misses) + HX_(" | Accuracy:",fd,ee,6b,1b));
HXLINE( 148)				::String _hx_tmp1;
HXDLIN( 148)				bool _hx_tmp3;
HXDLIN( 148)				if (::PlayStateChangeables_obj::botPlay) {
HXLINE( 148)					_hx_tmp3 = !(::PlayState_obj::loadRep);
            				}
            				else {
HXLINE( 148)					_hx_tmp3 = false;
            				}
HXDLIN( 148)				if (_hx_tmp3) {
HXLINE( 148)					_hx_tmp1 = HX_("N/A",00,59,3b,00);
            				}
            				else {
HXLINE( 148)					_hx_tmp1 = (::HelperFunctions_obj::truncateFloat(accuracy,2) + HX_(" %",05,1c,00,00));
            				}
HXLINE( 146)				_hx_tmp2 = (((_hx_tmp + _hx_tmp1) + HX_(" | ",44,b4,18,00)) + ::Ratings_obj::GenerateLetterRank(accuracy));
            			}
            			else {
HXLINE( 146)				_hx_tmp2 = HX_("",00,00,00,00);
            			}
HXLINE( 145)			_hx_tmp1 = ((HX_("Score:",c8,e8,ff,79) + _hx_tmp) + _hx_tmp2);
            		}
            		else {
HXLINE( 145)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
HXLINE( 142)		return (_hx_tmp + _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Ratings_obj,CalculateRanking,return )


Ratings_obj::Ratings_obj()
{
}

bool Ratings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"checkRating") ) { outValue = checkRating_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CalculateRating") ) { outValue = CalculateRating_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CalculateRanking") ) { outValue = CalculateRanking_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"GenerateLetterRank") ) { outValue = GenerateLetterRank_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Ratings_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Ratings_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Ratings_obj::__mClass;

static ::String Ratings_obj_sStaticFields[] = {
	HX_("GenerateLetterRank",67,0d,a4,31),
	HX_("CalculateRating",03,56,40,d1),
	HX_("checkRating",05,07,9c,9d),
	HX_("CalculateRanking",10,1a,f2,d3),
	::String(null())
};

void Ratings_obj::__register()
{
	Ratings_obj _hx_dummy;
	Ratings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Ratings",96,8d,b4,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ratings_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Ratings_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Ratings_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ratings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ratings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
