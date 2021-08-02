#include <hxcpp.h>

#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aea97d805c6d9d65_30_new,"sys.thread.Mutex","new",0x0051f1ae,"sys.thread.Mutex.new","C:\\Users\\Colin\\Haxe\\haxe\\std/cpp/_std/sys/thread/Mutex.hx",30,0xa745577f)
HX_LOCAL_STACK_FRAME(_hx_pos_aea97d805c6d9d65_34_acquire,"sys.thread.Mutex","acquire",0xae482c24,"sys.thread.Mutex.acquire","C:\\Users\\Colin\\Haxe\\haxe\\std/cpp/_std/sys/thread/Mutex.hx",34,0xa745577f)
HX_LOCAL_STACK_FRAME(_hx_pos_aea97d805c6d9d65_42_release,"sys.thread.Mutex","release",0x52516615,"sys.thread.Mutex.release","C:\\Users\\Colin\\Haxe\\haxe\\std/cpp/_std/sys/thread/Mutex.hx",42,0xa745577f)
namespace sys{
namespace thread{

void Mutex_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aea97d805c6d9d65_30_new)
HXDLIN(  30)		this->m =  ::__hxcpp_mutex_create();
            	}

Dynamic Mutex_obj::__CreateEmpty() { return new Mutex_obj; }

void *Mutex_obj::_hx_vtable = 0;

Dynamic Mutex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mutex_obj > _hx_result = new Mutex_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mutex_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5474b30c;
}

void Mutex_obj::acquire(){
            	HX_STACKFRAME(&_hx_pos_aea97d805c6d9d65_34_acquire)
HXDLIN(  34)		 ::__hxcpp_mutex_acquire(this->m);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,acquire,(void))

void Mutex_obj::release(){
            	HX_STACKFRAME(&_hx_pos_aea97d805c6d9d65_42_release)
HXDLIN(  42)		 ::__hxcpp_mutex_release(this->m);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,release,(void))


Mutex_obj::Mutex_obj()
{
}

void Mutex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mutex);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_END_CLASS();
}

void Mutex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
}

::hx::Val Mutex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return ::hx::Val( m ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"acquire") ) { return ::hx::Val( acquire_dyn() ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Mutex_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mutex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("m",6d,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mutex_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Mutex_obj,m),HX_("m",6d,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Mutex_obj_sStaticStorageInfo = 0;
#endif

static ::String Mutex_obj_sMemberFields[] = {
	HX_("m",6d,00,00,00),
	HX_("acquire",d6,4b,e4,b4),
	HX_("release",c7,85,ed,58),
	::String(null()) };

::hx::Class Mutex_obj::__mClass;

void Mutex_obj::__register()
{
	Mutex_obj _hx_dummy;
	Mutex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread.Mutex",bc,42,f8,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mutex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mutex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mutex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mutex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace thread
