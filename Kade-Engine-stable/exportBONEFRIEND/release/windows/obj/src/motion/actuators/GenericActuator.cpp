#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_38_new,"motion.actuators.GenericActuator","new",0x9a3981b6,"motion.actuators.GenericActuator.new","motion/actuators/GenericActuator.hx",38,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_60_apply,"motion.actuators.GenericActuator","apply",0x47f0b844,"motion.actuators.GenericActuator.apply","motion/actuators/GenericActuator.hx",60,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_90_autoVisible,"motion.actuators.GenericActuator","autoVisible",0xd6a01419,"motion.actuators.GenericActuator.autoVisible","motion/actuators/GenericActuator.hx",90,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_105_callMethod,"motion.actuators.GenericActuator","callMethod",0xe91f9389,"motion.actuators.GenericActuator.callMethod","motion/actuators/GenericActuator.hx",105,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_138_change,"motion.actuators.GenericActuator","change",0xd249d9da,"motion.actuators.GenericActuator.change","motion/actuators/GenericActuator.hx",138,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_147_complete,"motion.actuators.GenericActuator","complete",0x7551b7a3,"motion.actuators.GenericActuator.complete","motion/actuators/GenericActuator.hx",147,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_171_delay,"motion.actuators.GenericActuator","delay",0xfadc0a59,"motion.actuators.GenericActuator.delay","motion/actuators/GenericActuator.hx",171,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_185_ease,"motion.actuators.GenericActuator","ease",0x522205d8,"motion.actuators.GenericActuator.ease","motion/actuators/GenericActuator.hx",185,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_194_move,"motion.actuators.GenericActuator","move",0x57765cfb,"motion.actuators.GenericActuator.move","motion/actuators/GenericActuator.hx",194,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_207_onComplete,"motion.actuators.GenericActuator","onComplete",0x12139a62,"motion.actuators.GenericActuator.onComplete","motion/actuators/GenericActuator.hx",207,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_238_onRepeat,"motion.actuators.GenericActuator","onRepeat",0xdbb344c4,"motion.actuators.GenericActuator.onRepeat","motion/actuators/GenericActuator.hx",238,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_263_onUpdate,"motion.actuators.GenericActuator","onUpdate",0x5c3c3372,"motion.actuators.GenericActuator.onUpdate","motion/actuators/GenericActuator.hx",263,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_287_onPause,"motion.actuators.GenericActuator","onPause",0xb51d89ad,"motion.actuators.GenericActuator.onPause","motion/actuators/GenericActuator.hx",287,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_311_onResume,"motion.actuators.GenericActuator","onResume",0xddbb1716,"motion.actuators.GenericActuator.onResume","motion/actuators/GenericActuator.hx",311,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_332_pause,"motion.actuators.GenericActuator","pause",0xe10d09cc,"motion.actuators.GenericActuator.pause","motion/actuators/GenericActuator.hx",332,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_343_reflect,"motion.actuators.GenericActuator","reflect",0x4ab19893,"motion.actuators.GenericActuator.reflect","motion/actuators/GenericActuator.hx",343,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_364_repeat,"motion.actuators.GenericActuator","repeat",0x2153dfc5,"motion.actuators.GenericActuator.repeat","motion/actuators/GenericActuator.hx",364,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_381_resume,"motion.actuators.GenericActuator","resume",0x235bb217,"motion.actuators.GenericActuator.resume","motion/actuators/GenericActuator.hx",381,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_392_reverse,"motion.actuators.GenericActuator","reverse",0x7c844d78,"motion.actuators.GenericActuator.reverse","motion/actuators/GenericActuator.hx",392,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_413_smartRotation,"motion.actuators.GenericActuator","smartRotation",0x1e0a993d,"motion.actuators.GenericActuator.smartRotation","motion/actuators/GenericActuator.hx",413,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_434_snapping,"motion.actuators.GenericActuator","snapping",0x1542eca6,"motion.actuators.GenericActuator.snapping","motion/actuators/GenericActuator.hx",434,0x3c110a3c)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7f3c66ae14e477_450_stop,"motion.actuators.GenericActuator","stop",0x5b7169ec,"motion.actuators.GenericActuator.stop","motion/actuators/GenericActuator.hx",450,0x3c110a3c)
namespace motion{
namespace actuators{

void GenericActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_38_new)
HXLINE(  40)		this->_autoVisible = true;
HXLINE(  41)		this->_delay = ( (Float)(0) );
HXLINE(  42)		this->_reflect = false;
HXLINE(  43)		this->_repeat = 0;
HXLINE(  44)		this->_reverse = false;
HXLINE(  45)		this->_smartRotation = false;
HXLINE(  46)		this->_snapping = false;
HXLINE(  47)		this->special = false;
HXLINE(  49)		this->target = target;
HXLINE(  50)		this->properties = properties;
HXLINE(  51)		this->duration = duration;
HXLINE(  53)		this->_ease = ::motion::Actuate_obj::defaultEase;
            	}

