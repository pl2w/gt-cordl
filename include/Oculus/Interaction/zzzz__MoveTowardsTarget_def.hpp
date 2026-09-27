#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveTowardsTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(MoveTowardsTarget)
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
struct PoseTravelData;
}
namespace Oculus::Interaction {
class Tween;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class MoveTowardsTarget;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MoveTowardsTarget*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MoveTowardsTarget*, "Oculus.Interaction", "MoveTowardsTarget");
// Dependencies Oculus.Interaction.PoseTravelData, System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MoveTowardsTarget
class CORDL_TYPE MoveTowardsTarget : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field _source, offset 0x28, size 0x1c 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::UnityEngine::Pose  _source;

/// @brief Field _target, offset 0x44, size 0x1c 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::Pose  _target;

/// @brief Field _travellingData, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__travellingData, put=__cordl_internal_set__travellingData)) ::Oculus::Interaction::PoseTravelData  _travellingData;

/// @brief Field _tween, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tween, put=__cordl_internal_set__tween)) ::Oculus::Interaction::Tween*  _tween;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method MoveTo, addr 0xa475118, size 0x44, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::Oculus::Interaction::MoveTowardsTarget* New_ctor(::Oculus::Interaction::PoseTravelData  travellingData) ;

/// @brief Method StopAndSetPose, addr 0xa475258, size 0x54, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  pose) ;

/// @brief Method Tick, addr 0xa4752ac, size 0x18, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateTarget, addr 0xa47515c, size 0xfc, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__source() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__source() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__target() ;

constexpr ::Oculus::Interaction::PoseTravelData const& __cordl_internal_get__travellingData() const;

constexpr ::Oculus::Interaction::PoseTravelData& __cordl_internal_get__travellingData() ;

constexpr ::Oculus::Interaction::Tween* const& __cordl_internal_get__tween() const;

constexpr ::Oculus::Interaction::Tween*& __cordl_internal_get__tween() ;

constexpr void __cordl_internal_set__source(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value) ;

constexpr void __cordl_internal_set__tween(::Oculus::Interaction::Tween*  value) ;

/// @brief Method .ctor, addr 0xa474ff0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseTravelData  travellingData) ;

/// @brief Method get_Pose, addr 0xa4750e0, size 0x24, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0xa475104, size 0x14, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveTowardsTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveTowardsTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveTowardsTarget(MoveTowardsTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveTowardsTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveTowardsTarget(MoveTowardsTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15952};

/// @brief Field _travellingData, offset: 0x10, size: 0x10, def value: None
 ::Oculus::Interaction::PoseTravelData  ____travellingData;

/// @brief Field _tween, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Tween*  ____tween;

/// @brief Field _source, offset: 0x28, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____source;

/// @brief Field _target, offset: 0x44, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MoveTowardsTarget, ____travellingData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MoveTowardsTarget, ____tween) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MoveTowardsTarget, ____source) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MoveTowardsTarget, ____target) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MoveTowardsTarget) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction
