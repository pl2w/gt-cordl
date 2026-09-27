#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BitmapAllocator32_Page.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitmapAllocator32_Page)
// Forward declare root types
namespace GlobalNamespace {
struct BitmapAllocator32_Page;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitmapAllocator32_Page);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitmapAllocator32_Page, "UnityEngine.UIElements.UIR", "BitmapAllocator32/Page");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.BitmapAllocator32/Page
struct CORDL_TYPE BitmapAllocator32_Page {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BitmapAllocator32_Page() ;

// Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "freeSlots", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BitmapAllocator32_Page(uint16_t  x, uint16_t  y, int32_t  freeSlots) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8591};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x2, def value: None
 uint16_t  x;

/// @brief Field y, offset: 0x2, size: 0x2, def value: None
 uint16_t  y;

/// @brief Field freeSlots, offset: 0x4, size: 0x4, def value: None
 int32_t  freeSlots;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitmapAllocator32_Page, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapAllocator32_Page, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapAllocator32_Page, freeSlots) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitmapAllocator32_Page) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
