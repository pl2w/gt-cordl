#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrack_ReinitMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrack_ReinitMode)
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectControlTrack_ReinitMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectControlTrack_ReinitMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectControlTrack_ReinitMode, "UnityEngine.VFX", "VisualEffectControlTrack/ReinitMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrack/ReinitMode
struct CORDL_TYPE VisualEffectControlTrack_ReinitMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualEffectControlTrack_ReinitMode_Unwrapped
enum struct __VisualEffectControlTrack_ReinitMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OnBindingEnable = static_cast<int32_t>(0x1),
__E_OnBindingDisable = static_cast<int32_t>(0x2),
__E_OnBindingEnableOrDisable = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualEffectControlTrack_ReinitMode_Unwrapped () const noexcept {
return static_cast<__VisualEffectControlTrack_ReinitMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrack_ReinitMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectControlTrack_ReinitMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::VisualEffectControlTrack_ReinitMode const None;

/// @brief Field OnBindingDisable value: I32(2)
static ::GlobalNamespace::VisualEffectControlTrack_ReinitMode const OnBindingDisable;

/// @brief Field OnBindingEnable value: I32(1)
static ::GlobalNamespace::VisualEffectControlTrack_ReinitMode const OnBindingEnable;

/// @brief Field OnBindingEnableOrDisable value: I32(3)
static ::GlobalNamespace::VisualEffectControlTrack_ReinitMode const OnBindingEnableOrDisable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30031};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrack_ReinitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectControlTrack_ReinitMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
