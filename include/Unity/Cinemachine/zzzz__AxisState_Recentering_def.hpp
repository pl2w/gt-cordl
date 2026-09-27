#pragma once
// IWYU pragma private; include "Unity/Cinemachine/AxisState_Recentering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisState_Recentering)
namespace Unity::Cinemachine {
struct AxisState;
}
// Forward declare root types
namespace GlobalNamespace {
struct AxisState_Recentering;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AxisState_Recentering);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AxisState_Recentering, "Unity.Cinemachine", "AxisState/Recentering");
// [Obsolete("AxisState.Recentering is deprecated.  Use InputAxis and InputAxisController instead")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.AxisState/Recentering
struct CORDL_TYPE AxisState_Recentering {
public:
// Declarations
/// @brief Method CancelRecentering, addr 0xaec3770, size 0x20, virtual false, abstract: false, final false
inline void CancelRecentering() ;

/// @brief Method CopyStateFrom, addr 0xaec3754, size 0x1c, virtual false, abstract: false, final false
inline void CopyStateFrom(::by_ref<::GlobalNamespace::AxisState_Recentering>  other) ;

/// @brief Method DoRecentering, addr 0xaec379c, size 0x230, virtual false, abstract: false, final false
inline void DoRecentering(::by_ref<::Unity::Cinemachine::AxisState>  axis, float_t  deltaTime, float_t  recenterTarget) ;

/// @brief Method LegacyUpgrade, addr 0xaec39cc, size 0x3c, virtual false, abstract: false, final false
inline bool LegacyUpgrade(::by_ref<int32_t>  heading, ::by_ref<int32_t>  velocityFilter) ;

/// @brief Method RecenterNow, addr 0xaec3790, size 0xc, virtual false, abstract: false, final false
inline void RecenterNow() ;

/// @brief Method Validate, addr 0xaec3740, size 0x14, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method .ctor, addr 0xaec2fa8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(bool  enabled, float_t  waitTime, float_t  recenteringTime) ;

// Ctor Parameters []
// @brief default ctor
constexpr AxisState_Recentering() ;

// Ctor Parameters [CppParam { name: "m_enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WaitTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RecenteringTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastUpdateTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mLastAxisInputTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mRecenteringVelocity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LegacyHeadingDefinition", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LegacyVelocityFilterStrength", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AxisState_Recentering(bool  m_enabled, float_t  m_WaitTime, float_t  m_RecenteringTime, float_t  m_LastUpdateTime, float_t  mLastAxisInputTime, float_t  mRecenteringVelocity, int32_t  m_LegacyHeadingDefinition, int32_t  m_LegacyVelocityFilterStrength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22388};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("If checked, will enable automatic recentering of the axis. If unchecked, recenting is disabled.")]
/// @brief Field m_enabled, offset: 0x0, size: 0x1, def value: None
 bool  m_enabled;

/// [Tooltip("If no user input has been detected on the axis, the axis will wait this long in seconds before recentering.")]
/// @brief Field m_WaitTime, offset: 0x4, size: 0x4, def value: None
 float_t  m_WaitTime;

/// [Tooltip("How long it takes to reach destination once recentering has started.")]
/// @brief Field m_RecenteringTime, offset: 0x8, size: 0x4, def value: None
 float_t  m_RecenteringTime;

/// @brief Field m_LastUpdateTime, offset: 0xc, size: 0x4, def value: None
 float_t  m_LastUpdateTime;

/// @brief Field mLastAxisInputTime, offset: 0x10, size: 0x4, def value: None
 float_t  mLastAxisInputTime;

/// @brief Field mRecenteringVelocity, offset: 0x14, size: 0x4, def value: None
 float_t  mRecenteringVelocity;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_HeadingDefinition")]
/// @brief Field m_LegacyHeadingDefinition, offset: 0x18, size: 0x4, def value: None
 int32_t  m_LegacyHeadingDefinition;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("m_VelocityFilterStrength")]
/// @brief Field m_LegacyVelocityFilterStrength, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_LegacyVelocityFilterStrength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, m_enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, m_WaitTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, m_RecenteringTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, m_LastUpdateTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, mLastAxisInputTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, mRecenteringVelocity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, m_LegacyHeadingDefinition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AxisState_Recentering, m_LegacyVelocityFilterStrength) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AxisState_Recentering) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
