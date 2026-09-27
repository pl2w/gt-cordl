#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSettings_EditorInputBehaviorInPlayMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSettings_EditorInputBehaviorInPlayMode)
// Forward declare root types
namespace GlobalNamespace {
struct InputSettings_EditorInputBehaviorInPlayMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputSettings_EditorInputBehaviorInPlayMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSettings_EditorInputBehaviorInPlayMode, "UnityEngine.InputSystem", "InputSettings/EditorInputBehaviorInPlayMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode
struct CORDL_TYPE InputSettings_EditorInputBehaviorInPlayMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputSettings_EditorInputBehaviorInPlayMode_Unwrapped
enum struct __InputSettings_EditorInputBehaviorInPlayMode_Unwrapped : int32_t {
__E_PointersAndKeyboardsRespectGameViewFocus = static_cast<int32_t>(0x0),
__E_AllDevicesRespectGameViewFocus = static_cast<int32_t>(0x1),
__E_AllDeviceInputAlwaysGoesToGameView = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputSettings_EditorInputBehaviorInPlayMode_Unwrapped () const noexcept {
return static_cast<__InputSettings_EditorInputBehaviorInPlayMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputSettings_EditorInputBehaviorInPlayMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputSettings_EditorInputBehaviorInPlayMode(int32_t  value__) noexcept;

/// @brief Field AllDeviceInputAlwaysGoesToGameView value: I32(2)
static ::GlobalNamespace::InputSettings_EditorInputBehaviorInPlayMode const AllDeviceInputAlwaysGoesToGameView;

/// @brief Field AllDevicesRespectGameViewFocus value: I32(1)
static ::GlobalNamespace::InputSettings_EditorInputBehaviorInPlayMode const AllDevicesRespectGameViewFocus;

/// @brief Field PointersAndKeyboardsRespectGameViewFocus value: I32(0)
static ::GlobalNamespace::InputSettings_EditorInputBehaviorInPlayMode const PointersAndKeyboardsRespectGameViewFocus;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13518};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSettings_EditorInputBehaviorInPlayMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSettings_EditorInputBehaviorInPlayMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