Dynamic GenericActuator_obj::__CreateEmpty() { return new GenericActuator_obj; }

void *GenericActuator_obj::_hx_vtable = 0;

Dynamic GenericActuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericActuator_obj > _hx_result = new GenericActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GenericActuator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x172f0ab4;
}

static ::motion::actuators::IGenericActuator_obj _hx_motion_actuators_GenericActuator__hx_motion_actuators_IGenericActuator= {
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::motion::actuators::GenericActuator_obj::autoVisible_881a854a,
	( ::Dynamic (::hx::Object::*)(Float))&::motion::actuators::GenericActuator_obj::delay_145ae511,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::motion::actuators::GenericActuator_obj::ease_02a46974,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::motion::actuators::GenericActuator_obj::onComplete_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::motion::actuators::GenericActuator_obj::onRepeat_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::motion::actuators::GenericActuator_obj::onUpdate_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::motion::actuators::GenericActuator_obj::reflect_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::motion::actuators::GenericActuator_obj::repeat_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::motion::actuators::GenericActuator_obj::reverse_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::motion::actuators::GenericActuator_obj::smartRotation_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::motion::actuators::GenericActuator_obj::snapping_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::motion::actuators::GenericActuator_obj::onPause_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::motion::actuators::GenericActuator_obj::onResume_782808ef,
	( void (::hx::Object::*)())&::motion::actuators::GenericActuator_obj::apply,
	( void (::hx::Object::*)())&::motion::actuators::GenericActuator_obj::move,
	( void (::hx::Object::*)())&::motion::actuators::GenericActuator_obj::pause,
	( void (::hx::Object::*)())&::motion::actuators::GenericActuator_obj::resume,
	( void (::hx::Object::*)( ::Dynamic,bool,bool))&::motion::actuators::GenericActuator_obj::stop,
};

::Dynamic GenericActuator_obj::onResume_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onResume(handler,parameters);
}

::Dynamic GenericActuator_obj::onPause_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onPause(handler,parameters);
}

::Dynamic GenericActuator_obj::snapping_881a854a( ::Dynamic value) {
			return snapping(value);
}

::Dynamic GenericActuator_obj::smartRotation_881a854a( ::Dynamic value) {
			return smartRotation(value);
}

::Dynamic GenericActuator_obj::reverse_881a854a( ::Dynamic value) {
			return reverse(value);
}

::Dynamic GenericActuator_obj::repeat_881a854a( ::Dynamic times) {
			return repeat(times);
}

::Dynamic GenericActuator_obj::reflect_881a854a( ::Dynamic value) {
			return reflect(value);
}

::Dynamic GenericActuator_obj::onUpdate_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onUpdate(handler,parameters);
}

::Dynamic GenericActuator_obj::onRepeat_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onRepeat(handler,parameters);
}

::Dynamic GenericActuator_obj::onComplete_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onComplete(handler,parameters);
}

::Dynamic GenericActuator_obj::ease_02a46974(::Dynamic easing) {
			return ease(easing);
}

::Dynamic GenericActuator_obj::delay_145ae511(Float duration) {
			return delay(duration);
}

::Dynamic GenericActuator_obj::autoVisible_881a854a( ::Dynamic value) {
			return autoVisible(value);
}
void *GenericActuator_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x586a3bcb: return &_hx_motion_actuators_GenericActuator__hx_motion_actuators_IGenericActuator;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void GenericActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_60_apply)
HXDLIN(  60)		int _g = 0;
HXDLIN(  60)		::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  60)		while((_g < _g1->length)){
HXDLIN(  60)			::String i = _g1->__get(_g);
HXDLIN(  60)			_g = (_g + 1);
HXLINE(  64)			if (::Reflect_obj::hasField(this->target,i)) {
HXLINE(  66)				 ::Dynamic _hx_tmp = this->target;
HXDLIN(  66)				::Reflect_obj::setField(_hx_tmp,i,::Reflect_obj::field(this->properties,i));
            			}
            			else {
HXLINE(  70)				 ::Dynamic _hx_tmp = this->target;
HXDLIN(  70)				::Reflect_obj::setProperty(_hx_tmp,i,::Reflect_obj::field(this->properties,i));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,apply,(void))

 ::motion::actuators::GenericActuator GenericActuator_obj::autoVisible( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_90_autoVisible)
HXLINE(  92)		if (::hx::IsNull( value )) {
HXLINE(  94)			value = true;
            		}
HXLINE(  98)		this->_autoVisible = ( (bool)(value) );
HXLINE( 100)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,autoVisible,return )

 ::Dynamic GenericActuator_obj::callMethod( ::Dynamic method,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_105_callMethod)
