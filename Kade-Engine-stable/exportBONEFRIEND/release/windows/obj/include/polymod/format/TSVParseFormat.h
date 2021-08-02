#ifndef INCLUDED_polymod_format_TSVParseFormat
#define INCLUDED_polymod_format_TSVParseFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,CSV)
HX_DECLARE_CLASS2(polymod,format,TSV)
HX_DECLARE_CLASS2(polymod,format,TSVParseFormat)
HX_DECLARE_CLASS2(polymod,format,TextFileFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES TSVParseFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TSVParseFormat_obj OBJ_;
		TSVParseFormat_obj();

	public:
		enum { _hx_ClassId = 0x0804a254 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.TSVParseFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.TSVParseFormat"); }
		static ::hx::ObjectPtr< TSVParseFormat_obj > __new();
		static ::hx::ObjectPtr< TSVParseFormat_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TSVParseFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TSVParseFormat",13,b3,94,f1); }

		 ::polymod::format::TextFileFormat format;
		 ::polymod::format::TSV parse(::String str);
		::Dynamic parse_dyn();

		::String append(::String baseText,::String appendText,::String id);
		::Dynamic append_dyn();

		::String merge(::String baseText,::String mergeText,::String id);
		::Dynamic merge_dyn();

		::String print( ::polymod::format::TSV tsv);
		::Dynamic print_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_TSVParseFormat */ 
