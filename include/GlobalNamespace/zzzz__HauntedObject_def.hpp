#pragma once
// IWYU pragma private; include "GlobalNamespace/HauntedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HauntedObject)
namespace GlobalNamespace {
class HauntedObject__Shake_d__22;
}
namespace GlobalNamespace {
class HauntedObject__TurnOff_d__23;
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
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HauntedObject;
}
namespace GlobalNamespace {
class HauntedObject__Shake_d__22;
}
namespace GlobalNamespace {
class HauntedObject__TurnOff_d__23;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HauntedObject*);
MARK_REF_T(::GlobalNamespace::HauntedObject__Shake_d__22*);
MARK_REF_T(::GlobalNamespace::HauntedObject__TurnOff_d__23*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HauntedObject*, "", "HauntedObject");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HauntedObject__Shake_d__22*, "", "HauntedObject/<Shake>d__22");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HauntedObject__TurnOff_d__23*, "", "HauntedObject/<TurnOff>d__23");
// Dependencies UnityEngine.Animator, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HauntedObject
class CORDL_TYPE HauntedObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Shake_d__22 = ::GlobalNamespace::HauntedObject__Shake_d__22;

using _TurnOff_d__23 = ::GlobalNamespace::HauntedObject__TurnOff_d__23;

/// @brief Field FBXprefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FBXprefab, put=__cordl_internal_set_FBXprefab)) ::UnityW<::UnityEngine::GameObject>  FBXprefab;

/// @brief Field TurnOffDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_TurnOffDuration, put=__cordl_internal_set_TurnOffDuration)) float_t  TurnOffDuration;

/// @brief Field TurnOffLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TurnOffLight, put=__cordl_internal_set_TurnOffLight)) ::UnityW<::UnityEngine::GameObject>  TurnOffLight;

/// @brief Field _animHaunted, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__animHaunted, put=setStaticF__animHaunted)) int32_t  _animHaunted;

/// @brief Field amount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_amount, put=__cordl_internal_set_amount)) float_t  amount;

/// @brief Field animators, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_animators, put=__cordl_internal_set_animators)) ::ArrayW<::UnityW<::UnityEngine::Animator>>  animators;

/// @brief Field audioSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field duration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field hauntedSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_hauntedSound, put=__cordl_internal_set_hauntedSound)) ::UnityW<::UnityEngine::AudioClip>  hauntedSound;

/// @brief Field initialPos, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialPos, put=__cordl_internal_set_initialPos)) ::UnityEngine::Vector3  initialPos;

/// @brief Field lightPassedTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightPassedTime, put=__cordl_internal_set_lightPassedTime)) float_t  lightPassedTime;

/// @brief Field lurkerGhost, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lurkerGhost, put=__cordl_internal_set_lurkerGhost)) ::UnityW<::UnityEngine::GameObject>  lurkerGhost;

/// @brief Field passedTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_passedTime, put=__cordl_internal_set_passedTime)) float_t  passedTime;

/// @brief Field rattle, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_rattle, put=__cordl_internal_set_rattle)) bool  rattle;

/// @brief Field speed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field wanderingGhost, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_wanderingGhost, put=__cordl_internal_set_wanderingGhost)) ::UnityW<::UnityEngine::GameObject>  wanderingGhost;

/// @brief Method Awake, addr 0x5950fc8, size 0x2f0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HauntedObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59512b8, size 0x254, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [IteratorStateMachine(typeof(HauntedObject::<Shake>d__22))]
/// @brief Method Shake, addr 0x59517b8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Shake() ;

/// @brief Method Start, addr 0x595150c, size 0x34, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TriggerEffects, addr 0x5951540, size 0x278, virtual false, abstract: false, final false
inline void TriggerEffects(::UnityEngine::GameObject*  go) ;

/// [IteratorStateMachine(typeof(HauntedObject::<TurnOff>d__23))]
/// @brief Method TurnOff, addr 0x5951824, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TurnOff() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_FBXprefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_FBXprefab() ;

constexpr float_t const& __cordl_internal_get_TurnOffDuration() const;

constexpr float_t& __cordl_internal_get_TurnOffDuration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_TurnOffLight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_TurnOffLight() ;

constexpr float_t const& __cordl_internal_get_amount() const;

constexpr float_t& __cordl_internal_get_amount() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& __cordl_internal_get_animators() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& __cordl_internal_get_animators() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_hauntedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_hauntedSound() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialPos() ;

