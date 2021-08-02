#ifndef INCLUDED_DiscordClient
#define INCLUDED_DiscordClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(DiscordClient)



class HXCPP_CLASS_ATTRIBUTES DiscordClient_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DiscordClient_obj OBJ_;
		DiscordClient_obj();

	public:
		enum { _hx_ClassId = 0x080ce637 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="DiscordClient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"DiscordClient"); }
		static ::hx::ObjectPtr< DiscordClient_obj > __new();
		static ::hx::ObjectPtr< DiscordClient_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DiscordClient_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DiscordClient",f7,d0,c5,2b); }

		static void shutdown();
		static ::Dynamic shutdown_dyn();

		static void onReady();
		static ::Dynamic onReady_dyn();

		static void onError(int _code,::String _message);
		static ::Dynamic onError_dyn();

		static void onDisconnected(int _code,::String _message);
		static ::Dynamic onDisconnected_dyn();

		static void initialize();
		static ::Dynamic initialize_dyn();

		static void changePresence(::String details,::String state,::String smallImageKey, ::Dynamic hasStartTimestamp, ::Dynamic endTimestamp);
		static ::Dynamic changePresence_dyn();

};


#endif /* INCLUDED_DiscordClient */ 
