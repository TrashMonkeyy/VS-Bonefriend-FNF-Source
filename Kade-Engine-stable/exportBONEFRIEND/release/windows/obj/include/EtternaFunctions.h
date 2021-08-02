#ifndef INCLUDED_EtternaFunctions
#define INCLUDED_EtternaFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EtternaFunctions)



class HXCPP_CLASS_ATTRIBUTES EtternaFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EtternaFunctions_obj OBJ_;
		EtternaFunctions_obj();

	public:
		enum { _hx_ClassId = 0x79c641ea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="EtternaFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"EtternaFunctions"); }

		inline static ::hx::ObjectPtr< EtternaFunctions_obj > __new() {
			::hx::ObjectPtr< EtternaFunctions_obj > __this = new EtternaFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EtternaFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EtternaFunctions_obj *__this = (EtternaFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EtternaFunctions_obj), false, "EtternaFunctions"));
			*(void **)__this = EtternaFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EtternaFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EtternaFunctions",36,00,59,c6); }

		static void __boot();
		static Float a1;
		static Float a2;
		static Float a3;
		static Float a4;
		static Float a5;
		static Float p;
		static Float erf(Float x);
		static ::Dynamic erf_dyn();

		static int getNotes();
		static ::Dynamic getNotes_dyn();

		static int getHolds();
		static ::Dynamic getHolds_dyn();

		static int getMapMaxScore();
		static ::Dynamic getMapMaxScore_dyn();

		static Float wife3(Float maxms,Float ts);
		static ::Dynamic wife3_dyn();

};


#endif /* INCLUDED_EtternaFunctions */ 
