#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringState_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RestrictionFlags_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InputAxis)
namespace GlobalNamespace {
struct InputAxis_RecenteringSettings;
}
namespace GlobalNamespace {
struct InputAxis_RecenteringState;
}
namespace GlobalNamespace {
struct InputAxis_RestrictionFlags;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct InputAxis;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::InputAxis);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::InputAxis, "Unity.Cinemachine", "InputAxis");
// Dependencies Unity.Cinemachine.InputAxis::RecenteringSettings, Unity.Cinemachine.InputAxis::RecenteringState, Unity.Cinemachine.InputAxis::RestrictionFlags, UnityEngine.Vector2
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.InputAxis
struct CORDL_TYPE InputAxis {
public:
// Declarations
using RecenteringSettings = ::GlobalNamespace::InputAxis_RecenteringSettings;

using RecenteringState = ::GlobalNamespace::InputAxis_RecenteringState;

using RestrictionFlags = ::GlobalNamespace::InputAxis_RestrictionFlags;

/// @brief Method CancelRecentering, addr 0xaeb7e98, size 0x84, virtual false, abstract: false, final false
inline void CancelRecentering() ;

/// @brief Method ClampValue, addr 0xaeb7bd8, size 0x68, virtual false, abstract: false, final false
inline float_t ClampValue(float_t  v) ;

/// @brief Method GetClampedValue, addr 0xaeb7cc4, size 0x6c, virtual false, abstract: false, final false
inline float_t GetClampedValue() ;

/// @brief Method GetNormalizedValue, addr 0xaeb7c40, size 0x84, virtual false, abstract: false, final false
inline float_t GetNormalizedValue() ;

/// @brief Method Reset, addr 0xaeb7e10, size 0x88, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetValueAndLastValue, addr 0xaeb801c, size 0xc, virtual false, abstract: false, final false
inline void SetValueAndLastValue(float_t  value) ;

/// @brief Method TrackValueChange, addr 0xaeb7f44, size 0x8c, virtual false, abstract: false, final false
inline bool TrackValueChange() ;

/// @brief Method TriggerRecentering, addr 0xaeb826c, size 0xc, virtual false, abstract: false, final false
inline void TriggerRecentering() ;

/// @brief Method UpdateRecentering, addr 0xaeb8028, size 0x8, virtual false, abstract: false, final false
inline void UpdateRecentering(float_t  deltaTime, bool  forceCancel) ;

/// @brief Method UpdateRecentering, addr 0xaeb8030, size 0x23c, virtual false, abstract: false, final false
inline void UpdateRecentering(float_t  deltaTime, bool  forceCancel, float_t  center) ;

/// @brief Method Validate, addr 0xaeb7d30, size 0xcc, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_DefaultMomentary, addr 0xaeb7f1c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::InputAxis get_DefaultMomentary() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAxis() ;

// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Center", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Range", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "Wrap", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Recentering", ty: "::GlobalNamespace::InputAxis_RecenteringSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "Restrictions", ty: "::GlobalNamespace::InputAxis_RestrictionFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RecenteringState", ty: "::GlobalNamespace::InputAxis_RecenteringState", modifiers: "", def_value: None, comment: None }]
constexpr InputAxis(float_t  Value, float_t  Center, ::UnityEngine::Vector2  Range, bool  Wrap, ::GlobalNamespace::InputAxis_RecenteringSettings  Recentering, ::GlobalNamespace::InputAxis_RestrictionFlags  Restrictions, ::GlobalNamespace::InputAxis_RecenteringState  m_RecenteringState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22333};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// [Tooltip("The current value of the axis.  You can drive this directly from a script.")]
/// [NoSaveDuringPlay]
/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 float_t  Value;

/// [Delayed]
/// [Tooltip("The centered, or at-rest value of this axis.")]
/// @brief Field Center, offset: 0x4, size: 0x4, def value: None
 float_t  Center;

/// [Tooltip("The valid range for the axis value.  Value will be clamped to this range.")]
/// [Vector2AsRange]
/// @brief Field Range, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  Range;

/// [Tooltip("If set, then the axis will wrap around at the min/max values, forming a loop")]
/// @brief Field Wrap, offset: 0x10, size: 0x1, def value: None
 bool  Wrap;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field Recentering, offset: 0x14, size: 0xc, def value: None
 ::GlobalNamespace::InputAxis_RecenteringSettings  Recentering;

/// [HideInInspector]
/// @brief Field Restrictions, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::InputAxis_RestrictionFlags  Restrictions;

/// @brief Field m_RecenteringState, offset: 0x24, size: 0x10, def value: None
 ::GlobalNamespace::InputAxis_RecenteringState  m_RecenteringState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::InputAxis, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::InputAxis, Center) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::InputAxis, Range) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::InputAxis, Wrap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::InputAxis, Recentering) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::InputAxis, Restrictions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::InputAxis, m_RecenteringState) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::InputAxis) == 0x34, "Size mismatch!");

} // namespace end def Unity::Cinemachine
