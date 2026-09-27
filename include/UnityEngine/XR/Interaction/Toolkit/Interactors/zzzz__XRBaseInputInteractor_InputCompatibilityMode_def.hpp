#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRBaseInputInteractor_InputCompatibilityMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseInputInteractor_InputCompatibilityMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRBaseInputInteractor_InputCompatibilityMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRBaseInputInteractor/InputCompatibilityMode");
// [Obsolete("InputCompatibilityMode introduced in version 3.0.0 is marked for removal. This is only used for backwards compatibility and will be eventually removed in a future version.")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/InputCompatibilityMode
struct CORDL_TYPE XRBaseInputInteractor_InputCompatibilityMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRBaseInputInteractor_InputCompatibilityMode_Unwrapped
enum struct __XRBaseInputInteractor_InputCompatibilityMode_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_ForceDeprecatedInput = static_cast<int32_t>(0x1),
__E_ForceInputReaders = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRBaseInputInteractor_InputCompatibilityMode_Unwrapped () const noexcept {
return static_cast<__XRBaseInputInteractor_InputCompatibilityMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInputInteractor_InputCompatibilityMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRBaseInputInteractor_InputCompatibilityMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(0)
static ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode const Automatic;

/// @brief Field ForceDeprecatedInput value: I32(1)
static ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode const ForceDeprecatedInput;

/// @brief Field ForceInputReaders value: I32(2)
static ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode const ForceInputReaders;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11447};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
