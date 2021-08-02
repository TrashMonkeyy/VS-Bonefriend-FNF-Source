#include <hxcpp.h>

#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace motion{
namespace actuators{


static ::String IGenericActuator_obj_sMemberFields[] = {
	HX_("autoVisible",c3,1c,08,89),
	HX_("delay",83,d7,26,d7),
	HX_("ease",ee,8b,0c,43),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onRepeat",da,8d,29,e6),
	HX_("onUpdate",88,7c,b2,66),
	HX_("reflect",3d,84,29,e9),
	HX_("repeat",5b,97,7c,06),
	HX_("reverse",22,39,fc,1a),
	HX_("smartRotation",67,a0,05,41),
	HX_("snapping",bc,35,b9,1f),
	HX_("onPause",57,75,95,53),
	HX_("onResume",2c,60,31,e8),
	HX_("apply",6e,85,3b,24),
	HX_("move",11,e3,60,48),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

::hx::Class IGenericActuator_obj::__mClass;

void IGenericActuator_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.IGenericActuator",33,b5,b8,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IGenericActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x586a3bcb >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
