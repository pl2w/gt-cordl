#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__Flip_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_StrideSet_def.hpp"
#include "Photon/Voice/zzzz__ImageFormat_def.hpp"
#include "Photon/Voice/zzzz__Rotation_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageBufferInfo)
namespace GlobalNamespace {
struct ImageBufferInfo_StrideSet;
}
namespace Photon::Voice {
struct Flip;
}
namespace Photon::Voice {
struct ImageFormat;
}
namespace Photon::Voice {
struct Rotation;
}
// Forward declare root types
namespace Photon::Voice {
struct ImageBufferInfo;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::ImageBufferInfo);
DEFINE_IL2CPP_CLASS(::Photon::Voice::ImageBufferInfo, "Photon.Voice", "ImageBufferInfo");
// Dependencies Photon.Voice.Flip, Photon.Voice.ImageBufferInfo::StrideSet, Photon.Voice.ImageFormat, Photon.Voice.Rotation
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.ImageBufferInfo
struct CORDL_TYPE ImageBufferInfo {
public:
// Declarations
using StrideSet = ::GlobalNamespace::ImageBufferInfo_StrideSet;

 __declspec(property(get=get_Flip, put=set_Flip)) ::Photon::Voice::Flip  Flip;

 __declspec(property(get=get_Format)) ::Photon::Voice::ImageFormat  Format;

 __declspec(property(get=get_Height)) int32_t  Height;

 __declspec(property(get=get_Rotation, put=set_Rotation)) ::Photon::Voice::Rotation  Rotation;

 __declspec(property(get=get_Stride)) ::GlobalNamespace::ImageBufferInfo_StrideSet  Stride;

 __declspec(property(get=get_Width)) int32_t  Width;

/// @brief Method .ctor, addr 0xa753718, size 0x98, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::GlobalNamespace::ImageBufferInfo_StrideSet  stride, ::Photon::Voice::ImageFormat  format) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Flip, addr 0xa753708, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::Flip get_Flip() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Format, addr 0xa7536f0, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::ImageFormat get_Format() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Height, addr 0xa7536d4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Height() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Rotation, addr 0xa7536f8, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::Rotation get_Rotation() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Stride, addr 0xa7536dc, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::ImageBufferInfo_StrideSet get_Stride() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Width, addr 0xa7536cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Width() ;

/// [CompilerGenerated]
/// @brief Method set_Flip, addr 0xa753710, size 0x8, virtual false, abstract: false, final false
inline void set_Flip(::Photon::Voice::Flip  value) ;

/// [CompilerGenerated]
/// @brief Method set_Rotation, addr 0xa753700, size 0x8, virtual false, abstract: false, final false
inline void set_Rotation(::Photon::Voice::Rotation  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferInfo() ;

// Ctor Parameters [CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Stride_k__BackingField", ty: "::GlobalNamespace::ImageBufferInfo_StrideSet", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Format_k__BackingField", ty: "::Photon::Voice::ImageFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::Photon::Voice::Rotation", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Flip_k__BackingField", ty: "::Photon::Voice::Flip", modifiers: "", def_value: None, comment: None }]
constexpr ImageBufferInfo(int32_t  _Width_k__BackingField, int32_t  _Height_k__BackingField, ::GlobalNamespace::ImageBufferInfo_StrideSet  _Stride_k__BackingField, ::Photon::Voice::ImageFormat  _Format_k__BackingField, ::Photon::Voice::Rotation  _Rotation_k__BackingField, ::Photon::Voice::Flip  _Flip_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28479};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [CompilerGenerated]
/// @brief Field <Width>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _Width_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Height>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _Height_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Stride>k__BackingField, offset: 0x8, size: 0x14, def value: None
 ::GlobalNamespace::ImageBufferInfo_StrideSet  _Stride_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Format>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Photon::Voice::ImageFormat  _Format_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Rotation>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Photon::Voice::Rotation  _Rotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Flip>k__BackingField, offset: 0x24, size: 0x2, def value: None
 ::Photon::Voice::Flip  _Flip_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::ImageBufferInfo, _Width_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::ImageBufferInfo, _Height_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::ImageBufferInfo, _Stride_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::ImageBufferInfo, _Format_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::ImageBufferInfo, _Rotation_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::ImageBufferInfo, _Flip_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::ImageBufferInfo) == 0x28, "Size mismatch!");

} // namespace end def Photon::Voice
