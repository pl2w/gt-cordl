#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip_PrewarmClipSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlClip_PrewarmClipSettings)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectControlClip_PrewarmClipSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings, "UnityEngine.VFX", "VisualEffectControlClip/PrewarmClipSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlClip/PrewarmClipSettings
struct CORDL_TYPE VisualEffectControlClip_PrewarmClipSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlClip_PrewarmClipSettings() ;

// Ctor Parameters [CppParam { name: "enable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "stepCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "eventName", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectControlClip_PrewarmClipSettings(bool  enable, uint32_t  stepCount, float_t  deltaTime, ::UnityEngine::VFX::Utility::ExposedProperty*  eventName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field enable, offset: 0x0, size: 0x1, def value: None
 bool  enable;

/// @brief Field stepCount, offset: 0x4, size: 0x4, def value: None
 uint32_t  stepCount;

/// @brief Field deltaTime, offset: 0x8, size: 0x4, def value: None
 float_t  deltaTime;

/// @brief Field eventName, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  eventName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings, enable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings, stepCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings, deltaTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings, eventName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
