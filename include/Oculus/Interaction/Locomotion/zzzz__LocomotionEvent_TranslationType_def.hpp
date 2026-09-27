#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionEvent_TranslationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionEvent_TranslationType)
// Forward declare root types
namespace GlobalNamespace {
struct LocomotionEvent_TranslationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocomotionEvent_TranslationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocomotionEvent_TranslationType, "Oculus.Interaction.Locomotion", "LocomotionEvent/TranslationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType
struct CORDL_TYPE LocomotionEvent_TranslationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocomotionEvent_TranslationType_Unwrapped
enum struct __LocomotionEvent_TranslationType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Velocity = static_cast<int32_t>(0x1),
__E_Absolute = static_cast<int32_t>(0x2),
__E_AbsoluteEyeLevel = static_cast<int32_t>(0x3),
__E_Relative = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocomotionEvent_TranslationType_Unwrapped () const noexcept {
return static_cast<__LocomotionEvent_TranslationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionEvent_TranslationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionEvent_TranslationType(int32_t  value__) noexcept;

/// @brief Field Absolute value: I32(2)
static ::GlobalNamespace::LocomotionEvent_TranslationType const Absolute;

/// @brief Field AbsoluteEyeLevel value: I32(3)
static ::GlobalNamespace::LocomotionEvent_TranslationType const AbsoluteEyeLevel;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::LocomotionEvent_TranslationType const None;

/// @brief Field Relative value: I32(4)
static ::GlobalNamespace::LocomotionEvent_TranslationType const Relative;

/// @brief Field Velocity value: I32(1)
static ::GlobalNamespace::LocomotionEvent_TranslationType const Velocity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16261};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocomotionEvent_TranslationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocomotionEvent_TranslationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
