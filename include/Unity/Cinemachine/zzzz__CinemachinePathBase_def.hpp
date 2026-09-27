#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePathBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachinePathBase)
namespace GlobalNamespace {
struct CinemachinePathBase_PositionUnits;
}
namespace Unity::Cinemachine {
class CinemachinePathBase_Appearance;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachinePathBase;
}
namespace Unity::Cinemachine {
class CinemachinePathBase_Appearance;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachinePathBase*);
MARK_REF_T(::Unity::Cinemachine::CinemachinePathBase_Appearance*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePathBase*, "Unity.Cinemachine", "CinemachinePathBase");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePathBase_Appearance*, "Unity.Cinemachine", "CinemachinePathBase/Appearance");
// [Obsolete("CinemachinePathBase has been deprecated. Use SplineContainer instead")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePathBase
class CORDL_TYPE CinemachinePathBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PositionUnits = ::GlobalNamespace::CinemachinePathBase_PositionUnits;

using Appearance = ::Unity::Cinemachine::CinemachinePathBase_Appearance;

 __declspec(property(get=get_DistanceCacheSampleStepsPerSegment)) int32_t  DistanceCacheSampleStepsPerSegment;

 __declspec(property(get=get_Looped)) bool  Looped;

 __declspec(property(get=get_MaxPos)) float_t  MaxPos;

 __declspec(property(get=get_MinPos)) float_t  MinPos;

 __declspec(property(get=get_PathLength)) float_t  PathLength;

/// @brief Field m_Appearance, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Appearance, put=__cordl_internal_set_m_Appearance)) ::Unity::Cinemachine::CinemachinePathBase_Appearance*  m_Appearance;

/// @brief Field m_CachedSampleSteps, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedSampleSteps, put=__cordl_internal_set_m_CachedSampleSteps)) int32_t  m_CachedSampleSteps;

/// @brief Field m_DistanceToPos, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DistanceToPos, put=__cordl_internal_set_m_DistanceToPos)) ::ArrayW<float_t>  m_DistanceToPos;

/// @brief Field m_PathLength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PathLength, put=__cordl_internal_set_m_PathLength)) float_t  m_PathLength;

/// @brief Field m_PosToDistance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PosToDistance, put=__cordl_internal_set_m_PosToDistance)) ::ArrayW<float_t>  m_PosToDistance;

/// @brief Field m_Resolution, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Resolution, put=__cordl_internal_set_m_Resolution)) int32_t  m_Resolution;

/// @brief Field m_cachedDistanceStepSize, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cachedDistanceStepSize, put=__cordl_internal_set_m_cachedDistanceStepSize)) float_t  m_cachedDistanceStepSize;

/// @brief Field m_cachedPosStepSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cachedPosStepSize, put=__cordl_internal_set_m_cachedPosStepSize)) float_t  m_cachedPosStepSize;

/// @brief Method DistanceCacheIsValid, addr 0xaed7de4, size 0x94, virtual false, abstract: false, final false
inline bool DistanceCacheIsValid() ;

/// @brief Method EvaluateLocalOrientation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Quaternion EvaluateLocalOrientation(float_t  pos) ;

/// @brief Method EvaluateLocalPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 EvaluateLocalPosition(float_t  pos) ;

/// @brief Method EvaluateLocalTangent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 EvaluateLocalTangent(float_t  pos) ;

/// @brief Method EvaluateOrientation, addr 0xaed7578, size 0xdc, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion EvaluateOrientation(float_t  pos) ;

/// @brief Method EvaluateOrientationAtUnit, addr 0xaed7d94, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion EvaluateOrientationAtUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

/// @brief Method EvaluatePosition, addr 0xaed74d0, size 0x54, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluatePosition(float_t  pos) ;

/// @brief Method EvaluatePositionAtUnit, addr 0xaed7bc0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluatePositionAtUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

/// @brief Method EvaluateTangent, addr 0xaed7524, size 0x54, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateTangent(float_t  pos) ;

/// @brief Method EvaluateTangentAtUnit, addr 0xaed7d74, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateTangentAtUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

/// @brief Method FindClosestPoint, addr 0xaed7654, size 0x3c0, virtual true, abstract: false, final false
inline float_t FindClosestPoint(::UnityEngine::Vector3  p, int32_t  startSegment, int32_t  searchRadius, int32_t  stepsPerSegment) ;

