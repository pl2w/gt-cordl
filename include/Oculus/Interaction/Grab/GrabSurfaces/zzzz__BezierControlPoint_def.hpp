#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BezierControlPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BezierControlPoint)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
struct BezierControlPoint;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint, "Oculus.Interaction.Grab.GrabSurfaces", "BezierControlPoint");
// Dependencies UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: true
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
struct CORDL_TYPE BezierControlPoint {
public:
// Declarations
 __declspec(property(get=get_Disconnected, put=set_Disconnected)) bool  Disconnected;

/// @brief Method GetPose, addr 0xa4e7170, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetPose(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method GetTangent, addr 0xa4e71c8, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetTangent(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SetPose, addr 0xa4e8b24, size 0x4c, virtual false, abstract: false, final false
inline void SetPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldSpacePose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SetTangent, addr 0xa4e8db0, size 0x34, virtual false, abstract: false, final false
inline void SetTangent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  tangent, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method get_Disconnected, addr 0xa4e8da0, size 0x8, virtual false, abstract: false, final false
inline bool get_Disconnected() ;

/// @brief Method set_Disconnected, addr 0xa4e8da8, size 0x8, virtual false, abstract: false, final false
inline void set_Disconnected(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BezierControlPoint() ;

// Ctor Parameters [CppParam { name: "_pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tangentPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_disconnected", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BezierControlPoint(::UnityEngine::Pose  _pose, ::UnityEngine::Vector3  _tangentPoint, bool  _disconnected) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// [SerializeField]
/// [FormerlySerializedAs("pose")]
/// @brief Field _pose, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  _pose;

/// [SerializeField]
/// [FormerlySerializedAs("tangentPoint")]
/// @brief Field _tangentPoint, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  _tangentPoint;

/// [SerializeField]
/// [FormerlySerializedAs("disconnected")]
/// @brief Field _disconnected, offset: 0x28, size: 0x1, def value: None
 bool  _disconnected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint, _pose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint, _tangentPoint) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint, _disconnected) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint) == 0x2c, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
