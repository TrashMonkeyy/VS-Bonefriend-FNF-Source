#ifndef INCLUDED_HitGraph
#define INCLUDED_HitGraph

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(HitGraph)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES HitGraph_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef HitGraph_obj OBJ_;
		HitGraph_obj();

	public:
		enum { _hx_ClassId = 0x0e8c1adb };

		void __construct(int X,int Y,int Width,int Height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HitGraph")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HitGraph"); }
		static ::hx::ObjectPtr< HitGraph_obj > __new(int X,int Y,int Width,int Height);
		static ::hx::ObjectPtr< HitGraph_obj > __alloc(::hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HitGraph_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HitGraph",1b,28,fb,b2); }

		static void __boot();
		static int AXIS_COLOR;
		static Float AXIS_ALPHA;
		static int HISTORY_MAX;
		static  ::openfl::text::TextField createTextField(::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< int >  Color,::hx::Null< int >  Size);
		static ::Dynamic createTextField_dyn();

		static  ::Dynamic initTextField( ::Dynamic tf,::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< int >  Color,::hx::Null< int >  Size);
		static ::Dynamic initTextField_dyn();

		 ::openfl::text::TextField minLabel;
		 ::openfl::text::TextField curLabel;
		 ::openfl::text::TextField maxLabel;
		 ::openfl::text::TextField avgLabel;
		Float minValue;
		Float maxValue;
		bool showInput;
		int graphColor;
		::cpp::VirtualArray history;
		 ::openfl::display::Bitmap bitmap;
		 ::openfl::display::Shape _axis;
		int _width;
		int _height;
		::String _unit;
		int _labelWidth;
		::String _label;
		void drawAxes();
		::Dynamic drawAxes_dyn();

		void drawJudgementLine(Float ms);
		::Dynamic drawJudgementLine_dyn();

		void drawGraph();
		::Dynamic drawGraph_dyn();

		Float fitX(Float x);
		::Dynamic fitX_dyn();

		void addToHistory(Float diff,::String judge,Float time);
		::Dynamic addToHistory_dyn();

		void update();
		::Dynamic update_dyn();

		Float average();
		::Dynamic average_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};


#endif /* INCLUDED_HitGraph */ 
