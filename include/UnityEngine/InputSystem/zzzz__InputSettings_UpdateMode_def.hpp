#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSettings_UpdateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSettings_UpdateMode)
// Forward declare root types
namespace GlobalNamespace {
struct InputSettings_UpdateMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputSettings_UpdateMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSettings_UpdateMode, "UnityEngine.InputSystem", "InputSettings/UpdateMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/UpdateMode
struct CORDL_TYPE InputSettings_UpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputSettings_UpdateMode_Unwrapped
enum struct __InputSettings_UpdateMode_Unwrapped : int32_t {
__E_ProcessEventsInDynamicUpdate = static_cast<int32_t>(0x1),
__E_ProcessEventsInFixedUpdate = static_cast<int32_t>(0x2),
__E_ProcessEventsManually = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputSettings_UpdateMode_Unwrapped () const noexcept {
return static_cast<__InputSettings_UpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputSettings_UpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputSettings_UpdateMode(int32_t  value__) noexcept;

/// @brief Field ProcessEventsInDynamicUpdate value: I32(1)
static ::GlobalNamespace::InputSettings_UpdateMode const ProcessEventsInDynamicUpdate;

/// @brief Field ProcessEventsInFixedUpdate value: I32(2)
static ::GlobalNamespace::InputSettings_UpdateMode const ProcessEventsInFixedUpdate;

/// @brief Field ProcessEventsManually value: I32(3)
static ::GlobalNamespace::InputSettings_UpdateMode const ProcessEventsManually;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13515};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSettings_UpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSettings_UpdateMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
