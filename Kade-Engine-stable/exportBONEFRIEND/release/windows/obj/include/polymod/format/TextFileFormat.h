#ifndef INCLUDED_polymod_format_TextFileFormat
#define INCLUDED_polymod_format_TextFileFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(polymod,format,TextFileFormat)
namespace polymod{
namespace format{


class TextFileFormat_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TextFileFormat_obj OBJ_;

	public:
		TextFileFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("polymod.format.TextFileFormat",df,a6,29,9a); }
		::String __ToString() const { return HX_("TextFileFormat.",2e,8a,86,84) + _hx_tag; }

		static ::polymod::format::TextFileFormat CSV;
		static inline ::polymod::format::TextFileFormat CSV_dyn() { return CSV; }
		static ::polymod::format::TextFileFormat JSON;
		static inline ::polymod::format::TextFileFormat JSON_dyn() { return JSON; }
		static ::polymod::format::TextFileFormat LINES;
		static inline ::polymod::format::TextFileFormat LINES_dyn() { return LINES; }
		static ::polymod::format::TextFileFormat PLAINTEXT;
		static inline ::polymod::format::TextFileFormat PLAINTEXT_dyn() { return PLAINTEXT; }
		static ::polymod::format::TextFileFormat TSV;
		static inline ::polymod::format::TextFileFormat TSV_dyn() { return TSV; }
		static ::polymod::format::TextFileFormat XML;
		static inline ::polymod::format::TextFileFormat XML_dyn() { return XML; }
};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_TextFileFormat */ 
