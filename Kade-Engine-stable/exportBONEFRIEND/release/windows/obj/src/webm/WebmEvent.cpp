#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_webm_WebmEvent
#include <webm/WebmEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a611475ca79daef8_14_new,"webm.WebmEvent","new",0x3feaff7e,"webm.WebmEvent.new","webm/WebmEvent.hx",14,0x67547733)
HX_LOCAL_STACK_FRAME(_hx_pos_a611475ca79daef8_7_boot,"webm.WebmEvent","boot",0xa5cd8f54,"webm.WebmEvent.boot","webm/WebmEvent.hx",7,0x67547733)
HX_LOCAL_STACK_FRAME(_hx_pos_a611475ca79daef8_8_boot,"webm.WebmEvent","boot",0xa5cd8f54,"webm.WebmEvent.boot","webm/WebmEvent.hx",8,0x67547733)
HX_LOCAL_STACK_FRAME(_hx_pos_a611475ca79daef8_9_boot,"webm.WebmEvent","boot",0xa5cd8f54,"webm.WebmEvent.boot","webm/WebmEvent.hx",9,0x67547733)
HX_LOCAL_STACK_FRAME(_hx_pos_a611475ca79daef8_10_boot,"webm.WebmEvent","boot",0xa5cd8f54,"webm.WebmEvent.boot","webm/WebmEvent.hx",10,0x67547733)
namespace webm{

void WebmEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_a611475ca79daef8_14_new)
HXDLIN(  14)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic WebmEvent_obj::__CreateEmpty() { return new WebmEvent_obj; }

void *WebmEvent_obj::_hx_vtable = 0;

Dynamic WebmEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebmEvent_obj > _hx_result = new WebmEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool WebmEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x1af6f1a8;
	}
}

::String WebmEvent_obj::PLAY;

::String WebmEvent_obj::STOP;

::String WebmEvent_obj::COMPLETE;

::String WebmEvent_obj::RESTART;


::hx::ObjectPtr< WebmEvent_obj > WebmEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< WebmEvent_obj > __this = new WebmEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< WebmEvent_obj > WebmEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	WebmEvent_obj *__this = (WebmEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebmEvent_obj), true, "webm.WebmEvent"));
	*(void **)__this = WebmEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

WebmEvent_obj::WebmEvent_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WebmEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo WebmEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &WebmEvent_obj::PLAY,HX_("PLAY",f4,f5,1a,35)},
	{::hx::fsString,(void *) &WebmEvent_obj::STOP,HX_("STOP",02,b8,1c,37)},
	{::hx::fsString,(void *) &WebmEvent_obj::COMPLETE,HX_("COMPLETE",b9,90,4d,d9)},
	{::hx::fsString,(void *) &WebmEvent_obj::RESTART,HX_("RESTART",af,9b,79,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void WebmEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WebmEvent_obj::PLAY,"PLAY");
	HX_MARK_MEMBER_NAME(WebmEvent_obj::STOP,"STOP");
	HX_MARK_MEMBER_NAME(WebmEvent_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(WebmEvent_obj::RESTART,"RESTART");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WebmEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WebmEvent_obj::PLAY,"PLAY");
	HX_VISIT_MEMBER_NAME(WebmEvent_obj::STOP,"STOP");
	HX_VISIT_MEMBER_NAME(WebmEvent_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(WebmEvent_obj::RESTART,"RESTART");
};

#endif

::hx::Class WebmEvent_obj::__mClass;

static ::String WebmEvent_obj_sStaticFields[] = {
	HX_("PLAY",f4,f5,1a,35),
	HX_("STOP",02,b8,1c,37),
	HX_("COMPLETE",b9,90,4d,d9),
	HX_("RESTART",af,9b,79,ea),
	::String(null())
};

void WebmEvent_obj::__register()
{
	WebmEvent_obj _hx_dummy;
	WebmEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("webm.WebmEvent",8c,28,e2,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WebmEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WebmEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WebmEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WebmEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebmEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebmEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WebmEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a611475ca79daef8_7_boot)
HXDLIN(   7)		PLAY = HX_("play",f4,2d,5a,4a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a611475ca79daef8_8_boot)
HXDLIN(   8)		STOP = HX_("stop",02,f0,5b,4c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a611475ca79daef8_9_boot)
HXDLIN(   9)		COMPLETE = HX_("complete",b9,00,c8,7f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a611475ca79daef8_10_boot)
HXDLIN(  10)		RESTART = HX_("restart",cf,c7,a5,6a);
            	}
}

} // end namespace webm
