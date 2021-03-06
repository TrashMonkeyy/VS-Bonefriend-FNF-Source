#include <hxcpp.h>

#ifndef INCLUDED_sys_io_FileSeek
#include <sys/io/FileSeek.h>
#endif
namespace sys{
namespace io{

::sys::io::FileSeek FileSeek_obj::SeekBegin;

::sys::io::FileSeek FileSeek_obj::SeekCur;

::sys::io::FileSeek FileSeek_obj::SeekEnd;

bool FileSeek_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SeekBegin",71,e1,d6,68)) { outValue = FileSeek_obj::SeekBegin; return true; }
	if (inName==HX_("SeekCur",c8,9a,e6,4b)) { outValue = FileSeek_obj::SeekCur; return true; }
	if (inName==HX_("SeekEnd",23,19,e8,4b)) { outValue = FileSeek_obj::SeekEnd; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FileSeek_obj)

int FileSeek_obj::__FindIndex(::String inName)
{
	if (inName==HX_("SeekBegin",71,e1,d6,68)) return 0;
	if (inName==HX_("SeekCur",c8,9a,e6,4b)) return 1;
	if (inName==HX_("SeekEnd",23,19,e8,4b)) return 2;
	return super::__FindIndex(inName);
}

int FileSeek_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("SeekBegin",71,e1,d6,68)) return 0;
	if (inName==HX_("SeekCur",c8,9a,e6,4b)) return 0;
	if (inName==HX_("SeekEnd",23,19,e8,4b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FileSeek_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SeekBegin",71,e1,d6,68)) return SeekBegin;
	if (inName==HX_("SeekCur",c8,9a,e6,4b)) return SeekCur;
	if (inName==HX_("SeekEnd",23,19,e8,4b)) return SeekEnd;
	return super::__Field(inName,inCallProp);
}

static ::String FileSeek_obj_sStaticFields[] = {
	HX_("SeekBegin",71,e1,d6,68),
	HX_("SeekCur",c8,9a,e6,4b),
	HX_("SeekEnd",23,19,e8,4b),
	::String(null())
};

::hx::Class FileSeek_obj::__mClass;

Dynamic __Create_FileSeek_obj() { return new FileSeek_obj; }

void FileSeek_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("sys.io.FileSeek",db,3e,fe,78), ::hx::TCanCast< FileSeek_obj >,FileSeek_obj_sStaticFields,0,
	&__Create_FileSeek_obj, &__Create,
	&super::__SGetClass(), &CreateFileSeek_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FileSeek_obj::__GetStatic;
}

void FileSeek_obj::__boot()
{
SeekBegin = ::hx::CreateConstEnum< FileSeek_obj >(HX_("SeekBegin",71,e1,d6,68),0);
SeekCur = ::hx::CreateConstEnum< FileSeek_obj >(HX_("SeekCur",c8,9a,e6,4b),1);
SeekEnd = ::hx::CreateConstEnum< FileSeek_obj >(HX_("SeekEnd",23,19,e8,4b),2);
}


} // end namespace sys
} // end namespace io
