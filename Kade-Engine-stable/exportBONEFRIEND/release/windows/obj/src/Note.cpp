#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_16_new,"Note","new",0x1cc75604,"Note.new","Note.hx",16,0x1a8855ec)
static const int _hx_array_data_33e34412_1[] = {
	(int)6,
};
static const int _hx_array_data_33e34412_2[] = {
	(int)7,
};
static const int _hx_array_data_33e34412_3[] = {
	(int)5,
};
static const int _hx_array_data_33e34412_4[] = {
	(int)4,
};
static const int _hx_array_data_33e34412_5[] = {
	(int)4,
};
static const int _hx_array_data_33e34412_6[] = {
	(int)6,
};
static const int _hx_array_data_33e34412_7[] = {
	(int)7,
};
static const int _hx_array_data_33e34412_8[] = {
	(int)5,
};
static const int _hx_array_data_33e34412_9[] = {
	(int)0,
};
static const int _hx_array_data_33e34412_10[] = {
	(int)2,
};
static const int _hx_array_data_33e34412_11[] = {
	(int)3,
};
static const int _hx_array_data_33e34412_12[] = {
	(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_194_update,"Note","update",0xca3a1ee5,"Note.update","Note.hx",194,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_32_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",32,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_33_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",33,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_34_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",34,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_35_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",35,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_36_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",36,0x1a8855ec)

void Note_obj::__construct(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inCharter){
            		 ::Dynamic sustainNote = __o_sustainNote;
            		if (::hx::IsNull(__o_sustainNote)) sustainNote = false;
            		 ::Dynamic inCharter = __o_inCharter;
            		if (::hx::IsNull(__o_inCharter)) inCharter = false;
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_16_new)
HXLINE(  38)		this->rating = HX_("shit",c0,cf,52,4c);
HXLINE(  30)		this->noteScore = ((Float)1);
HXLINE(  28)		this->isSustainNote = false;
HXLINE(  27)		this->sustainLength = ((Float)0);
HXLINE(  26)		this->modifiedByLua = false;
HXLINE(  24)		this->wasGoodHit = false;
HXLINE(  23)		this->tooLate = false;
HXLINE(  22)		this->canBeHit = false;
HXLINE(  21)		this->noteData = 0;
HXLINE(  20)		this->mustPress = false;
HXLINE(  18)		this->strumTime = ((Float)0);
HXLINE(  42)		super::__construct(null(),null(),null());
HXLINE(  44)		if (::hx::IsNull( prevNote )) {
HXLINE(  45)			prevNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  47)		this->prevNote = prevNote;
HXLINE(  48)		this->isSustainNote = ( (bool)(sustainNote) );
HXLINE(  50)		this->set_x((this->x + 50));
HXLINE(  52)		this->set_y((this->y - ( (Float)(2000) )));
HXLINE(  53)		if (( (bool)(inCharter) )) {
HXLINE(  54)			this->strumTime = strumTime;
            		}
            		else {
HXLINE(  56)			this->strumTime = ( (Float)(::Math_obj::round(strumTime)) );
            		}
HXLINE(  58)		if ((this->strumTime < 0)) {
HXLINE(  59)			this->strumTime = ( (Float)(0) );
            		}
HXLINE(  61)		this->noteData = noteData;
HXLINE(  63)		::String daStage = ::PlayState_obj::curStage;
HXLINE(  66)		::String noteTypeCheck = HX_("normal",27,72,69,30);
HXLINE(  68)		if (::hx::IsNull( ::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic) )) {
HXLINE(  69)			if ((::PlayState_obj::storyWeek == 6)) {
HXLINE(  69)				noteTypeCheck = HX_("pixel",86,c6,a3,c2);
            			}
            		}
            		else {
HXLINE(  70)			noteTypeCheck = ( (::String)(::PlayState_obj::SONG->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic)) );
            		}
HXLINE(  72)		if ((noteTypeCheck == HX_("pixel",86,c6,a3,c2))) {
HXLINE(  75)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/arrows-pixels",b7,c3,c7,09)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("week6",c2,95,be,c7)),true,17,17,null(),null());
HXLINE(  77)			this->animation->add(HX_("greenScroll",30,4f,fe,9e),::Array_obj< int >::fromData( _hx_array_data_33e34412_1,1),null(),null(),null(),null());
HXLINE(  78)			this->animation->add(HX_("redScroll",3e,78,c3,3a),::Array_obj< int >::fromData( _hx_array_data_33e34412_2,1),null(),null(),null(),null());
HXLINE(  79)			this->animation->add(HX_("blueScroll",47,7e,59,a2),::Array_obj< int >::fromData( _hx_array_data_33e34412_3,1),null(),null(),null(),null());
HXLINE(  80)			this->animation->add(HX_("purpleScroll",69,97,67,99),::Array_obj< int >::fromData( _hx_array_data_33e34412_4,1),null(),null(),null(),null());
HXLINE(  82)			if (this->isSustainNote) {
HXLINE(  84)				this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/arrowEnds",08,21,6c,fd)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("week6",c2,95,be,c7)),true,7,6,null(),null());
HXLINE(  86)				this->animation->add(HX_("purpleholdend",40,d5,15,5b),::Array_obj< int >::fromData( _hx_array_data_33e34412_5,1),null(),null(),null(),null());
HXLINE(  87)				this->animation->add(HX_("greenholdend",99,eb,5f,39),::Array_obj< int >::fromData( _hx_array_data_33e34412_6,1),null(),null(),null(),null());
HXLINE(  88)				this->animation->add(HX_("redholdend",cb,ae,1e,ea),::Array_obj< int >::fromData( _hx_array_data_33e34412_7,1),null(),null(),null(),null());
HXLINE(  89)				this->animation->add(HX_("blueholdend",a2,f0,cd,25),::Array_obj< int >::fromData( _hx_array_data_33e34412_8,1),null(),null(),null(),null());
HXLINE(  91)				this->animation->add(HX_("purplehold",7b,8d,da,cd),::Array_obj< int >::fromData( _hx_array_data_33e34412_9,1),null(),null(),null(),null());
HXLINE(  92)				this->animation->add(HX_("greenhold",82,f5,c1,bc),::Array_obj< int >::fromData( _hx_array_data_33e34412_10,1),null(),null(),null(),null());
HXLINE(  93)				this->animation->add(HX_("redhold",10,1f,bf,bf),::Array_obj< int >::fromData( _hx_array_data_33e34412_11,1),null(),null(),null(),null());
HXLINE(  94)				this->animation->add(HX_("bluehold",d9,60,aa,a4),::Array_obj< int >::fromData( _hx_array_data_33e34412_12,1),null(),null(),null(),null());
            			}
HXLINE(  97)			Float _hx_tmp = this->get_width();
HXDLIN(  97)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE(  98)			this->updateHitbox();
            		}
            		else {
HXLINE( 100)			::String library = null();
HXDLIN( 100)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 100)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 102)			this->animation->addByPrefix(HX_("greenScroll",30,4f,fe,9e),HX_("green instance 1",23,a5,e7,97),null(),null(),null(),null());
HXLINE( 103)			this->animation->addByPrefix(HX_("redScroll",3e,78,c3,3a),HX_("red instance 1",55,e9,cc,6c),null(),null(),null(),null());
HXLINE( 104)			this->animation->addByPrefix(HX_("blueScroll",47,7e,59,a2),HX_("blue instance 1",ac,62,d7,82),null(),null(),null(),null());
HXLINE( 105)			this->animation->addByPrefix(HX_("purpleScroll",69,97,67,99),HX_("purple instance 1",4a,ee,30,bd),null(),null(),null(),null());
HXLINE( 107)			this->animation->addByPrefix(HX_("purpleholdend",40,d5,15,5b),HX_("pruple end hold instance 1",58,91,88,60),null(),null(),null(),null());
HXLINE( 108)			this->animation->addByPrefix(HX_("greenholdend",99,eb,5f,39),HX_("green hold end instance 1",ef,3a,b5,b1),null(),null(),null(),null());
HXLINE( 109)			this->animation->addByPrefix(HX_("redholdend",cb,ae,1e,ea),HX_("red hold end instance 1",7d,e0,92,ee),null(),null(),null(),null());
HXLINE( 110)			this->animation->addByPrefix(HX_("blueholdend",a2,f0,cd,25),HX_("blue hold end instance 1",46,04,40,53),null(),null(),null(),null());
HXLINE( 112)			this->animation->addByPrefix(HX_("purplehold",7b,8d,da,cd),HX_("purple hold piece instance 1",f5,92,b4,c5),null(),null(),null(),null());
HXLINE( 113)			this->animation->addByPrefix(HX_("greenhold",82,f5,c1,bc),HX_("green hold piece instance 1",bc,88,f1,ed),null(),null(),null(),null());
HXLINE( 114)			this->animation->addByPrefix(HX_("redhold",10,1f,bf,bf),HX_("red hold piece instance 1",ca,2d,ae,59),null(),null(),null(),null());
HXLINE( 115)			this->animation->addByPrefix(HX_("bluehold",d9,60,aa,a4),HX_("blue hold piece instance 1",d3,95,c2,1e),null(),null(),null(),null());
HXLINE( 117)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE( 118)			this->updateHitbox();
HXLINE( 119)			this->set_antialiasing(true);
            		}
