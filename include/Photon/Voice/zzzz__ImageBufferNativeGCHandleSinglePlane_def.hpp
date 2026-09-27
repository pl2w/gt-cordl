#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNativeGCHandleSinglePlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__ImageBufferNative_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageBufferNativeGCHandleSinglePlane)
namespace Photon::Voice {
struct ImageBufferInfo;
}
namespace Photon::Voice {
template<typename T>
class ImageBufferNativePool_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class ImageBufferNativeGCHandleSinglePlane;
}
// Write type traits
MARK_REF_T(::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*, "Photon.Voice", "ImageBufferNativeGCHandleSinglePlane");
// Dependencies Photon.Voice.ImageBufferNative, System.Runtime.InteropServices.GCHandle
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.ImageBufferNativeGCHandleSinglePlane
class CORDL_TYPE ImageBufferNativeGCHandleSinglePlane : public ::Photon::Voice::ImageBufferNative {
public:
// Declarations
/// @brief Field planeHandle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_planeHandle, put=__cordl_internal_set_planeHandle)) ::System::Runtime::InteropServices::GCHandle  planeHandle;

/// @brief Field pool, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  pool;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa753e98, size 0x4, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::ImageBufferNativeGCHandleSinglePlane* New_ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  pool, ::Photon::Voice::ImageBufferInfo  info) ;

/// @brief Method PinPlane, addr 0xa753e2c, size 0x34, virtual false, abstract: false, final false
inline void PinPlane(::ArrayW<uint8_t>  plane) ;

/// @brief Method Release, addr 0xa753e60, size 0x38, virtual true, abstract: false, final false
inline void Release() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_planeHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_planeHandle() ;

constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>* const& __cordl_internal_get_pool() const;

constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*& __cordl_internal_get_pool() ;

constexpr void __cordl_internal_set_planeHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_pool(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  value) ;

/// @brief Method .ctor, addr 0xa753cec, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  pool, ::Photon::Voice::ImageBufferInfo  info) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferNativeGCHandleSinglePlane() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativeGCHandleSinglePlane", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageBufferNativeGCHandleSinglePlane(ImageBufferNativeGCHandleSinglePlane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNativeGCHandleSinglePlane", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageBufferNativeGCHandleSinglePlane(ImageBufferNativeGCHandleSinglePlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28483};

/// @brief Field pool, offset: 0x60, size: 0x8, def value: None
 ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  ___pool;

/// @brief Field planeHandle, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___planeHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::ImageBufferNativeGCHandleSinglePlane, ___pool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::ImageBufferNativeGCHandleSinglePlane, ___planeHandle) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::ImageBufferNativeGCHandleSinglePlane) == 0x70, "Size mismatch!");

} // namespace end def Photon::Voice
