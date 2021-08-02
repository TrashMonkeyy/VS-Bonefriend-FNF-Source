#include <hxcpp.h>

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_ComponentPath
#include <motion/_MotionPath/ComponentPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_544a6c473e370053_152_new,"motion._MotionPath.ComponentPath","new",0x01aab168,"motion._MotionPath.ComponentPath.new","motion/MotionPath.hx",152,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_544a6c473e370053_160_addPath,"motion._MotionPath.ComponentPath","addPath",0xae9f2d6e,"motion._MotionPath.ComponentPath.addPath","motion/MotionPath.hx",160,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_544a6c473e370053_177_calculate,"motion._MotionPath.ComponentPath","calculate",0x554bec6e,"motion._MotionPath.ComponentPath.calculate","motion/MotionPath.hx",177,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_544a6c473e370053_214_get_start,"motion._MotionPath.ComponentPath","get_start",0x179627c1,"motion._MotionPath.ComponentPath.get_start","motion/MotionPath.hx",214,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_544a6c473e370053_221_set_start,"motion._MotionPath.ComponentPath","set_start",0xfae713cd,"motion._MotionPath.ComponentPath.set_start","motion/MotionPath.hx",221,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_544a6c473e370053_236_get_end,"motion._MotionPath.ComponentPath","get_end",0x4ed1d17a,"motion._MotionPath.ComponentPath.get_end","motion/MotionPath.hx",236,0x95e57daa)
namespace motion{
namespace _MotionPath{

void ComponentPath_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_544a6c473e370053_152_new)
HXLINE( 154)		this->paths = ::Array_obj< ::Dynamic>::__new();
HXLINE( 155)		this->strength = ( (Float)(0) );
            	}

Dynamic ComponentPath_obj::__CreateEmpty() { return new ComponentPath_obj; }

void *ComponentPath_obj::_hx_vtable = 0;

Dynamic ComponentPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentPath_obj > _hx_result = new ComponentPath_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16146fde;
}

static ::motion::IComponentPath_obj _hx_motion__MotionPath_ComponentPath__hx_motion_IComponentPath= {
	( Float (::hx::Object::*)())&::motion::_MotionPath::ComponentPath_obj::get_start,
	( Float (::hx::Object::*)(Float))&::motion::_MotionPath::ComponentPath_obj::set_start,
	( Float (::hx::Object::*)())&::motion::_MotionPath::ComponentPath_obj::get_end,
	( Float (::hx::Object::*)(Float))&::motion::_MotionPath::ComponentPath_obj::calculate,
};

void *ComponentPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe9f30fef: return &_hx_motion__MotionPath_ComponentPath__hx_motion_IComponentPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ComponentPath_obj::addPath(::Dynamic path){
            	HX_STACKFRAME(&_hx_pos_544a6c473e370053_160_addPath)
HXLINE( 165)		if ((this->paths->length > 0)) {
HXLINE( 167)			::motion::IComponentPath_obj::set_start(path,::motion::IComponentPath_obj::get_end(this->paths->__get((this->paths->length - 1))));
            		}
HXLINE( 171)		this->paths->push(path);
HXLINE( 172)		 ::motion::_MotionPath::ComponentPath _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 172)		_hx_tmp->strength = ( (Float)((_hx_tmp->strength + path->__Field(HX_("strength",81,d2,8e,8e),::hx::paccDynamic))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentPath_obj,addPath,(void))

Float ComponentPath_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_544a6c473e370053_177_calculate)
HXLINE( 179)		if ((this->paths->length == 1)) {
HXLINE( 181)			return ::motion::IComponentPath_obj::calculate(this->paths->__get(0),k);
            		}
            		else {
HXLINE( 185)			Float ratio = (k * this->strength);
HXLINE( 187)			{
HXLINE( 187)				int _g = 0;
HXDLIN( 187)				::Array< ::Dynamic> _g1 = this->paths;
HXDLIN( 187)				while((_g < _g1->length)){
HXLINE( 187)					::Dynamic path = _g1->__get(_g);
HXDLIN( 187)					_g = (_g + 1);
HXLINE( 189)					if (::hx::IsGreater( ratio,path->__Field(HX_("strength",81,d2,8e,8e),::hx::paccDynamic) )) {
HXLINE( 191)						ratio = (ratio - ( (Float)(path->__Field(HX_("strength",81,d2,8e,8e),::hx::paccDynamic)) ));
            					}
            					else {
HXLINE( 195)						return ::motion::IComponentPath_obj::calculate(path,(ratio / ( (Float)(path->__Field(HX_("strength",81,d2,8e,8e),::hx::paccDynamic)) )));
            					}
            				}
            			}
            		}
