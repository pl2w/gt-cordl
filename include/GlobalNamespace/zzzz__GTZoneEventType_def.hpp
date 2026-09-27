#pragma once
// IWYU pragma private; include "GlobalNamespace/GTZoneEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTZoneEventType)
// Forward declare root types
namespace GlobalNamespace {
struct GTZoneEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTZoneEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTZoneEventType, "", "GTZoneEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTZoneEventType
struct CORDL_TYPE GTZoneEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTZoneEventType_Unwrapped
enum struct __GTZoneEventType_Unwrapped : int32_t {
__E_zone_enter = static_cast<int32_t>(0x0),
__E_zone_exit = static_cast<int32_t>(0x1),
__E_zone_stay = static_cast<int32_t>(0x2),
__E_none = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTZoneEventType_Unwrapped () const noexcept {
return static_cast<__GTZoneEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTZoneEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTZoneEventType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2263};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field none value: I32(3)
static ::GlobalNamespace::GTZoneEventType const none;

/// @brief Field zone_enter value: I32(0)
static ::GlobalNamespace::GTZoneEventType const zone_enter;

/// @brief Field zone_exit value: I32(1)
static ::GlobalNamespace::GTZoneEventType const zone_exit;

/// @brief Field zone_stay value: I32(2)
static ::GlobalNamespace::GTZoneEventType const zone_stay;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTZoneEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTZoneEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
