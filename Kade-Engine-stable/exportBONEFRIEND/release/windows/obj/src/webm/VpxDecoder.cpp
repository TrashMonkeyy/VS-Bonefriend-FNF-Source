#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_webm_VpxDecoder
#include <webm/VpxDecoder.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_817c614139ca45b5_21_new,"webm.VpxDecoder","new",0xe84506ad,"webm.VpxDecoder.new","webm/VpxDecoder.hx",21,0x20b480c2)
HX_LOCAL_STACK_FRAME(_hx_pos_817c614139ca45b5_26_decode,"webm.VpxDecoder","decode",0x2e075501,"webm.VpxDecoder.decode","webm/VpxDecoder.hx",26,0x20b480c2)
HX_LOCAL_STACK_FRAME(_hx_pos_817c614139ca45b5_30_getAndRenderFrame,"webm.VpxDecoder","getAndRenderFrame",0x031705a3,"webm.VpxDecoder.getAndRenderFrame","webm/VpxDecoder.hx",30,0x20b480c2)
HX_LOCAL_STACK_FRAME(_hx_pos_817c614139ca45b5_14_get_version,"webm.VpxDecoder","get_version",0x22a0127c,"webm.VpxDecoder.get_version","webm/VpxDecoder.hx",14,0x20b480c2)
HX_LOCAL_STACK_FRAME(_hx_pos_817c614139ca45b5_44_boot,"webm.VpxDecoder","boot",0x4c39d145,"webm.VpxDecoder.boot","webm/VpxDecoder.hx",44,0x20b480c2)
HX_LOCAL_STACK_FRAME(_hx_pos_817c614139ca45b5_45_boot,"webm.VpxDecoder","boot",0x4c39d145,"webm.VpxDecoder.boot","webm/VpxDecoder.hx",45,0x20b480c2)
HX_LOCAL_STACK_FRAME(_hx_pos_817c614139ca45b5_46_boot,"webm.VpxDecoder","boot",0x4c39d145,"webm.VpxDecoder.boot","webm/VpxDecoder.hx",46,0x20b480c2)
HX_LOCAL_STACK_FRAME(_hx_pos_817c614139ca45b5_47_boot,"webm.VpxDecoder","boot",0x4c39d145,"webm.VpxDecoder.boot","webm/VpxDecoder.hx",47,0x20b480c2)
namespace webm{

void VpxDecoder_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_21_new)
HXDLIN(  21)		this->context = ::webm::VpxDecoder_obj::hx_vpx_codec_dec_init();
            	}

Dynamic VpxDecoder_obj::__CreateEmpty() { return new VpxDecoder_obj; }

void *VpxDecoder_obj::_hx_vtable = 0;

Dynamic VpxDecoder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VpxDecoder_obj > _hx_result = new VpxDecoder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VpxDecoder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ad4db43;
}

void VpxDecoder_obj::decode(::Array< unsigned char > data){
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_26_decode)
HXDLIN(  26)		::webm::VpxDecoder_obj::hx_vpx_codec_decode(this->context,data);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VpxDecoder_obj,decode,(void))

void VpxDecoder_obj::getAndRenderFrame( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_30_getAndRenderFrame)
HXLINE(  31)		::cpp::VirtualArray info = ( (::cpp::VirtualArray)(::webm::VpxDecoder_obj::hx_vpx_codec_get_frame(this->context)) );
HXLINE(  33)		if (::hx::IsNotNull( info )) {
HXLINE(  35)			 ::lime::graphics::ImageBuffer buffer = bitmapData->image->buffer;
HXLINE(  36)			buffer->data->buffer = ::haxe::io::Bytes_obj::ofData(( (::Array< unsigned char >)(info->__get(2)) ));
HXLINE(  37)			buffer->format = 1;
HXLINE(  38)			buffer->premultiplied = true;
HXLINE(  39)			bitmapData->image->set_format(2);
HXLINE(  40)			bitmapData->image->version++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VpxDecoder_obj,getAndRenderFrame,(void))

::String VpxDecoder_obj::version;

::String VpxDecoder_obj::get_version(){
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_14_get_version)
HXDLIN(  14)		return ( (::String)(::webm::VpxDecoder_obj::hx_vpx_codec_iface_name()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VpxDecoder_obj,get_version,return )

 ::Dynamic VpxDecoder_obj::hx_vpx_codec_iface_name;

 ::Dynamic VpxDecoder_obj::hx_vpx_codec_dec_init;

 ::Dynamic VpxDecoder_obj::hx_vpx_codec_decode;

 ::Dynamic VpxDecoder_obj::hx_vpx_codec_get_frame;


::hx::ObjectPtr< VpxDecoder_obj > VpxDecoder_obj::__new() {
	::hx::ObjectPtr< VpxDecoder_obj > __this = new VpxDecoder_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VpxDecoder_obj > VpxDecoder_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VpxDecoder_obj *__this = (VpxDecoder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VpxDecoder_obj), true, "webm.VpxDecoder"));
	*(void **)__this = VpxDecoder_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VpxDecoder_obj::VpxDecoder_obj()
{
}

