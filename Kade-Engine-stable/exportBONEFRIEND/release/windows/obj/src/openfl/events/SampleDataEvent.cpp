#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_124_new,"openfl.events.SampleDataEvent","new",0xc5f17621,"openfl.events.SampleDataEvent.new","openfl/events/SampleDataEvent.hx",124,0x7507e28f)
HX_LOCAL_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_133_clone,"openfl.events.SampleDataEvent","clone",0xed066b5e,"openfl.events.SampleDataEvent.clone","openfl/events/SampleDataEvent.hx",133,0x7507e28f)
HX_LOCAL_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_143_toString,"openfl.events.SampleDataEvent","toString",0x071baf4b,"openfl.events.SampleDataEvent.toString","openfl/events/SampleDataEvent.hx",143,0x7507e28f)
static const ::String _hx_array_data_8459d1af_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_147___init,"openfl.events.SampleDataEvent","__init",0x5efd470f,"openfl.events.SampleDataEvent.__init","openfl/events/SampleDataEvent.hx",147,0x7507e28f)
HX_LOCAL_STACK_FRAME(_hx_pos_aba8a98acfdcfbe6_95_boot,"openfl.events.SampleDataEvent","boot",0x656ee751,"openfl.events.SampleDataEvent.boot","openfl/events/SampleDataEvent.hx",95,0x7507e28f)
namespace openfl{
namespace events{

void SampleDataEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_124_new)
HXLINE( 125)		super::__construct(type,bubbles,cancelable);
HXLINE( 127)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 127)		this->data = this1;
HXLINE( 128)		this->data->_hx___endian = 1;
HXLINE( 129)		this->position = ((Float)0.0);
            	}

Dynamic SampleDataEvent_obj::__CreateEmpty() { return new SampleDataEvent_obj; }

void *SampleDataEvent_obj::_hx_vtable = 0;

Dynamic SampleDataEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SampleDataEvent_obj > _hx_result = new SampleDataEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SampleDataEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x11df7031;
	}
}

 ::openfl::events::Event SampleDataEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_133_clone)
HXLINE( 134)		 ::openfl::events::SampleDataEvent event =  ::openfl::events::SampleDataEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable);
HXLINE( 135)		event->target = this->target;
HXLINE( 136)		event->currentTarget = this->currentTarget;
HXLINE( 137)		event->eventPhase = this->eventPhase;
HXLINE( 138)		return event;
            	}


::String SampleDataEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_143_toString)
HXDLIN( 143)		return this->_hx___formatToString(HX_("SampleDataEvent",e6,7b,b4,20),::Array_obj< ::String >::fromData( _hx_array_data_8459d1af_3,3));
            	}


void SampleDataEvent_obj::_hx___init(){
            	HX_GC_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_147___init)
HXLINE( 148)		this->super::_hx___init();
HXLINE( 149)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 149)		this->data = this1;
HXLINE( 150)		this->data->_hx___endian = 1;
HXLINE( 151)		this->position = ((Float)0.0);
            	}


::String SampleDataEvent_obj::SAMPLE_DATA;


::hx::ObjectPtr< SampleDataEvent_obj > SampleDataEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< SampleDataEvent_obj > __this = new SampleDataEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< SampleDataEvent_obj > SampleDataEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	SampleDataEvent_obj *__this = (SampleDataEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SampleDataEvent_obj), true, "openfl.events.SampleDataEvent"));
	*(void **)__this = SampleDataEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

SampleDataEvent_obj::SampleDataEvent_obj()
{
}

void SampleDataEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SampleDataEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(position,"position");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SampleDataEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(position,"position");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SampleDataEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SampleDataEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SampleDataEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("position",a9,a0,fa,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SampleDataEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(SampleDataEvent_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsFloat,(int)offsetof(SampleDataEvent_obj,position),HX_("position",a9,a0,fa,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SampleDataEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SampleDataEvent_obj::SAMPLE_DATA,HX_("SAMPLE_DATA",9f,d5,99,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SampleDataEvent_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("position",a9,a0,fa,ca),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void SampleDataEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SampleDataEvent_obj::SAMPLE_DATA,"SAMPLE_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SampleDataEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SampleDataEvent_obj::SAMPLE_DATA,"SAMPLE_DATA");
};

#endif

::hx::Class SampleDataEvent_obj::__mClass;

static ::String SampleDataEvent_obj_sStaticFields[] = {
	HX_("SAMPLE_DATA",9f,d5,99,bc),
	::String(null())
};

void SampleDataEvent_obj::__register()
{
	SampleDataEvent_obj _hx_dummy;
	SampleDataEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.SampleDataEvent",af,d1,59,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SampleDataEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SampleDataEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SampleDataEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SampleDataEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SampleDataEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SampleDataEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SampleDataEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SampleDataEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aba8a98acfdcfbe6_95_boot)
HXDLIN(  95)		SAMPLE_DATA = HX_("sampleData",74,3f,0b,5e);
            	}
}

} // end namespace openfl
} // end namespace events
