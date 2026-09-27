#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSmoothPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSmoothPath_Waypoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineSmoothPath)
namespace GlobalNamespace {
struct CinemachineSmoothPath_Waypoint;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineSmoothPath;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineSmoothPath*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineSmoothPath*, "Unity.Cinemachine", "CinemachineSmoothPath");
// [Obsolete("CinemachinePathBase has been deprecated. Use SplineContainer instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// Dependencies Unity.Cinemachine.CinemachinePathBase, Unity.Cinemachine.CinemachineSmoothPath::Waypoint
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineSmoothPath
class CORDL_TYPE CinemachineSmoothPath : public ::Unity::Cinemachine::CinemachinePathBase {
public:
// Declarations
using Waypoint = ::GlobalNamespace::CinemachineSmoothPath_Waypoint;

 __declspec(property(get=get_DistanceCacheSampleStepsPerSegment)) int32_t  DistanceCacheSampleStepsPerSegment;

 __declspec(property(get=get_Looped)) bool  Looped;

 __declspec(property(get=get_MaxPos)) float_t  MaxPos;

 __declspec(property(get=get_MinPos)) float_t  MinPos;

/// @brief Field m_ControlPoints1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlPoints1, put=__cordl_internal_set_m_ControlPoints1)) ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  m_ControlPoints1;

/// @brief Field m_ControlPoints2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlPoints2, put=__cordl_internal_set_m_ControlPoints2)) ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  m_ControlPoints2;

/// @brief Field m_IsLoopedCache, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsLoopedCache, put=__cordl_internal_set_m_IsLoopedCache)) bool  m_IsLoopedCache;

/// @brief Field m_Looped, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Looped, put=__cordl_internal_set_m_Looped)) bool  m_Looped;

/// @brief Field m_Waypoints, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Waypoints, put=__cordl_internal_set_m_Waypoints)) ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  m_Waypoints;

/// @brief Method EvaluateLocalOrientation, addr 0xaed9e0c, size 0x248, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion EvaluateLocalOrientation(float_t  pos) ;

/// @brief Method EvaluateLocalPosition, addr 0xaed9b28, size 0x164, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateLocalPosition(float_t  pos) ;

/// @brief Method EvaluateLocalTangent, addr 0xaed9c8c, size 0x180, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateLocalTangent(float_t  pos) ;

/// @brief Method GetBoundingIndices, addr 0xaed9a00, size 0x128, virtual false, abstract: false, final false
inline float_t GetBoundingIndices(float_t  pos, ::by_ref<int32_t>  indexA, ::by_ref<int32_t>  indexB) ;

/// @brief Method InvalidateDistanceCache, addr 0xaed9734, size 0x4c, virtual true, abstract: false, final false
inline void InvalidateDistanceCache() ;

static inline ::Unity::Cinemachine::CinemachineSmoothPath* New_ctor() ;

/// @brief Method OnValidate, addr 0xaed964c, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xaed965c, size 0xd8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method RollAroundForward, addr 0xaeda054, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion RollAroundForward(float_t  angle) ;

/// @brief Method UpdateControlPoints, addr 0xaed9780, size 0x270, virtual false, abstract: false, final false
inline void UpdateControlPoints() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint> const& __cordl_internal_get_m_ControlPoints1() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>& __cordl_internal_get_m_ControlPoints1() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint> const& __cordl_internal_get_m_ControlPoints2() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>& __cordl_internal_get_m_ControlPoints2() ;

constexpr bool const& __cordl_internal_get_m_IsLoopedCache() const;

constexpr bool& __cordl_internal_get_m_IsLoopedCache() ;

constexpr bool const& __cordl_internal_get_m_Looped() const;

constexpr bool& __cordl_internal_get_m_Looped() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint> const& __cordl_internal_get_m_Waypoints() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>& __cordl_internal_get_m_Waypoints() ;

constexpr void __cordl_internal_set_m_ControlPoints1(::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  value) ;

constexpr void __cordl_internal_set_m_ControlPoints2(::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  value) ;

constexpr void __cordl_internal_set_m_IsLoopedCache(bool  value) ;

constexpr void __cordl_internal_set_m_Looped(bool  value) ;

constexpr void __cordl_internal_set_m_Waypoints(::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  value) ;

/// @brief Method .ctor, addr 0xaeda08c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceCacheSampleStepsPerSegment, addr 0xaed9644, size 0x8, virtual true, abstract: false, final false
inline int32_t get_DistanceCacheSampleStepsPerSegment() ;

/// @brief Method get_Looped, addr 0xaed963c, size 0x8, virtual true, abstract: false, final false
inline bool get_Looped() ;

/// @brief Method get_MaxPos, addr 0xaed9600, size 0x3c, virtual true, abstract: false, final false
inline float_t get_MaxPos() ;

/// @brief Method get_MinPos, addr 0xaed95f8, size 0x8, virtual true, abstract: false, final false
inline float_t get_MinPos() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSmoothPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSmoothPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineSmoothPath(CinemachineSmoothPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSmoothPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineSmoothPath(CinemachineSmoothPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22439};

/// [Tooltip("If checked, then the path ends are joined to form a continuous loop.")]
/// @brief Field m_Looped, offset: 0x50, size: 0x1, def value: None
 bool  ___m_Looped;

/// [Tooltip("The waypoints that define the path.  They will be interpolated using a bezier curve.")]
/// @brief Field m_Waypoints, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  ___m_Waypoints;

/// @brief Field m_ControlPoints1, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  ___m_ControlPoints1;

/// @brief Field m_ControlPoints2, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  ___m_ControlPoints2;

/// @brief Field m_IsLoopedCache, offset: 0x70, size: 0x1, def value: None
 bool  ___m_IsLoopedCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineSmoothPath, ___m_Looped) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSmoothPath, ___m_Waypoints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSmoothPath, ___m_ControlPoints1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSmoothPath, ___m_ControlPoints2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSmoothPath, ___m_IsLoopedCache) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineSmoothPath) == 0x78, "Size mismatch!");

} // namespace end def Unity::Cinemachine
