#ifndef INCLUDED_motion_easing_Expo
#define INCLUDED_motion_easing_Expo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,Expo)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Expo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Expo_obj OBJ_;
		Expo_obj();

	public:
		enum { _hx_ClassId = 0x0f45fd8b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.Expo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing.Expo"); }

		inline static ::hx::ObjectPtr< Expo_obj > __new() {
			::hx::ObjectPtr< Expo_obj > __this = new Expo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Expo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Expo_obj *__this = (Expo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Expo_obj), false, "motion.easing.Expo"));
			*(void **)__this = Expo_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Expo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Expo",52,29,f7,2d); }

		static void __boot();
		static ::Dynamic easeIn;
		static ::Dynamic easeInOut;
		static ::Dynamic easeOut;
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Expo */ 
