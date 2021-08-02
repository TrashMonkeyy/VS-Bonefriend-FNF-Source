#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#define INCLUDED_flixel_graphics_frames_FlxAtlasFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace graphics{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES FlxAtlasFrames_obj : public  ::flixel::graphics::frames::FlxFramesCollection_obj
{
	public:
		typedef  ::flixel::graphics::frames::FlxFramesCollection_obj super;
		typedef FlxAtlasFrames_obj OBJ_;
		FlxAtlasFrames_obj();

	public:
		enum { _hx_ClassId = 0x1ee6bdec };

		void __construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.FlxAtlasFrames")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.FlxAtlasFrames"); }
		static ::hx::ObjectPtr< FlxAtlasFrames_obj > __new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border);
		static ::hx::ObjectPtr< FlxAtlasFrames_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxPoint border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAtlasFrames_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAtlasFrames",1f,b4,c0,8d); }

		static  ::flixel::graphics::frames::FlxAtlasFrames fromTexturePackerJson( ::Dynamic Source, ::Dynamic Description);
		static ::Dynamic fromTexturePackerJson_dyn();

		static void texturePackerHelper(::String FrameName, ::Dynamic FrameData, ::flixel::graphics::frames::FlxAtlasFrames Frames);
		static ::Dynamic texturePackerHelper_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromLibGdx( ::Dynamic source,::String description);
		static ::Dynamic fromLibGdx_dyn();

		static  ::Dynamic getDimensions(::String line);
		static ::Dynamic getDimensions_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromSparrow( ::Dynamic Source,::String Description);
		static ::Dynamic fromSparrow_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromTexturePackerXml( ::Dynamic Source,::String Description);
		static ::Dynamic fromTexturePackerXml_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromSpriteSheetPacker( ::Dynamic Source,::String Description);
		static ::Dynamic fromSpriteSheetPacker_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxPoint border);
		static ::Dynamic findFrame_dyn();

		 ::flixel::graphics::frames::FlxFramesCollection addBorder( ::flixel::math::FlxPoint border);

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

#endif /* INCLUDED_flixel_graphics_frames_FlxAtlasFrames */ 
