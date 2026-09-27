#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXVisibilityEventBinder_Activation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXVisibilityEventBinder_Activation)
// Forward declare root types
namespace GlobalNamespace {
struct VFXVisibilityEventBinder_Activation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VFXVisibilityEventBinder_Activation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VFXVisibilityEventBinder_Activation, "UnityEngine.VFX.Utility", "VFXVisibilityEventBinder/Activation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXVisibilityEventBinder/Activation
struct CORDL_TYPE VFXVisibilityEventBinder_Activation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VFXVisibilityEventBinder_Activation_Unwrapped
enum struct __VFXVisibilityEventBinder_Activation_Unwrapped : int32_t {
__E_OnBecameVisible = static_cast<int32_t>(0x0),
__E_OnBecameInvisible = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VFXVisibilityEventBinder_Activation_Unwrapped () const noexcept {
return static_cast<__VFXVisibilityEventBinder_Activation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VFXVisibilityEventBinder_Activation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VFXVisibilityEventBinder_Activation(int32_t  value__) noexcept;

/// @brief Field OnBecameInvisible value: I32(1)
static ::GlobalNamespace::VFXVisibilityEventBinder_Activation const OnBecameInvisible;

/// @brief Field OnBecameVisible value: I32(0)
static ::GlobalNamespace::VFXVisibilityEventBinder_Activation const OnBecameVisible;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXVisibilityEventBinder_Activation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VFXVisibilityEventBinder_Activation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
