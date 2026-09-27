#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNativePool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__ImageBufferInfo_def.hpp"
#include "Photon/Voice/zzzz__ObjectPool_2_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageBufferNativePool_1)
namespace Photon::Voice {
struct ImageBufferInfo;
}
namespace Photon::Voice {
template<typename T>
class ImageBufferNativePool_1_Factory;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class ImageBufferNativePool_1;
}
namespace Photon::Voice {
template<typename T>
class ImageBufferNativePool_1_Factory;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::ImageBufferNativePool_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::ImageBufferNativePool_1_Factory);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::ImageBufferNativePool_1, "Photon.Voice", "ImageBufferNativePool`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::ImageBufferNativePool_1_Factory, "Photon.Voice", "ImageBufferNativePool`1/Factory");
// Dependencies Photon.Voice.ImageBufferInfo, Photon.Voice.ObjectPool`2<TType, TInfo>
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.ImageBufferNativePool`1<T>
class CORDL_TYPE ImageBufferNativePool_1 : public ::Photon::Voice::ObjectPool_2<T,::Photon::Voice::ImageBufferInfo> {
public:
// Declarations
using Factory = ::Photon::Voice::ImageBufferNativePool_1_Factory<T>;

/// @brief Field factory, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_factory, put=__cordl_internal_set_factory)) ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory;

static inline ::Photon::Voice::ImageBufferNativePool_1<T>* New_ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name) ;

static inline ::Photon::Voice::ImageBufferNativePool_1<T>* New_ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name, ::Photon::Voice::ImageBufferInfo  info) ;

constexpr ::Photon::Voice::ImageBufferNativePool_1_Factory<T>* const& __cordl_internal_get_factory() const;

constexpr ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*& __cordl_internal_get_factory() ;

constexpr void __cordl_internal_set_factory(::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name, ::Photon::Voice::ImageBufferInfo  info) ;

/// @brief Method createObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T createObject(::Photon::Voice::ImageBufferInfo  info) ;

/// @brief Method destroyObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void destroyObject(T  obj) ;

/// @brief Method infosMatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool infosMatch(::Photon::Voice::ImageBufferInfo  i0, ::Photon::Voice::ImageBufferInfo  i1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferNativePool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativePool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageBufferNativePool_1(ImageBufferNativePool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativePool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageBufferNativePool_1(ImageBufferNativePool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28416};

/// @brief Field factory, offset: 0x60, size: 0x8, def value: None
 ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  ___factory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.MulticastDelegate
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.ImageBufferNativePool`1/Factory<T>
class CORDL_TYPE ImageBufferNativePool_1_Factory : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Photon::Voice::ImageBufferNativePool_1<T>*  pool, ::Photon::Voice::ImageBufferInfo  info, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T Invoke(::Photon::Voice::ImageBufferNativePool_1<T>*  pool, ::Photon::Voice::ImageBufferInfo  info) ;

static inline ::Photon::Voice::ImageBufferNativePool_1_Factory<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferNativePool_1_Factory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativePool_1_Factory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageBufferNativePool_1_Factory(ImageBufferNativePool_1_Factory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativePool_1_Factory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageBufferNativePool_1_Factory(ImageBufferNativePool_1_Factory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
