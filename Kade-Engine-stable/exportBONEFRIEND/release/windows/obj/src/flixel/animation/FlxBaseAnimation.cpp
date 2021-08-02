#include <hxcpp.h>

#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb2d225a438df606_8_new,"flixel.animation.FlxBaseAnimation","new",0x893a9def,"flixel.animation.FlxBaseAnimation.new","flixel/animation/FlxBaseAnimation.hx",8,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_26_set_curIndex,"flixel.animation.FlxBaseAnimation","set_curIndex",0x05c5f580,"flixel.animation.FlxBaseAnimation.set_curIndex","flixel/animation/FlxBaseAnimation.hx",26,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_44_destroy,"flixel.animation.FlxBaseAnimation","destroy",0x93a46e09,"flixel.animation.FlxBaseAnimation.destroy","flixel/animation/FlxBaseAnimation.hx",44,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_49_update,"flixel.animation.FlxBaseAnimation","update",0xf1225bda,"flixel.animation.FlxBaseAnimation.update","flixel/animation/FlxBaseAnimation.hx",49,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_53_clone,"flixel.animation.FlxBaseAnimation","clone",0xf2c3a2ac,"flixel.animation.FlxBaseAnimation.clone","flixel/animation/FlxBaseAnimation.hx",53,0x062a9a5f)
namespace flixel{
namespace animation{

void FlxBaseAnimation_obj::__construct( ::flixel::animation::FlxAnimationController Parent,::String Name){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_8_new)
HXLINE(  23)		this->curIndex = 0;
HXLINE(  39)		this->parent = Parent;
HXLINE(  40)		this->name = Name;
            	}

Dynamic FlxBaseAnimation_obj::__CreateEmpty() { return new FlxBaseAnimation_obj; }

void *FlxBaseAnimation_obj::_hx_vtable = 0;

Dynamic FlxBaseAnimation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseAnimation_obj > _hx_result = new FlxBaseAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBaseAnimation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14455e69;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_animation_FlxBaseAnimation__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::animation::FlxBaseAnimation_obj::destroy,
};

void *FlxBaseAnimation_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_animation_FlxBaseAnimation__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

int FlxBaseAnimation_obj::set_curIndex(int Value){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_26_set_curIndex)
HXLINE(  27)		this->curIndex = Value;
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if (::hx::IsNotNull( this->parent )) {
HXLINE(  29)			_hx_tmp = ::hx::IsInstanceEq( this->parent->_curAnim,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(  29)			_hx_tmp = false;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  31)			this->parent->set_frameIndex(Value);
            		}
HXLINE(  34)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,set_curIndex,return )

void FlxBaseAnimation_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_44_destroy)
HXLINE(  45)		this->parent = null();
HXLINE(  46)		this->name = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseAnimation_obj,destroy,(void))

void FlxBaseAnimation_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_49_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,update,(void))

 ::flixel::animation::FlxBaseAnimation FlxBaseAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_53_clone)
HXDLIN(  53)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,clone,return )


::hx::ObjectPtr< FlxBaseAnimation_obj > FlxBaseAnimation_obj::__new( ::flixel::animation::FlxAnimationController Parent,::String Name) {
	::hx::ObjectPtr< FlxBaseAnimation_obj > __this = new FlxBaseAnimation_obj();
	__this->__construct(Parent,Name);
	return __this;
}

::hx::ObjectPtr< FlxBaseAnimation_obj > FlxBaseAnimation_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::animation::FlxAnimationController Parent,::String Name) {
	FlxBaseAnimation_obj *__this = (FlxBaseAnimation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseAnimation_obj), true, "flixel.animation.FlxBaseAnimation"));
	*(void **)__this = FlxBaseAnimation_obj::_hx_vtable;
	__this->__construct(Parent,Name);
	return __this;
}

FlxBaseAnimation_obj::FlxBaseAnimation_obj()
{
}

void FlxBaseAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseAnimation);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(curIndex,"curIndex");
	HX_MARK_END_CLASS();
}

void FlxBaseAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(curIndex,"curIndex");
}

::hx::Val FlxBaseAnimation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { return ::hx::Val( curIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return ::hx::Val( set_curIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBaseAnimation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::animation::FlxAnimationController >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_curIndex(inValue.Cast< int >()) );curIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("curIndex",72,95,c2,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseAnimation_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::animation::FlxAnimationController */ ,(int)offsetof(FlxBaseAnimation_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsString,(int)offsetof(FlxBaseAnimation_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(FlxBaseAnimation_obj,curIndex),HX_("curIndex",72,95,c2,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBaseAnimation_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseAnimation_obj_sMemberFields[] = {
	HX_("parent",2a,05,7e,ed),
	HX_("name",4b,72,ff,48),
	HX_("curIndex",72,95,c2,05),
	HX_("set_curIndex",ef,6c,d5,cf),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class FlxBaseAnimation_obj::__mClass;

void FlxBaseAnimation_obj::__register()
{
	FlxBaseAnimation_obj _hx_dummy;
	FlxBaseAnimation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.animation.FlxBaseAnimation",7d,7a,23,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseAnimation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseAnimation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseAnimation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace animation
