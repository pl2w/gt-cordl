#pragma once
// IWYU pragma private; include "Pathfinding/Util/PathInterpolator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PathInterpolator)
namespace Pathfinding::Util {
class IMovementPlane;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Util {
class PathInterpolator;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::PathInterpolator*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::PathInterpolator*, "Pathfinding.Util", "PathInterpolator");
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.PathInterpolator
class CORDL_TYPE PathInterpolator : public ::System::Object {
public:
// Declarations
/// @brief Field <segmentIndex>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__segmentIndex_k__BackingField, put=__cordl_internal_set__segmentIndex_k__BackingField)) int32_t  _segmentIndex_k__BackingField;

/// @brief Field currentDistance, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDistance, put=__cordl_internal_set_currentDistance)) float_t  currentDistance;

/// @brief Field currentSegmentLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSegmentLength, put=__cordl_internal_set_currentSegmentLength)) float_t  currentSegmentLength;

 __declspec(property(get=get_distance, put=set_distance)) float_t  distance;

/// @brief Field distanceToSegmentStart, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceToSegmentStart, put=__cordl_internal_set_distanceToSegmentStart)) float_t  distanceToSegmentStart;

 __declspec(property(get=get_endPoint)) ::UnityEngine::Vector3  endPoint;

/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_remainingDistance, put=set_remainingDistance)) float_t  remainingDistance;

 __declspec(property(get=get_segmentIndex, put=set_segmentIndex)) int32_t  segmentIndex;

 __declspec(property(get=get_tangent)) ::UnityEngine::Vector3  tangent;

/// @brief Field totalDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalDistance, put=__cordl_internal_set_totalDistance)) float_t  totalDistance;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Method GetRemainingPath, addr 0x5ed6b9c, size 0x1c0, virtual false, abstract: false, final false
inline void GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer) ;

/// @brief Method MoveToCircleIntersection2D, addr 0x5ed774c, size 0x3f0, virtual false, abstract: false, final false
inline void MoveToCircleIntersection2D(::UnityEngine::Vector3  circleCenter3D, float_t  radius, ::Pathfinding::Util::IMovementPlane*  transform) ;

/// @brief Method MoveToClosestPoint, addr 0x5ed70dc, size 0x204, virtual false, abstract: false, final false
inline void MoveToClosestPoint(::UnityEngine::Vector3  point) ;

/// @brief Method MoveToLocallyClosestPoint, addr 0x5ed72e0, size 0x46c, virtual false, abstract: false, final false
inline void MoveToLocallyClosestPoint(::UnityEngine::Vector3  point, bool  allowForwards, bool  allowBackwards) ;

/// @brief Method MoveToSegment, addr 0x5ed6fb8, size 0x124, virtual false, abstract: false, final false
inline void MoveToSegment(int32_t  index, float_t  fractionAlongSegment) ;

static inline ::Pathfinding::Util::PathInterpolator* New_ctor() ;

/// @brief Method NextSegment, addr 0x5ed7c4c, size 0x118, virtual true, abstract: false, final false
inline void NextSegment() ;

/// @brief Method PrevSegment, addr 0x5ed7b3c, size 0x110, virtual true, abstract: false, final false
inline void PrevSegment() ;

/// @brief Method SetPath, addr 0x5ed6d5c, size 0x25c, virtual false, abstract: false, final false
inline void SetPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path) ;

constexpr int32_t const& __cordl_internal_get__segmentIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__segmentIndex_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_currentDistance() const;

constexpr float_t& __cordl_internal_get_currentDistance() ;

constexpr float_t const& __cordl_internal_get_currentSegmentLength() const;

constexpr float_t& __cordl_internal_get_currentSegmentLength() ;

constexpr float_t const& __cordl_internal_get_distanceToSegmentStart() const;

constexpr float_t& __cordl_internal_get_distanceToSegmentStart() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_path() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_path() ;

constexpr float_t const& __cordl_internal_get_totalDistance() const;

constexpr float_t& __cordl_internal_get_totalDistance() ;

constexpr void __cordl_internal_set__segmentIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_currentDistance(float_t  value) ;

constexpr void __cordl_internal_set_currentSegmentLength(float_t  value) ;

constexpr void __cordl_internal_set_distanceToSegmentStart(float_t  value) ;

constexpr void __cordl_internal_set_path(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_totalDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5ed7d64, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_distance, addr 0x5ed6b74, size 0x8, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// @brief Method get_endPoint, addr 0x5ed6980, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_endPoint() ;

/// @brief Method get_position, addr 0x5ed6894, size 0xec, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_remainingDistance, addr 0x5ed6a7c, size 0x10, virtual false, abstract: false, final false
inline float_t get_remainingDistance() ;

/// [CompilerGenerated]
/// @brief Method get_segmentIndex, addr 0x5ed6b7c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_segmentIndex() ;

/// @brief Method get_tangent, addr 0x5ed69e4, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_tangent() ;

/// @brief Method get_valid, addr 0x5ed6b8c, size 0x10, virtual false, abstract: false, final false
inline bool get_valid() ;

/// @brief Method set_distance, addr 0x5ed6a98, size 0xdc, virtual false, abstract: false, final false
inline void set_distance(float_t  value) ;

/// @brief Method set_remainingDistance, addr 0x5ed6a8c, size 0xc, virtual false, abstract: false, final false
inline void set_remainingDistance(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_segmentIndex, addr 0x5ed6b84, size 0x8, virtual false, abstract: false, final false
inline void set_segmentIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathInterpolator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathInterpolator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathInterpolator(PathInterpolator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathInterpolator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathInterpolator(PathInterpolator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21467};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___path;

/// @brief Field distanceToSegmentStart, offset: 0x18, size: 0x4, def value: None
 float_t  ___distanceToSegmentStart;

/// @brief Field currentDistance, offset: 0x1c, size: 0x4, def value: None
 float_t  ___currentDistance;

/// @brief Field currentSegmentLength, offset: 0x20, size: 0x4, def value: None
 float_t  ___currentSegmentLength;

/// @brief Field totalDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___totalDistance;

/// [CompilerGenerated]
/// @brief Field <segmentIndex>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____segmentIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::PathInterpolator, ___path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::PathInterpolator, ___distanceToSegmentStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::PathInterpolator, ___currentDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::PathInterpolator, ___currentSegmentLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::PathInterpolator, ___totalDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::PathInterpolator, ____segmentIndex_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::PathInterpolator) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Util
