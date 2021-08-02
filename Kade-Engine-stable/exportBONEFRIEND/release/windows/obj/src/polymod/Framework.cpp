#include <hxcpp.h>

#ifndef INCLUDED_polymod_Framework
#include <polymod/Framework.h>
#endif
namespace polymod{

::polymod::Framework Framework_obj::CUSTOM;

::polymod::Framework Framework_obj::HEAPS;

::polymod::Framework Framework_obj::KHA;

::polymod::Framework Framework_obj::LIME;

::polymod::Framework Framework_obj::NME;

::polymod::Framework Framework_obj::OPENFL;

::polymod::Framework Framework_obj::UNKNOWN;

bool Framework_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = Framework_obj::CUSTOM; return true; }
	if (inName==HX_("HEAPS",a7,15,a7,a2)) { outValue = Framework_obj::HEAPS; return true; }
	if (inName==HX_("KHA",04,28,39,00)) { outValue = Framework_obj::KHA; return true; }
	if (inName==HX_("LIME",15,df,73,32)) { outValue = Framework_obj::LIME; return true; }
	if (inName==HX_("NME",26,73,3b,00)) { outValue = Framework_obj::NME; return true; }
	if (inName==HX_("OPENFL",90,0f,17,d4)) { outValue = Framework_obj::OPENFL; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = Framework_obj::UNKNOWN; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Framework_obj)

int Framework_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 5;
	if (inName==HX_("HEAPS",a7,15,a7,a2)) return 3;
	if (inName==HX_("KHA",04,28,39,00)) return 4;
	if (inName==HX_("LIME",15,df,73,32)) return 1;
	if (inName==HX_("NME",26,73,3b,00)) return 0;
	if (inName==HX_("OPENFL",90,0f,17,d4)) return 2;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 6;
	return super::__FindIndex(inName);
}

int Framework_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 0;
	if (inName==HX_("HEAPS",a7,15,a7,a2)) return 0;
	if (inName==HX_("KHA",04,28,39,00)) return 0;
	if (inName==HX_("LIME",15,df,73,32)) return 0;
	if (inName==HX_("NME",26,73,3b,00)) return 0;
	if (inName==HX_("OPENFL",90,0f,17,d4)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Framework_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM;
	if (inName==HX_("HEAPS",a7,15,a7,a2)) return HEAPS;
	if (inName==HX_("KHA",04,28,39,00)) return KHA;
	if (inName==HX_("LIME",15,df,73,32)) return LIME;
	if (inName==HX_("NME",26,73,3b,00)) return NME;
	if (inName==HX_("OPENFL",90,0f,17,d4)) return OPENFL;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String Framework_obj_sStaticFields[] = {
	HX_("NME",26,73,3b,00),
	HX_("LIME",15,df,73,32),
	HX_("OPENFL",90,0f,17,d4),
	HX_("HEAPS",a7,15,a7,a2),
	HX_("KHA",04,28,39,00),
	HX_("CUSTOM",b1,33,15,f2),
	HX_("UNKNOWN",6a,f7,4e,61),
	::String(null())
};

::hx::Class Framework_obj::__mClass;

Dynamic __Create_Framework_obj() { return new Framework_obj; }

void Framework_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("polymod.Framework",e6,5d,52,93), ::hx::TCanCast< Framework_obj >,Framework_obj_sStaticFields,0,
	&__Create_Framework_obj, &__Create,
	&super::__SGetClass(), &CreateFramework_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Framework_obj::__GetStatic;
}

void Framework_obj::__boot()
{
CUSTOM = ::hx::CreateConstEnum< Framework_obj >(HX_("CUSTOM",b1,33,15,f2),5);
HEAPS = ::hx::CreateConstEnum< Framework_obj >(HX_("HEAPS",a7,15,a7,a2),3);
KHA = ::hx::CreateConstEnum< Framework_obj >(HX_("KHA",04,28,39,00),4);
LIME = ::hx::CreateConstEnum< Framework_obj >(HX_("LIME",15,df,73,32),1);
NME = ::hx::CreateConstEnum< Framework_obj >(HX_("NME",26,73,3b,00),0);
OPENFL = ::hx::CreateConstEnum< Framework_obj >(HX_("OPENFL",90,0f,17,d4),2);
UNKNOWN = ::hx::CreateConstEnum< Framework_obj >(HX_("UNKNOWN",6a,f7,4e,61),6);
}


} // end namespace polymod
