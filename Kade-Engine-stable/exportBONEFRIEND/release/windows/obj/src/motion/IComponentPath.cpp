#include <hxcpp.h>

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif

namespace motion{


static ::String IComponentPath_obj_sMemberFields[] = {
	HX_("get_start",b9,d0,b4,c7),
	HX_("set_start",c5,bc,05,ab),
	HX_("get_end",72,cc,c1,26),
	HX_("end",db,03,4d,00),
	HX_("strength",81,d2,8e,8e),
	HX_("calculate",66,95,6a,05),
	::String(null()) };

::hx::Class IComponentPath_obj::__mClass;

void IComponentPath_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.IComponentPath",31,56,78,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IComponentPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xe9f30fef >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion