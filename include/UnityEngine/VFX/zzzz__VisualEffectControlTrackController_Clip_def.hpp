#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController_Clip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrackController_Clip)
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Clip;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectControlTrackController_Clip);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectControlTrackController_Clip, "UnityEngine.VFX", "VisualEffectControlTrackController/Clip");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Clip
struct CORDL_TYPE VisualEffectControlTrackController_Clip {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrackController_Clip() ;

// Ctor Parameters [CppParam { name: "enter", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "exit", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectControlTrackController_Clip(int32_t  enter, int32_t  exit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field enter, offset: 0x0, size: 0x4, def value: None
 int32_t  enter;

/// @brief Field exit, offset: 0x4, size: 0x4, def value: None
 int32_t  exit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Clip, enter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Clip, exit) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectControlTrackController_Clip) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
