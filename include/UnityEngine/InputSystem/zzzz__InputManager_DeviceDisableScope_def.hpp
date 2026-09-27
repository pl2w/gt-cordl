#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_DeviceDisableScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager_DeviceDisableScope)
// Forward declare root types
namespace GlobalNamespace {
struct InputManager_DeviceDisableScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputManager_DeviceDisableScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputManager_DeviceDisableScope, "UnityEngine.InputSystem", "InputManager/DeviceDisableScope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/DeviceDisableScope
struct CORDL_TYPE InputManager_DeviceDisableScope {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputManager_DeviceDisableScope_Unwrapped
enum struct __InputManager_DeviceDisableScope_Unwrapped : int32_t {
__E_Everywhere = static_cast<int32_t>(0x0),
__E_InFrontendOnly = static_cast<int32_t>(0x1),
__E_TemporaryWhilePlayerIsInBackground = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputManager_DeviceDisableScope_Unwrapped () const noexcept {
return static_cast<__InputManager_DeviceDisableScope_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputManager_DeviceDisableScope() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputManager_DeviceDisableScope(int32_t  value__) noexcept;

/// @brief Field Everywhere value: I32(0)
static ::GlobalNamespace::InputManager_DeviceDisableScope const Everywhere;

/// @brief Field InFrontendOnly value: I32(1)
static ::GlobalNamespace::InputManager_DeviceDisableScope const InFrontendOnly;

/// @brief Field TemporaryWhilePlayerIsInBackground value: I32(2)
static ::GlobalNamespace::InputManager_DeviceDisableScope const TemporaryWhilePlayerIsInBackground;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13506};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputManager_DeviceDisableScope, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputManager_DeviceDisableScope) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
