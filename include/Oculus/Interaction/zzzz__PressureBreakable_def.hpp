#pragma once
// IWYU pragma private; include "Oculus/Interaction/PressureBreakable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PressureBreakable)
namespace Oculus::Interaction::HandGrab {
class IHandGrabUseDelegate;
}
namespace Oculus::Interaction {
class PressureBreakable__Unbreak_d__18;
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
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction {
class PressureBreakable;
}
namespace Oculus::Interaction {
class PressureBreakable__Unbreak_d__18;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PressureBreakable*);
MARK_REF_T(::Oculus::Interaction::PressureBreakable__Unbreak_d__18*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PressureBreakable*, "Oculus.Interaction", "PressureBreakable");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PressureBreakable__Unbreak_d__18*, "Oculus.Interaction", "PressureBreakable/<Unbreak>d__18");
// Dependencies Oculus.Interaction.HandGrab.HandGrabInteractable, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Rigidbody
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PressureBreakable
class CORDL_TYPE PressureBreakable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Unbreak_d__18 = ::Oculus::Interaction::PressureBreakable__Unbreak_d__18;

/// @brief Field _breakThreshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__breakThreshold, put=__cordl_internal_set__breakThreshold)) float_t  _breakThreshold;

/// @brief Field _brokenBodies, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__brokenBodies, put=__cordl_internal_set__brokenBodies)) ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  _brokenBodies;

/// @brief Field _brokenBodiesInitialPoses, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__brokenBodiesInitialPoses, put=__cordl_internal_set__brokenBodiesInitialPoses)) ::ArrayW<::UnityEngine::Pose>  _brokenBodiesInitialPoses;

/// @brief Field _brokenObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__brokenObject, put=__cordl_internal_set__brokenObject)) ::UnityW<::UnityEngine::GameObject>  _brokenObject;

/// @brief Field _explosionForce, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__explosionForce, put=__cordl_internal_set__explosionForce)) float_t  _explosionForce;

/// @brief Field _explosionRadius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__explosionRadius, put=__cordl_internal_set__explosionRadius)) float_t  _explosionRadius;

/// @brief Field _grabInteractables, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabInteractables, put=__cordl_internal_set__grabInteractables)) ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  _grabInteractables;

/// @brief Field _isBroken, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isBroken, put=__cordl_internal_set__isBroken)) bool  _isBroken;

/// @brief Field _unbreakDelay, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__unbreakDelay, put=__cordl_internal_set__unbreakDelay)) float_t  _unbreakDelay;

/// @brief Field _unbrokenObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__unbrokenObject, put=__cordl_internal_set__unbrokenObject)) ::UnityW<::UnityEngine::GameObject>  _unbrokenObject;

/// @brief Field _useStrength, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__useStrength, put=__cordl_internal_set__useStrength)) float_t  _useStrength;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*() noexcept;

/// @brief Method Awake, addr 0xa42c184, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginUse, addr 0xa42c50c, size 0x4, virtual true, abstract: false, final true
inline void BeginUse() ;

/// @brief Method Break, addr 0xa42c368, size 0x1a4, virtual false, abstract: false, final false
inline void Break() ;

/// @brief Method ComputeUseStrength, addr 0xa42c518, size 0x8, virtual true, abstract: false, final true
inline float_t ComputeUseStrength(float_t  strength) ;

/// @brief Method EndUse, addr 0xa42c510, size 0x8, virtual true, abstract: false, final true
inline void EndUse() ;

static inline ::Oculus::Interaction::PressureBreakable* New_ctor() ;

/// @brief Method Start, addr 0xa42c1c4, size 0x18c, virtual true, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.PressureBreakable::<Unbreak>d__18))]
/// @brief Method Unbreak, addr 0xa42c520, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Unbreak() ;

/// @brief Method Update, addr 0xa42c350, size 0x18, virtual true, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__breakThreshold() const;

constexpr float_t& __cordl_internal_get__breakThreshold() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& __cordl_internal_get__brokenBodies() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& __cordl_internal_get__brokenBodies() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__brokenBodiesInitialPoses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__brokenBodiesInitialPoses() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__brokenObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__brokenObject() ;

constexpr float_t const& __cordl_internal_get__explosionForce() const;

