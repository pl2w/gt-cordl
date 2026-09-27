#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/InputSystemUIInputModule_CursorLockBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystemUIInputModule_CursorLockBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct InputSystemUIInputModule_CursorLockBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule/CursorLockBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule/CursorLockBehavior
struct CORDL_TYPE InputSystemUIInputModule_CursorLockBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputSystemUIInputModule_CursorLockBehavior_Unwrapped
enum struct __InputSystemUIInputModule_CursorLockBehavior_Unwrapped : int32_t {
__E_OutsideScreen = static_cast<int32_t>(0x0),
__E_ScreenCenter = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputSystemUIInputModule_CursorLockBehavior_Unwrapped () const noexcept {
return static_cast<__InputSystemUIInputModule_CursorLockBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputSystemUIInputModule_CursorLockBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputSystemUIInputModule_CursorLockBehavior(int32_t  value__) noexcept;

/// @brief Field OutsideScreen value: I32(0)
static ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior const OutsideScreen;

/// @brief Field ScreenCenter value: I32(1)
static ::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior const ScreenCenter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSystemUIInputModule_CursorLockBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
