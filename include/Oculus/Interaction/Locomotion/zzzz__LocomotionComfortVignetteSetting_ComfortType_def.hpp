#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionComfortVignetteSetting_ComfortType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionComfortVignetteSetting_ComfortType)
// Forward declare root types
namespace GlobalNamespace {
struct LocomotionComfortVignetteSetting_ComfortType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType, "Oculus.Interaction.Locomotion", "LocomotionComfortVignetteSetting/ComfortType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.LocomotionComfortVignetteSetting/ComfortType
struct CORDL_TYPE LocomotionComfortVignetteSetting_ComfortType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocomotionComfortVignetteSetting_ComfortType_Unwrapped
enum struct __LocomotionComfortVignetteSetting_ComfortType_Unwrapped : int32_t {
__E_Turning = static_cast<int32_t>(0x0),
__E_Accelerating = static_cast<int32_t>(0x1),
__E_Moving = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocomotionComfortVignetteSetting_ComfortType_Unwrapped () const noexcept {
return static_cast<__LocomotionComfortVignetteSetting_ComfortType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionComfortVignetteSetting_ComfortType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionComfortVignetteSetting_ComfortType(int32_t  value__) noexcept;

/// @brief Field Accelerating value: I32(1)
static ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType const Accelerating;

/// @brief Field Moving value: I32(2)
static ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType const Moving;

/// @brief Field Turning value: I32(0)
static ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType const Turning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
