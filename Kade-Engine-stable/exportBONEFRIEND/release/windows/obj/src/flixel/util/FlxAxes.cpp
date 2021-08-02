#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxAxes FlxAxes_obj::X;

::flixel::util::FlxAxes FlxAxes_obj::XY;

::flixel::util::FlxAxes FlxAxes_obj::Y;

bool FlxAxes_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("X",58,00,00,00)) { outValue = FlxAxes_obj::X; return true; }
	if (inName==HX_("XY",01,4d,00,00)) { outValue = FlxAxes_obj::XY; return true; }
	if (inName==HX_("Y",59,00,00,00)) { outValue = FlxAxes_obj::Y; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxAxes_obj)

int FlxAxes_obj::__FindIndex(::String inName)
{
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("XY",01,4d,00,00)) return 2;
	if (inName==HX_("Y",59,00,00,00)) return 1;
	return super::__FindIndex(inName);
}

int FlxAxes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("X",58,00,00,00)) return 0;
	if (inName==HX_("XY",01,4d,00,00)) return 0;
	if (inName==HX_("Y",59,00,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxAxes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("X",58,00,00,00)) return X;
	if (inName==HX_("XY",01,4d,00,00)) return XY;
	if (inName==HX_("Y",59,00,00,00)) return Y;
	return super::__Field(inName,inCallProp);
}

static ::String FlxAxes_obj_sStaticFields[] = {
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	HX_("XY",01,4d,00,00),
	::String(null())
};

::hx::Class FlxAxes_obj::__mClass;

Dynamic __Create_FlxAxes_obj() { return new FlxAxes_obj; }

void FlxAxes_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.util.FlxAxes",7d,ff,79,b0), ::hx::TCanCast< FlxAxes_obj >,FlxAxes_obj_sStaticFields,0,
	&__Create_FlxAxes_obj, &__Create,
	&super::__SGetClass(), &CreateFlxAxes_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxAxes_obj::__GetStatic;
}

void FlxAxes_obj::__boot()
{
X = ::hx::CreateConstEnum< FlxAxes_obj >(HX_("X",58,00,00,00),0);
XY = ::hx::CreateConstEnum< FlxAxes_obj >(HX_("XY",01,4d,00,00),2);
Y = ::hx::CreateConstEnum< FlxAxes_obj >(HX_("Y",59,00,00,00),1);
}


} // end namespace flixel
} // end namespace util
