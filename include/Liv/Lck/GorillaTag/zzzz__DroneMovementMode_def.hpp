#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneMovementMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DroneMovementMode)
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct DroneMovementMode;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::DroneMovementMode);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneMovementMode, "Liv.Lck.GorillaTag", "DroneMovementMode");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.DroneMovementMode
struct CORDL_TYPE DroneMovementMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DroneMovementMode_Unwrapped
enum struct __DroneMovementMode_Unwrapped : int32_t {
__E_Free = static_cast<int32_t>(0x0),
__E_Orbiting = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DroneMovementMode_Unwrapped () const noexcept {
return static_cast<__DroneMovementMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DroneMovementMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DroneMovementMode(int32_t  value__) noexcept;

/// @brief Field Free value: I32(0)
static ::Liv::Lck::GorillaTag::DroneMovementMode const Free;

/// @brief Field Orbiting value: I32(1)
static ::Liv::Lck::GorillaTag::DroneMovementMode const Orbiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovementMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneMovementMode) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
