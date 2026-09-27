#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePath_Waypoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachinePath)
namespace GlobalNamespace {
struct CinemachinePath_Waypoint;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachinePath;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachinePath*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePath*, "Unity.Cinemachine", "CinemachinePath");
// [Obsolete("CinemachinePath has been deprecated. Use SplineContainer instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// Dependencies Unity.Cinemachine.CinemachinePath::Waypoint, Unity.Cinemachine.CinemachinePathBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePath
class CORDL_TYPE CinemachinePath : public ::Unity::Cinemachine::CinemachinePathBase {
public:
// Declarations
using Waypoint = ::GlobalNamespace::CinemachinePath_Waypoint;

 __declspec(property(get=get_DistanceCacheSampleStepsPerSegment)) int32_t  DistanceCacheSampleStepsPerSegment;

 __declspec(property(get=get_Looped)) bool  Looped;

 __declspec(property(get=get_MaxPos)) float_t  MaxPos;

 __declspec(property(get=get_MinPos)) float_t  MinPos;

/// @brief Field m_Looped, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Looped, put=__cordl_internal_set_m_Looped)) bool  m_Looped;

/// @brief Field m_Waypoints, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Waypoints, put=__cordl_internal_set_m_Waypoints)) ::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint>  m_Waypoints;

/// @brief Method EvaluateLocalOrientation, addr 0xaed70a0, size 0x19c, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion EvaluateLocalOrientation(float_t  pos) ;

/// @brief Method EvaluateLocalPosition, addr 0xaed6e18, size 0x144, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateLocalPosition(float_t  pos) ;

/// @brief Method EvaluateLocalTangent, addr 0xaed6f5c, size 0x144, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateLocalTangent(float_t  pos) ;

/// @brief Method GetBoundingIndices, addr 0xaed6bf0, size 0x228, virtual false, abstract: false, final false
inline float_t GetBoundingIndices(float_t  pos, ::by_ref<int32_t>  indexA, ::by_ref<int32_t>  indexB) ;

/// @brief Method GetRoll, addr 0xaed723c, size 0xe0, virtual false, abstract: false, final false
inline float_t GetRoll(int32_t  indexA, int32_t  indexB, float_t  standardizedPos) ;

static inline ::Unity::Cinemachine::CinemachinePath* New_ctor() ;

/// @brief Method OnValidate, addr 0xaed6bd8, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xaed6ab0, size 0xe8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method RollAroundForward, addr 0xaed731c, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion RollAroundForward(float_t  angle) ;

constexpr bool const& __cordl_internal_get_m_Looped() const;

constexpr bool& __cordl_internal_get_m_Looped() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint> const& __cordl_internal_get_m_Waypoints() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint>& __cordl_internal_get_m_Waypoints() ;

constexpr void __cordl_internal_set_m_Looped(bool  value) ;

constexpr void __cordl_internal_set_m_Waypoints(::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint>  value) ;

/// @brief Method .ctor, addr 0xaed7354, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceCacheSampleStepsPerSegment, addr 0xaed6be8, size 0x8, virtual true, abstract: false, final false
inline int32_t get_DistanceCacheSampleStepsPerSegment() ;

/// @brief Method get_Looped, addr 0xaed6aa8, size 0x8, virtual true, abstract: false, final false
inline bool get_Looped() ;

/// @brief Method get_MaxPos, addr 0xaed6a6c, size 0x3c, virtual true, abstract: false, final false
inline float_t get_MaxPos() ;

/// @brief Method get_MinPos, addr 0xaed6a64, size 0x8, virtual true, abstract: false, final false
inline float_t get_MinPos() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePath(CinemachinePath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePath(CinemachinePath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22430};

/// [Tooltip("If checked, then the path ends are joined to form a continuous loop.")]
/// @brief Field m_Looped, offset: 0x50, size: 0x1, def value: None
 bool  ___m_Looped;

/// [Tooltip("The waypoints that define the path.  They will be interpolated using a bezier curve.")]
/// @brief Field m_Waypoints, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint>  ___m_Waypoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachinePath, ___m_Looped) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePath, ___m_Waypoints) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachinePath) == 0x60, "Size mismatch!");

} // namespace end def Unity::Cinemachine
