#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/OVRInputModule_InputMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInputModule_InputMode)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInputModule_InputMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInputModule_InputMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInputModule_InputMode, "UnityEngine.EventSystems", "OVRInputModule/InputMode");
// [Obsolete("Mode is no longer needed on input module as it handles both mouse and keyboard simultaneously.", false)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.EventSystems.OVRInputModule/InputMode
struct CORDL_TYPE OVRInputModule_InputMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInputModule_InputMode_Unwrapped
enum struct __OVRInputModule_InputMode_Unwrapped : int32_t {
__E_Mouse = static_cast<int32_t>(0x0),
__E_Buttons = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInputModule_InputMode_Unwrapped () const noexcept {
return static_cast<__OVRInputModule_InputMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInputModule_InputMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInputModule_InputMode(int32_t  value__) noexcept;

/// @brief Field Buttons value: I32(1)
static ::GlobalNamespace::OVRInputModule_InputMode const Buttons;

/// @brief Field Mouse value: I32(0)
static ::GlobalNamespace::OVRInputModule_InputMode const Mouse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13279};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInputModule_InputMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInputModule_InputMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
