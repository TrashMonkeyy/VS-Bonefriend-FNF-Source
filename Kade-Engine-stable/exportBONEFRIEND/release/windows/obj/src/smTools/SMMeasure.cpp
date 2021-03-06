#include <hxcpp.h>

#ifndef INCLUDED_smTools_SMMeasure
#include <smTools/SMMeasure.h>
#endif
#ifndef INCLUDED_smTools_SMNote
#include <smTools/SMNote.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b8d66fc9494d61ce_11_new,"smTools.SMMeasure","new",0xc24866c9,"smTools.SMMeasure.new","smTools/SMMeasure.hx",11,0x9cb8c248)
namespace smTools{

void SMMeasure_obj::__construct(::Array< ::String > measureData){
            	HX_STACKFRAME(&_hx_pos_b8d66fc9494d61ce_11_new)
HXLINE(  12)		this->_measure = measureData;
HXLINE(  13)		this->notes = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic SMMeasure_obj::__CreateEmpty() { return new SMMeasure_obj; }

void *SMMeasure_obj::_hx_vtable = 0;

Dynamic SMMeasure_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SMMeasure_obj > _hx_result = new SMMeasure_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SMMeasure_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16aaac63;
}


::hx::ObjectPtr< SMMeasure_obj > SMMeasure_obj::__new(::Array< ::String > measureData) {
	::hx::ObjectPtr< SMMeasure_obj > __this = new SMMeasure_obj();
	__this->__construct(measureData);
	return __this;
}

::hx::ObjectPtr< SMMeasure_obj > SMMeasure_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::String > measureData) {
	SMMeasure_obj *__this = (SMMeasure_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SMMeasure_obj), true, "smTools.SMMeasure"));
	*(void **)__this = SMMeasure_obj::_hx_vtable;
	__this->__construct(measureData);
	return __this;
}

SMMeasure_obj::SMMeasure_obj()
{
}

void SMMeasure_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SMMeasure);
	HX_MARK_MEMBER_NAME(notes,"notes");
	HX_MARK_MEMBER_NAME(_measure,"_measure");
	HX_MARK_END_CLASS();
}

void SMMeasure_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(notes,"notes");
	HX_VISIT_MEMBER_NAME(_measure,"_measure");
}

::hx::Val SMMeasure_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { return ::hx::Val( notes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_measure") ) { return ::hx::Val( _measure ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SMMeasure_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { notes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_measure") ) { _measure=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SMMeasure_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("notes",41,dc,ca,9f));
	outFields->push(HX_("_measure",df,54,a2,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SMMeasure_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SMMeasure_obj,notes),HX_("notes",41,dc,ca,9f)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(SMMeasure_obj,_measure),HX_("_measure",df,54,a2,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SMMeasure_obj_sStaticStorageInfo = 0;
#endif

static ::String SMMeasure_obj_sMemberFields[] = {
	HX_("notes",41,dc,ca,9f),
	HX_("_measure",df,54,a2,76),
	::String(null()) };

::hx::Class SMMeasure_obj::__mClass;

void SMMeasure_obj::__register()
{
	SMMeasure_obj _hx_dummy;
	SMMeasure_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("smTools.SMMeasure",57,4e,f1,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SMMeasure_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SMMeasure_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SMMeasure_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SMMeasure_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace smTools
