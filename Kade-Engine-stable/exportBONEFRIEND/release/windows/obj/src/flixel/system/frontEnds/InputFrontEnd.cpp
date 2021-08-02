#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ff18a02f3055fb45_7_new,"flixel.system.frontEnds.InputFrontEnd","new",0x5285aa54,"flixel.system.frontEnds.InputFrontEnd.new","flixel/system/frontEnds/InputFrontEnd.hx",7,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_28_add_flixel_input_actions_FlxActionManager,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_actions_FlxActionManager",0xc1a93055,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_actions_FlxActionManager","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_28_add_flixel_input_gamepad_FlxGamepadManager,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_gamepad_FlxGamepadManager",0x189964b2,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_gamepad_FlxGamepadManager","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_28_add_flixel_input_touch_FlxTouchManager,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_touch_FlxTouchManager",0x760d6272,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_touch_FlxTouchManager","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_73_replace_flixel_input_mouse_FlxMouse,"flixel.system.frontEnds.InputFrontEnd","replace_flixel_input_mouse_FlxMouse",0x59a38f0e,"flixel.system.frontEnds.InputFrontEnd.replace_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",73,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_28_add_flixel_input_mouse_FlxMouse,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_mouse_FlxMouse",0xe1e4487b,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_28_add_flixel_input_keyboard_FlxKeyboard,"flixel.system.frontEnds.InputFrontEnd","add_flixel_input_keyboard_FlxKeyboard",0xa934da2f,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_keyboard_FlxKeyboard","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_96_reset,"flixel.system.frontEnds.InputFrontEnd","reset",0x8c9b88c3,"flixel.system.frontEnds.InputFrontEnd.reset","flixel/system/frontEnds/InputFrontEnd.hx",96,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_108_update,"flixel.system.frontEnds.InputFrontEnd","update",0xfa095c95,"flixel.system.frontEnds.InputFrontEnd.update","flixel/system/frontEnds/InputFrontEnd.hx",108,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_117_onFocus,"flixel.system.frontEnds.InputFrontEnd","onFocus",0xcb1ee22d,"flixel.system.frontEnds.InputFrontEnd.onFocus","flixel/system/frontEnds/InputFrontEnd.hx",117,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_126_onFocusLost,"flixel.system.frontEnds.InputFrontEnd","onFocusLost",0x5cd0d2b1,"flixel.system.frontEnds.InputFrontEnd.onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",126,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_136_onStateSwitch,"flixel.system.frontEnds.InputFrontEnd","onStateSwitch",0x594606fa,"flixel.system.frontEnds.InputFrontEnd.onStateSwitch","flixel/system/frontEnds/InputFrontEnd.hx",136,0x759f67bd)
HX_LOCAL_STACK_FRAME(_hx_pos_ff18a02f3055fb45_144_destroy,"flixel.system.frontEnds.InputFrontEnd","destroy",0x54de10ee,"flixel.system.frontEnds.InputFrontEnd.destroy","flixel/system/frontEnds/InputFrontEnd.hx",144,0x759f67bd)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void InputFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_7_new)
HXLINE(  18)		this->resetOnStateSwitch = true;
HXLINE(  12)		this->list = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic InputFrontEnd_obj::__CreateEmpty() { return new InputFrontEnd_obj; }

void *InputFrontEnd_obj::_hx_vtable = 0;

Dynamic InputFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InputFrontEnd_obj > _hx_result = new InputFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c30b64a;
}

 ::flixel::input::actions::FlxActionManager InputFrontEnd_obj::add_flixel_input_actions_FlxActionManager( ::flixel::input::actions::FlxActionManager Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_28_add_flixel_input_actions_FlxActionManager)
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				::Dynamic input = _g1->__get(_g);
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  32)				bool Simple = true;
HXDLIN(  32)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  32)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  34)					return Input;
            				}
            			}
            		}
HXLINE(  38)		this->list->push(Input);
HXLINE(  39)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_actions_FlxActionManager,return )

 ::flixel::input::gamepad::FlxGamepadManager InputFrontEnd_obj::add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_28_add_flixel_input_gamepad_FlxGamepadManager)
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				::Dynamic input = _g1->__get(_g);
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  32)				bool Simple = true;
HXDLIN(  32)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  32)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  34)					return Input;
            				}
            			}
            		}
HXLINE(  38)		this->list->push(Input);
HXLINE(  39)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_gamepad_FlxGamepadManager,return )

 ::flixel::input::touch::FlxTouchManager InputFrontEnd_obj::add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_28_add_flixel_input_touch_FlxTouchManager)
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				::Dynamic input = _g1->__get(_g);
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  32)				bool Simple = true;
HXDLIN(  32)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  32)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  34)					return Input;
            				}
            			}
            		}
HXLINE(  38)		this->list->push(Input);
HXLINE(  39)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_touch_FlxTouchManager,return )

 ::flixel::input::mouse::FlxMouse InputFrontEnd_obj::replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old, ::flixel::input::mouse::FlxMouse New){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_73_replace_flixel_input_mouse_FlxMouse)
HXLINE(  74)		int i = 0;
HXLINE(  75)		bool success = false;
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				::Dynamic input = _g1->__get(_g);
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  78)				if (::hx::IsInstanceEq( input,Old )) {
HXLINE(  80)					this->list[i] = New;
HXLINE(  81)					success = true;
HXLINE(  82)					goto _hx_goto_7;
            				}
HXLINE(  84)				i = (i + 1);
            			}
            			_hx_goto_7:;
            		}
HXLINE(  87)		if (success) {
HXLINE(  89)			return New;
            		}
HXLINE(  91)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(InputFrontEnd_obj,replace_flixel_input_mouse_FlxMouse,return )

 ::flixel::input::mouse::FlxMouse InputFrontEnd_obj::add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_28_add_flixel_input_mouse_FlxMouse)
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				::Dynamic input = _g1->__get(_g);
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  32)				bool Simple = true;
HXDLIN(  32)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  32)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  34)					return Input;
            				}
            			}
            		}
HXLINE(  38)		this->list->push(Input);
HXLINE(  39)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_mouse_FlxMouse,return )

 ::flixel::input::keyboard::FlxKeyboard InputFrontEnd_obj::add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_28_add_flixel_input_keyboard_FlxKeyboard)
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				::Dynamic input = _g1->__get(_g);
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  32)				bool Simple = true;
HXDLIN(  32)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Input,Simple);
HXDLIN(  32)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(input,Simple))) {
HXLINE(  34)					return Input;
            				}
            			}
            		}
HXLINE(  38)		this->list->push(Input);
HXLINE(  39)		return Input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_keyboard_FlxKeyboard,return )

void InputFrontEnd_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_96_reset)
HXDLIN(  96)		int _g = 0;
HXDLIN(  96)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  96)		while((_g < _g1->length)){
HXDLIN(  96)			::Dynamic input = _g1->__get(_g);
HXDLIN(  96)			_g = (_g + 1);
HXLINE(  98)			::flixel::input::IFlxInputManager_obj::reset(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

void InputFrontEnd_obj::update(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_108_update)
HXDLIN( 108)		int _g = 0;
HXDLIN( 108)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 108)		while((_g < _g1->length)){
HXDLIN( 108)			::Dynamic input = _g1->__get(_g);
HXDLIN( 108)			_g = (_g + 1);
HXLINE( 110)			::flixel::input::IFlxInputManager_obj::update(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

void InputFrontEnd_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_117_onFocus)
HXDLIN( 117)		int _g = 0;
HXDLIN( 117)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 117)		while((_g < _g1->length)){
HXDLIN( 117)			::Dynamic input = _g1->__get(_g);
HXDLIN( 117)			_g = (_g + 1);
HXLINE( 119)			::flixel::input::IFlxInputManager_obj::onFocus(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

void InputFrontEnd_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_126_onFocusLost)
HXDLIN( 126)		int _g = 0;
HXDLIN( 126)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 126)		while((_g < _g1->length)){
HXDLIN( 126)			::Dynamic input = _g1->__get(_g);
HXDLIN( 126)			_g = (_g + 1);
HXLINE( 128)			::flixel::input::IFlxInputManager_obj::onFocusLost(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

void InputFrontEnd_obj::onStateSwitch(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_136_onStateSwitch)
HXDLIN( 136)		if (this->resetOnStateSwitch) {
HXLINE( 138)			this->reset();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onStateSwitch,(void))

void InputFrontEnd_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ff18a02f3055fb45_144_destroy)
HXDLIN( 144)		int _g = 0;
HXDLIN( 144)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 144)		while((_g < _g1->length)){
HXDLIN( 144)			::Dynamic input = _g1->__get(_g);
HXDLIN( 144)			_g = (_g + 1);
HXLINE( 146)			input = ::flixel::util::FlxDestroyUtil_obj::destroy(input);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))


::hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new() {
	::hx::ObjectPtr< InputFrontEnd_obj > __this = new InputFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InputFrontEnd_obj *__this = (InputFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InputFrontEnd_obj), true, "flixel.system.frontEnds.InputFrontEnd"));
	*(void **)__this = InputFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
}

::hx::Val InputFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return ::hx::Val( onStateSwitch_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { return ::hx::Val( resetOnStateSwitch ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_input_mouse_FlxMouse") ) { return ::hx::Val( add_flixel_input_mouse_FlxMouse_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"replace_flixel_input_mouse_FlxMouse") ) { return ::hx::Val( replace_flixel_input_mouse_FlxMouse_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_input_keyboard_FlxKeyboard") ) { return ::hx::Val( add_flixel_input_keyboard_FlxKeyboard_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"add_flixel_input_touch_FlxTouchManager") ) { return ::hx::Val( add_flixel_input_touch_FlxTouchManager_dyn() ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"add_flixel_input_actions_FlxActionManager") ) { return ::hx::Val( add_flixel_input_actions_FlxActionManager_dyn() ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"add_flixel_input_gamepad_FlxGamepadManager") ) { return ::hx::Val( add_flixel_input_gamepad_FlxGamepadManager_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InputFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { resetOnStateSwitch=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("resetOnStateSwitch",b7,84,01,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InputFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(InputFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsBool,(int)offsetof(InputFrontEnd_obj,resetOnStateSwitch),HX_("resetOnStateSwitch",b7,84,01,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InputFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String InputFrontEnd_obj_sMemberFields[] = {
	HX_("add_flixel_input_actions_FlxActionManager",61,17,e1,6a),
	HX_("add_flixel_input_gamepad_FlxGamepadManager",26,a8,4b,80),
	HX_("add_flixel_input_touch_FlxTouchManager",e6,db,13,1c),
	HX_("replace_flixel_input_mouse_FlxMouse",1a,65,d5,e3),
	HX_("add_flixel_input_mouse_FlxMouse",87,28,57,a0),
	HX_("add_flixel_input_keyboard_FlxKeyboard",3b,4b,11,84),
	HX_("list",5e,1c,b3,47),
	HX_("resetOnStateSwitch",b7,84,01,3e),
	HX_("reset",cf,49,c8,e6),
	HX_("update",09,86,05,87),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onStateSwitch",06,b4,ec,a2),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	InputFrontEnd_obj _hx_dummy;
	InputFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.InputFrontEnd",62,30,2d,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InputFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InputFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds