#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_36995aebacb20d43_27_resolve,"haxe.xml._Access.NodeAccess_Impl_","resolve",0xc66a9d2e,"haxe.xml._Access.NodeAccess_Impl_.resolve","C:\\Users\\Colin\\Haxe\\haxe\\std/haxe/xml/Access.hx",27,0x7eaf9175)
namespace haxe{
namespace xml{
namespace _Access{

void NodeAccess_Impl__obj::__construct() { }

Dynamic NodeAccess_Impl__obj::__CreateEmpty() { return new NodeAccess_Impl__obj; }

void *NodeAccess_Impl__obj::_hx_vtable = 0;

Dynamic NodeAccess_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NodeAccess_Impl__obj > _hx_result = new NodeAccess_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NodeAccess_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x601f71d8;
}

 ::Xml NodeAccess_Impl__obj::resolve( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_36995aebacb20d43_27_resolve)
HXLINE(  28)		 ::Xml x = ( ( ::Xml)(this1->elementsNamed(name)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  29)		if (::hx::IsNull( x )) {
HXLINE(  30)			::String xname;
HXDLIN(  30)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE(  30)				xname = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE(  30)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE(  30)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN(  30)				xname = this1->nodeName;
            			}
HXLINE(  31)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((xname + HX_(" is missing element ",b4,ea,58,cb)) + name)));
            		}
HXLINE(  33)		bool _hx_tmp;
HXDLIN(  33)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE(  33)			_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  33)			_hx_tmp = false;
            		}
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  33)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            		}
HXDLIN(  33)		 ::Xml this2 = x;
HXDLIN(  33)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NodeAccess_Impl__obj,resolve,return )


NodeAccess_Impl__obj::NodeAccess_Impl__obj()
{
}

bool NodeAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NodeAccess_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NodeAccess_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class NodeAccess_Impl__obj::__mClass;

static ::String NodeAccess_Impl__obj_sStaticFields[] = {
	HX_("resolve",ec,12,60,67),
	::String(null())
};

void NodeAccess_Impl__obj::__register()
{
	NodeAccess_Impl__obj _hx_dummy;
	NodeAccess_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.xml._Access.NodeAccess_Impl_",b0,d8,69,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NodeAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NodeAccess_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NodeAccess_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NodeAccess_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NodeAccess_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Access