HXLINE( 122)		switch((int)(noteData)){
            			case (int)0: {
HXLINE( 125)				this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(0) ))));
HXLINE( 126)				this->animation->play(HX_("purpleScroll",69,97,67,99),null(),null(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 128)				this->set_x((this->x + ::Note_obj::swagWidth));
HXLINE( 129)				this->animation->play(HX_("blueScroll",47,7e,59,a2),null(),null(),null());
            			}
            			break;
            			case (int)2: {
HXLINE( 131)				this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(2) ))));
HXLINE( 132)				this->animation->play(HX_("greenScroll",30,4f,fe,9e),null(),null(),null());
            			}
            			break;
            			case (int)3: {
HXLINE( 134)				this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(3) ))));
HXLINE( 135)				this->animation->play(HX_("redScroll",3e,78,c3,3a),null(),null(),null());
            			}
            			break;
            		}
HXLINE( 142)		bool _hx_tmp;
HXDLIN( 142)		if (this->isSustainNote) {
HXLINE( 142)			_hx_tmp = ::hx::IsNotNull( prevNote );
            		}
            		else {
HXLINE( 142)			_hx_tmp = false;
            		}
HXDLIN( 142)		if (_hx_tmp) {
HXLINE( 145)			this->set_alpha(((Float)0.6));
HXLINE( 147)			Float _hx_tmp = this->x;
HXDLIN( 147)			this->set_x((_hx_tmp + (this->get_width() / ( (Float)(2) ))));
HXLINE( 149)			switch((int)(noteData)){
            				case (int)0: {
HXLINE( 158)					this->animation->play(HX_("purpleholdend",40,d5,15,5b),null(),null(),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 156)					this->animation->play(HX_("blueholdend",a2,f0,cd,25),null(),null(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 152)					this->animation->play(HX_("greenholdend",99,eb,5f,39),null(),null(),null());
            				}
            				break;
            				case (int)3: {
HXLINE( 154)					this->animation->play(HX_("redholdend",cb,ae,1e,ea),null(),null(),null());
            				}
            				break;
            			}
HXLINE( 161)			this->updateHitbox();
HXLINE( 163)			Float _hx_tmp1 = this->x;
HXDLIN( 163)			this->set_x((_hx_tmp1 - (this->get_width() / ( (Float)(2) ))));
HXLINE( 165)			if (::StringTools_obj::startsWith(::PlayState_obj::curStage,HX_("school",74,b8,c8,40))) {
HXLINE( 166)				this->set_x((this->x + 30));
            			}
HXLINE( 168)			if (prevNote->isSustainNote) {
HXLINE( 170)				switch((int)(prevNote->noteData)){
            					case (int)0: {
HXLINE( 173)						prevNote->animation->play(HX_("purplehold",7b,8d,da,cd),null(),null(),null());
            					}
            					break;
            					case (int)1: {
HXLINE( 175)						prevNote->animation->play(HX_("bluehold",d9,60,aa,a4),null(),null(),null());
            					}
            					break;
            					case (int)2: {
HXLINE( 177)						prevNote->animation->play(HX_("greenhold",82,f5,c1,bc),null(),null(),null());
            					}
            					break;
            					case (int)3: {
HXLINE( 179)						prevNote->animation->play(HX_("redhold",10,1f,bf,bf),null(),null(),null());
            					}
            					break;
            				}
HXLINE( 183)				if (::hx::IsNotEq( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic),1 )) {
HXLINE( 184)					 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 184)					fh->set_y((fh->y * (((::Conductor_obj::stepCrochet / ( (Float)(100) )) * ((Float)1.5)) * ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic)) ))));
            				}
            				else {
HXLINE( 186)					 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 186)					fh->set_y((fh->y * (((::Conductor_obj::stepCrochet / ( (Float)(100) )) * ((Float)1.5)) * ( (Float)(::PlayState_obj::SONG->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ))));
            				}
