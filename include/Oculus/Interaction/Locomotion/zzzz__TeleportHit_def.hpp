#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TeleportHit)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
struct TeleportHit;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Locomotion::TeleportHit);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportHit, "Oculus.Interaction.Locomotion", "TeleportHit");
// Dependencies UnityEngine.Pose
namespace Oculus::Interaction::Locomotion {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.TeleportHit
struct CORDL_TYPE TeleportHit {
public:
// Declarations
/// @brief Field DEFAULT, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_DEFAULT, put=setStaticF_DEFAULT)) ::Oculus::Interaction::Locomotion::TeleportHit  DEFAULT;

 __declspec(property(get=get_Normal)) ::UnityEngine::Vector3  Normal;

 __declspec(property(get=get_Point)) ::UnityEngine::Vector3  Point;

/// @brief Method .ctor, addr 0xa4cca10, size 0x19c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  relativeTo, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

static inline ::Oculus::Interaction::Locomotion::TeleportHit getStaticF_DEFAULT() ;

/// @brief Method get_Normal, addr 0xa4cd4fc, size 0x188, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Normal() ;

/// @brief Method get_Point, addr 0xa4cd2d0, size 0xc8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Point() ;

static inline void setStaticF_DEFAULT(::Oculus::Interaction::Locomotion::TeleportHit  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TeleportHit() ;

// Ctor Parameters [CppParam { name: "relativeTo", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_localPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr TeleportHit(::UnityW<::UnityEngine::Transform>  relativeTo, ::UnityEngine::Pose  _localPose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field relativeTo, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  relativeTo;

/// @brief Field _localPose, offset: 0x8, size: 0x1c, def value: None
 ::UnityEngine::Pose  _localPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportHit, relativeTo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportHit, _localPose) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportHit) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
