#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSettings_ScrollDeltaBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSettings_ScrollDeltaBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct InputSettings_ScrollDeltaBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputSettings_ScrollDeltaBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSettings_ScrollDeltaBehavior, "UnityEngine.InputSystem", "InputSettings/ScrollDeltaBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/ScrollDeltaBehavior
struct CORDL_TYPE InputSettings_ScrollDeltaBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputSettings_ScrollDeltaBehavior_Unwrapped
enum struct __InputSettings_ScrollDeltaBehavior_Unwrapped : int32_t {
__E_UniformAcrossAllPlatforms = static_cast<int32_t>(0x0),
__E_KeepPlatformSpecificInputRange = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputSettings_ScrollDeltaBehavior_Unwrapped () const noexcept {
return static_cast<__InputSettings_ScrollDeltaBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputSettings_ScrollDeltaBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputSettings_ScrollDeltaBehavior(int32_t  value__) noexcept;

/// @brief Field KeepPlatformSpecificInputRange value: I32(1)
static ::GlobalNamespace::InputSettings_ScrollDeltaBehavior const KeepPlatformSpecificInputRange;

/// @brief Field UniformAcrossAllPlatforms value: I32(0)
static ::GlobalNamespace::InputSettings_ScrollDeltaBehavior const UniformAcrossAllPlatforms;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSettings_ScrollDeltaBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSettings_ScrollDeltaBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
