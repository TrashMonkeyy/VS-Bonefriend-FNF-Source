#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#define INCLUDED_flixel_input_actions_FlxActionInputDigital

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDevice)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputDigital_obj : public  ::flixel::input::actions::FlxActionInput_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInput_obj super;
		typedef FlxActionInputDigital_obj OBJ_;
		FlxActionInputDigital_obj();

	public:
		enum { _hx_ClassId = 0x1600da07 };

		void __construct( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputDigital")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputDigital"); }
		static ::hx::ObjectPtr< FlxActionInputDigital_obj > __new( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID);
		static ::hx::ObjectPtr< FlxActionInputDigital_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputDigital_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputDigital",b6,7e,22,62); }

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputDigital */ 