void VpxDecoder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VpxDecoder);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_END_CLASS();
}

void VpxDecoder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
}

::hx::Val VpxDecoder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return ::hx::Val( decode_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAndRenderFrame") ) { return ::hx::Val( getAndRenderFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VpxDecoder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_version() : version ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_decode") ) { outValue = ( hx_vpx_codec_decode ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_dec_init") ) { outValue = ( hx_vpx_codec_dec_init ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_get_frame") ) { outValue = ( hx_vpx_codec_get_frame ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_iface_name") ) { outValue = ( hx_vpx_codec_iface_name ); return true; }
	}
	return false;
}

::hx::Val VpxDecoder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VpxDecoder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_decode") ) { hx_vpx_codec_decode=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_dec_init") ) { hx_vpx_codec_dec_init=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_get_frame") ) { hx_vpx_codec_get_frame=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"hx_vpx_codec_iface_name") ) { hx_vpx_codec_iface_name=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void VpxDecoder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("context",ef,95,77,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VpxDecoder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VpxDecoder_obj,context),HX_("context",ef,95,77,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo VpxDecoder_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &VpxDecoder_obj::version,HX_("version",18,e7,f1,7c)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &VpxDecoder_obj::hx_vpx_codec_iface_name,HX_("hx_vpx_codec_iface_name",9d,b6,11,a2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &VpxDecoder_obj::hx_vpx_codec_dec_init,HX_("hx_vpx_codec_dec_init",66,79,8d,79)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &VpxDecoder_obj::hx_vpx_codec_decode,HX_("hx_vpx_codec_decode",67,58,4d,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &VpxDecoder_obj::hx_vpx_codec_get_frame,HX_("hx_vpx_codec_get_frame",eb,e2,68,66)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String VpxDecoder_obj_sMemberFields[] = {
	HX_("context",ef,95,77,19),
	HX_("decode",2e,5d,ed,64),
	HX_("getAndRenderFrame",96,42,04,94),
	::String(null()) };

static void VpxDecoder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VpxDecoder_obj::version,"version");
	HX_MARK_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_iface_name,"hx_vpx_codec_iface_name");
	HX_MARK_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_dec_init,"hx_vpx_codec_dec_init");
	HX_MARK_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_decode,"hx_vpx_codec_decode");
	HX_MARK_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_get_frame,"hx_vpx_codec_get_frame");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VpxDecoder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VpxDecoder_obj::version,"version");
	HX_VISIT_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_iface_name,"hx_vpx_codec_iface_name");
	HX_VISIT_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_dec_init,"hx_vpx_codec_dec_init");
	HX_VISIT_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_decode,"hx_vpx_codec_decode");
	HX_VISIT_MEMBER_NAME(VpxDecoder_obj::hx_vpx_codec_get_frame,"hx_vpx_codec_get_frame");
};

#endif

::hx::Class VpxDecoder_obj::__mClass;

static ::String VpxDecoder_obj_sStaticFields[] = {
	HX_("version",18,e7,f1,7c),
	HX_("get_version",2f,47,ec,02),
	HX_("hx_vpx_codec_iface_name",9d,b6,11,a2),
	HX_("hx_vpx_codec_dec_init",66,79,8d,79),
	HX_("hx_vpx_codec_decode",67,58,4d,fc),
	HX_("hx_vpx_codec_get_frame",eb,e2,68,66),
	::String(null())
};

void VpxDecoder_obj::__register()
{
	VpxDecoder_obj _hx_dummy;
	VpxDecoder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("webm.VpxDecoder",3b,2c,df,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VpxDecoder_obj::__GetStatic;
	__mClass->mSetStaticField = &VpxDecoder_obj::__SetStatic;
	__mClass->mMarkFunc = VpxDecoder_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VpxDecoder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VpxDecoder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VpxDecoder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VpxDecoder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VpxDecoder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VpxDecoder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VpxDecoder_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_44_boot)
HXDLIN(  44)		hx_vpx_codec_iface_name = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_vpx_codec_iface_name",9d,b6,11,a2),0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_45_boot)
HXDLIN(  45)		hx_vpx_codec_dec_init = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_vpx_codec_dec_init",66,79,8d,79),0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_46_boot)
HXDLIN(  46)		hx_vpx_codec_decode = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_vpx_codec_decode",67,58,4d,fc),2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_817c614139ca45b5_47_boot)
HXDLIN(  47)		hx_vpx_codec_get_frame = ::cpp::Lib_obj::load(HX_("extension-webm",27,d8,4a,36),HX_("hx_vpx_codec_get_frame",eb,e2,68,66),1);
            	}
}

} // end namespace webm
