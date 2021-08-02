#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif

namespace flixel{


static ::String IFlxBasic_obj_sMemberFields[] = {
	HX_("set_active",03,50,4b,0a),
	HX_("set_visible",95,df,8b,33),
	HX_("set_alive",30,ac,8b,48),
	HX_("set_exists",19,2c,e5,b3),
	HX_("ID",db,3f,00,00),
	HX_("active",c6,41,46,16),
	HX_("visible",72,78,24,a3),
	HX_("alive",cd,63,91,21),
	HX_("exists",dc,1d,e0,bf),
	HX_("draw",04,2c,70,42),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class IFlxBasic_obj::__mClass;

void IFlxBasic_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.IFlxBasic",b3,fd,d1,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxBasic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x284cfea9 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
