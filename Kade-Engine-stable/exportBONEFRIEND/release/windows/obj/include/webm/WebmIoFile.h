#ifndef INCLUDED_webm_WebmIoFile
#define INCLUDED_webm_WebmIoFile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_webm_WebmIo
#include <webm/WebmIo.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(sys,io,FileInput)
HX_DECLARE_CLASS1(webm,WebmIo)
HX_DECLARE_CLASS1(webm,WebmIoFile)

namespace webm{


class HXCPP_CLASS_ATTRIBUTES WebmIoFile_obj : public  ::webm::WebmIo_obj
{
	public:
		typedef  ::webm::WebmIo_obj super;
		typedef WebmIoFile_obj OBJ_;
		WebmIoFile_obj();

	public:
		enum { _hx_ClassId = 0x7e30dd3c };

		void __construct(::String filePath);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="webm.WebmIoFile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"webm.WebmIoFile"); }
		static ::hx::ObjectPtr< WebmIoFile_obj > __new(::String filePath);
		static ::hx::ObjectPtr< WebmIoFile_obj > __alloc(::hx::Ctx *_hx_ctx,::String filePath);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebmIoFile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebmIoFile",db,1f,9d,74); }

		 ::sys::io::FileInput fileInput;
		::Array< unsigned char > read(int count);

		int seek(Float offset,int whence);

		Float tell();

};

} // end namespace webm

#endif /* INCLUDED_webm_WebmIoFile */ 