constexpr float_t const& __cordl_internal_get_lightPassedTime() const;

constexpr float_t& __cordl_internal_get_lightPassedTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lurkerGhost() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lurkerGhost() ;

constexpr float_t const& __cordl_internal_get_passedTime() const;

constexpr float_t& __cordl_internal_get_passedTime() ;

constexpr bool const& __cordl_internal_get_rattle() const;

constexpr bool& __cordl_internal_get_rattle() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_wanderingGhost() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_wanderingGhost() ;

constexpr void __cordl_internal_set_FBXprefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_TurnOffDuration(float_t  value) ;

constexpr void __cordl_internal_set_TurnOffLight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_amount(float_t  value) ;

constexpr void __cordl_internal_set_animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_hauntedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_initialPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lightPassedTime(float_t  value) ;

constexpr void __cordl_internal_set_lurkerGhost(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_passedTime(float_t  value) ;

constexpr void __cordl_internal_set_rattle(bool  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_wanderingGhost(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x59518e0, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__animHaunted() ;

static inline void setStaticF__animHaunted(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HauntedObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HauntedObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HauntedObject(HauntedObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HauntedObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HauntedObject(HauntedObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2304};

/// @brief Field _lurkerGhost offset 0xffffffff size 0x8
static constexpr ::ConstString  _lurkerGhost{u"LurkerGhost"};

/// @brief Field _wanderingGhost offset 0xffffffff size 0x8
static constexpr ::ConstString  _wanderingGhost{u"WanderingGhost"};

/// [Tooltip("If this box is checked, then object will rattle when hunted")]
/// @brief Field rattle, offset: 0x20, size: 0x1, def value: None
 bool  ___rattle;

/// @brief Field speed, offset: 0x24, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field amount, offset: 0x28, size: 0x4, def value: None
 float_t  ___amount;

/// @brief Field duration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___duration;

/// [FormerlySerializedAs("FBX")]
/// @brief Field FBXprefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___FBXprefab;

/// [Tooltip("Use to turn off a game object like candle flames when hunted")]
/// @brief Field TurnOffLight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___TurnOffLight;

/// @brief Field TurnOffDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ___TurnOffDuration;

/// @brief Field initialPos, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialPos;

/// @brief Field passedTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___passedTime;

/// @brief Field lightPassedTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___lightPassedTime;

/// @brief Field lurkerGhost, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lurkerGhost;

/// @brief Field wanderingGhost, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___wanderingGhost;

/// @brief Field animators, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Animator>>  ___animators;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [FormerlySerializedAs("rattlingSound")]
/// @brief Field hauntedSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___hauntedSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HauntedObject, ___rattle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___speed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___amount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___duration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___FBXprefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___TurnOffLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___TurnOffDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___initialPos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___passedTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___lightPassedTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___lurkerGhost) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___wanderingGhost) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___animators) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___audioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject, ___hauntedSound) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HauntedObject) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HauntedObject/<TurnOff>d__23
class CORDL_TYPE HauntedObject__TurnOff_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HauntedObject>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5951ac8, size 0xd4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::HauntedObject__TurnOff_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5951b9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5951ba4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5951bdc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5951ac4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HauntedObject> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HauntedObject>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HauntedObject>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59518b8, size 0x28, virtual false, abstract: false, final false
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
constexpr HauntedObject__TurnOff_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HauntedObject__TurnOff_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HauntedObject__TurnOff_d__23(HauntedObject__TurnOff_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HauntedObject__TurnOff_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HauntedObject__TurnOff_d__23(HauntedObject__TurnOff_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2303};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HauntedObject>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HauntedObject__TurnOff_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject__TurnOff_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject__TurnOff_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HauntedObject__TurnOff_d__23) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HauntedObject/<Shake>d__22
class CORDL_TYPE HauntedObject__Shake_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HauntedObject>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5951970, size 0x10c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::HauntedObject__Shake_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5951a7c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5951a84, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5951abc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x595196c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HauntedObject> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HauntedObject>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HauntedObject>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5951890, size 0x28, virtual false, abstract: false, final false
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
constexpr HauntedObject__Shake_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HauntedObject__Shake_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HauntedObject__Shake_d__22(HauntedObject__Shake_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HauntedObject__Shake_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HauntedObject__Shake_d__22(HauntedObject__Shake_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2302};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HauntedObject>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HauntedObject__Shake_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject__Shake_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HauntedObject__Shake_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HauntedObject__Shake_d__22) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