HXLINE( 203)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentPath_obj,calculate,return )

Float ComponentPath_obj::get_start(){
            	HX_STACKFRAME(&_hx_pos_544a6c473e370053_214_get_start)
HXDLIN( 214)		if ((this->paths->length > 0)) {
HXDLIN( 214)			return ::motion::IComponentPath_obj::get_start(this->paths->__get(0));
            		}
            		else {
HXDLIN( 214)			return ( (Float)(0) );
            		}
HXDLIN( 214)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentPath_obj,get_start,return )

Float ComponentPath_obj::set_start(Float value){
            	HX_STACKFRAME(&_hx_pos_544a6c473e370053_221_set_start)
HXDLIN( 221)		if ((this->paths->length > 0)) {
HXLINE( 223)			return ::motion::IComponentPath_obj::set_start(this->paths->__get(0),value);
            		}
            		else {
HXLINE( 227)			return ( (Float)(0) );
            		}
HXLINE( 221)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentPath_obj,set_start,return )

Float ComponentPath_obj::get_end(){
            	HX_STACKFRAME(&_hx_pos_544a6c473e370053_236_get_end)
HXDLIN( 236)		if ((this->paths->length > 0)) {
HXLINE( 238)			::Dynamic path = this->paths->__get((this->paths->length - 1));
HXLINE( 239)			return ::motion::IComponentPath_obj::get_end(path);
            		}
            		else {
HXLINE( 243)			return this->get_start();
            		}
HXLINE( 236)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentPath_obj,get_end,return )


::hx::ObjectPtr< ComponentPath_obj > ComponentPath_obj::__new() {
	::hx::ObjectPtr< ComponentPath_obj > __this = new ComponentPath_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentPath_obj > ComponentPath_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentPath_obj *__this = (ComponentPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentPath_obj), true, "motion._MotionPath.ComponentPath"));
	*(void **)__this = ComponentPath_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentPath_obj::ComponentPath_obj()
{
}

void ComponentPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentPath);
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(paths,"paths");
	HX_MARK_END_CLASS();
}

void ComponentPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(paths,"paths");
}

::hx::Val ComponentPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_end() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_start() ); }
		if (HX_FIELD_EQ(inName,"paths") ) { return ::hx::Val( paths ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPath") ) { return ::hx::Val( addPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_end") ) { return ::hx::Val( get_end_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_start") ) { return ::hx::Val( get_start_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_start") ) { return ::hx::Val( set_start_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_start(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("paths",2e,0b,57,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentPath_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ComponentPath_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ComponentPath_obj,paths),HX_("paths",2e,0b,57,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentPath_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentPath_obj_sMemberFields[] = {
	HX_("strength",81,d2,8e,8e),
	HX_("paths",2e,0b,57,bd),
	HX_("addPath",66,28,8f,86),
	HX_("calculate",66,95,6a,05),
	HX_("get_start",b9,d0,b4,c7),
	HX_("set_start",c5,bc,05,ab),
	HX_("get_end",72,cc,c1,26),
	::String(null()) };

::hx::Class ComponentPath_obj::__mClass;

void ComponentPath_obj::__register()
{
	ComponentPath_obj _hx_dummy;
	ComponentPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion._MotionPath.ComponentPath",76,1d,d4,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentPath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace _MotionPath