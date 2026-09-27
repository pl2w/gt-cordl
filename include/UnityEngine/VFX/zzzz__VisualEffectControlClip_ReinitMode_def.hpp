#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip_ReinitMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlClip_ReinitMode)
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectControlClip_ReinitMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectControlClip_ReinitMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectControlClip_ReinitMode, "UnityEngine.VFX", "VisualEffectControlClip/ReinitMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlClip/ReinitMode
struct CORDL_TYPE VisualEffectControlClip_ReinitMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualEffectControlClip_ReinitMode_Unwrapped
enum struct __VisualEffectControlClip_ReinitMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OnExitClip = static_cast<int32_t>(0x1),
__E_OnEnterClip = static_cast<int32_t>(0x2),
__E_OnEnterOrExitClip = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualEffectControlClip_ReinitMode_Unwrapped () const noexcept {
return static_cast<__VisualEffectControlClip_ReinitMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlClip_ReinitMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectControlClip_ReinitMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::VisualEffectControlClip_ReinitMode const None;

/// @brief Field OnEnterClip value: I32(2)
static ::GlobalNamespace::VisualEffectControlClip_ReinitMode const OnEnterClip;

/// @brief Field OnEnterOrExitClip value: I32(3)
static ::GlobalNamespace::VisualEffectControlClip_ReinitMode const OnEnterOrExitClip;

/// @brief Field OnExitClip value: I32(1)
static ::GlobalNamespace::VisualEffectControlClip_ReinitMode const OnExitClip;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_ReinitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectControlClip_ReinitMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
