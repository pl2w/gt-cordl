#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTrackedDolly_AutoDolly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTrackedDolly_AutoDolly)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineTrackedDolly_AutoDolly;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly, "Unity.Cinemachine", "CinemachineTrackedDolly/AutoDolly");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineTrackedDolly/AutoDolly
struct CORDL_TYPE CinemachineTrackedDolly_AutoDolly {
public:
// Declarations
/// @brief Method .ctor, addr 0xaedb194, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  enabled, float_t  positionOffset, int32_t  searchRadius, int32_t  stepsPerSegment) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTrackedDolly_AutoDolly() ;

// Ctor Parameters [CppParam { name: "m_Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PositionOffset", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SearchRadius", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SearchResolution", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineTrackedDolly_AutoDolly(bool  m_Enabled, float_t  m_PositionOffset, int32_t  m_SearchRadius, int32_t  m_SearchResolution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("If checked, will enable automatic dolly, which chooses a path position that is as close as possible to the Follow target.  Note: this can have significant performance impact")]
/// @brief Field m_Enabled, offset: 0x0, size: 0x1, def value: None
 bool  m_Enabled;

/// [Tooltip("Offset, in current position units, from the closest point on the path to the follow target")]
/// @brief Field m_PositionOffset, offset: 0x4, size: 0x4, def value: None
 float_t  m_PositionOffset;

/// [Tooltip("Search up to this many waypoints on either side of the current position.  Use 0 for Entire path.")]
/// @brief Field m_SearchRadius, offset: 0x8, size: 0x4, def value: None
 int32_t  m_SearchRadius;

/// [FormerlySerializedAs("m_StepsPerSegment")]
/// [Tooltip("We search between waypoints by dividing the segment into this many straight pieces.  he higher the number, the more accurate the result, but performance is proportionally slower for higher numbers")]
/// @brief Field m_SearchResolution, offset: 0xc, size: 0x4, def value: None
 int32_t  m_SearchResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly, m_Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly, m_PositionOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly, m_SearchRadius) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly, m_SearchResolution) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
