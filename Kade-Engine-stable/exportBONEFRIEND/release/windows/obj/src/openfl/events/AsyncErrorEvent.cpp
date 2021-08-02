#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_openfl_events_AsyncErrorEvent
#include <openfl/events/AsyncErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f17f7e91bd0860ca_67_new,"openfl.events.AsyncErrorEvent","new",0xdf7e03a9,"openfl.events.AsyncErrorEvent.new","openfl/events/AsyncErrorEvent.hx",67,0x9b075e07)
HX_LOCAL_STACK_FRAME(_hx_pos_f17f7e91bd0860ca_75_clone,"openfl.events.AsyncErrorEvent","clone",0xecf76ae6,"openfl.events.AsyncErrorEvent.clone","openfl/events/AsyncErrorEvent.hx",75,0x9b075e07)
HX_LOCAL_STACK_FRAME(_hx_pos_f17f7e91bd0860ca_85_toString,"openfl.events.AsyncErrorEvent","toString",0x847914c3,"openfl.events.AsyncErrorEvent.toString","openfl/events/AsyncErrorEvent.hx",85,0x9b075e07)
static const ::String _hx_array_data_9b1efb37_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),HX_("error",c8,cb,29,73),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f17f7e91bd0860ca_89___init,"openfl.events.AsyncErrorEvent","__init",0x51ebde87,"openfl.events.AsyncErrorEvent.__init","openfl/events/AsyncErrorEvent.hx",89,0x9b075e07)
HX_LOCAL_STACK_FRAME(_hx_pos_f17f7e91bd0860ca_34_boot,"openfl.events.AsyncErrorEvent","boot",0xa6de30c9,"openfl.events.AsyncErrorEvent.boot","openfl/events/AsyncErrorEvent.hx",34,0x9b075e07)
namespace openfl{
namespace events{

void AsyncErrorEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text, ::haxe::io::Error error){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_f17f7e91bd0860ca_67_new)
HXLINE(  68)		super::__construct(type,bubbles,cancelable,null(),null());
HXLINE(  70)		this->text = text;
HXLINE(  71)		this->error = error;
            	}

Dynamic AsyncErrorEvent_obj::__CreateEmpty() { return new AsyncErrorEvent_obj; }

void *AsyncErrorEvent_obj::_hx_vtable = 0;

Dynamic AsyncErrorEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AsyncErrorEvent_obj > _hx_result = new AsyncErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool AsyncErrorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		if (inClassId<=(int)0x0722529d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0722529d;
		} else {
			return inClassId==(int)0x08ec4c31;
		}
	} else {
		return inClassId==(int)0x27730e1f || inClassId==(int)0x53d8fde0;
	}
}

 ::openfl::events::Event AsyncErrorEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f17f7e91bd0860ca_75_clone)
HXLINE(  76)		 ::openfl::events::AsyncErrorEvent event =  ::openfl::events::AsyncErrorEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->text,this->error);
HXLINE(  77)		event->target = this->target;
HXLINE(  78)		event->currentTarget = this->currentTarget;
HXLINE(  79)		event->eventPhase = this->eventPhase;
HXLINE(  80)		return event;
            	}


::String AsyncErrorEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_f17f7e91bd0860ca_85_toString)
HXDLIN(  85)		return this->_hx___formatToString(HX_("AsyncErrorEvent",6e,a5,79,37),::Array_obj< ::String >::fromData( _hx_array_data_9b1efb37_3,5));
            	}


void AsyncErrorEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_f17f7e91bd0860ca_89___init)
HXLINE(  90)		this->super::_hx___init();
HXLINE(  91)		this->text = HX_("",00,00,00,00);
HXLINE(  92)		this->error = null();
            	}


::String AsyncErrorEvent_obj::ASYNC_ERROR;


::hx::ObjectPtr< AsyncErrorEvent_obj > AsyncErrorEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text, ::haxe::io::Error error) {
	::hx::ObjectPtr< AsyncErrorEvent_obj > __this = new AsyncErrorEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,error);
	return __this;
}

::hx::ObjectPtr< AsyncErrorEvent_obj > AsyncErrorEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text, ::haxe::io::Error error) {
	AsyncErrorEvent_obj *__this = (AsyncErrorEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AsyncErrorEvent_obj), true, "openfl.events.AsyncErrorEvent"));
	*(void **)__this = AsyncErrorEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text,error);
	return __this;
}

AsyncErrorEvent_obj::AsyncErrorEvent_obj()
{
}

void AsyncErrorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncErrorEvent);
	HX_MARK_MEMBER_NAME(error,"error");
	 ::openfl::events::TextEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AsyncErrorEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	 ::openfl::events::TextEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AsyncErrorEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AsyncErrorEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::haxe::io::Error >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error",c8,cb,29,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AsyncErrorEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Error */ ,(int)offsetof(AsyncErrorEvent_obj,error),HX_("error",c8,cb,29,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AsyncErrorEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AsyncErrorEvent_obj::ASYNC_ERROR,HX_("ASYNC_ERROR",05,bf,07,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AsyncErrorEvent_obj_sMemberFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void AsyncErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncErrorEvent_obj::ASYNC_ERROR,"ASYNC_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AsyncErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncErrorEvent_obj::ASYNC_ERROR,"ASYNC_ERROR");
};

#endif

::hx::Class AsyncErrorEvent_obj::__mClass;

static ::String AsyncErrorEvent_obj_sStaticFields[] = {
	HX_("ASYNC_ERROR",05,bf,07,a3),
	::String(null())
};

void AsyncErrorEvent_obj::__register()
{
	AsyncErrorEvent_obj _hx_dummy;
	AsyncErrorEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.AsyncErrorEvent",37,fb,1e,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AsyncErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AsyncErrorEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AsyncErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AsyncErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AsyncErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AsyncErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AsyncErrorEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AsyncErrorEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f17f7e91bd0860ca_34_boot)
HXDLIN(  34)		ASYNC_ERROR = HX_("asyncError",ec,82,66,21);
            	}
}

} // end namespace openfl
} // end namespace events
