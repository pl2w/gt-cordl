#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ScreenComposerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_DeadZoneSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_HardLimitSettings_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScreenComposerSettings)
namespace GlobalNamespace {
struct ScreenComposerSettings_DeadZoneSettings;
}
namespace GlobalNamespace {
struct ScreenComposerSettings_HardLimitSettings;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct ScreenComposerSettings;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::ScreenComposerSettings);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ScreenComposerSettings, "Unity.Cinemachine", "ScreenComposerSettings");
// Dependencies Unity.Cinemachine.ScreenComposerSettings::DeadZoneSettings, Unity.Cinemachine.ScreenComposerSettings::HardLimitSettings, UnityEngine.Vector2
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.ScreenComposerSettings
struct CORDL_TYPE ScreenComposerSettings {
public:
// Declarations
using DeadZoneSettings = ::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings;

using HardLimitSettings = ::GlobalNamespace::ScreenComposerSettings_HardLimitSettings;

 __declspec(property(get=get_DeadZoneRect, put=set_DeadZoneRect)) ::UnityEngine::Rect  DeadZoneRect;

 __declspec(property(get=get_EffectiveDeadZoneSize)) ::UnityEngine::Vector2  EffectiveDeadZoneSize;

 __declspec(property(get=get_EffectiveHardLimitSize)) ::UnityEngine::Vector2  EffectiveHardLimitSize;

 __declspec(property(get=get_HardLimitsRect, put=set_HardLimitsRect)) ::UnityEngine::Rect  HardLimitsRect;

/// @brief Method Approximately, addr 0xaebb3dc, size 0x2d8, virtual false, abstract: false, final false
static inline bool Approximately(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  b) ;

/// @brief Method Lerp, addr 0xaebb228, size 0x1b4, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::ScreenComposerSettings Lerp(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  b, float_t  t) ;

/// @brief Method Validate, addr 0xaebafb4, size 0x68, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_DeadZoneRect, addr 0xaebb094, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_DeadZoneRect() ;

/// @brief Method get_Default, addr 0xaebb6b4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::ScreenComposerSettings get_Default() ;

/// @brief Method get_EffectiveDeadZoneSize, addr 0xaebb01c, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_EffectiveDeadZoneSize() ;

/// @brief Method get_EffectiveHardLimitSize, addr 0xaebb078, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_EffectiveHardLimitSize() ;

/// @brief Method get_HardLimitsRect, addr 0xaebb17c, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_HardLimitsRect() ;

/// @brief Method set_DeadZoneRect, addr 0xaebb0d4, size 0xa8, virtual false, abstract: false, final false
inline void set_DeadZoneRect(::UnityEngine::Rect  value) ;

/// @brief Method set_HardLimitsRect, addr 0xaebb1f8, size 0x30, virtual false, abstract: false, final false
inline void set_HardLimitsRect(::UnityEngine::Rect  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ScreenComposerSettings() ;

// Ctor Parameters [CppParam { name: "ScreenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeadZone", ty: "::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "HardLimits", ty: "::GlobalNamespace::ScreenComposerSettings_HardLimitSettings", modifiers: "", def_value: None, comment: None }]
constexpr ScreenComposerSettings(::UnityEngine::Vector2  ScreenPosition, ::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings  DeadZone, ::GlobalNamespace::ScreenComposerSettings_HardLimitSettings  HardLimits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [Tooltip("Screen position for target. The camera will adjust to position the tracked object here.  0 is screen center, and +0.5 or -0.5 is screen edge")]
/// [DelayedVector]
/// @brief Field ScreenPosition, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ScreenPosition;

/// [Tooltip("The camera will not adjust if the target is within this range of the screen position")]
/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field DeadZone, offset: 0x8, size: 0xc, def value: None
 ::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings  DeadZone;

/// [Tooltip("The target will not be allowed to be outside this region. When the target is within this region, the camera will gradually adjust to re-align towards the desired position, depending on the damping speed")]
/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field HardLimits, offset: 0x14, size: 0x14, def value: None
 ::GlobalNamespace::ScreenComposerSettings_HardLimitSettings  HardLimits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ScreenComposerSettings, ScreenPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ScreenComposerSettings, DeadZone) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ScreenComposerSettings, HardLimits) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ScreenComposerSettings) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
