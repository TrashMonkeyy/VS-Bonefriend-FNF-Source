#include <hxcpp.h>

#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OffsetMenu
#include <OffsetMenu.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_14eb50a9d1a4948f_637_new,"OffsetMenu","new",0x7b26d4e4,"OffsetMenu.new","Options.hx",637,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_14eb50a9d1a4948f_643_press,"OffsetMenu","press",0xe1888107,"OffsetMenu.press","Options.hx",643,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_14eb50a9d1a4948f_659_updateDisplay,"OffsetMenu","updateDisplay",0xd3a7e0bd,"OffsetMenu.updateDisplay","Options.hx",659,0x9d9a0240)

void OffsetMenu_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_14eb50a9d1a4948f_637_new)
HXLINE( 638)		super::__construct();
HXLINE( 639)		this->description = desc;
            	}

Dynamic OffsetMenu_obj::__CreateEmpty() { return new OffsetMenu_obj; }

void *OffsetMenu_obj::_hx_vtable = 0;

Dynamic OffsetMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OffsetMenu_obj > _hx_result = new OffsetMenu_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OffsetMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x52e4f5b2;
	}
}

bool OffsetMenu_obj::press(){
            	HX_GC_STACKFRAME(&_hx_pos_14eb50a9d1a4948f_643_press)
HXLINE( 644)		::haxe::Log_obj::trace(HX_("switch",f4,49,79,c5),::hx::SourceInfo(HX_("source_bonefriend/Options.hx",29,70,dc,9b),644,HX_("OffsetMenu",f2,d2,21,3b),HX_("press",83,53,88,c8)));
HXLINE( 645)		::String poop = ::Highscore_obj::formatSong(HX_("Tutorial",be,4b,67,5c),1);
HXLINE( 647)		::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop,HX_("Tutorial",be,4b,67,5c));
HXLINE( 648)		::PlayState_obj::isStoryMode = false;
HXLINE( 649)		::PlayState_obj::storyDifficulty = 0;
HXLINE( 650)		::PlayState_obj::storyWeek = 0;
HXLINE( 651)		::PlayState_obj::offsetTesting = true;
HXLINE( 652)		::haxe::Log_obj::trace((HX_("CUR WEEK",b4,9a,a0,36) + ::PlayState_obj::storyWeek),::hx::SourceInfo(HX_("source_bonefriend/Options.hx",29,70,dc,9b),652,HX_("OffsetMenu",f2,d2,21,3b),HX_("press",83,53,88,c8)));
HXLINE( 653)		{
HXLINE( 653)			 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 653)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 653)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 654)		return false;
            	}


::String OffsetMenu_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_14eb50a9d1a4948f_659_updateDisplay)
HXDLIN( 659)		return HX_("Time your offset",ed,a5,d2,d4);
            	}



::hx::ObjectPtr< OffsetMenu_obj > OffsetMenu_obj::__new(::String desc) {
	::hx::ObjectPtr< OffsetMenu_obj > __this = new OffsetMenu_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< OffsetMenu_obj > OffsetMenu_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	OffsetMenu_obj *__this = (OffsetMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OffsetMenu_obj), true, "OffsetMenu"));
	*(void **)__this = OffsetMenu_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

OffsetMenu_obj::OffsetMenu_obj()
{
}

::hx::Val OffsetMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *OffsetMenu_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OffsetMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String OffsetMenu_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class OffsetMenu_obj::__mClass;

void OffsetMenu_obj::__register()
{
	OffsetMenu_obj _hx_dummy;
	OffsetMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OffsetMenu",f2,d2,21,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OffsetMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OffsetMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OffsetMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OffsetMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

