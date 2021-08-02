#ifndef INCLUDED_GameDimensions
#define INCLUDED_GameDimensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GameDimensions)



class HXCPP_CLASS_ATTRIBUTES GameDimensions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GameDimensions_obj OBJ_;
		GameDimensions_obj();

	public:
		enum { _hx_ClassId = 0x1ebdf823 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="GameDimensions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"GameDimensions"); }

		inline static ::hx::ObjectPtr< GameDimensions_obj > __new() {
			::hx::ObjectPtr< GameDimensions_obj > __this = new GameDimensions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GameDimensions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GameDimensions_obj *__this = (GameDimensions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameDimensions_obj), false, "GameDimensions"));
			*(void **)__this = GameDimensions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameDimensions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameDimensions",ff,6c,94,15); }

		static void __boot();
		static int width;
		static int height;
};


#endif /* INCLUDED_GameDimensions */ 
