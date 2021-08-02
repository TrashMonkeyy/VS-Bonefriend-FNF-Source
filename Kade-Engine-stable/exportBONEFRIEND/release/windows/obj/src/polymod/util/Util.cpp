#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_46_mergeAndAppendText,"polymod.util.Util","mergeAndAppendText",0x67a3775e,"polymod.util.Util.mergeAndAppendText","polymod/util/Util.hx",46,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_78_mergeText,"polymod.util.Util","mergeText",0x57ba76ad,"polymod.util.Util.mergeText","polymod/util/Util.hx",78,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_103_appendText,"polymod.util.Util","appendText",0x7713f37f,"polymod.util.Util.appendText","polymod/util/Util.hx",103,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_122_appendCSVOrTSV,"polymod.util.Util","appendCSVOrTSV",0x2835cee0,"polymod.util.Util.appendCSVOrTSV","polymod/util/Util.hx",122,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_147_appendSpecialXML,"polymod.util.Util","appendSpecialXML",0x73990970,"polymod.util.Util.appendSpecialXML","polymod/util/Util.hx",147,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_161_appendXML,"polymod.util.Util","appendXML",0x02d76b45,"polymod.util.Util.appendXML","polymod/util/Util.hx",161,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_171_stripComments,"polymod.util.Util","stripComments",0x58071354,"polymod.util.Util.stripComments","polymod/util/Util.hx",171,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_187_trimLeadingWhiteSpace,"polymod.util.Util","trimLeadingWhiteSpace",0x8424d7a9,"polymod.util.Util.trimLeadingWhiteSpace","polymod/util/Util.hx",187,0xa14dd688)
static const ::String _hx_array_data_e4da7d96_12[] = {
	HX_("\r",0d,00,00,00),HX_("\n",0a,00,00,00),HX_(" ",20,00,00,00),HX_("\t",09,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_202_trimTrailingWhiteSpace,"polymod.util.Util","trimTrailingWhiteSpace",0xf0555eb3,"polymod.util.Util.trimTrailingWhiteSpace","polymod/util/Util.hx",202,0xa14dd688)
static const ::String _hx_array_data_e4da7d96_16[] = {
	HX_("\r",0d,00,00,00),HX_("\n",0a,00,00,00),HX_(" ",20,00,00,00),HX_("\t",09,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_217_stripXML,"polymod.util.Util","stripXML",0x7ce10bb7,"polymod.util.Util.stripXML","polymod/util/Util.hx",217,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_274_hasMerge,"polymod.util.Util","hasMerge",0x318fead6,"polymod.util.Util.hasMerge","polymod/util/Util.hx",274,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_279_hasAppend,"polymod.util.Util","hasAppend",0xb429b3fc,"polymod.util.Util.hasAppend","polymod/util/Util.hx",279,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_283_stripAssetsPrefix,"polymod.util.Util","stripAssetsPrefix",0x41146495,"polymod.util.Util.stripAssetsPrefix","polymod/util/Util.hx",283,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_292_hasSpecial,"polymod.util.Util","hasSpecial",0x861785d7,"polymod.util.Util.hasSpecial","polymod/util/Util.hx",292,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_304_pathJoin,"polymod.util.Util","pathJoin",0xdb757a07,"polymod.util.Util.pathJoin","polymod/util/Util.hx",304,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_321_cleanSlashes,"polymod.util.Util","cleanSlashes",0xd056153a,"polymod.util.Util.cleanSlashes","polymod/util/Util.hx",321,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_329_sl,"polymod.util.Util","sl",0x225af071,"polymod.util.Util.sl","polymod/util/Util.hx",329,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_334_copyXml,"polymod.util.Util","copyXml",0x532c6e4a,"polymod.util.Util.copyXml","polymod/util/Util.hx",334,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_383_uCat,"polymod.util.Util","uCat",0xa4805479,"polymod.util.Util.uCat","polymod/util/Util.hx",383,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_395_uCharAt,"polymod.util.Util","uCharAt",0xfcfcb8e6,"polymod.util.Util.uCharAt","polymod/util/Util.hx",395,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_400_uJoin,"polymod.util.Util","uJoin",0x5074aa27,"polymod.util.Util.uJoin","polymod/util/Util.hx",400,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_416_uCombine,"polymod.util.Util","uCombine",0x0afe7862,"polymod.util.Util.uCombine","polymod/util/Util.hx",416,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_426_uExtension,"polymod.util.Util","uExtension",0x84fa6022,"polymod.util.Util.uExtension","polymod/util/Util.hx",426,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_441_uIndexOf,"polymod.util.Util","uIndexOf",0x718f96ac,"polymod.util.Util.uIndexOf","polymod/util/Util.hx",441,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_450_uLastIndexOf,"polymod.util.Util","uLastIndexOf",0x5cdb7876,"polymod.util.Util.uLastIndexOf","polymod/util/Util.hx",450,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_459_uLength,"polymod.util.Util","uLength",0xe48ed463,"polymod.util.Util.uLength","polymod/util/Util.hx",459,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_464_uPathPop,"polymod.util.Util","uPathPop",0x9a48d2cf,"polymod.util.Util.uPathPop","polymod/util/Util.hx",464,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_477_uTrimFinalCharIf,"polymod.util.Util","uTrimFinalCharIf",0x396afb8a,"polymod.util.Util.uTrimFinalCharIf","polymod/util/Util.hx",477,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_489_uTrimFinalEndlines,"polymod.util.Util","uTrimFinalEndlines",0xe685f73b,"polymod.util.Util.uTrimFinalEndlines","polymod/util/Util.hx",489,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_510_uTrimFirstCharIf,"polymod.util.Util","uTrimFirstCharIf",0xd7685bc4,"polymod.util.Util.uTrimFirstCharIf","polymod/util/Util.hx",510,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_522_uTrimFirstEndlines,"polymod.util.Util","uTrimFirstEndlines",0x06c759f5,"polymod.util.Util.uTrimFirstEndlines","polymod/util/Util.hx",522,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_547_uSplit,"polymod.util.Util","uSplit",0x44e6e9fd,"polymod.util.Util.uSplit","polymod/util/Util.hx",547,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_552_uSplitReplace,"polymod.util.Util","uSplitReplace",0xad0c6fb7,"polymod.util.Util.uSplitReplace","polymod/util/Util.hx",552,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_578_uSubstr,"polymod.util.Util","uSubstr",0xdf922eae,"polymod.util.Util.uSubstr","polymod/util/Util.hx",578,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_587_uSubstring,"polymod.util.Util","uSubstring",0x82d1bef4,"polymod.util.Util.uSubstring","polymod/util/Util.hx",587,0xa14dd688)
namespace polymod{
namespace util{

void Util_obj::__construct() { }

Dynamic Util_obj::__CreateEmpty() { return new Util_obj; }

void *Util_obj::_hx_vtable = 0;

Dynamic Util_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Util_obj > _hx_result = new Util_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Util_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d31ad5a;
}

::String Util_obj::mergeAndAppendText(::String baseText,::String id,::Array< ::String > dirs, ::Dynamic getModText, ::polymod::format::ParseRules parseRules){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_46_mergeAndAppendText)
HXLINE(  47)		::String text = baseText;
HXLINE(  49)		{
HXLINE(  49)			int _g = 0;
HXDLIN(  49)			while((_g < dirs->length)){
HXLINE(  49)				::String d = dirs->__get(_g);
HXDLIN(  49)				_g = (_g + 1);
HXLINE(  51)				::String theDir = d;
HXDLIN(  51)				if (::hx::IsNull( theDir )) {
HXLINE(  51)					theDir = HX_("",00,00,00,00);
            				}
HXDLIN(  51)				if (::polymod::util::Util_obj::hasSpecial(id,HX_("_merge",f9,e9,ad,01),theDir)) {
HXLINE(  53)					text = ::polymod::util::Util_obj::mergeText(text,id,d,getModText,parseRules);
            				}
HXLINE(  55)				::String theDir1 = d;
HXDLIN(  55)				if (::hx::IsNull( theDir1 )) {
HXLINE(  55)					theDir1 = HX_("",00,00,00,00);
            				}
HXDLIN(  55)				if (::polymod::util::Util_obj::hasSpecial(id,HX_("_append",79,f3,4a,fe),theDir1)) {
HXLINE(  57)					text = ::polymod::util::Util_obj::appendText(text,id,d,getModText,parseRules);
            				}
            			}
            		}
HXLINE(  61)		return text;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Util_obj,mergeAndAppendText,return )

::String Util_obj::mergeText(::String baseText,::String id,::String __o_theDir, ::Dynamic getModText, ::polymod::format::ParseRules parseRules){
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_78_mergeText)
HXLINE(  79)		::String extension = ::polymod::util::Util_obj::uExtension(id,true);
HXLINE(  80)		::String id1 = id;
HXDLIN(  80)		if ((::polymod::util::Util_obj::uIndexOf(id1,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE(  80)			id1 = ::polymod::util::Util_obj::uSubstring(id1,7,null());
            		}
HXDLIN(  80)		id = id1;
HXLINE(  81)		::String mergeFile = ((HX_("_merge",f9,e9,ad,01) + ::polymod::util::Util_obj::sl()) + id);
HXLINE(  83)		::Dynamic format = parseRules->get(id);
HXLINE(  84)		if (::hx::IsNull( format )) {
HXLINE(  87)			format = parseRules->get(extension);
            		}
HXLINE(  89)		if (::hx::IsNotNull( format )) {
HXLINE(  91)			::String mergeText = ( (::String)(getModText(mergeFile,theDir)) );
HXLINE(  92)			return ::polymod::format::BaseParseFormat_obj::merge(format,baseText,mergeText,id);
            		}
            		else {
HXLINE(  96)			::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),((((HX_("Could not merge file (",38,a5,87,a2) + id) + HX_("), no parse format was specified for extension (",ef,41,09,3b)) + extension) + HX_(").",e5,23,00,00)),null());
HXLINE(  97)			return baseText;
            		}
HXLINE(  89)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Util_obj,mergeText,return )

::String Util_obj::appendText(::String baseText,::String id,::String theDir, ::Dynamic getModText, ::polymod::format::ParseRules parseRules){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_103_appendText)
HXLINE( 104)		::String extension = ::polymod::util::Util_obj::uExtension(id,true);
HXLINE( 105)		::String id1 = id;
HXDLIN( 105)		if ((::polymod::util::Util_obj::uIndexOf(id1,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 105)			id1 = ::polymod::util::Util_obj::uSubstring(id1,7,null());
            		}
HXDLIN( 105)		id = id1;
HXLINE( 107)		::Dynamic format = parseRules->get(id);
HXLINE( 108)		if (::hx::IsNull( format )) {
HXLINE( 111)			format = parseRules->get(extension);
            		}
HXLINE( 113)		if (::hx::IsNotNull( format )) {
HXLINE( 115)			::String appendText = ( (::String)(getModText(::polymod::util::Util_obj::pathJoin(HX_("_append",79,f3,4a,fe),id),theDir)) );
HXLINE( 116)			return ::polymod::format::BaseParseFormat_obj::append(format,baseText,appendText,id);
            		}
HXLINE( 118)		return baseText;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Util_obj,appendText,return )

::String Util_obj::appendCSVOrTSV(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_122_appendCSVOrTSV)
HXLINE( 123)		::String lastChar = ::polymod::util::Util_obj::uCharAt(baseText,(::polymod::util::Util_obj::uLength(baseText) - 1));
HXLINE( 124)		::String lastLastChar = ::polymod::util::Util_obj::uCharAt(baseText,(::polymod::util::Util_obj::uLength(baseText) - 1));
HXLINE( 125)		::String joiner = HX_("",00,00,00,00);
HXLINE( 126)		::String endLine = HX_("\n",0a,00,00,00);
HXLINE( 127)		int crIndex = ::polymod::util::Util_obj::uIndexOf(baseText,HX_("\r",0d,00,00,00),null());
HXLINE( 128)		int lfIndex = ::polymod::util::Util_obj::uIndexOf(baseText,HX_("\n",0a,00,00,00),null());
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		if ((crIndex != -1)) {
HXLINE( 130)			_hx_tmp = (lfIndex == (crIndex + 1));
            		}
            		else {
HXLINE( 130)			_hx_tmp = false;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 132)			endLine = HX_("\r\n",5d,0b,00,00);
            		}
HXLINE( 135)		if ((lastChar != HX_("\n",0a,00,00,00))) {
HXLINE( 137)			joiner = endLine;
            		}
HXLINE( 140)		::String otherEndline;
HXDLIN( 140)		if ((endLine == HX_("\n",0a,00,00,00))) {
HXLINE( 140)			otherEndline = HX_("\r\n",5d,0b,00,00);
            		}
            		else {
HXLINE( 140)			otherEndline = HX_("\n",0a,00,00,00);
            		}
HXLINE( 141)		appendText = ::polymod::util::Util_obj::uSplitReplace(appendText,otherEndline,endLine);
HXLINE( 143)		return ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(3)->init(0,baseText)->init(1,joiner)->init(2,appendText));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,appendCSVOrTSV,return )

::String Util_obj::appendSpecialXML(::String a,::String b,::Array< ::String > headers,::Array< ::String > footers){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_147_appendSpecialXML)
HXLINE( 148)		a = ::polymod::util::Util_obj::stripXML(a,true,true,headers,footers);
HXLINE( 149)		b = ::polymod::util::Util_obj::stripXML(b,true,true,headers,footers);
HXLINE( 151)		::String txt = HX_("<?xml version=\"1.0\" encoding=\"utf-8\" ?>",b7,30,4d,85);
HXLINE( 152)		txt = ::polymod::util::Util_obj::uCat(txt,HX_("<data>",18,b5,f1,d1));
HXLINE( 153)		txt = ::polymod::util::Util_obj::uCat(txt,a);
HXLINE( 154)		txt = ::polymod::util::Util_obj::uCat(txt,b);
HXLINE( 155)		txt = ::polymod::util::Util_obj::uCat(txt,HX_("</data>",81,d9,55,5e));
HXLINE( 157)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Util_obj,appendSpecialXML,return )

::String Util_obj::appendXML(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_161_appendXML)
HXLINE( 162)		a = ::polymod::util::Util_obj::stripXML(a,false,true,null(),null());
HXLINE( 163)		b = ::polymod::util::Util_obj::stripXML(b,true,false,null(),null());
HXLINE( 165)		::String txt = ::polymod::util::Util_obj::uCat(a,b);
HXLINE( 167)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,appendXML,return )

::String Util_obj::stripComments(::String txt){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_171_stripComments)
HXLINE( 172)		int start = ::polymod::util::Util_obj::uIndexOf(txt,HX_("<!--",05,ff,c1,27),null());
HXLINE( 173)		int end = ::polymod::util::Util_obj::uIndexOf(txt,HX_("-->",de,4c,22,00),null());
HXLINE( 174)		while(true){
HXLINE( 174)			bool _hx_tmp;
HXDLIN( 174)			if ((start != -1)) {
HXLINE( 174)				_hx_tmp = (end != -1);
            			}
            			else {
HXLINE( 174)				_hx_tmp = false;
            			}
HXDLIN( 174)			if (!(_hx_tmp)) {
HXLINE( 174)				goto _hx_goto_7;
            			}
HXLINE( 176)			int len = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 177)			::String before = ::polymod::util::Util_obj::uSubstr(txt,0,start);
HXLINE( 178)			::String after = ::polymod::util::Util_obj::uSubstr(txt,(end + 3),(len - (end + 3)));
HXLINE( 179)			txt = ::polymod::util::Util_obj::uCat(before,after);
HXLINE( 180)			start = ::polymod::util::Util_obj::uIndexOf(txt,HX_("<!--",05,ff,c1,27),null());
HXLINE( 181)			end = ::polymod::util::Util_obj::uIndexOf(txt,HX_("-->",de,4c,22,00),null());
            		}
            		_hx_goto_7:;
HXLINE( 183)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,stripComments,return )

::String Util_obj::trimLeadingWhiteSpace(::String txt){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_187_trimLeadingWhiteSpace)
HXLINE( 188)		::Array< ::String > white = ::Array_obj< ::String >::fromData( _hx_array_data_e4da7d96_12,4);
HXLINE( 189)		int len = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 190)		{
HXLINE( 190)			int _g = 0;
HXDLIN( 190)			while((_g < white->length)){
HXLINE( 190)				::String w = white->__get(_g);
HXDLIN( 190)				_g = (_g + 1);
HXLINE( 192)				while((::polymod::util::Util_obj::uIndexOf(txt,w,null()) == 0)){
HXLINE( 194)					txt = ::polymod::util::Util_obj::uSubstr(txt,1,(len - 1));
HXLINE( 195)					len = (len - 1);
            				}
            			}
            		}
HXLINE( 198)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,trimLeadingWhiteSpace,return )

::String Util_obj::trimTrailingWhiteSpace(::String txt){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_202_trimTrailingWhiteSpace)
HXLINE( 203)		::Array< ::String > white = ::Array_obj< ::String >::fromData( _hx_array_data_e4da7d96_16,4);
HXLINE( 204)		int len = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 205)		{
HXLINE( 205)			int _g = 0;
HXDLIN( 205)			while((_g < white->length)){
HXLINE( 205)				::String w = white->__get(_g);
HXDLIN( 205)				_g = (_g + 1);
HXLINE( 207)				while((::polymod::util::Util_obj::uCharAt(txt,(len - 1)) == w)){
HXLINE( 209)					txt = ::polymod::util::Util_obj::uSubstr(txt,0,(len - 1));
HXLINE( 210)					len = (len - 1);
            				}
            			}
            		}
HXLINE( 213)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,trimTrailingWhiteSpace,return )

::String Util_obj::stripXML(::String txt,::hx::Null< bool >  __o_stripHeader,::hx::Null< bool >  __o_stripFooter,::Array< ::String > headers,::Array< ::String > footers){
            		bool stripHeader = __o_stripHeader.Default(true);
            		bool stripFooter = __o_stripFooter.Default(true);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_217_stripXML)
HXLINE( 218)		txt = ::polymod::util::Util_obj::stripComments(txt);
HXLINE( 220)		if (stripHeader) {
HXLINE( 222)			if ((::polymod::util::Util_obj::uIndexOf(txt,HX_("<?xml",34,ad,0a,b6),null()) == 0)) {
HXLINE( 224)				int i = ::polymod::util::Util_obj::uIndexOf(txt,HX_(">",3e,00,00,00),null());
HXLINE( 225)				txt = ::polymod::util::Util_obj::uSubstr(txt,(i + 1),(::polymod::util::Util_obj::uLength(txt) - (i + 1)));
HXLINE( 226)				txt = ::polymod::util::Util_obj::trimLeadingWhiteSpace(txt);
            			}
HXLINE( 228)			if ((::polymod::util::Util_obj::uIndexOf(txt,HX_("<data",66,24,6e,ce),null()) == 0)) {
HXLINE( 230)				int i = ::polymod::util::Util_obj::uIndexOf(txt,HX_(">",3e,00,00,00),null());
HXLINE( 231)				txt = ::polymod::util::Util_obj::uSubstr(txt,(i + 1),(::polymod::util::Util_obj::uLength(txt) - (i + 1)));
HXLINE( 232)				txt = ::polymod::util::Util_obj::trimLeadingWhiteSpace(txt);
            			}
HXLINE( 234)			if (::hx::IsNotNull( headers )) {
HXLINE( 236)				int _g = 0;
HXDLIN( 236)				while((_g < headers->length)){
HXLINE( 236)					::String header = headers->__get(_g);
HXDLIN( 236)					_g = (_g + 1);
HXLINE( 238)					if ((::polymod::util::Util_obj::uIndexOf(txt,header,null()) == 0)) {
HXLINE( 240)						int i = ::polymod::util::Util_obj::uIndexOf(txt,HX_(">",3e,00,00,00),null());
HXLINE( 241)						txt = ::polymod::util::Util_obj::uSubstr(txt,(i + 1),(::polymod::util::Util_obj::uLength(txt) - (i + 1)));
HXLINE( 242)						txt = ::polymod::util::Util_obj::trimLeadingWhiteSpace(txt);
            					}
            				}
            			}
            		}
HXLINE( 247)		if (stripFooter) {
HXLINE( 249)			txt = ::polymod::util::Util_obj::trimTrailingWhiteSpace(txt);
HXLINE( 250)			int ulen = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 251)			if ((::polymod::util::Util_obj::uLastIndexOf(txt,HX_("</data>",81,d9,55,5e),null()) == (ulen - 7))) {
HXLINE( 253)				txt = ::polymod::util::Util_obj::uSubstr(txt,0,(ulen - 7));
            			}
HXLINE( 255)			if (::hx::IsNotNull( footers )) {
HXLINE( 257)				int _g = 0;
HXDLIN( 257)				while((_g < footers->length)){
HXLINE( 257)					::String footer = footers->__get(_g);
HXDLIN( 257)					_g = (_g + 1);
HXLINE( 259)					txt = ::polymod::util::Util_obj::trimTrailingWhiteSpace(txt);
HXLINE( 260)					int ulen = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 261)					int footerlen = ::polymod::util::Util_obj::uLength(footer);
HXLINE( 262)					if ((::polymod::util::Util_obj::uLastIndexOf(txt,footer,null()) == (ulen - footerlen))) {
HXLINE( 264)						txt = ::polymod::util::Util_obj::uSubstr(txt,0,(ulen - footerlen));
            					}
            				}
            			}
            		}
HXLINE( 269)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Util_obj,stripXML,return )

bool Util_obj::hasMerge(::String id,::String __o_theDir){
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_274_hasMerge)
HXDLIN( 274)		return ::polymod::util::Util_obj::hasSpecial(id,HX_("_merge",f9,e9,ad,01),theDir);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,hasMerge,return )

bool Util_obj::hasAppend(::String id,::String __o_theDir){
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_279_hasAppend)
HXDLIN( 279)		return ::polymod::util::Util_obj::hasSpecial(id,HX_("_append",79,f3,4a,fe),theDir);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,hasAppend,return )

::String Util_obj::stripAssetsPrefix(::String id){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_283_stripAssetsPrefix)
HXLINE( 284)		if ((::polymod::util::Util_obj::uIndexOf(id,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 286)			id = ::polymod::util::Util_obj::uSubstring(id,7,null());
            		}
HXLINE( 288)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,stripAssetsPrefix,return )

bool Util_obj::hasSpecial(::String id,::String __o_special,::String __o_theDir){
            		::String special = __o_special;
            		if (::hx::IsNull(__o_special)) special = HX_("",00,00,00,00);
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_292_hasSpecial)
HXLINE( 294)		::String id1 = id;
HXDLIN( 294)		if ((::polymod::util::Util_obj::uIndexOf(id1,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 294)			id1 = ::polymod::util::Util_obj::uSubstring(id1,7,null());
            		}
HXDLIN( 294)		id = id1;
HXLINE( 295)		::String thePath = ::polymod::util::Util_obj::sl();
HXDLIN( 295)		::String thePath1 = ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(5)->init(0,theDir)->init(1,thePath)->init(2,special)->init(3,::polymod::util::Util_obj::sl())->init(4,id));
HXLINE( 296)		return ::sys::FileSystem_obj::exists(thePath1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,hasSpecial,return )

::String Util_obj::pathJoin(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_304_pathJoin)
HXLINE( 305)		bool aSlash;
HXDLIN( 305)		int aSlash1 = ::polymod::util::Util_obj::uLastIndexOf(a,HX_("/",2f,00,00,00),null());
HXDLIN( 305)		if ((aSlash1 != (::polymod::util::Util_obj::uLength(a) - 1))) {
HXLINE( 305)			int aSlash1 = ::polymod::util::Util_obj::uLastIndexOf(a,HX_("\\",5c,00,00,00),null());
HXDLIN( 305)			aSlash = (aSlash1 == (::polymod::util::Util_obj::uLength(a) - 1));
            		}
            		else {
HXLINE( 305)			aSlash = true;
            		}
HXLINE( 306)		bool bSlash;
HXDLIN( 306)		if ((::polymod::util::Util_obj::uIndexOf(b,HX_("/",2f,00,00,00),null()) != 0)) {
HXLINE( 306)			bSlash = (::polymod::util::Util_obj::uIndexOf(b,HX_("\\",5c,00,00,00),null()) == 0);
            		}
            		else {
HXLINE( 306)			bSlash = true;
            		}
HXLINE( 307)		::String str = HX_("",00,00,00,00);
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		if (!(aSlash)) {
HXLINE( 308)			_hx_tmp = bSlash;
            		}
            		else {
HXLINE( 308)			_hx_tmp = true;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 310)			str = ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(2)->init(0,a)->init(1,b));
            		}
            		else {
HXLINE( 314)			str = ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(3)->init(0,a)->init(1,::polymod::util::Util_obj::sl())->init(2,b));
            		}
HXLINE( 316)		str = ::polymod::util::Util_obj::cleanSlashes(str);
HXLINE( 317)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,pathJoin,return )

::String Util_obj::cleanSlashes(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_321_cleanSlashes)
HXLINE( 322)		str = ::polymod::util::Util_obj::uSplitReplace(str,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 323)		str = ::polymod::util::Util_obj::uSplitReplace(str,HX_("//",20,29,00,00),HX_("/",2f,00,00,00));
HXLINE( 324)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,cleanSlashes,return )

::String Util_obj::sl(){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_329_sl)
HXDLIN( 329)		return HX_("/",2f,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Util_obj,sl,return )

 ::Xml Util_obj::copyXml( ::Xml data, ::Xml parent){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_334_copyXml)
HXLINE( 335)		 ::Xml c = null();
HXLINE( 336)		if ((data->nodeType == ::Xml_obj::Element)) {
HXLINE( 338)			if ((data->nodeType != ::Xml_obj::Element)) {
HXLINE( 338)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            			}
HXDLIN( 338)			c = ::Xml_obj::createElement(data->nodeName);
HXLINE( 339)			{
HXLINE( 339)				 ::Dynamic att = data->attributes();
HXDLIN( 339)				while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 339)					::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 341)					c->set(att1,data->get(att1));
            				}
            			}
HXLINE( 343)			{
HXLINE( 343)				 ::Dynamic el = data->elements();
HXDLIN( 343)				while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 343)					 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 345)					c->addChild(::polymod::util::Util_obj::copyXml(el1,c));
            				}
            			}
            		}
            		else {
HXLINE( 348)			if ((data->nodeType == ::Xml_obj::PCData)) {
HXLINE( 350)				bool c1;
HXDLIN( 350)				if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 350)					c1 = (data->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE( 350)					c1 = true;
            				}
HXDLIN( 350)				if (c1) {
HXLINE( 350)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            				}
HXDLIN( 350)				c = ::Xml_obj::createPCData(data->nodeValue);
            			}
            			else {
HXLINE( 352)				if ((data->nodeType == ::Xml_obj::CData)) {
HXLINE( 354)					bool c1;
HXDLIN( 354)					if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 354)						c1 = (data->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE( 354)						c1 = true;
            					}
HXDLIN( 354)					if (c1) {
HXLINE( 354)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            					}
HXDLIN( 354)					c = ::Xml_obj::createCData(data->nodeValue);
            				}
            				else {
HXLINE( 356)					if ((data->nodeType == ::Xml_obj::Comment)) {
HXLINE( 358)						bool c1;
HXDLIN( 358)						if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 358)							c1 = (data->nodeType == ::Xml_obj::Element);
            						}
            						else {
HXLINE( 358)							c1 = true;
            						}
HXDLIN( 358)						if (c1) {
HXLINE( 358)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            						}
HXDLIN( 358)						c = ::Xml_obj::createComment(data->nodeValue);
            					}
            					else {
HXLINE( 360)						if ((data->nodeType == ::Xml_obj::DocType)) {
HXLINE( 362)							bool c1;
HXDLIN( 362)							if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 362)								c1 = (data->nodeType == ::Xml_obj::Element);
            							}
            							else {
HXLINE( 362)								c1 = true;
            							}
HXDLIN( 362)							if (c1) {
HXLINE( 362)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            							}
HXDLIN( 362)							c = ::Xml_obj::createDocType(data->nodeValue);
            						}
            						else {
HXLINE( 364)							if ((data->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE( 366)								bool c1;
HXDLIN( 366)								if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 366)									c1 = (data->nodeType == ::Xml_obj::Element);
            								}
            								else {
HXLINE( 366)									c1 = true;
            								}
HXDLIN( 366)								if (c1) {
HXLINE( 366)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            								}
HXDLIN( 366)								c = ::Xml_obj::createProcessingInstruction(data->nodeValue);
            							}
            							else {
HXLINE( 368)								if ((data->nodeType == ::Xml_obj::Document)) {
HXLINE( 370)									c = ::Xml_obj::createDocument();
HXLINE( 371)									{
HXLINE( 371)										 ::Dynamic el = data->elements();
HXDLIN( 371)										while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 371)											 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 373)											c->addChild(::polymod::util::Util_obj::copyXml(el1,c));
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 376)		c->parent = parent;
HXLINE( 377)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,copyXml,return )

::String Util_obj::uCat(::String a,::String b){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_383_uCat)
HXLINE( 384)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 385)		{
HXLINE( 385)			::String x = ::Std_obj::string(a);
HXDLIN( 385)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 385)				sb->flush();
            			}
HXDLIN( 385)			if (::hx::IsNull( sb->b )) {
HXLINE( 385)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 385)				::Array< ::String > sb1 = sb->b;
HXDLIN( 385)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 386)		{
HXLINE( 386)			::String x1 = ::Std_obj::string(b);
HXDLIN( 386)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 386)				sb->flush();
            			}
HXDLIN( 386)			if (::hx::IsNull( sb->b )) {
HXLINE( 386)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 386)				::Array< ::String > sb1 = sb->b;
HXDLIN( 386)				sb1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 387)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uCat,return )

::String Util_obj::uCharAt(::String str,int index){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_395_uCharAt)
HXDLIN( 395)		return str.charAt(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uCharAt,return )

::String Util_obj::uJoin(::Array< ::String > arr,::String token){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_400_uJoin)
HXLINE( 401)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 402)		int i = 0;
HXLINE( 403)		{
HXLINE( 403)			int _g = 0;
HXDLIN( 403)			while((_g < arr->length)){
HXLINE( 403)				::String str = arr->__get(_g);
HXDLIN( 403)				_g = (_g + 1);
HXLINE( 405)				{
HXLINE( 405)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 405)						sb->flush();
            					}
HXDLIN( 405)					if (::hx::IsNull( sb->b )) {
HXLINE( 405)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(str));
            					}
            					else {
HXLINE( 405)						::Array< ::String > sb1 = sb->b;
HXDLIN( 405)						sb1->push(::Std_obj::string(str));
            					}
            				}
HXLINE( 406)				if ((i != (arr->length - 1))) {
HXLINE( 408)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 408)						sb->flush();
            					}
HXDLIN( 408)					if (::hx::IsNull( sb->b )) {
HXLINE( 408)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(token));
            					}
            					else {
HXLINE( 408)						::Array< ::String > sb1 = sb->b;
HXDLIN( 408)						sb1->push(::Std_obj::string(token));
            					}
            				}
HXLINE( 410)				i = (i + 1);
            			}
            		}
HXLINE( 412)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uJoin,return )

::String Util_obj::uCombine(::Array< ::String > arr){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_416_uCombine)
HXLINE( 417)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 418)		{
HXLINE( 418)			int _g = 0;
HXDLIN( 418)			while((_g < arr->length)){
HXLINE( 418)				::String str = arr->__get(_g);
HXDLIN( 418)				_g = (_g + 1);
HXLINE( 420)				{
HXLINE( 420)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 420)						sb->flush();
            					}
HXDLIN( 420)					if (::hx::IsNull( sb->b )) {
HXLINE( 420)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(str));
            					}
            					else {
HXLINE( 420)						::Array< ::String > sb1 = sb->b;
HXDLIN( 420)						sb1->push(::Std_obj::string(str));
            					}
            				}
            			}
            		}
HXLINE( 422)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uCombine,return )

::String Util_obj::uExtension(::String str,::hx::Null< bool >  __o_lowerCase){
            		bool lowerCase = __o_lowerCase.Default(false);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_426_uExtension)
HXLINE( 427)		int i = ::polymod::util::Util_obj::uLastIndexOf(str,HX_(".",2e,00,00,00),null());
HXLINE( 428)		::String extension = ::polymod::util::Util_obj::uSubstr(str,(i + 1),(::polymod::util::Util_obj::uLength(str) - (i + 1)));
HXLINE( 429)		if (lowerCase) {
HXLINE( 431)			extension = extension.toLowerCase();
            		}
HXLINE( 433)		return extension;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uExtension,return )

int Util_obj::uIndexOf(::String str,::String substr, ::Dynamic startIndex){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_441_uIndexOf)
HXDLIN( 441)		return str.indexOf(substr,startIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uIndexOf,return )

int Util_obj::uLastIndexOf(::String str,::String value, ::Dynamic startIndex){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_450_uLastIndexOf)
HXDLIN( 450)		return str.lastIndexOf(value,startIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uLastIndexOf,return )

int Util_obj::uLength(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_459_uLength)
HXDLIN( 459)		return str.length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uLength,return )

::String Util_obj::uPathPop(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_464_uPathPop)
HXLINE( 470)		::Array< ::String > path = str.split(HX_("/",2f,00,00,00));
HXLINE( 471)		path->pop();
HXLINE( 472)		return path->join(HX_("/",2f,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uPathPop,return )

::String Util_obj::uTrimFinalCharIf(::String str,::String match){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_477_uTrimFinalCharIf)
HXLINE( 478)		int uLength = ::polymod::util::Util_obj::uLength(str);
HXLINE( 479)		int last = ::polymod::util::Util_obj::uLastIndexOf(str,match,null());
HXLINE( 480)		if ((last == (uLength - 1))) {
HXLINE( 482)			str = ::polymod::util::Util_obj::uSubstr(str,0,(uLength - 1));
HXLINE( 483)			uLength = ::polymod::util::Util_obj::uLength(str);
            		}
HXLINE( 485)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uTrimFinalCharIf,return )

::String Util_obj::uTrimFinalEndlines(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_489_uTrimFinalEndlines)
HXLINE( 490)		bool done = false;
HXLINE( 491)		::String fix = HX_("",00,00,00,00);
HXLINE( 492)		::String last = HX_("",00,00,00,00);
HXLINE( 493)		while(!(done)){
HXLINE( 495)			::String fix = ::polymod::util::Util_obj::uTrimFinalCharIf(str,HX_("\n",0a,00,00,00));
HXLINE( 496)			fix = ::polymod::util::Util_obj::uTrimFinalCharIf(fix,HX_("\r",0d,00,00,00));
HXLINE( 497)			if ((fix == str)) {
HXLINE( 499)				done = true;
            			}
            			else {
HXLINE( 503)				str = fix;
            			}
            		}
HXLINE( 506)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uTrimFinalEndlines,return )

::String Util_obj::uTrimFirstCharIf(::String str,::String match){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_510_uTrimFirstCharIf)
HXLINE( 511)		int uLength = ::polymod::util::Util_obj::uLength(str);
HXLINE( 512)		int first = ::polymod::util::Util_obj::uIndexOf(str,match,null());
HXLINE( 513)		if ((first == 0)) {
HXLINE( 515)			str = ::polymod::util::Util_obj::uSubstr(str,1,uLength);
HXLINE( 516)			uLength = ::polymod::util::Util_obj::uLength(str);
            		}
HXLINE( 518)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uTrimFirstCharIf,return )

::String Util_obj::uTrimFirstEndlines(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_522_uTrimFirstEndlines)
HXLINE( 523)		bool done = false;
HXLINE( 524)		::String fix = HX_("",00,00,00,00);
HXLINE( 525)		::String last = HX_("",00,00,00,00);
HXLINE( 526)		while(!(done)){
HXLINE( 528)			::String fix = ::polymod::util::Util_obj::uTrimFirstCharIf(str,HX_("\n",0a,00,00,00));
HXLINE( 529)			fix = ::polymod::util::Util_obj::uTrimFirstCharIf(fix,HX_("\r",0d,00,00,00));
HXLINE( 530)			if ((fix == str)) {
HXLINE( 532)				done = true;
            			}
            			else {
HXLINE( 536)				str = fix;
            			}
            		}
HXLINE( 539)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uTrimFirstEndlines,return )

::Array< ::String > Util_obj::uSplit(::String str,::String substr){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_547_uSplit)
HXDLIN( 547)		return str.split(substr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uSplit,return )

::String Util_obj::uSplitReplace(::String s,::String substr,::String by){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_552_uSplitReplace)
HXLINE( 553)		if ((::polymod::util::Util_obj::uIndexOf(s,substr,null()) == -1)) {
HXLINE( 553)			return s;
            		}
HXLINE( 555)		::Array< ::String > arr = ::polymod::util::Util_obj::uSplit(s,substr);
HXLINE( 557)		bool _hx_tmp;
HXDLIN( 557)		if (::hx::IsNotNull( arr )) {
HXLINE( 557)			_hx_tmp = (arr->length < 2);
            		}
            		else {
HXLINE( 557)			_hx_tmp = true;
            		}
HXDLIN( 557)		if (_hx_tmp) {
HXLINE( 557)			return s;
            		}
HXLINE( 559)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 560)		{
HXLINE( 560)			int _g = 0;
HXDLIN( 560)			int _g1 = arr->length;
HXDLIN( 560)			while((_g < _g1)){
HXLINE( 560)				_g = (_g + 1);
HXDLIN( 560)				int i = (_g - 1);
HXLINE( 562)				::String bit = arr->__get(i);
HXLINE( 563)				{
HXLINE( 563)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 563)						sb->flush();
            					}
HXDLIN( 563)					if (::hx::IsNull( sb->b )) {
HXLINE( 563)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bit));
            					}
            					else {
HXLINE( 563)						::Array< ::String > sb1 = sb->b;
HXDLIN( 563)						sb1->push(::Std_obj::string(bit));
            					}
            				}
HXLINE( 564)				if ((i != (arr->length - 1))) {
HXLINE( 566)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 566)						sb->flush();
            					}
HXDLIN( 566)					if (::hx::IsNull( sb->b )) {
HXLINE( 566)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(by));
            					}
            					else {
HXLINE( 566)						::Array< ::String > sb1 = sb->b;
HXDLIN( 566)						sb1->push(::Std_obj::string(by));
            					}
            				}
            			}
            		}
HXLINE( 570)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uSplitReplace,return )

::String Util_obj::uSubstr(::String str,int pos, ::Dynamic len){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_578_uSubstr)
HXDLIN( 578)		return str.substr(pos,len);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uSubstr,return )

::String Util_obj::uSubstring(::String str,int startIndex, ::Dynamic endIndex){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_587_uSubstring)
HXDLIN( 587)		return str.substring(startIndex,endIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uSubstring,return )


Util_obj::Util_obj()
{
}

bool Util_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sl") ) { outValue = sl_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uCat") ) { outValue = uCat_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"uJoin") ) { outValue = uJoin_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uSplit") ) { outValue = uSplit_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"copyXml") ) { outValue = copyXml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uCharAt") ) { outValue = uCharAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uLength") ) { outValue = uLength_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uSubstr") ) { outValue = uSubstr_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stripXML") ) { outValue = stripXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasMerge") ) { outValue = hasMerge_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pathJoin") ) { outValue = pathJoin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uCombine") ) { outValue = uCombine_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uIndexOf") ) { outValue = uIndexOf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uPathPop") ) { outValue = uPathPop_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mergeText") ) { outValue = mergeText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"appendXML") ) { outValue = appendXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasAppend") ) { outValue = hasAppend_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"appendText") ) { outValue = appendText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasSpecial") ) { outValue = hasSpecial_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uExtension") ) { outValue = uExtension_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uSubstring") ) { outValue = uSubstring_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cleanSlashes") ) { outValue = cleanSlashes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uLastIndexOf") ) { outValue = uLastIndexOf_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stripComments") ) { outValue = stripComments_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uSplitReplace") ) { outValue = uSplitReplace_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendCSVOrTSV") ) { outValue = appendCSVOrTSV_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"appendSpecialXML") ) { outValue = appendSpecialXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFinalCharIf") ) { outValue = uTrimFinalCharIf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFirstCharIf") ) { outValue = uTrimFirstCharIf_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stripAssetsPrefix") ) { outValue = stripAssetsPrefix_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mergeAndAppendText") ) { outValue = mergeAndAppendText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFinalEndlines") ) { outValue = uTrimFinalEndlines_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFirstEndlines") ) { outValue = uTrimFirstEndlines_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"trimLeadingWhiteSpace") ) { outValue = trimLeadingWhiteSpace_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"trimTrailingWhiteSpace") ) { outValue = trimTrailingWhiteSpace_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Util_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Util_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Util_obj::__mClass;

static ::String Util_obj_sStaticFields[] = {
	HX_("mergeAndAppendText",86,bb,89,90),
	HX_("mergeText",85,57,4d,74),
	HX_("appendText",a7,cf,05,5b),
	HX_("appendCSVOrTSV",08,df,4c,88),
	HX_("appendSpecialXML",98,73,b2,53),
	HX_("appendXML",1d,4c,6a,1f),
	HX_("stripComments",2c,40,17,46),
	HX_("trimLeadingWhiteSpace",81,9c,f1,7b),
	HX_("trimTrailingWhiteSpace",db,d6,b4,cb),
	HX_("stripXML",df,0d,70,dd),
	HX_("hasMerge",fe,ec,1e,92),
	HX_("hasAppend",d4,94,bc,d0),
	HX_("stripAssetsPrefix",6d,dd,37,77),
	HX_("hasSpecial",ff,61,09,6a),
	HX_("pathJoin",2f,7c,04,3c),
	HX_("cleanSlashes",62,4b,95,f9),
	HX_("sl",99,64,00,00),
	HX_("copyXml",22,e9,88,43),
	HX_("uCat",a1,22,89,4d),
	HX_("uCharAt",be,33,59,ed),
	HX_("uJoin",ff,3e,20,8f),
	HX_("uCombine",8a,7a,8d,6b),
	HX_("uExtension",4a,3c,ec,68),
	HX_("uIndexOf",d4,98,1e,d2),
	HX_("uLastIndexOf",9e,ae,1a,86),
	HX_("uLength",3b,4f,eb,d4),
	HX_("uPathPop",f7,d4,d7,fa),
	HX_("uTrimFinalCharIf",b2,65,84,19),
	HX_("uTrimFinalEndlines",63,3b,6c,0f),
	HX_("uTrimFirstCharIf",ec,c5,81,b7),
	HX_("uTrimFirstEndlines",1d,9e,ad,2f),
	HX_("uSplit",25,92,5d,dc),
	HX_("uSplitReplace",8f,9c,1c,9b),
	HX_("uSubstr",86,a9,ee,cf),
	HX_("uSubstring",1c,9b,c3,66),
	::String(null())
};

void Util_obj::__register()
{
	Util_obj _hx_dummy;
	Util_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.util.Util",96,7d,da,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Util_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Util_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Util_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Util_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Util_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace util