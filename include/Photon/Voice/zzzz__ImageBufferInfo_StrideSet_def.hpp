#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferInfo_StrideSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageBufferInfo_StrideSet)
// Forward declare root types
namespace GlobalNamespace {
struct ImageBufferInfo_StrideSet;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ImageBufferInfo_StrideSet);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImageBufferInfo_StrideSet, "Photon.Voice", "ImageBufferInfo/StrideSet");
// [DefaultMember("Item")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.ImageBufferInfo/StrideSet
struct CORDL_TYPE ImageBufferInfo_StrideSet {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) int32_t  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// @brief Method .ctor, addr 0xa7537b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, int32_t  s0, int32_t  s1, int32_t  s2, int32_t  s3) ;

/// @brief Method get_Item, addr 0xa7537c0, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  key) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Length, addr 0xa753848, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method set_Item, addr 0xa753808, size 0x40, virtual false, abstract: false, final false
inline void set_Item(int32_t  key, int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Length, addr 0xa753850, size 0x8, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferInfo_StrideSet() ;

// Ctor Parameters [CppParam { name: "stride0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stride1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stride2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stride3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Length_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ImageBufferInfo_StrideSet(int32_t  stride0, int32_t  stride1, int32_t  stride2, int32_t  stride3, int32_t  _Length_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field stride0, offset: 0x0, size: 0x4, def value: None
 int32_t  stride0;

/// @brief Field stride1, offset: 0x4, size: 0x4, def value: None
 int32_t  stride1;

/// @brief Field stride2, offset: 0x8, size: 0x4, def value: None
 int32_t  stride2;

/// @brief Field stride3, offset: 0xc, size: 0x4, def value: None
 int32_t  stride3;

/// [CompilerGenerated]
/// @brief Field <Length>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  _Length_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImageBufferInfo_StrideSet, stride0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferInfo_StrideSet, stride1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferInfo_StrideSet, stride2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferInfo_StrideSet, stride3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferInfo_StrideSet, _Length_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ImageBufferInfo_StrideSet) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
