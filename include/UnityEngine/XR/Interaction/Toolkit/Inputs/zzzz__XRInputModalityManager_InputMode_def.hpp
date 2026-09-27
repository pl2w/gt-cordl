#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/XRInputModalityManager_InputMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputModalityManager_InputMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRInputModalityManager_InputMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInputModalityManager_InputMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInputModalityManager_InputMode, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRInputModalityManager/InputMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager/InputMode
struct CORDL_TYPE XRInputModalityManager_InputMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRInputModalityManager_InputMode_Unwrapped
enum struct __XRInputModalityManager_InputMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TrackedHand = static_cast<int32_t>(0x1),
__E_MotionController = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRInputModalityManager_InputMode_Unwrapped () const noexcept {
return static_cast<__XRInputModalityManager_InputMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRInputModalityManager_InputMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRInputModalityManager_InputMode(int32_t  value__) noexcept;

/// @brief Field MotionController value: I32(2)
static ::GlobalNamespace::XRInputModalityManager_InputMode const MotionController;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XRInputModalityManager_InputMode const None;

/// @brief Field TrackedHand value: I32(1)
static ::GlobalNamespace::XRInputModalityManager_InputMode const TrackedHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInputModalityManager_InputMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInputModalityManager_InputMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
