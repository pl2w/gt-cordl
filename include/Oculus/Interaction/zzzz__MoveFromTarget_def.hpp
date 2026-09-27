#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveFromTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(MoveFromTarget)
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class MoveFromTarget;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MoveFromTarget*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MoveFromTarget*, "Oculus.Interaction", "MoveFromTarget");
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MoveFromTarget
class CORDL_TYPE MoveFromTarget : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pose, put=set_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field <Pose>k__BackingField, offset 0x10, size 0x1c 
 __declspec(property(get=__cordl_internal_get__Pose_k__BackingField, put=__cordl_internal_set__Pose_k__BackingField)) ::UnityEngine::Pose  _Pose_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method MoveTo, addr 0xa474f20, size 0x1c, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::Oculus::Interaction::MoveFromTarget* New_ctor() ;

/// @brief Method StopAndSetPose, addr 0xa474f58, size 0x1c, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  source) ;

/// @brief Method StopMovement, addr 0xa474f1c, size 0x4, virtual false, abstract: false, final false
inline void StopMovement() ;

/// @brief Method Tick, addr 0xa474f74, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateTarget, addr 0xa474f3c, size 0x1c, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__Pose_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__Pose_k__BackingField() ;

constexpr void __cordl_internal_set__Pose_k__BackingField(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa474e5c, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Pose, addr 0xa474ee4, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0xa474f14, size 0x8, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Pose, addr 0xa474ef8, size 0x1c, virtual false, abstract: false, final false
inline void set_Pose(::UnityEngine::Pose  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveFromTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveFromTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveFromTarget(MoveFromTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveFromTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveFromTarget(MoveFromTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15950};

/// [CompilerGenerated]
/// @brief Field <Pose>k__BackingField, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____Pose_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MoveFromTarget, ____Pose_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MoveFromTarget) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
