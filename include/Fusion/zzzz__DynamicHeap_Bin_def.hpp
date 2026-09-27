#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Bin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DynamicHeap_PageList_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_Bin)
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_Bin;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_Bin);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_Bin, "Fusion", "DynamicHeap/Bin");
// Dependencies Fusion.DynamicHeap::PageList
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/Bin
struct CORDL_TYPE DynamicHeap_Bin {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_Bin() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pages", ty: "::GlobalNamespace::DynamicHeap_PageList", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectWords", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectStride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_Bin(int32_t  Index, ::GlobalNamespace::DynamicHeap_PageList  Pages, int32_t  ObjectWords, int32_t  ObjectStride, int32_t  ObjectCapacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field Pages, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::DynamicHeap_PageList  Pages;

/// @brief Field ObjectWords, offset: 0x20, size: 0x4, def value: None
 int32_t  ObjectWords;

/// @brief Field ObjectStride, offset: 0x24, size: 0x4, def value: None
 int32_t  ObjectStride;

/// @brief Field ObjectCapacity, offset: 0x28, size: 0x4, def value: None
 int32_t  ObjectCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_Bin, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Bin, Pages) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Bin, ObjectWords) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Bin, ObjectStride) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Bin, ObjectCapacity) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_Bin) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
