#pragma once
// IWYU pragma private; include "GlobalNamespace/TentacleTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TentacleTracker)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TentacleTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TentacleTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TentacleTracker*, "", "TentacleTracker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TentacleTracker
class CORDL_TYPE TentacleTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <currentTargetRig>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTargetRig_k__BackingField, put=__cordl_internal_set__currentTargetRig_k__BackingField)) ::UnityW<::GlobalNamespace::VRRig>  _currentTargetRig_k__BackingField;

/// @brief Field anchorPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorPoint, put=__cordl_internal_set_anchorPoint)) ::UnityW<::UnityEngine::Transform>  anchorPoint;

/// @brief Field anchorRefPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorRefPoint, put=__cordl_internal_set_anchorRefPoint)) ::UnityW<::UnityEngine::Transform>  anchorRefPoint;

/// @brief Field animator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field climbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_climbable, put=__cordl_internal_set_climbable)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  climbable;

/// @brief Field currentTargetIsLocal, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentTargetIsLocal, put=__cordl_internal_set_currentTargetIsLocal)) bool  currentTargetIsLocal;

 __declspec(property(get=get_currentTargetRig, put=set_currentTargetRig)) ::UnityW<::GlobalNamespace::VRRig>  currentTargetRig;

/// @brief Field playerRefPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerRefPoint, put=__cordl_internal_set_playerRefPoint)) ::UnityW<::UnityEngine::Transform>  playerRefPoint;

/// @brief Field testTriggers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_testTriggers, put=__cordl_internal_set_testTriggers)) ::ArrayW<::StringW>  testTriggers;

/// @brief Field testTriggersRemaining, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_testTriggersRemaining, put=__cordl_internal_set_testTriggersRemaining)) ::System::Collections::Generic::List_1<::StringW>*  testTriggersRemaining;

/// @brief Field tracking, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_tracking, put=__cordl_internal_set_tracking)) bool  tracking;

/// @brief Method Anim_OnReachEnded, addr 0x564297c, size 0x174, virtual false, abstract: false, final false
inline void Anim_OnReachEnded() ;

/// @brief Method BeginGrab, addr 0x56420e0, size 0x124, virtual false, abstract: false, final false
inline void BeginGrab(::GlobalNamespace::VRRig*  targetRig, bool  isLocalPlayer) ;

static inline ::GlobalNamespace::TentacleTracker* New_ctor() ;

/// @brief Method OnEnable, addr 0x56428d0, size 0xac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TestDisappear, addr 0x5643070, size 0x24, virtual false, abstract: false, final false
inline void TestDisappear() ;

/// @brief Method TestDrop, addr 0x5642f0c, size 0x164, virtual false, abstract: false, final false
inline void TestDrop() ;

/// @brief Method Update, addr 0x5642af0, size 0x41c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__currentTargetRig_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__currentTargetRig_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchorPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchorPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchorRefPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchorRefPoint() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& __cordl_internal_get_climbable() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& __cordl_internal_get_climbable() ;

constexpr bool const& __cordl_internal_get_currentTargetIsLocal() const;

constexpr bool& __cordl_internal_get_currentTargetIsLocal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerRefPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerRefPoint() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_testTriggers() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_testTriggers() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_testTriggersRemaining() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_testTriggersRemaining() ;

constexpr bool const& __cordl_internal_get_tracking() const;

constexpr bool& __cordl_internal_get_tracking() ;

constexpr void __cordl_internal_set__currentTargetRig_k__BackingField(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_anchorPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_anchorRefPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_climbable(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value) ;

constexpr void __cordl_internal_set_currentTargetIsLocal(bool  value) ;

constexpr void __cordl_internal_set_playerRefPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_testTriggers(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_testTriggersRemaining(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_tracking(bool  value) ;

/// @brief Method .ctor, addr 0x5643094, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_currentTargetRig, addr 0x56428c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_currentTargetRig() ;

/// [CompilerGenerated]
/// @brief Method set_currentTargetRig, addr 0x56428c8, size 0x8, virtual false, abstract: false, final false
inline void set_currentTargetRig(::GlobalNamespace::VRRig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TentacleTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TentacleTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TentacleTracker(TentacleTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TentacleTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TentacleTracker(TentacleTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{653};

/// [SerializeField]
/// @brief Field anchorPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchorPoint;

/// [SerializeField]
/// @brief Field anchorRefPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchorRefPoint;

/// [SerializeField]
/// @brief Field playerRefPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerRefPoint;

/// [SerializeField]
/// @brief Field animator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// [SerializeField]
/// @brief Field climbable, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  ___climbable;

/// [SerializeField]
/// @brief Field testTriggers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___testTriggers;

/// @brief Field testTriggersRemaining, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___testTriggersRemaining;

/// @brief Field tracking, offset: 0x58, size: 0x1, def value: None
 bool  ___tracking;

/// [CompilerGenerated]
/// @brief Field <currentTargetRig>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____currentTargetRig_k__BackingField;

/// @brief Field currentTargetIsLocal, offset: 0x68, size: 0x1, def value: None
 bool  ___currentTargetIsLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___anchorPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___anchorRefPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___playerRefPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___animator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___climbable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___testTriggers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___testTriggersRemaining) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___tracking) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ____currentTargetRig_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TentacleTracker, ___currentTargetIsLocal) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TentacleTracker) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