HXLINE( 187)				prevNote->updateHitbox();
            			}
            		}
            	}

Dynamic Note_obj::__CreateEmpty() { return new Note_obj; }

void *Note_obj::_hx_vtable = 0;

Dynamic Note_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Note_obj > _hx_result = new Note_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Note_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x08363a36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08363a36;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Note_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_194_update)
HXLINE( 195)		this->super::update(elapsed);
HXLINE( 197)		if (this->mustPress) {
HXLINE( 200)			if (this->isSustainNote) {
HXLINE( 202)				bool _hx_tmp;
HXDLIN( 202)				if ((this->strumTime > (::Conductor_obj::songPosition - (::Conductor_obj::safeZoneOffset * ((Float)1.5))))) {
HXLINE( 202)					_hx_tmp = (this->strumTime < (::Conductor_obj::songPosition + (::Conductor_obj::safeZoneOffset * ((Float)0.5))));
            				}
            				else {
HXLINE( 202)					_hx_tmp = false;
            				}
HXDLIN( 202)				if (_hx_tmp) {
HXLINE( 204)					this->canBeHit = true;
            				}
            				else {
HXLINE( 206)					this->canBeHit = false;
            				}
            			}
            			else {
HXLINE( 210)				bool _hx_tmp;
HXDLIN( 210)				if ((this->strumTime > (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 210)					_hx_tmp = (this->strumTime < (::Conductor_obj::songPosition + ::Conductor_obj::safeZoneOffset));
            				}
            				else {
HXLINE( 210)					_hx_tmp = false;
            				}
HXDLIN( 210)				if (_hx_tmp) {
HXLINE( 212)					this->canBeHit = true;
            				}
            				else {
HXLINE( 214)					this->canBeHit = false;
            				}
            			}
HXLINE( 217)			bool _hx_tmp;
HXDLIN( 217)			if ((this->strumTime < (::Conductor_obj::songPosition - (::Conductor_obj::safeZoneOffset * ::Conductor_obj::timeScale)))) {
HXLINE( 217)				_hx_tmp = !(this->wasGoodHit);
            			}
            			else {
HXLINE( 217)				_hx_tmp = false;
            			}
HXDLIN( 217)			if (_hx_tmp) {
HXLINE( 218)				this->tooLate = true;
            			}
            		}
            		else {
HXLINE( 222)			this->canBeHit = false;
HXLINE( 224)			if ((this->strumTime <= ::Conductor_obj::songPosition)) {
HXLINE( 225)				this->wasGoodHit = true;
            			}
            		}
HXLINE( 228)		if (this->tooLate) {
HXLINE( 230)			if ((this->alpha > ((Float)0.3))) {
HXLINE( 231)				this->set_alpha(((Float)0.3));
            			}
            		}
            	}


