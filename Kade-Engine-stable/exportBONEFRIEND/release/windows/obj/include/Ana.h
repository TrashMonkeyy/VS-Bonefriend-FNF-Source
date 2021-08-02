#ifndef INCLUDED_Ana
#define INCLUDED_Ana

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_577ed644f4027e0c_21_new)
HX_DECLARE_CLASS0(Ana)



class HXCPP_CLASS_ATTRIBUTES Ana_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ana_obj OBJ_;
		Ana_obj();

	public:
		enum { _hx_ClassId = 0x7ed5f748 };

		void __construct(Float _hitTime,::cpp::VirtualArray _nearestNote,bool _hit,::String _hitJudge,int _key);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Ana")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Ana"); }

		inline static ::hx::ObjectPtr< Ana_obj > __new(Float _hitTime,::cpp::VirtualArray _nearestNote,bool _hit,::String _hitJudge,int _key) {
			::hx::ObjectPtr< Ana_obj > __this = new Ana_obj();
			__this->__construct(_hitTime,_nearestNote,_hit,_hitJudge,_key);
			return __this;
		}

		inline static ::hx::ObjectPtr< Ana_obj > __alloc(::hx::Ctx *_hx_ctx,Float _hitTime,::cpp::VirtualArray _nearestNote,bool _hit,::String _hitJudge,int _key) {
			Ana_obj *__this = (Ana_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ana_obj), true, "Ana"));
			*(void **)__this = Ana_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_577ed644f4027e0c_21_new)
HXLINE(  22)		( ( ::Ana)(__this) )->hitTime = _hitTime;
HXLINE(  23)		( ( ::Ana)(__this) )->nearestNote = _nearestNote;
HXLINE(  24)		( ( ::Ana)(__this) )->hit = _hit;
HXLINE(  25)		( ( ::Ana)(__this) )->hitJudge = _hitJudge;
HXLINE(  26)		( ( ::Ana)(__this) )->key = _key;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ana_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ana",b4,b2,31,00); }

		Float hitTime;
		::cpp::VirtualArray nearestNote;
		bool hit;
		::String hitJudge;
		int key;
};


#endif /* INCLUDED_Ana */ 