HXLINE( 107)		if (::hx::IsNull( params )) {
HXLINE( 109)			params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 131)		return ::Reflect_obj::callMethod(method,method,params);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,callMethod,return )

void GenericActuator_obj::change(){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_138_change)
HXDLIN( 138)		if (::hx::IsNotNull( this->_onUpdate )) {
HXLINE( 140)			 ::Dynamic method = this->_onUpdate;
HXDLIN( 140)			::cpp::VirtualArray params = this->_onUpdateParams;
HXDLIN( 140)			if (::hx::IsNull( params )) {
HXLINE( 140)				params = ::cpp::VirtualArray_obj::__new(0);
            			}
HXDLIN( 140)			::Reflect_obj::callMethod(method,method,params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,change,(void))

void GenericActuator_obj::complete(::hx::Null< bool >  __o_sendEvent){
            		bool sendEvent = __o_sendEvent.Default(true);
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_147_complete)
HXLINE( 149)		if (sendEvent) {
HXLINE( 151)			this->change();
HXLINE( 153)			if (::hx::IsNotNull( this->_onComplete )) {
HXLINE( 155)				 ::Dynamic method = this->_onComplete;
HXDLIN( 155)				::cpp::VirtualArray params = this->_onCompleteParams;
HXDLIN( 155)				if (::hx::IsNull( params )) {
HXLINE( 155)					params = ::cpp::VirtualArray_obj::__new(0);
            				}
HXDLIN( 155)				::Reflect_obj::callMethod(method,method,params);
            			}
            		}
HXLINE( 161)		::motion::Actuate_obj::unload(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,complete,(void))

 ::motion::actuators::GenericActuator GenericActuator_obj::delay(Float duration){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_171_delay)
HXLINE( 173)		this->_delay = duration;
HXLINE( 175)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,delay,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::ease(::Dynamic easing){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_185_ease)
HXLINE( 187)		this->_ease = easing;
HXLINE( 189)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,ease,return )

void GenericActuator_obj::move(){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_194_move)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,move,(void))

 ::motion::actuators::GenericActuator GenericActuator_obj::onComplete( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_207_onComplete)
HXLINE( 209)		this->_onComplete = handler;
HXLINE( 211)		if (::hx::IsNull( parameters )) {
HXLINE( 213)			this->_onCompleteParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 217)			this->_onCompleteParams = parameters;
            		}
HXLINE( 221)		if ((this->duration == 0)) {
HXLINE( 223)			this->complete(null());
            		}
HXLINE( 227)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onComplete,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::onRepeat( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_238_onRepeat)
HXLINE( 240)		this->_onRepeat = handler;
HXLINE( 242)		if (::hx::IsNull( parameters )) {
HXLINE( 244)			this->_onRepeatParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 248)			this->_onRepeatParams = parameters;
            		}
HXLINE( 252)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onRepeat,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::onUpdate( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_263_onUpdate)
HXLINE( 265)		this->_onUpdate = handler;
HXLINE( 267)		if (::hx::IsNull( parameters )) {
HXLINE( 269)			this->_onUpdateParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 273)			this->_onUpdateParams = parameters;
            		}
HXLINE( 277)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onUpdate,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::onPause( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_287_onPause)
HXLINE( 289)		this->_onPause = handler;
HXLINE( 291)		if (::hx::IsNull( parameters )) {
HXLINE( 293)			this->_onPauseParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 297)			this->_onPauseParams = parameters;
            		}
HXLINE( 301)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onPause,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::onResume( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_311_onResume)
HXLINE( 313)		this->_onResume = handler;
HXLINE( 315)		if (::hx::IsNull( parameters )) {
HXLINE( 317)			this->_onResumeParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 321)			this->_onResumeParams = parameters;
            		}
