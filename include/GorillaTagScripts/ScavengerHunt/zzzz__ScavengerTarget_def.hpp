#pragma once
// IWYU pragma private; include "GorillaTagScripts/ScavengerHunt/ScavengerTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScavengerTarget)
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerTarget__ConnectToScavengerManager_d__7;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerTarget;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerTarget__ConnectToScavengerManager_d__7;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*);
MARK_REF_T(::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*, "GorillaTagScripts.ScavengerHunt", "ScavengerTarget");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*, "GorillaTagScripts.ScavengerHunt", "ScavengerTarget/<ConnectToScavengerManager>d__7");
// Dependencies UnityEngine.Events.UnityEvent, UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::ScavengerHunt {
// Is value type: false
// CS Name: GorillaTagScripts.ScavengerHunt.ScavengerTarget
class CORDL_TYPE ScavengerTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ConnectToScavengerManager_d__7 = ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7;

/// @brief Field DisplayName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field HuntName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_HuntName, put=__cordl_internal_set_HuntName)) ::StringW  HuntName;

/// @brief Field TargetCollected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetCollected, put=__cordl_internal_set_TargetCollected)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  TargetCollected;

/// @brief Field TargetCollectedArg, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetCollectedArg, put=__cordl_internal_set_TargetCollectedArg)) ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  TargetCollectedArg;

/// @brief Field TargetName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetName, put=__cordl_internal_set_TargetName)) ::StringW  TargetName;

/// @brief Field _manager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__manager, put=__cordl_internal_set__manager)) ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  _manager;

/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr operator  ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept;

/// @brief Method Awake, addr 0x5c14fa8, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanBeGrabbed, addr 0x5c1507c, size 0x28, virtual true, abstract: false, final true
inline bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method Collect, addr 0x5c1505c, size 0x18, virtual false, abstract: false, final false
inline void Collect() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.ScavengerHunt.ScavengerTarget::<ConnectToScavengerManager>d__7))]
/// @brief Method ConnectToScavengerManager, addr 0x5c14fc8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ConnectToScavengerManager() ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.get_name, addr 0x5c15144, size 0x8, virtual true, abstract: false, final true
inline ::StringW GorillaLocomotion_Gameplay_IGorillaGrabable_get_name() ;

/// @brief Method MomentaryGrabOnly, addr 0x5c15074, size 0x8, virtual true, abstract: false, final true
inline bool MomentaryGrabOnly() ;

static inline ::GorillaTagScripts::ScavengerHunt::ScavengerTarget* New_ctor() ;

/// @brief Method OnGrabReleased, addr 0x5c15138, size 0x4, virtual true, abstract: false, final true
inline void OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method OnGrabbed, addr 0x5c150a4, size 0x94, virtual true, abstract: false, final true
inline void OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition) ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_HuntName() const;

constexpr ::StringW& __cordl_internal_get_HuntName() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_TargetCollected() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& __cordl_internal_get_TargetCollected() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*> const& __cordl_internal_get_TargetCollectedArg() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>& __cordl_internal_get_TargetCollectedArg() ;

constexpr ::StringW const& __cordl_internal_get_TargetName() const;

constexpr ::StringW& __cordl_internal_get_TargetName() ;

constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> const& __cordl_internal_get__manager() const;

constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>& __cordl_internal_get__manager() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_HuntName(::StringW  value) ;

constexpr void __cordl_internal_set_TargetCollected(::ArrayW<::UnityEngine::Events::UnityEvent*>  value) ;

constexpr void __cordl_internal_set_TargetCollectedArg(::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  value) ;

constexpr void __cordl_internal_set_TargetName(::StringW  value) ;

constexpr void __cordl_internal_set__manager(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  value) ;

/// @brief Method .ctor, addr 0x5c1513c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScavengerTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScavengerTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScavengerTarget(ScavengerTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScavengerTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScavengerTarget(ScavengerTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4108};

/// @brief Field HuntName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___HuntName;

/// @brief Field TargetName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TargetName;

/// @brief Field DisplayName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field TargetCollected, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent*>  ___TargetCollected;

/// @brief Field TargetCollectedArg, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  ___TargetCollectedArg;

/// @brief Field _manager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  ____manager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget, ___HuntName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget, ___TargetName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget, ___DisplayName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget, ___TargetCollected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget, ___TargetCollectedArg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget, ____manager) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::ScavengerHunt
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::ScavengerHunt {
// Is value type: false
// CS Name: GorillaTagScripts.ScavengerHunt.ScavengerTarget/<ConnectToScavengerManager>d__7
class CORDL_TYPE ScavengerTarget__ConnectToScavengerManager_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c15150, size 0x208, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c15358, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c15360, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c15398, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c1514c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c15034, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScavengerTarget__ConnectToScavengerManager_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScavengerTarget__ConnectToScavengerManager_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScavengerTarget__ConnectToScavengerManager_d__7(ScavengerTarget__ConnectToScavengerManager_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScavengerTarget__ConnectToScavengerManager_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScavengerTarget__ConnectToScavengerManager_d__7(ScavengerTarget__ConnectToScavengerManager_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4107};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::ScavengerHunt
