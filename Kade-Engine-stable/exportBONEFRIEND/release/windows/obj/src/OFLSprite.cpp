#include <hxcpp.h>

#ifndef INCLUDED_OFLSprite
#include <OFLSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e99cfc1fad927451_9_new,"OFLSprite","new",0x92e7f32c,"OFLSprite.new","OFLSprite.hx",9,0x94bf95c4)
HX_LOCAL_STACK_FRAME(_hx_pos_e99cfc1fad927451_28_update,"OFLSprite","update",0xc90a2abd,"OFLSprite.update","OFLSprite.hx",28,0x94bf95c4)
HX_LOCAL_STACK_FRAME(_hx_pos_e99cfc1fad927451_37_updateDisplay,"OFLSprite","updateDisplay",0xd5c8a905,"OFLSprite.updateDisplay","OFLSprite.hx",37,0x94bf95c4)

void OFLSprite_obj::__construct( ::Dynamic x, ::Dynamic y,int width,int height, ::openfl::display::Sprite Sprite){
            	HX_STACKFRAME(&_hx_pos_e99cfc1fad927451_9_new)
HXLINE(  24)		this->_frameCount = 0;
HXLINE(  15)		super::__construct(x,y,null());
HXLINE(  17)		this->makeGraphic(width,height,0,null(),null());
HXLINE(  19)		this->flSprite = Sprite;
HXLINE(  21)		this->get_pixels()->draw(this->flSprite,null(),null(),null(),null(),null());
            	}

Dynamic OFLSprite_obj::__CreateEmpty() { return new OFLSprite_obj; }

void *OFLSprite_obj::_hx_vtable = 0;

Dynamic OFLSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OFLSprite_obj > _hx_result = new OFLSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool OFLSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7ede7496;
	}
}

void OFLSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_e99cfc1fad927451_28_update)
HXDLIN(  28)		if ((this->_frameCount != 2)) {
HXLINE(  30)			this->get_pixels()->draw(this->flSprite,null(),null(),null(),null(),null());
HXLINE(  31)			this->_frameCount++;
            		}
            	}


void OFLSprite_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_e99cfc1fad927451_37_updateDisplay)
HXDLIN(  37)		this->get_pixels()->draw(this->flSprite,null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(OFLSprite_obj,updateDisplay,(void))


::hx::ObjectPtr< OFLSprite_obj > OFLSprite_obj::__new( ::Dynamic x, ::Dynamic y,int width,int height, ::openfl::display::Sprite Sprite) {
	::hx::ObjectPtr< OFLSprite_obj > __this = new OFLSprite_obj();
	__this->__construct(x,y,width,height,Sprite);
	return __this;
}

::hx::ObjectPtr< OFLSprite_obj > OFLSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic x, ::Dynamic y,int width,int height, ::openfl::display::Sprite Sprite) {
	OFLSprite_obj *__this = (OFLSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OFLSprite_obj), true, "OFLSprite"));
	*(void **)__this = OFLSprite_obj::_hx_vtable;
	__this->__construct(x,y,width,height,Sprite);
	return __this;
}

OFLSprite_obj::OFLSprite_obj()
{
}

void OFLSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OFLSprite);
	HX_MARK_MEMBER_NAME(flSprite,"flSprite");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OFLSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flSprite,"flSprite");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OFLSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flSprite") ) { return ::hx::Val( flSprite ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return ::hx::Val( _frameCount ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OFLSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flSprite") ) { flSprite=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OFLSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flSprite",eb,e1,51,4d));
	outFields->push(HX_("_frameCount",81,46,13,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OFLSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(OFLSprite_obj,flSprite),HX_("flSprite",eb,e1,51,4d)},
	{::hx::fsInt,(int)offsetof(OFLSprite_obj,_frameCount),HX_("_frameCount",81,46,13,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OFLSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String OFLSprite_obj_sMemberFields[] = {
	HX_("flSprite",eb,e1,51,4d),
	HX_("_frameCount",81,46,13,00),
	HX_("update",09,86,05,87),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class OFLSprite_obj::__mClass;

void OFLSprite_obj::__register()
{
	OFLSprite_obj _hx_dummy;
	OFLSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OFLSprite",3a,2d,d4,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OFLSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OFLSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OFLSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OFLSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

