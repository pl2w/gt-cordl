#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNative_PlaneSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageBufferNative_PlaneSet)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
struct ImageBufferNative_PlaneSet;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ImageBufferNative_PlaneSet);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImageBufferNative_PlaneSet, "Photon.Voice", "ImageBufferNative/PlaneSet");
// [DefaultMember("Item")]
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.ImageBufferNative/PlaneSet
struct CORDL_TYPE ImageBufferNative_PlaneSet {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::System::IntPtr  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// @brief Method .ctor, addr 0xa7538a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, ::System::IntPtr  p0, ::System::IntPtr  p1, ::System::IntPtr  p2, ::System::IntPtr  p3) ;

/// @brief Method get_Item, addr 0xa753964, size 0x48, virtual false, abstract: false, final false
inline ::System::IntPtr get_Item(int32_t  key) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Length, addr 0xa7539ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method set_Item, addr 0xa7539ac, size 0x40, virtual false, abstract: false, final false
inline void set_Item(int32_t  key, ::System::IntPtr  value) ;

/// [CompilerGenerated]
/// @brief Method set_Length, addr 0xa7539f4, size 0x8, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ImageBufferNative_PlaneSet() ;

// Ctor Parameters [CppParam { name: "plane0", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "plane1", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "plane2", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "plane3", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Length_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ImageBufferNative_PlaneSet(::System::IntPtr  plane0, ::System::IntPtr  plane1, ::System::IntPtr  plane2, ::System::IntPtr  plane3, int32_t  _Length_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28480};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field plane0, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  plane0;

/// @brief Field plane1, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  plane1;

/// @brief Field plane2, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  plane2;

/// @brief Field plane3, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  plane3;

/// [CompilerGenerated]
/// @brief Field <Length>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  _Length_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImageBufferNative_PlaneSet, plane0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferNative_PlaneSet, plane1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferNative_PlaneSet, plane2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferNative_PlaneSet, plane3) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImageBufferNative_PlaneSet, _Length_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ImageBufferNative_PlaneSet) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
