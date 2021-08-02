#ifndef INCLUDED_motion_Actuate
#define INCLUDED_motion_Actuate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(motion,Actuate)
HX_DECLARE_CLASS2(motion,_Actuate,EffectsOptions)
HX_DECLARE_CLASS2(motion,_Actuate,TransformOptions)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace motion{


class HXCPP_CLASS_ATTRIBUTES Actuate_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Actuate_obj OBJ_;
		Actuate_obj();

	public:
		enum { _hx_ClassId = 0x12334cb1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.Actuate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.Actuate"); }

		inline static ::hx::ObjectPtr< Actuate_obj > __new() {
			::hx::ObjectPtr< Actuate_obj > __this = new Actuate_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Actuate_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Actuate_obj *__this = (Actuate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Actuate_obj), false, "motion.Actuate"));
			*(void **)__this = Actuate_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Actuate_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Actuate",ef,20,63,3c); }

		static void __boot();
		static ::hx::Class defaultActuator;
		static ::Dynamic defaultEase;
		static  ::haxe::ds::ObjectMap targetLibraries;
		static  ::motion::actuators::GenericActuator apply( ::Dynamic target, ::Dynamic properties,::hx::Class customActuator);
		static ::Dynamic apply_dyn();

		static  ::motion::_Actuate::EffectsOptions effects( ::openfl::display::DisplayObject target,Float duration,::hx::Null< bool >  overwrite);
		static ::Dynamic effects_dyn();

		static ::Array< ::Dynamic> getLibrary( ::Dynamic target,::hx::Null< bool >  allowCreation);
		static ::Dynamic getLibrary_dyn();

		static bool isActive();
		static ::Dynamic isActive_dyn();

		static  ::motion::actuators::GenericActuator motionPath( ::Dynamic target,Float duration, ::Dynamic properties,::hx::Null< bool >  overwrite);
		static ::Dynamic motionPath_dyn();

		static void pause( ::Dynamic target);
		static ::Dynamic pause_dyn();

		static void pauseAll();
		static ::Dynamic pauseAll_dyn();

		static void reset();
		static ::Dynamic reset_dyn();

		static void resume( ::Dynamic target);
		static ::Dynamic resume_dyn();

		static void resumeAll();
		static ::Dynamic resumeAll_dyn();

		static void stop( ::Dynamic target, ::Dynamic properties,::hx::Null< bool >  complete,::hx::Null< bool >  sendEvent);
		static ::Dynamic stop_dyn();

		static  ::motion::actuators::GenericActuator timer(Float duration,::hx::Class customActuator);
		static ::Dynamic timer_dyn();

		static  ::motion::_Actuate::TransformOptions transform( ::Dynamic target,::hx::Null< Float >  duration,::hx::Null< bool >  overwrite);
		static ::Dynamic transform_dyn();

		static  ::motion::actuators::GenericActuator tween( ::Dynamic target,Float duration, ::Dynamic properties,::hx::Null< bool >  overwrite,::hx::Class customActuator);
		static ::Dynamic tween_dyn();

		static void unload( ::motion::actuators::GenericActuator actuator);
		static ::Dynamic unload_dyn();

		static  ::motion::actuators::GenericActuator update( ::Dynamic target,Float duration,::cpp::VirtualArray start,::cpp::VirtualArray end,::hx::Null< bool >  overwrite);
		static ::Dynamic update_dyn();

};

} // end namespace motion

#endif /* INCLUDED_motion_Actuate */ 