Float Note_obj::swagWidth;

int Note_obj::PURP_NOTE;

int Note_obj::GREEN_NOTE;

int Note_obj::BLUE_NOTE;

int Note_obj::RED_NOTE;


::hx::ObjectPtr< Note_obj > Note_obj::__new(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inCharter) {
	::hx::ObjectPtr< Note_obj > __this = new Note_obj();
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inCharter);
	return __this;
}

::hx::ObjectPtr< Note_obj > Note_obj::__alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inCharter) {
	Note_obj *__this = (Note_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Note_obj), true, "Note"));
	*(void **)__this = Note_obj::_hx_vtable;
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inCharter);
	return __this;
}

Note_obj::Note_obj()
{
}

void Note_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Note);
	HX_MARK_MEMBER_NAME(strumTime,"strumTime");
	HX_MARK_MEMBER_NAME(mustPress,"mustPress");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(canBeHit,"canBeHit");
	HX_MARK_MEMBER_NAME(tooLate,"tooLate");
	HX_MARK_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_MARK_MEMBER_NAME(prevNote,"prevNote");
	HX_MARK_MEMBER_NAME(modifiedByLua,"modifiedByLua");
	HX_MARK_MEMBER_NAME(sustainLength,"sustainLength");
	HX_MARK_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_MARK_MEMBER_NAME(noteScore,"noteScore");
	HX_MARK_MEMBER_NAME(rating,"rating");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Note_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strumTime,"strumTime");
	HX_VISIT_MEMBER_NAME(mustPress,"mustPress");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(canBeHit,"canBeHit");
	HX_VISIT_MEMBER_NAME(tooLate,"tooLate");
	HX_VISIT_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_VISIT_MEMBER_NAME(prevNote,"prevNote");
	HX_VISIT_MEMBER_NAME(modifiedByLua,"modifiedByLua");
	HX_VISIT_MEMBER_NAME(sustainLength,"sustainLength");
	HX_VISIT_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_VISIT_MEMBER_NAME(noteScore,"noteScore");
	HX_VISIT_MEMBER_NAME(rating,"rating");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Note_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"rating") ) { return ::hx::Val( rating ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { return ::hx::Val( tooLate ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { return ::hx::Val( canBeHit ); }
		if (HX_FIELD_EQ(inName,"prevNote") ) { return ::hx::Val( prevNote ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"mustPress") ) { return ::hx::Val( mustPress ); }
		if (HX_FIELD_EQ(inName,"noteScore") ) { return ::hx::Val( noteScore ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { return ::hx::Val( wasGoodHit ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"modifiedByLua") ) { return ::hx::Val( modifiedByLua ); }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { return ::hx::Val( sustainLength ); }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { return ::hx::Val( isSustainNote ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Note_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { outValue = ( RED_NOTE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { outValue = ( swagWidth ); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { outValue = ( PURP_NOTE ); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { outValue = ( BLUE_NOTE ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { outValue = ( GREEN_NOTE ); return true; }
	}
	return false;
}

::hx::Val Note_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"rating") ) { rating=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { tooLate=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { canBeHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevNote") ) { prevNote=inValue.Cast<  ::Note >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustPress") ) { mustPress=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteScore") ) { noteScore=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { wasGoodHit=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"modifiedByLua") ) { modifiedByLua=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { sustainLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { isSustainNote=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Note_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { RED_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { swagWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { PURP_NOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { BLUE_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { GREEN_NOTE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Note_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	outFields->push(HX_("mustPress",ba,d4,17,60));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("canBeHit",20,a6,d1,1e));
	outFields->push(HX_("tooLate",da,77,57,55));
	outFields->push(HX_("wasGoodHit",ed,7a,9b,17));
	outFields->push(HX_("prevNote",85,f8,d7,11));
	outFields->push(HX_("modifiedByLua",18,c8,92,a0));
	outFields->push(HX_("sustainLength",e9,a1,9c,7c));
	outFields->push(HX_("isSustainNote",6b,1e,77,c3));
	outFields->push(HX_("noteScore",00,be,66,b6));
	outFields->push(HX_("rating",1d,34,8a,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Note_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Note_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,mustPress),HX_("mustPress",ba,d4,17,60)},
	{::hx::fsInt,(int)offsetof(Note_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsBool,(int)offsetof(Note_obj,canBeHit),HX_("canBeHit",20,a6,d1,1e)},
	{::hx::fsBool,(int)offsetof(Note_obj,tooLate),HX_("tooLate",da,77,57,55)},
	{::hx::fsBool,(int)offsetof(Note_obj,wasGoodHit),HX_("wasGoodHit",ed,7a,9b,17)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,prevNote),HX_("prevNote",85,f8,d7,11)},
	{::hx::fsBool,(int)offsetof(Note_obj,modifiedByLua),HX_("modifiedByLua",18,c8,92,a0)},
	{::hx::fsFloat,(int)offsetof(Note_obj,sustainLength),HX_("sustainLength",e9,a1,9c,7c)},
	{::hx::fsBool,(int)offsetof(Note_obj,isSustainNote),HX_("isSustainNote",6b,1e,77,c3)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteScore),HX_("noteScore",00,be,66,b6)},
	{::hx::fsString,(int)offsetof(Note_obj,rating),HX_("rating",1d,34,8a,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Note_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Note_obj::swagWidth,HX_("swagWidth",1c,87,d9,a6)},
	{::hx::fsInt,(void *) &Note_obj::PURP_NOTE,HX_("PURP_NOTE",ee,97,79,1e)},
	{::hx::fsInt,(void *) &Note_obj::GREEN_NOTE,HX_("GREEN_NOTE",4e,c6,8e,9c)},
	{::hx::fsInt,(void *) &Note_obj::BLUE_NOTE,HX_("BLUE_NOTE",f7,42,53,a9)},
	{::hx::fsInt,(void *) &Note_obj::RED_NOTE,HX_("RED_NOTE",00,15,92,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Note_obj_sMemberFields[] = {
	HX_("strumTime",f6,2d,21,f4),
	HX_("mustPress",ba,d4,17,60),
	HX_("noteData",3c,7b,96,51),
	HX_("canBeHit",20,a6,d1,1e),
	HX_("tooLate",da,77,57,55),
	HX_("wasGoodHit",ed,7a,9b,17),
	HX_("prevNote",85,f8,d7,11),
	HX_("modifiedByLua",18,c8,92,a0),
	HX_("sustainLength",e9,a1,9c,7c),
	HX_("isSustainNote",6b,1e,77,c3),
	HX_("noteScore",00,be,66,b6),
	HX_("rating",1d,34,8a,bb),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Note_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_MARK_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Note_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_VISIT_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
};

#endif

::hx::Class Note_obj::__mClass;

static ::String Note_obj_sStaticFields[] = {
	HX_("swagWidth",1c,87,d9,a6),
	HX_("PURP_NOTE",ee,97,79,1e),
	HX_("GREEN_NOTE",4e,c6,8e,9c),
	HX_("BLUE_NOTE",f7,42,53,a9),
	HX_("RED_NOTE",00,15,92,9e),
	::String(null())
};

void Note_obj::__register()
{
	Note_obj _hx_dummy;
	Note_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Note",12,44,e3,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Note_obj::__GetStatic;
	__mClass->mSetStaticField = &Note_obj::__SetStatic;
	__mClass->mMarkFunc = Note_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Note_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Note_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Note_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Note_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Note_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Note_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Note_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_32_boot)
HXDLIN(  32)		swagWidth = ((Float)112.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_33_boot)
HXDLIN(  33)		PURP_NOTE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_34_boot)
HXDLIN(  34)		GREEN_NOTE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_35_boot)
HXDLIN(  35)		BLUE_NOTE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_36_boot)
HXDLIN(  36)		RED_NOTE = 3;
            	}
}