/// @brief Method FromPathNativeUnits, addr 0xaed822c, size 0x168, virtual false, abstract: false, final false
inline float_t FromPathNativeUnits(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

/// @brief Method InvalidateDistanceCache, addr 0xaed7db4, size 0x30, virtual true, abstract: false, final false
inline void InvalidateDistanceCache() ;

/// @brief Method MaxUnit, addr 0xaed7a34, size 0x28, virtual false, abstract: false, final false
inline float_t MaxUnit(::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

/// @brief Method MinUnit, addr 0xaed7a14, size 0x20, virtual false, abstract: false, final false
inline float_t MinUnit(::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

static inline ::Unity::Cinemachine::CinemachinePathBase* New_ctor() ;

/// @brief Method OnEnable, addr 0xaed8394, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResamplePath, addr 0xaed7e78, size 0x3b4, virtual false, abstract: false, final false
inline void ResamplePath(int32_t  stepsPerSegment) ;

/// @brief Method StandardizePathDistance, addr 0xaed7b44, size 0x7c, virtual false, abstract: false, final false
inline float_t StandardizePathDistance(float_t  distance) ;

/// @brief Method StandardizePos, addr 0xaed7424, size 0xac, virtual true, abstract: false, final false
inline float_t StandardizePos(float_t  pos) ;

/// @brief Method StandardizeUnit, addr 0xaed7abc, size 0x88, virtual true, abstract: false, final false
inline float_t StandardizeUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

/// @brief Method ToNativePathUnits, addr 0xaed7be0, size 0x194, virtual false, abstract: false, final false
inline float_t ToNativePathUnits(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units) ;

constexpr ::Unity::Cinemachine::CinemachinePathBase_Appearance* const& __cordl_internal_get_m_Appearance() const;

constexpr ::Unity::Cinemachine::CinemachinePathBase_Appearance*& __cordl_internal_get_m_Appearance() ;

constexpr int32_t const& __cordl_internal_get_m_CachedSampleSteps() const;

constexpr int32_t& __cordl_internal_get_m_CachedSampleSteps() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_DistanceToPos() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_DistanceToPos() ;

constexpr float_t const& __cordl_internal_get_m_PathLength() const;

constexpr float_t& __cordl_internal_get_m_PathLength() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_PosToDistance() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_PosToDistance() ;

constexpr int32_t const& __cordl_internal_get_m_Resolution() const;

constexpr int32_t& __cordl_internal_get_m_Resolution() ;

constexpr float_t const& __cordl_internal_get_m_cachedDistanceStepSize() const;

constexpr float_t& __cordl_internal_get_m_cachedDistanceStepSize() ;

constexpr float_t const& __cordl_internal_get_m_cachedPosStepSize() const;

constexpr float_t& __cordl_internal_get_m_cachedPosStepSize() ;

constexpr void __cordl_internal_set_m_Appearance(::Unity::Cinemachine::CinemachinePathBase_Appearance*  value) ;

constexpr void __cordl_internal_set_m_CachedSampleSteps(int32_t  value) ;

constexpr void __cordl_internal_set_m_DistanceToPos(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_PathLength(float_t  value) ;

constexpr void __cordl_internal_set_m_PosToDistance(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_Resolution(int32_t  value) ;

constexpr void __cordl_internal_set_m_cachedDistanceStepSize(float_t  value) ;

constexpr void __cordl_internal_set_m_cachedPosStepSize(float_t  value) ;

/// @brief Method .ctor, addr 0xaed73b4, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceCacheSampleStepsPerSegment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_DistanceCacheSampleStepsPerSegment() ;

/// @brief Method get_Looped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Looped() ;

/// @brief Method get_MaxPos, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_MaxPos() ;

/// @brief Method get_MinPos, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_MinPos() ;

/// @brief Method get_PathLength, addr 0xaed7a5c, size 0x60, virtual false, abstract: false, final false
inline float_t get_PathLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePathBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePathBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePathBase(CinemachinePathBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePathBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePathBase(CinemachinePathBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22433};

/// [Tooltip("Path samples per waypoint.  This is used for calculating path distances.")]
/// [Range(1, 100)]
/// @brief Field m_Resolution, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_Resolution;

/// [Tooltip("The settings that control how the path will appear in the editor scene view.")]
/// @brief Field m_Appearance, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachinePathBase_Appearance*  ___m_Appearance;

/// @brief Field m_DistanceToPos, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_DistanceToPos;

/// @brief Field m_PosToDistance, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_PosToDistance;

/// @brief Field m_CachedSampleSteps, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_CachedSampleSteps;

/// @brief Field m_PathLength, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_PathLength;

/// @brief Field m_cachedPosStepSize, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_cachedPosStepSize;

/// @brief Field m_cachedDistanceStepSize, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_cachedDistanceStepSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_Resolution) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_Appearance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_DistanceToPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_PosToDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_CachedSampleSteps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_PathLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_cachedPosStepSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase, ___m_cachedDistanceStepSize) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachinePathBase) == 0x50, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object, UnityEngine.Color
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePathBase/Appearance
class CORDL_TYPE CinemachinePathBase_Appearance : public ::System::Object {
public:
// Declarations
/// @brief Field inactivePathColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_inactivePathColor, put=__cordl_internal_set_inactivePathColor)) ::UnityEngine::Color  inactivePathColor;

/// @brief Field pathColor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_pathColor, put=__cordl_internal_set_pathColor)) ::UnityEngine::Color  pathColor;

/// @brief Field width, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) float_t  width;

static inline ::Unity::Cinemachine::CinemachinePathBase_Appearance* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_inactivePathColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_inactivePathColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_pathColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_pathColor() ;

constexpr float_t const& __cordl_internal_get_width() const;

constexpr float_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_inactivePathColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_pathColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_width(float_t  value) ;

/// @brief Method .ctor, addr 0xaed6b98, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePathBase_Appearance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePathBase_Appearance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePathBase_Appearance(CinemachinePathBase_Appearance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePathBase_Appearance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePathBase_Appearance(CinemachinePathBase_Appearance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22431};

/// [Tooltip("The color of the path itself when it is active in the editor")]
/// @brief Field pathColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___pathColor;

/// [Tooltip("The color of the path itself when it is inactive in the editor")]
/// @brief Field inactivePathColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___inactivePathColor;

/// [Tooltip("The width of the railroad-tracks that are drawn to represent the path")]
/// [Range(0, 10)]
/// @brief Field width, offset: 0x30, size: 0x4, def value: None
 float_t  ___width;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase_Appearance, ___pathColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase_Appearance, ___inactivePathColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePathBase_Appearance, ___width) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachinePathBase_Appearance) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