constexpr float_t& __cordl_internal_get__explosionForce() ;

constexpr float_t const& __cordl_internal_get__explosionRadius() const;

constexpr float_t& __cordl_internal_get__explosionRadius() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>> const& __cordl_internal_get__grabInteractables() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>& __cordl_internal_get__grabInteractables() ;

constexpr bool const& __cordl_internal_get__isBroken() const;

constexpr bool& __cordl_internal_get__isBroken() ;

constexpr float_t const& __cordl_internal_get__unbreakDelay() const;

constexpr float_t& __cordl_internal_get__unbreakDelay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__unbrokenObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__unbrokenObject() ;

constexpr float_t const& __cordl_internal_get__useStrength() const;

constexpr float_t& __cordl_internal_get__useStrength() ;

constexpr void __cordl_internal_set__breakThreshold(float_t  value) ;

constexpr void __cordl_internal_set__brokenBodies(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value) ;

constexpr void __cordl_internal_set__brokenBodiesInitialPoses(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__brokenObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__explosionForce(float_t  value) ;

constexpr void __cordl_internal_set__explosionRadius(float_t  value) ;

constexpr void __cordl_internal_set__grabInteractables(::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  value) ;

constexpr void __cordl_internal_set__isBroken(bool  value) ;

constexpr void __cordl_internal_set__unbreakDelay(float_t  value) ;

constexpr void __cordl_internal_set__unbrokenObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__useStrength(float_t  value) ;

/// @brief Method .ctor, addr 0xa42c5b4, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* i___Oculus__Interaction__HandGrab__IHandGrabUseDelegate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PressureBreakable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PressureBreakable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PressureBreakable(PressureBreakable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PressureBreakable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PressureBreakable(PressureBreakable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28262};

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _breakThreshold, offset: 0x20, size: 0x4, def value: None
 float_t  ____breakThreshold;

/// [SerializeField]
/// @brief Field _unbrokenObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____unbrokenObject;

/// [SerializeField]
/// @brief Field _brokenObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____brokenObject;

/// [SerializeField]
/// @brief Field _brokenBodies, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  ____brokenBodies;

/// [SerializeField]
/// @brief Field _grabInteractables, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  ____grabInteractables;

/// [Header("Break Effects")]
/// [SerializeField]
/// @brief Field _explosionForce, offset: 0x48, size: 0x4, def value: None
 float_t  ____explosionForce;

/// [SerializeField]
/// @brief Field _explosionRadius, offset: 0x4c, size: 0x4, def value: None
 float_t  ____explosionRadius;

/// [SerializeField]
/// @brief Field _unbreakDelay, offset: 0x50, size: 0x4, def value: None
 float_t  ____unbreakDelay;

/// @brief Field _useStrength, offset: 0x54, size: 0x4, def value: None
 float_t  ____useStrength;

/// @brief Field _isBroken, offset: 0x58, size: 0x1, def value: None
 bool  ____isBroken;

/// @brief Field _brokenBodiesInitialPoses, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____brokenBodiesInitialPoses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____breakThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____unbrokenObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____brokenObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____brokenBodies) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____grabInteractables) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____explosionForce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____explosionRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____unbreakDelay) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____useStrength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____isBroken) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable, ____brokenBodiesInitialPoses) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PressureBreakable) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PressureBreakable/<Unbreak>d__18
class CORDL_TYPE PressureBreakable__Unbreak_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::PressureBreakable>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa42c5e0, size 0x298, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::PressureBreakable__Unbreak_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa42c878, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa42c880, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa42c8b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa42c5dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::PressureBreakable> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::PressureBreakable>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PressureBreakable>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa42c58c, size 0x28, virtual false, abstract: false, final false
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
constexpr PressureBreakable__Unbreak_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PressureBreakable__Unbreak_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PressureBreakable__Unbreak_d__18(PressureBreakable__Unbreak_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PressureBreakable__Unbreak_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PressureBreakable__Unbreak_d__18(PressureBreakable__Unbreak_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28261};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PressureBreakable>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PressureBreakable__Unbreak_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable__Unbreak_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureBreakable__Unbreak_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PressureBreakable__Unbreak_d__18) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
