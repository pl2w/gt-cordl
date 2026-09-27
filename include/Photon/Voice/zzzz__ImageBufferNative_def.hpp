#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__ImageBufferInfo_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_PlaneSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageBufferNative)
namespace GlobalNamespace {
struct ImageBufferNative_PlaneSet;
}
namespace Photon::Voice {
struct ImageBufferInfo;
}
namespace Photon::Voice {
struct ImageFormat;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Photon::Voice {
class ImageBufferNative;
}
// Write type traits
MARK_REF_T(::Photon::Voice::ImageBufferNative*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::ImageBufferNative*, "Photon.Voice", "ImageBufferNative");
// Dependencies Photon.Voice.ImageBufferInfo, Photon.Voice.ImageBufferNative::PlaneSet, System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.ImageBufferNative
class CORDL_TYPE ImageBufferNative : public ::System::Object {
public:
// Declarations
using PlaneSet = ::GlobalNamespace::ImageBufferNative_PlaneSet;

/// @brief Field Info, offset 0x10, size 0x28 
 __declspec(property(get=__cordl_internal_get_Info, put=__cordl_internal_set_Info)) ::Photon::Voice::ImageBufferInfo  Info;

/// @brief Field Planes, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get_Planes, put=__cordl_internal_set_Planes)) ::GlobalNamespace::ImageBufferNative_PlaneSet  Planes;

/// @brief Method Dispose, addr 0xa753960, size 0x4, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::ImageBufferNative* New_ctor(::System::IntPtr  buf, int32_t  width, int32_t  height, int32_t  stride, ::Photon::Voice::ImageFormat  imageFormat) ;

static inline ::Photon::Voice::ImageBufferNative* New_ctor(::Photon::Voice::ImageBufferInfo  info) ;

/// @brief Method Release, addr 0xa75395c, size 0x4, virtual true, abstract: false, final false
inline void Release() ;

constexpr ::Photon::Voice::ImageBufferInfo const& __cordl_internal_get_Info() const;

constexpr ::Photon::Voice::ImageBufferInfo& __cordl_internal_get_Info() ;

constexpr ::GlobalNamespace::ImageBufferNative_PlaneSet const& __cordl_internal_get_Planes() const;

constexpr ::GlobalNamespace::ImageBufferNative_PlaneSet& __cordl_internal_get_Planes() ;

constexpr void __cordl_internal_set_Info(::Photon::Voice::ImageBufferInfo  value) ;

constexpr void __cordl_internal_set_Planes(::GlobalNamespace::ImageBufferNative_PlaneSet  value) ;

/// @brief Method .ctor, addr 0xa7538b0, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  buf, int32_t  width, int32_t  height, int32_t  stride, ::Photon::Voice::ImageFormat  imageFormat) ;

/// @brief Method .ctor, addr 0xa753858, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ImageBufferInfo  info) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageBufferNative(ImageBufferNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageBufferNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageBufferNative(ImageBufferNative const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28481};

/// @brief Field Info, offset: 0x10, size: 0x28, def value: None
 ::Photon::Voice::ImageBufferInfo  ___Info;

/// @brief Field Planes, offset: 0x38, size: 0x28, def value: None
 ::GlobalNamespace::ImageBufferNative_PlaneSet  ___Planes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::ImageBufferNative, ___Info) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::ImageBufferNative, ___Planes) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::ImageBufferNative) == 0x60, "Size mismatch!");

} // namespace end def Photon::Voice
