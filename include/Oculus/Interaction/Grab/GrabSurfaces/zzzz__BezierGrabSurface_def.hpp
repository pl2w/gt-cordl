#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BezierGrabSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BezierGrabSurface)
namespace Oculus::Interaction::Grab::GrabSurfaces {
struct BezierControlPoint;
}
namespace Oculus::Interaction::Grab::GrabSurfaces {
class BezierGrabSurface___c__DisplayClass8_0;
}
namespace Oculus::Interaction::Grab::GrabSurfaces {
class IGrabSurface;
}
namespace Oculus::Interaction::Grab {
struct GrabPoseScore;
}
namespace Oculus::Interaction::Grab {
struct PoseMeasureParameters;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
class BezierGrabSurface;
}
namespace Oculus::Interaction::Grab::GrabSurfaces {
class BezierGrabSurface___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*);
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*, "Oculus.Interaction.Grab.GrabSurfaces", "BezierGrabSurface");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*, "Oculus.Interaction.Grab.GrabSurfaces", "BezierGrabSurface/<>c__DisplayClass8_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface
class CORDL_TYPE BezierGrabSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass8_0 = ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0;

 __declspec(property(get=get_ControlPoints)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  ControlPoints;

/// @brief Field _controlPoints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controlPoints, put=__cordl_internal_set__controlPoints)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  _controlPoints;

/// @brief Field _relativeTo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr operator  ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4e6c0c, size 0xbc, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4e6cc8, size 0x4a8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4e7818, size 0x728, virtual true, abstract: false, final true
inline bool CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method CreateDuplicatedSurface, addr 0xa4e8680, size 0xc4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CreateMirroredSurface, addr 0xa4e8744, size 0x3e0, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* CreateMirroredSurface(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method EvaluateBezier, addr 0xa4e832c, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 EvaluateBezier(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  middle, ::UnityEngine::Vector3  end, float_t  t) ;

/// @brief Method GenerateRaycastPlane, addr 0xa4e7f40, size 0x3ec, virtual false, abstract: false, final false
inline ::UnityEngine::Plane GenerateRaycastPlane(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  fallbackDir) ;

/// @brief Method InjectAllBezierSurface, addr 0xa4e8b84, size 0x30, virtual false, abstract: false, final false
inline void InjectAllBezierSurface(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  controlPoints, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectControlPoints, addr 0xa4e8bb4, size 0x8, virtual false, abstract: false, final false
inline void InjectControlPoints(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  controlPoints) ;

/// @brief Method InjectRelativeTo, addr 0xa4e8bbc, size 0x8, virtual false, abstract: false, final false
inline void InjectRelativeTo(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MirrorPose, addr 0xa4e8b70, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method NearestPointInTriangle, addr 0xa4e71e8, size 0x26c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NearestPointInTriangle(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::by_ref<float_t>  t) ;

/// @brief Method NearestPointToSegment, addr 0xa4e83a4, size 0x2dc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NearestPointToSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::by_ref<float_t>  progress) ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4e8c4c, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface, addr 0xa4e8c50, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose, addr 0xa4e8c54, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Pose Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method ProgressForRotation, addr 0xa4e7454, size 0x3c4, virtual false, abstract: false, final false
inline float_t ProgressForRotation(::UnityEngine::Quaternion  targetRotation, ::UnityEngine::Quaternion  from, ::UnityEngine::Quaternion  to) ;

/// @brief Method Reset, addr 0xa4e6b20, size 0xe8, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa4e6c08, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>* const& __cordl_internal_get__controlPoints() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*& __cordl_internal_get__controlPoints() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr void __cordl_internal_set__controlPoints(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4e8bc4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ControlPoints, addr 0xa4e6b18, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>* get_ControlPoints() ;

/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BezierGrabSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BezierGrabSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BezierGrabSurface(BezierGrabSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BezierGrabSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BezierGrabSurface(BezierGrabSurface const& ) = delete;

/// @brief Field MAX_PLANE_DOT offset 0xffffffff size 0x4
static constexpr float_t  MAX_PLANE_DOT{static_cast<float_t>(0.95f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16354};

/// [SerializeField]
/// @brief Field _controlPoints, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  ____controlPoints;

/// [SerializeField]
/// [Tooltip("Transform used as a reference to measure the local data of the grab surface")]
/// @brief Field _relativeTo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface, ____controlPoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface, ____relativeTo) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0
class CORDL_TYPE BezierGrabSurface___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field end, offset 0x38, size 0x1c 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityEngine::Pose  end;

/// @brief Field positionT, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionT, put=__cordl_internal_set_positionT)) float_t  positionT;

/// @brief Field rotationT, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationT, put=__cordl_internal_set_rotationT)) float_t  rotationT;

/// @brief Field start, offset 0x10, size 0x1c 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityEngine::Pose  start;

/// @brief Field tangent, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_tangent, put=__cordl_internal_set_tangent)) ::UnityEngine::Vector3  tangent;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <CalculateBestPoseAtSurface>b__0, addr 0xa4e8c68, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose _CalculateBestPoseAtSurface_b__0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  target, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method <CalculateBestPoseAtSurface>b__1, addr 0xa4e8d04, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose _CalculateBestPoseAtSurface_b__1(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  target, ::UnityEngine::Transform*  relativeTo) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_end() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_end() ;

constexpr float_t const& __cordl_internal_get_positionT() const;

constexpr float_t& __cordl_internal_get_positionT() ;

constexpr float_t const& __cordl_internal_get_rotationT() const;

constexpr float_t& __cordl_internal_get_rotationT() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_start() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tangent() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tangent() ;

constexpr void __cordl_internal_set_end(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_positionT(float_t  value) ;

constexpr void __cordl_internal_set_rotationT(float_t  value) ;

constexpr void __cordl_internal_set_start(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_tangent(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4e71c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BezierGrabSurface___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BezierGrabSurface___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BezierGrabSurface___c__DisplayClass8_0(BezierGrabSurface___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BezierGrabSurface___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BezierGrabSurface___c__DisplayClass8_0(BezierGrabSurface___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16353};

/// @brief Field start, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___start;

/// @brief Field tangent, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tangent;

/// @brief Field end, offset: 0x38, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___end;

/// @brief Field positionT, offset: 0x54, size: 0x4, def value: None
 float_t  ___positionT;

/// @brief Field rotationT, offset: 0x58, size: 0x4, def value: None
 float_t  ___rotationT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0, ___start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0, ___tangent) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0, ___end) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0, ___positionT) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0, ___rotationT) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
