#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_Enumerate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlExtensions_Enumerate)
// Forward declare root types
namespace GlobalNamespace {
struct InputControlExtensions_Enumerate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlExtensions_Enumerate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlExtensions_Enumerate, "UnityEngine.InputSystem", "InputControlExtensions/Enumerate");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlExtensions/Enumerate
struct CORDL_TYPE InputControlExtensions_Enumerate {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputControlExtensions_Enumerate_Unwrapped
enum struct __InputControlExtensions_Enumerate_Unwrapped : int32_t {
__E_IgnoreControlsInDefaultState = static_cast<int32_t>(0x1),
__E_IgnoreControlsInCurrentState = static_cast<int32_t>(0x2),
__E_IncludeSyntheticControls = static_cast<int32_t>(0x4),
__E_IncludeNoisyControls = static_cast<int32_t>(0x8),
__E_IncludeNonLeafControls = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputControlExtensions_Enumerate_Unwrapped () const noexcept {
return static_cast<__InputControlExtensions_Enumerate_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions_Enumerate() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputControlExtensions_Enumerate(int32_t  value__) noexcept;

/// @brief Field IgnoreControlsInCurrentState value: I32(2)
static ::GlobalNamespace::InputControlExtensions_Enumerate const IgnoreControlsInCurrentState;

/// @brief Field IgnoreControlsInDefaultState value: I32(1)
static ::GlobalNamespace::InputControlExtensions_Enumerate const IgnoreControlsInDefaultState;

/// @brief Field IncludeNoisyControls value: I32(8)
static ::GlobalNamespace::InputControlExtensions_Enumerate const IncludeNoisyControls;

/// @brief Field IncludeNonLeafControls value: I32(16)
static ::GlobalNamespace::InputControlExtensions_Enumerate const IncludeNonLeafControls;

/// @brief Field IncludeSyntheticControls value: I32(4)
static ::GlobalNamespace::InputControlExtensions_Enumerate const IncludeSyntheticControls;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlExtensions_Enumerate, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlExtensions_Enumerate) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
