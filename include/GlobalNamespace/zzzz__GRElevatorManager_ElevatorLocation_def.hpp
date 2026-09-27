#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorManager_ElevatorLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRElevatorManager_ElevatorLocation)
// Forward declare root types
namespace GlobalNamespace {
struct GRElevatorManager_ElevatorLocation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRElevatorManager_ElevatorLocation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevatorManager_ElevatorLocation, "", "GRElevatorManager/ElevatorLocation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRElevatorManager/ElevatorLocation
struct CORDL_TYPE GRElevatorManager_ElevatorLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRElevatorManager_ElevatorLocation_Unwrapped
enum struct __GRElevatorManager_ElevatorLocation_Unwrapped : int32_t {
__E_Mall = static_cast<int32_t>(0x0),
__E_City = static_cast<int32_t>(0x1),
__E_GhostReactor = static_cast<int32_t>(0x2),
__E_MonkeBlocks = static_cast<int32_t>(0x3),
__E_VIMExperience1 = static_cast<int32_t>(0x4),
__E_VIMExperience2 = static_cast<int32_t>(0x5),
__E_VIMExperience3 = static_cast<int32_t>(0x6),
__E_VIMExperience4 = static_cast<int32_t>(0x7),
__E_GhostEntrance = static_cast<int32_t>(0x8),
__E_None = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRElevatorManager_ElevatorLocation_Unwrapped () const noexcept {
return static_cast<__GRElevatorManager_ElevatorLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRElevatorManager_ElevatorLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRElevatorManager_ElevatorLocation(int32_t  value__) noexcept;

/// @brief Field City value: I32(1)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const City;

/// @brief Field GhostEntrance value: I32(8)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const GhostEntrance;

/// @brief Field GhostReactor value: I32(2)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const GhostReactor;

/// @brief Field Mall value: I32(0)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const Mall;

/// @brief Field MonkeBlocks value: I32(3)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const MonkeBlocks;

/// @brief Field None value: I32(9)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const None;

/// @brief Field VIMExperience1 value: I32(4)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const VIMExperience1;

/// @brief Field VIMExperience2 value: I32(5)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const VIMExperience2;

/// @brief Field VIMExperience3 value: I32(6)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const VIMExperience3;

/// @brief Field VIMExperience4 value: I32(7)
static ::GlobalNamespace::GRElevatorManager_ElevatorLocation const VIMExperience4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1921};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevatorManager_ElevatorLocation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevatorManager_ElevatorLocation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
