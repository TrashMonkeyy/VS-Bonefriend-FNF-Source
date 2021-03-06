#ifndef INCLUDED_smTools_SMHeader
#define INCLUDED_smTools_SMHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(smTools,SMHeader)

namespace smTools{


class HXCPP_CLASS_ATTRIBUTES SMHeader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SMHeader_obj OBJ_;
		SMHeader_obj();

	public:
		enum { _hx_ClassId = 0x7fac2520 };

		void __construct(::Array< ::String > headerData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="smTools.SMHeader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"smTools.SMHeader"); }
		static ::hx::ObjectPtr< SMHeader_obj > __new(::Array< ::String > headerData);
		static ::hx::ObjectPtr< SMHeader_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::String > headerData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SMHeader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SMHeader",c7,35,e4,3e); }

		::Array< ::String > _header;
		::String TITLE;
		::String SUBTITLE;
		::String ARTIST;
		::String GENRE;
		::String CREDIT;
		::String MUSIC;
		::String BANNER;
		::String BACKGROUND;
		::String CDTITLE;
		::String OFFSET;
		::String BPMS;
		void readHeaderLine(::String line);
		::Dynamic readHeaderLine_dyn();

};

} // end namespace smTools

#endif /* INCLUDED_smTools_SMHeader */ 
