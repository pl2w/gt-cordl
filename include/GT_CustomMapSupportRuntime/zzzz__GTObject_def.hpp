#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GTObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTObject)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct GTObject;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::GTObject);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::GTObject, "GT_CustomMapSupportRuntime", "GTObject");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.GTObject
struct CORDL_TYPE GTObject {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTObject_Unwrapped
enum struct __GTObject_Unwrapped : int32_t {
__E_LeafGlider = static_cast<int32_t>(0x0),
__E_GliderWindVolume = static_cast<int32_t>(0x1),
__E_WaterVolume = static_cast<int32_t>(0x2),
__E_ForceVolume = static_cast<int32_t>(0x3),
__E_ATM = static_cast<int32_t>(0x4),
__E_HoverboardArea = static_cast<int32_t>(0x5),
__E_HoverboardDispenser = static_cast<int32_t>(0x6),
__E_RopeSwing = static_cast<int32_t>(0x7),
__E_ZipLine = static_cast<int32_t>(0x8),
__E_Store_DisplayStand = static_cast<int32_t>(0x9),
__E_Store_TryOnArea = static_cast<int32_t>(0xa),
__E_Store_Checkout = static_cast<int32_t>(0xb),
__E_Store_TryOnConsole = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTObject_Unwrapped () const noexcept {
return static_cast<__GTObject_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTObject() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTObject(int32_t  value__) noexcept;

/// @brief Field ATM value: I32(4)
static ::GT_CustomMapSupportRuntime::GTObject const ATM;

/// @brief Field ForceVolume value: I32(3)
static ::GT_CustomMapSupportRuntime::GTObject const ForceVolume;

/// @brief Field GliderWindVolume value: I32(1)
static ::GT_CustomMapSupportRuntime::GTObject const GliderWindVolume;

/// @brief Field HoverboardArea value: I32(5)
static ::GT_CustomMapSupportRuntime::GTObject const HoverboardArea;

/// @brief Field HoverboardDispenser value: I32(6)
static ::GT_CustomMapSupportRuntime::GTObject const HoverboardDispenser;

/// @brief Field LeafGlider value: I32(0)
static ::GT_CustomMapSupportRuntime::GTObject const LeafGlider;

/// @brief Field RopeSwing value: I32(7)
static ::GT_CustomMapSupportRuntime::GTObject const RopeSwing;

/// @brief Field Store_Checkout value: I32(11)
static ::GT_CustomMapSupportRuntime::GTObject const Store_Checkout;

/// @brief Field Store_DisplayStand value: I32(9)
static ::GT_CustomMapSupportRuntime::GTObject const Store_DisplayStand;

/// @brief Field Store_TryOnArea value: I32(10)
static ::GT_CustomMapSupportRuntime::GTObject const Store_TryOnArea;

/// @brief Field Store_TryOnConsole value: I32(12)
static ::GT_CustomMapSupportRuntime::GTObject const Store_TryOnConsole;

/// @brief Field WaterVolume value: I32(2)
static ::GT_CustomMapSupportRuntime::GTObject const WaterVolume;

/// @brief Field ZipLine value: I32(8)
static ::GT_CustomMapSupportRuntime::GTObject const ZipLine;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObject, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::GTObject) == 0x4, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
