#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_9_new,"flixel.system.frontEnds.LogFrontEnd","new",0xf2533c4e,"flixel.system.frontEnds.LogFrontEnd.new","flixel/system/frontEnds/LogFrontEnd.hx",9,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_19_add,"flixel.system.frontEnds.LogFrontEnd","add",0xf2495e0f,"flixel.system.frontEnds.LogFrontEnd.add","flixel/system/frontEnds/LogFrontEnd.hx",19,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_26_warn,"flixel.system.frontEnds.LogFrontEnd","warn",0x1c716698,"flixel.system.frontEnds.LogFrontEnd.warn","flixel/system/frontEnds/LogFrontEnd.hx",26,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_33_error,"flixel.system.frontEnds.LogFrontEnd","error",0x74ce8f36,"flixel.system.frontEnds.LogFrontEnd.error","flixel/system/frontEnds/LogFrontEnd.hx",33,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_40_notice,"flixel.system.frontEnds.LogFrontEnd","notice",0xa03f14ea,"flixel.system.frontEnds.LogFrontEnd.notice","flixel/system/frontEnds/LogFrontEnd.hx",40,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_54_advanced,"flixel.system.frontEnds.LogFrontEnd","advanced",0x05a7fef4,"flixel.system.frontEnds.LogFrontEnd.advanced","flixel/system/frontEnds/LogFrontEnd.hx",54,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_102_clear,"flixel.system.frontEnds.LogFrontEnd","clear",0x4a0034fb,"flixel.system.frontEnds.LogFrontEnd.clear","flixel/system/frontEnds/LogFrontEnd.hx",102,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_115_set_redirectTraces,"flixel.system.frontEnds.LogFrontEnd","set_redirectTraces",0xf7f71199,"flixel.system.frontEnds.LogFrontEnd.set_redirectTraces","flixel/system/frontEnds/LogFrontEnd.hx",115,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_127_processTraceData,"flixel.system.frontEnds.LogFrontEnd","processTraceData",0x5a916632,"flixel.system.frontEnds.LogFrontEnd.processTraceData","flixel/system/frontEnds/LogFrontEnd.hx",127,0x686ab8c3)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void LogFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_9_new)
HXLINE(  14)		this->redirectTraces = false;
HXLINE( 111)		this->_standardTraceFunction = ::haxe::Log_obj::trace;
            	}

Dynamic LogFrontEnd_obj::__CreateEmpty() { return new LogFrontEnd_obj; }

void *LogFrontEnd_obj::_hx_vtable = 0;

Dynamic LogFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogFrontEnd_obj > _hx_result = new LogFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LogFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b9d64e0;
}

void LogFrontEnd_obj::add( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_19_add)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,add,(void))

void LogFrontEnd_obj::warn( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_26_warn)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,warn,(void))

void LogFrontEnd_obj::error( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_33_error)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,error,(void))

void LogFrontEnd_obj::notice( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_40_notice)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,notice,(void))

void LogFrontEnd_obj::advanced( ::Dynamic Data, ::flixel::_hx_system::debug::log::LogStyle Style,::hx::Null< bool >  __o_FireOnce){
            		bool FireOnce = __o_FireOnce.Default(false);
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_54_advanced)
            	}


HX_DEFINE_DYNAMIC_FUNC3(LogFrontEnd_obj,advanced,(void))

void LogFrontEnd_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_102_clear)
            	}


HX_DEFINE_DYNAMIC_FUNC0(LogFrontEnd_obj,clear,(void))

bool LogFrontEnd_obj::set_redirectTraces(bool Redirect){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_115_set_redirectTraces)
HXLINE( 116)		 ::Dynamic _hx_tmp;
HXDLIN( 116)		if (Redirect) {
HXLINE( 116)			_hx_tmp = this->processTraceData_dyn();
            		}
            		else {
HXLINE( 116)			_hx_tmp = this->_standardTraceFunction;
            		}
HXDLIN( 116)		::haxe::Log_obj::trace = _hx_tmp;
HXLINE( 117)		return (this->redirectTraces = Redirect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,set_redirectTraces,return )

void LogFrontEnd_obj::processTraceData( ::Dynamic Data, ::Dynamic Info){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_127_processTraceData)
HXLINE( 128)		::cpp::VirtualArray paramArray = ::cpp::VirtualArray_obj::__new(1)->init(0,Data);
HXLINE( 130)		if (::hx::IsNotNull( Info->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic) )) {
HXLINE( 132)			int _g = 0;
HXDLIN( 132)			::cpp::VirtualArray _g1 = ( (::cpp::VirtualArray)(Info->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic)) );
HXDLIN( 132)			while((_g < _g1->get_length())){
HXLINE( 132)				 ::Dynamic i = _g1->__get(_g);
HXDLIN( 132)				_g = (_g + 1);
HXLINE( 134)				paramArray->push(i);
            			}
            		}
HXLINE( 138)		this->advanced(paramArray,::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(LogFrontEnd_obj,processTraceData,(void))


::hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__new() {
	::hx::ObjectPtr< LogFrontEnd_obj > __this = new LogFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LogFrontEnd_obj *__this = (LogFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogFrontEnd_obj), true, "flixel.system.frontEnds.LogFrontEnd"));
	*(void **)__this = LogFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LogFrontEnd_obj::LogFrontEnd_obj()
{
}

void LogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogFrontEnd);
	HX_MARK_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_MARK_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
	HX_MARK_END_CLASS();
}

void LogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_VISIT_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
}

::hx::Val LogFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return ::hx::Val( warn_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { return ::hx::Val( notice_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advanced") ) { return ::hx::Val( advanced_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return ::hx::Val( redirectTraces ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processTraceData") ) { return ::hx::Val( processTraceData_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_redirectTraces") ) { return ::hx::Val( set_redirectTraces_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { return ::hx::Val( _standardTraceFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LogFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_redirectTraces(inValue.Cast< bool >()) );redirectTraces=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { _standardTraceFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("redirectTraces",8a,ce,d6,0a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LogFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(LogFrontEnd_obj,redirectTraces),HX_("redirectTraces",8a,ce,d6,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LogFrontEnd_obj,_standardTraceFunction),HX_("_standardTraceFunction",81,b2,89,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LogFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String LogFrontEnd_obj_sMemberFields[] = {
	HX_("redirectTraces",8a,ce,d6,0a),
	HX_("_standardTraceFunction",81,b2,89,66),
	HX_("add",21,f2,49,00),
	HX_("warn",46,62,f2,4e),
	HX_("error",c8,cb,29,73),
	HX_("notice",18,d8,b8,31),
	HX_("advanced",a2,69,7b,3b),
	HX_("clear",8d,71,5b,48),
	HX_("set_redirectTraces",c7,e1,1f,83),
	HX_("processTraceData",e0,2e,f4,70),
	::String(null()) };

::hx::Class LogFrontEnd_obj::__mClass;

void LogFrontEnd_obj::__register()
{
	LogFrontEnd_obj _hx_dummy;
	LogFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.LogFrontEnd",5c,bd,97,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LogFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LogFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds