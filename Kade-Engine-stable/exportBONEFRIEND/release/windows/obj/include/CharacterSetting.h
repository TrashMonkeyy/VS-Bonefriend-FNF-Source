#ifndef INCLUDED_CharacterSetting
#define INCLUDED_CharacterSetting

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8c5cdce4e4ceb2d2_14_new)
HX_DECLARE_CLASS0(CharacterSetting)



class HXCPP_CLASS_ATTRIBUTES CharacterSetting_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CharacterSetting_obj OBJ_;
		CharacterSetting_obj();

	public:
		enum { _hx_ClassId = 0x7f7d4ddb };

		void __construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_flipped);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="CharacterSetting")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"CharacterSetting"); }

		inline static ::hx::ObjectPtr< CharacterSetting_obj > __new(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_flipped) {
			::hx::ObjectPtr< CharacterSetting_obj > __this = new CharacterSetting_obj();
			__this->__construct(__o_x,__o_y,__o_scale,__o_flipped);
			return __this;
		}

		inline static ::hx::ObjectPtr< CharacterSetting_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_flipped) {
			CharacterSetting_obj *__this = (CharacterSetting_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CharacterSetting_obj), false, "CharacterSetting"));
			*(void **)__this = CharacterSetting_obj::_hx_vtable;
{
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		Float scale = __o_scale.Default(((Float)1.0));
            		bool flipped = __o_flipped.Default(false);
            	HX_STACKFRAME(&_hx_pos_8c5cdce4e4ceb2d2_14_new)
HXLINE(  15)		( ( ::CharacterSetting)(__this) )->x = x;
HXLINE(  16)		( ( ::CharacterSetting)(__this) )->y = y;
HXLINE(  17)		( ( ::CharacterSetting)(__this) )->scale = scale;
HXLINE(  18)		( ( ::CharacterSetting)(__this) )->flipped = flipped;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterSetting_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharacterSetting",07,c1,30,03); }

		int x;
		int y;
		Float scale;
		bool flipped;
};


#endif /* INCLUDED_CharacterSetting */ 