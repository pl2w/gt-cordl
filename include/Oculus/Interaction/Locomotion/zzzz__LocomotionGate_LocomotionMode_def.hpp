#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionGate_LocomotionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionGate_LocomotionMode)
// Forward declare root types
namespace GlobalNamespace {
struct LocomotionGate_LocomotionMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocomotionGate_LocomotionMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocomotionGate_LocomotionMode, "Oculus.Interaction.Locomotion", "LocomotionGate/LocomotionMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.LocomotionGate/LocomotionMode
struct CORDL_TYPE LocomotionGate_LocomotionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocomotionGate_LocomotionMode_Unwrapped
enum struct __LocomotionGate_LocomotionMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Teleport = static_cast<int32_t>(0x1),
__E_Turn = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocomotionGate_LocomotionMode_Unwrapped () const noexcept {
return static_cast<__LocomotionGate_LocomotionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionGate_LocomotionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionGate_LocomotionMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::LocomotionGate_LocomotionMode const None;

/// @brief Field Teleport value: I32(1)
static ::GlobalNamespace::LocomotionGate_LocomotionMode const Teleport;

/// @brief Field Turn value: I32(2)
static ::GlobalNamespace::LocomotionGate_LocomotionMode const Turn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocomotionGate_LocomotionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocomotionGate_LocomotionMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