HXLINE( 325)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onResume,return )

void GenericActuator_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_332_pause)
HXDLIN( 332)		if (::hx::IsNotNull( this->_onPause )) {
HXLINE( 333)			 ::Dynamic method = this->_onPause;
HXDLIN( 333)			::cpp::VirtualArray params = this->_onPauseParams;
HXDLIN( 333)			if (::hx::IsNull( params )) {
HXLINE( 333)				params = ::cpp::VirtualArray_obj::__new(0);
            			}
HXDLIN( 333)			::Reflect_obj::callMethod(method,method,params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,pause,(void))

 ::motion::actuators::GenericActuator GenericActuator_obj::reflect( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_343_reflect)
HXLINE( 345)		if (::hx::IsNull( value )) {
HXLINE( 347)			value = true;
            		}
HXLINE( 351)		this->_reflect = ( (bool)(value) );
HXLINE( 352)		this->special = true;
HXLINE( 354)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reflect,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::repeat( ::Dynamic times){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_364_repeat)
HXLINE( 366)		if (::hx::IsNull( times )) {
HXLINE( 368)			times = -1;
            		}
HXLINE( 372)		this->_repeat = ( (int)(times) );
HXLINE( 374)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,repeat,return )

void GenericActuator_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_381_resume)
HXDLIN( 381)		if (::hx::IsNotNull( this->_onResume )) {
HXLINE( 382)			 ::Dynamic method = this->_onResume;
HXDLIN( 382)			::cpp::VirtualArray params = this->_onResumeParams;
HXDLIN( 382)			if (::hx::IsNull( params )) {
HXLINE( 382)				params = ::cpp::VirtualArray_obj::__new(0);
            			}
HXDLIN( 382)			::Reflect_obj::callMethod(method,method,params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,resume,(void))

 ::motion::actuators::GenericActuator GenericActuator_obj::reverse( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_392_reverse)
HXLINE( 394)		if (::hx::IsNull( value )) {
HXLINE( 396)			value = true;
            		}
HXLINE( 400)		this->_reverse = ( (bool)(value) );
HXLINE( 401)		this->special = true;
HXLINE( 403)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reverse,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::smartRotation( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_413_smartRotation)
HXLINE( 415)		if (::hx::IsNull( value )) {
HXLINE( 417)			value = true;
            		}
HXLINE( 421)		this->_smartRotation = ( (bool)(value) );
HXLINE( 422)		this->special = true;
HXLINE( 424)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,smartRotation,return )

 ::motion::actuators::GenericActuator GenericActuator_obj::snapping( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_434_snapping)
HXLINE( 436)		if (::hx::IsNull( value )) {
HXLINE( 438)			value = true;
            		}
HXLINE( 442)		this->_snapping = ( (bool)(value) );
HXLINE( 443)		this->special = true;
HXLINE( 445)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,snapping,return )

void GenericActuator_obj::stop( ::Dynamic properties,bool complete,bool sendEvent){
            	HX_STACKFRAME(&_hx_pos_fb7f3c66ae14e477_450_stop)
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericActuator_obj,stop,(void))


::hx::ObjectPtr< GenericActuator_obj > GenericActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	::hx::ObjectPtr< GenericActuator_obj > __this = new GenericActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

::hx::ObjectPtr< GenericActuator_obj > GenericActuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	GenericActuator_obj *__this = (GenericActuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericActuator_obj), true, "motion.actuators.GenericActuator"));
	*(void **)__this = GenericActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

GenericActuator_obj::GenericActuator_obj()
{
}

void GenericActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericActuator);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_MARK_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_MARK_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_MARK_MEMBER_NAME(_onResume,"_onResume");
	HX_MARK_MEMBER_NAME(_onResumeParams,"_onResumeParams");
	HX_MARK_MEMBER_NAME(_onPause,"_onPause");
	HX_MARK_MEMBER_NAME(_onPauseParams,"_onPauseParams");
	HX_MARK_MEMBER_NAME(_reflect,"_reflect");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_reverse,"_reverse");
	HX_MARK_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	HX_MARK_MEMBER_NAME(special,"special");
	HX_MARK_END_CLASS();
}

void GenericActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_VISIT_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_VISIT_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_VISIT_MEMBER_NAME(_onResume,"_onResume");
	HX_VISIT_MEMBER_NAME(_onResumeParams,"_onResumeParams");
	HX_VISIT_MEMBER_NAME(_onPause,"_onPause");
	HX_VISIT_MEMBER_NAME(_onPauseParams,"_onPauseParams");
	HX_VISIT_MEMBER_NAME(_reflect,"_reflect");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_reverse,"_reverse");
	HX_VISIT_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	HX_VISIT_MEMBER_NAME(special,"special");
}

::hx::Val GenericActuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease_dyn() ); }
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return ::hx::Val( _ease ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"_delay") ) { return ::hx::Val( _delay ); }
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change_dyn() ); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return ::hx::Val( repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { return ::hx::Val( _repeat ); }
		if (HX_FIELD_EQ(inName,"special") ) { return ::hx::Val( special ); }
		if (HX_FIELD_EQ(inName,"onPause") ) { return ::hx::Val( onPause_dyn() ); }
		if (HX_FIELD_EQ(inName,"reflect") ) { return ::hx::Val( reflect_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"_onPause") ) { return ::hx::Val( _onPause ); }
		if (HX_FIELD_EQ(inName,"_reflect") ) { return ::hx::Val( _reflect ); }
		if (HX_FIELD_EQ(inName,"_reverse") ) { return ::hx::Val( _reverse ); }
		if (HX_FIELD_EQ(inName,"complete") ) { return ::hx::Val( complete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRepeat") ) { return ::hx::Val( onRepeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResume") ) { return ::hx::Val( onResume_dyn() ); }
		if (HX_FIELD_EQ(inName,"snapping") ) { return ::hx::Val( snapping_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { return ::hx::Val( _onRepeat ); }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return ::hx::Val( _onUpdate ); }
		if (HX_FIELD_EQ(inName,"_onResume") ) { return ::hx::Val( _onResume ); }
		if (HX_FIELD_EQ(inName,"_snapping") ) { return ::hx::Val( _snapping ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"callMethod") ) { return ::hx::Val( callMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return ::hx::Val( _onComplete ); }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return ::hx::Val( autoVisible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { return ::hx::Val( _autoVisible ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"smartRotation") ) { return ::hx::Val( smartRotation_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onPauseParams") ) { return ::hx::Val( _onPauseParams ); }
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { return ::hx::Val( _smartRotation ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { return ::hx::Val( _onRepeatParams ); }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { return ::hx::Val( _onUpdateParams ); }
		if (HX_FIELD_EQ(inName,"_onResumeParams") ) { return ::hx::Val( _onResumeParams ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { return ::hx::Val( _onCompleteParams ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericActuator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onPause") ) { _onPause=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reflect") ) { _reflect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reverse") ) { _reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { _onRepeat=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onResume") ) { _onResume=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { _autoVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onPauseParams") ) { _onPauseParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { _smartRotation=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { _onRepeatParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { _onUpdateParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onResumeParams") ) { _onResumeParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { _onCompleteParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_autoVisible",c4,ca,11,ef));
	outFields->push(HX_("_delay",c4,1e,0e,d3));
	outFields->push(HX_("_ease",cd,a7,1d,f6));
	outFields->push(HX_("_onComplete",17,a2,08,30));
	outFields->push(HX_("_onCompleteParams",bd,3c,ab,59));
	outFields->push(HX_("_onRepeat",39,85,bf,2d));
	outFields->push(HX_("_onRepeatParams",5f,25,08,92));
	outFields->push(HX_("_onUpdate",e7,73,48,ae));
	outFields->push(HX_("_onUpdateParams",8d,4a,8e,60));
	outFields->push(HX_("_onResume",8b,57,c7,2f));
	outFields->push(HX_("_onResumeParams",31,81,99,40));
	outFields->push(HX_("_onPause",d8,ce,4d,8d));
	outFields->push(HX_("_onPauseParams",3e,f0,c7,82));
	outFields->push(HX_("_reflect",be,dd,e1,22));
	outFields->push(HX_("_repeat",fa,a8,f3,74));
	outFields->push(HX_("_reverse",a3,92,b4,54));
	outFields->push(HX_("_smartRotation",a8,90,57,7f));
	outFields->push(HX_("_snapping",1b,2d,4f,67));
	outFields->push(HX_("special",39,7a,55,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericActuator_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GenericActuator_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsString,(int)offsetof(GenericActuator_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GenericActuator_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GenericActuator_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(GenericActuator_obj,_autoVisible),HX_("_autoVisible",c4,ca,11,ef)},
	{::hx::fsFloat,(int)offsetof(GenericActuator_obj,_delay),HX_("_delay",c4,1e,0e,d3)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(GenericActuator_obj,_ease),HX_("_ease",cd,a7,1d,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GenericActuator_obj,_onComplete),HX_("_onComplete",17,a2,08,30)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GenericActuator_obj,_onCompleteParams),HX_("_onCompleteParams",bd,3c,ab,59)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GenericActuator_obj,_onRepeat),HX_("_onRepeat",39,85,bf,2d)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GenericActuator_obj,_onRepeatParams),HX_("_onRepeatParams",5f,25,08,92)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GenericActuator_obj,_onUpdate),HX_("_onUpdate",e7,73,48,ae)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GenericActuator_obj,_onUpdateParams),HX_("_onUpdateParams",8d,4a,8e,60)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GenericActuator_obj,_onResume),HX_("_onResume",8b,57,c7,2f)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GenericActuator_obj,_onResumeParams),HX_("_onResumeParams",31,81,99,40)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GenericActuator_obj,_onPause),HX_("_onPause",d8,ce,4d,8d)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GenericActuator_obj,_onPauseParams),HX_("_onPauseParams",3e,f0,c7,82)},
	{::hx::fsBool,(int)offsetof(GenericActuator_obj,_reflect),HX_("_reflect",be,dd,e1,22)},
	{::hx::fsInt,(int)offsetof(GenericActuator_obj,_repeat),HX_("_repeat",fa,a8,f3,74)},
	{::hx::fsBool,(int)offsetof(GenericActuator_obj,_reverse),HX_("_reverse",a3,92,b4,54)},
	{::hx::fsBool,(int)offsetof(GenericActuator_obj,_smartRotation),HX_("_smartRotation",a8,90,57,7f)},
	{::hx::fsBool,(int)offsetof(GenericActuator_obj,_snapping),HX_("_snapping",1b,2d,4f,67)},
	{::hx::fsBool,(int)offsetof(GenericActuator_obj,special),HX_("special",39,7a,55,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericActuator_obj_sMemberFields[] = {
	HX_("duration",54,0f,8e,14),
	HX_("id",db,5b,00,00),
	HX_("properties",f3,fb,0e,61),
	HX_("target",51,f3,ec,86),
	HX_("_autoVisible",c4,ca,11,ef),
	HX_("_delay",c4,1e,0e,d3),
	HX_("_ease",cd,a7,1d,f6),
	HX_("_onComplete",17,a2,08,30),
	HX_("_onCompleteParams",bd,3c,ab,59),
	HX_("_onRepeat",39,85,bf,2d),
	HX_("_onRepeatParams",5f,25,08,92),
	HX_("_onUpdate",e7,73,48,ae),
	HX_("_onUpdateParams",8d,4a,8e,60),
	HX_("_onResume",8b,57,c7,2f),
	HX_("_onResumeParams",31,81,99,40),
	HX_("_onPause",d8,ce,4d,8d),
	HX_("_onPauseParams",3e,f0,c7,82),
	HX_("_reflect",be,dd,e1,22),
	HX_("_repeat",fa,a8,f3,74),
	HX_("_reverse",a3,92,b4,54),
	HX_("_smartRotation",a8,90,57,7f),
	HX_("_snapping",1b,2d,4f,67),
	HX_("special",39,7a,55,df),
	HX_("apply",6e,85,3b,24),
	HX_("autoVisible",c3,1c,08,89),
	HX_("callMethod",1f,ce,8a,34),
	HX_("change",70,91,72,b7),
	HX_("complete",b9,00,c8,7f),
	HX_("delay",83,d7,26,d7),
	HX_("ease",ee,8b,0c,43),
	HX_("move",11,e3,60,48),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onRepeat",da,8d,29,e6),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onPause",57,75,95,53),
	HX_("onResume",2c,60,31,e8),
	HX_("pause",f6,d6,57,bd),
	HX_("reflect",3d,84,29,e9),
	HX_("repeat",5b,97,7c,06),
	HX_("resume",ad,69,84,08),
	HX_("reverse",22,39,fc,1a),
	HX_("smartRotation",67,a0,05,41),
	HX_("snapping",bc,35,b9,1f),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

::hx::Class GenericActuator_obj::__mClass;

void GenericActuator_obj::__register()
{
	GenericActuator_obj _hx_dummy;
	GenericActuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.GenericActuator",c4,2e,c5,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericActuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericActuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
