#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugBeaconActivation_ActivationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableBugBeaconActivation_ActivationMode)
// Forward declare root types
namespace GlobalNamespace {
struct ThrowableBugBeaconActivation_ActivationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode, "", "ThrowableBugBeaconActivation/ActivationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ThrowableBugBeaconActivation/ActivationMode
struct CORDL_TYPE ThrowableBugBeaconActivation_ActivationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThrowableBugBeaconActivation_ActivationMode_Unwrapped
enum struct __ThrowableBugBeaconActivation_ActivationMode_Unwrapped : int32_t {
__E_CALL = static_cast<int32_t>(0x0),
__E_DISMISS = static_cast<int32_t>(0x1),
__E_LOCK = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThrowableBugBeaconActivation_ActivationMode_Unwrapped () const noexcept {
return static_cast<__ThrowableBugBeaconActivation_ActivationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBugBeaconActivation_ActivationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ThrowableBugBeaconActivation_ActivationMode(int32_t  value__) noexcept;

/// @brief Field CALL value: I32(0)
static ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode const CALL;

/// @brief Field DISMISS value: I32(1)
static ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode const DISMISS;

/// @brief Field LOCK value: I32(2)
static ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode const LOCK;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
