#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_webm_WebmIo
#include <webm/WebmIo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_be1b71502565239e_11_new,"webm.WebmIo","new",0x4e45eb26,"webm.WebmIo.new","webm/WebmIo.hx",11,0x6dfcb2e9)
HX_LOCAL_STACK_FRAME(_hx_pos_be1b71502565239e_15_create,"webm.WebmIo","create",0xa3c9cbf6,"webm.WebmIo.create","webm/WebmIo.hx",15,0x6dfcb2e9)
HX_LOCAL_STACK_FRAME(_hx_pos_be1b71502565239e_20_read,"webm.WebmIo","read",0x318c9dd0,"webm.WebmIo.read","webm/WebmIo.hx",20,0x6dfcb2e9)
HX_LOCAL_STACK_FRAME(_hx_pos_be1b71502565239e_25_seek,"webm.WebmIo","seek",0x3235d7f2,"webm.WebmIo.seek","webm/WebmIo.hx",25,0x6dfcb2e9)
HX_LOCAL_STACK_FRAME(_hx_pos_be1b71502565239e_30_tell,"webm.WebmIo","tell",0x32df14ab,"webm.WebmIo.tell","webm/WebmIo.hx",30,0x6dfcb2e9)
HX_LOCAL_STACK_FRAME(_hx_pos_be1b71502565239e_33_boot,"webm.WebmIo","boot",0x2700d6ac,"webm.WebmIo.boot","webm/WebmIo.hx",33,0x6dfcb2e9)
namespace webm{

void WebmIo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_be1b71502565239e_11_new)
            	}

Dynamic WebmIo_obj::__CreateEmpty() { return new WebmIo_obj; }

void *WebmIo_obj::_hx_vtable = 0;

Dynamic WebmIo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebmIo_obj > _hx_result = new WebmIo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WebmIo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50d2cd98;
}

void WebmIo_obj::create(){
            	HX_STACKFRAME(&_hx_pos_be1b71502565239e_15_create)
HXDLIN(  15)		this->io = ::webm::WebmIo_obj::hx_create_io(this->read_dyn(),this->seek_dyn(),this->tell_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmIo_obj,create,(void))

::Array< unsigned char > WebmIo_obj::read(int count){
            	HX_STACKFRAME(&_hx_pos_be1b71502565239e_20_read)
HXDLIN(  20)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmIo_obj,read,return )

int WebmIo_obj::seek(Float offset,int whence){
            	HX_STACKFRAME(&_hx_pos_be1b71502565239e_25_seek)
HXDLIN(  25)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(WebmIo_obj,seek,return )

Float WebmIo_obj::tell(){
            	HX_STACKFRAME(&_hx_pos_be1b71502565239e_30_tell)
HXDLIN(  30)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmIo_obj,tell,return )

 ::Dynamic WebmIo_obj::hx_create_io;


WebmIo_obj::WebmIo_obj()
{
}

void WebmIo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebmIo);
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_END_CLASS();
}

void WebmIo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(io,"io");
}

::hx::Val WebmIo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return ::hx::Val( io ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return ::hx::Val( seek_dyn() ); }
		if (HX_FIELD_EQ(inName,"tell") ) { return ::hx::Val( tell_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WebmIo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"hx_create_io") ) { outValue = ( hx_create_io ); return true; }
	}
	return false;
}

::hx::Val WebmIo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WebmIo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"hx_create_io") ) { hx_create_io=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void WebmIo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("io",e6,5b,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WebmIo_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(WebmIo_obj,io),HX_("io",e6,5b,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WebmIo_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebmIo_obj::hx_create_io,HX_("hx_create_io",5a,db,97,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WebmIo_obj_sMemberFields[] = {
	HX_("io",e6,5b,00,00),
	HX_("create",fc,66,0f,7c),
	HX_("read",56,4b,a7,4b),
	HX_("seek",78,85,50,4c),
	HX_("tell",31,c2,f9,4c),
	::String(null()) };

static void WebmIo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WebmIo_obj::hx_create_io,"hx_create_io");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WebmIo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WebmIo_obj::hx_create_io,"hx_create_io");
};

#endif

::hx::Class WebmIo_obj::__mClass;

static ::String WebmIo_obj_sStaticFields[] = {
	HX_("hx_create_io",5a,db,97,c3),
	::String(null())
};

void WebmIo_obj::__register()
{
	WebmIo_obj _hx_dummy;
	WebmIo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("webm.WebmIo",34,20,24,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WebmIo_obj::__GetStatic;
	__mClass->mSetStaticField = &WebmIo_obj::__SetStatic;
	__mClass->mMarkFunc = WebmIo_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WebmIo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WebmIo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WebmIo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WebmIo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebmIo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebmIo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WebmIo_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_be1b71502565239e_33_boot)
HXDLIN(  33)		hx_create_io = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_create_io",5a,db,97,c3),3);
            	}
}

} // end namespace webm
