#ifndef INCLUDED_polymod_backends_IBackend
#define INCLUDED_polymod_backends_IBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,PolymodAssetLibrary)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES IBackend_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_init)(); 
		static inline void init( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_init)();
		}
		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_destroy)();
		}
		void (::hx::Object :: *_hx_clearCache)(); 
		static inline void clearCache( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_clearCache)();
		}
		bool (::hx::Object :: *_hx_exists)(::String id); 
		static inline bool exists( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_exists)(id);
		}
		 ::haxe::io::Bytes (::hx::Object :: *_hx_getBytes)(::String id); 
		static inline  ::haxe::io::Bytes getBytes( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_getBytes)(id);
		}
		::String (::hx::Object :: *_hx_getText)(::String id); 
		static inline ::String getText( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_getText)(id);
		}
		::String (::hx::Object :: *_hx_getPath)(::String id); 
		static inline ::String getPath( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_getPath)(id);
		}
		::Array< ::String > (::hx::Object :: *_hx_list)(::String type); 
		static inline ::Array< ::String > list( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_list)(type);
		}
		::String (::hx::Object :: *_hx_stripAssetsPrefix)(::String id); 
		static inline ::String stripAssetsPrefix( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::backends::IBackend_obj *>(_hx_.mPtr->_hx_getInterface(0x4ed455e0)))->_hx_stripAssetsPrefix)(id);
		}
};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_IBackend */ 
