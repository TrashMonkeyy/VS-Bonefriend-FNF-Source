#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_54_fromString,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","fromString",0xac8d25d1,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.fromString","openfl/text/TextFormatAlign.hx",54,0xaa546dc0)
HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_68_toString,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","toString",0xf3d6bf22,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.toString","openfl/text/TextFormatAlign.hx",68,0xaa546dc0)
HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_16_boot,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","boot",0x91217fa8,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.boot","openfl/text/TextFormatAlign.hx",16,0xaa546dc0)
HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_24_boot,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","boot",0x91217fa8,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.boot","openfl/text/TextFormatAlign.hx",24,0xaa546dc0)
HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_30_boot,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","boot",0x91217fa8,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.boot","openfl/text/TextFormatAlign.hx",30,0xaa546dc0)
HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_36_boot,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","boot",0x91217fa8,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.boot","openfl/text/TextFormatAlign.hx",36,0xaa546dc0)
HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_42_boot,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","boot",0x91217fa8,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.boot","openfl/text/TextFormatAlign.hx",42,0xaa546dc0)
HX_LOCAL_STACK_FRAME(_hx_pos_52c40939c4ee2936_50_boot,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_","boot",0x91217fa8,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.boot","openfl/text/TextFormatAlign.hx",50,0xaa546dc0)
namespace openfl{
namespace text{
namespace _TextFormatAlign{

void TextFormatAlign_Impl__obj::__construct() { }

Dynamic TextFormatAlign_Impl__obj::__CreateEmpty() { return new TextFormatAlign_Impl__obj; }

void *TextFormatAlign_Impl__obj::_hx_vtable = 0;

Dynamic TextFormatAlign_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFormatAlign_Impl__obj > _hx_result = new TextFormatAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFormatAlign_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1337de42;
}

 ::Dynamic TextFormatAlign_Impl__obj::CENTER;

 ::Dynamic TextFormatAlign_Impl__obj::END;

 ::Dynamic TextFormatAlign_Impl__obj::JUSTIFY;

 ::Dynamic TextFormatAlign_Impl__obj::LEFT;

 ::Dynamic TextFormatAlign_Impl__obj::RIGHT;

 ::Dynamic TextFormatAlign_Impl__obj::START;

 ::Dynamic TextFormatAlign_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_54_fromString)
HXDLIN(  54)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  56)			return 0;
HXDLIN(  56)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("end",db,03,4d,00)) ){
HXLINE(  57)			return 1;
HXDLIN(  57)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("justify",50,df,b5,83)) ){
HXLINE(  58)			return 2;
HXDLIN(  58)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(  59)			return 3;
HXDLIN(  59)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  60)			return 4;
HXDLIN(  60)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("start",62,74,0b,84)) ){
HXLINE(  61)			return 5;
HXDLIN(  61)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  62)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  54)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFormatAlign_Impl__obj,fromString,return )

::String TextFormatAlign_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_68_toString)
HXDLIN(  68)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  70)			return HX_("center",d5,25,db,05);
HXDLIN(  70)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  71)			return HX_("end",db,03,4d,00);
HXDLIN(  71)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  72)			return HX_("justify",50,df,b5,83);
HXDLIN(  72)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  73)			return HX_("left",07,08,b0,47);
HXDLIN(  73)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(  74)			return HX_("right",dc,0b,64,e9);
HXDLIN(  74)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE(  75)			return HX_("start",62,74,0b,84);
HXDLIN(  75)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  76)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  68)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFormatAlign_Impl__obj,toString,return )


TextFormatAlign_Impl__obj::TextFormatAlign_Impl__obj()
{
}

bool TextFormatAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextFormatAlign_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TextFormatAlign_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFormatAlign_Impl__obj::CENTER,HX_("CENTER",d5,d1,5d,b8)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFormatAlign_Impl__obj::END,HX_("END",bb,9f,34,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFormatAlign_Impl__obj::JUSTIFY,HX_("JUSTIFY",30,b3,89,03)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFormatAlign_Impl__obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFormatAlign_Impl__obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFormatAlign_Impl__obj::START,HX_("START",42,ac,f9,01)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TextFormatAlign_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::END,"END");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::JUSTIFY,"JUSTIFY");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::START,"START");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFormatAlign_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::END,"END");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::JUSTIFY,"JUSTIFY");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::START,"START");
};

#endif

::hx::Class TextFormatAlign_Impl__obj::__mClass;

static ::String TextFormatAlign_Impl__obj_sStaticFields[] = {
	HX_("CENTER",d5,d1,5d,b8),
	HX_("END",bb,9f,34,00),
	HX_("JUSTIFY",30,b3,89,03),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("START",42,ac,f9,01),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void TextFormatAlign_Impl__obj::__register()
{
	TextFormatAlign_Impl__obj _hx_dummy;
	TextFormatAlign_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._TextFormatAlign.TextFormatAlign_Impl_",b8,18,3c,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFormatAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFormatAlign_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextFormatAlign_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextFormatAlign_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFormatAlign_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormatAlign_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormatAlign_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextFormatAlign_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_16_boot)
HXDLIN(  16)		CENTER = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_24_boot)
HXDLIN(  24)		END = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_30_boot)
HXDLIN(  30)		JUSTIFY = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_36_boot)
HXDLIN(  36)		LEFT = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_42_boot)
HXDLIN(  42)		RIGHT = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_52c40939c4ee2936_50_boot)
HXDLIN(  50)		START = 5;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _TextFormatAlign
