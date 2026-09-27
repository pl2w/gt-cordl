#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenWatcherEyes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HalloweenWatcherEyes)
namespace GlobalNamespace {
class HalloweenWatcherEyes__CheckIfNearPlayer_d__13;
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
namespace GlobalNamespace {
class HalloweenWatcherEyes;
}
namespace GlobalNamespace {
class HalloweenWatcherEyes__CheckIfNearPlayer_d__13;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HalloweenWatcherEyes*);
MARK_REF_T(::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HalloweenWatcherEyes*, "", "HalloweenWatcherEyes");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*, "", "HalloweenWatcherEyes/<CheckIfNearPlayer>d__13");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HalloweenWatcherEyes
class CORDL_TYPE HalloweenWatcherEyes : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CheckIfNearPlayer_d__13 = ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13;

/// @brief Field durationToBeNormalWhenPlayerLooks, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_durationToBeNormalWhenPlayerLooks, put=__cordl_internal_set_durationToBeNormalWhenPlayerLooks)) float_t  durationToBeNormalWhenPlayerLooks;

/// @brief Field leftEye, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftEye, put=__cordl_internal_set_leftEye)) ::UnityW<::UnityEngine::GameObject>  leftEye;

/// @brief Field lerpDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpDuration, put=__cordl_internal_set_lerpDuration)) float_t  lerpDuration;

/// @brief Field lerpValue, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field playersViewCenterAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_playersViewCenterAngle, put=__cordl_internal_set_playersViewCenterAngle)) float_t  playersViewCenterAngle;

/// @brief Field playersViewCenterCosAngle, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_playersViewCenterCosAngle, put=__cordl_internal_set_playersViewCenterCosAngle)) float_t  playersViewCenterCosAngle;

/// @brief Field pretendingToBeNormalUntilTimestamp, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_pretendingToBeNormalUntilTimestamp, put=__cordl_internal_set_pretendingToBeNormalUntilTimestamp)) float_t  pretendingToBeNormalUntilTimestamp;

/// @brief Field rightEye, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightEye, put=__cordl_internal_set_rightEye)) ::UnityW<::UnityEngine::GameObject>  rightEye;

/// @brief Field timeBetweenUpdates, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBetweenUpdates, put=__cordl_internal_set_timeBetweenUpdates)) float_t  timeBetweenUpdates;

/// @brief Field watchMaxAngle, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchMaxAngle, put=__cordl_internal_set_watchMaxAngle)) float_t  watchMaxAngle;

/// @brief Field watchMinCosAngle, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchMinCosAngle, put=__cordl_internal_set_watchMinCosAngle)) float_t  watchMinCosAngle;

/// @brief Field watchRange, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchRange, put=__cordl_internal_set_watchRange)) float_t  watchRange;

/// [IteratorStateMachine(typeof(HalloweenWatcherEyes::<CheckIfNearPlayer>d__13))]
/// @brief Method CheckIfNearPlayer, addr 0x5a131a0, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CheckIfNearPlayer(float_t  initialSleep) ;

/// @brief Method LookNormal, addr 0x5a13644, size 0xd4, virtual false, abstract: false, final false
inline void LookNormal() ;

static inline ::GlobalNamespace::HalloweenWatcherEyes* New_ctor() ;

/// @brief Method Start, addr 0x5a13128, size 0x78, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5a13244, size 0x400, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_durationToBeNormalWhenPlayerLooks() const;

constexpr float_t& __cordl_internal_get_durationToBeNormalWhenPlayerLooks() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftEye() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftEye() ;

constexpr float_t const& __cordl_internal_get_lerpDuration() const;

constexpr float_t& __cordl_internal_get_lerpDuration() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr float_t const& __cordl_internal_get_playersViewCenterAngle() const;

constexpr float_t& __cordl_internal_get_playersViewCenterAngle() ;

constexpr float_t const& __cordl_internal_get_playersViewCenterCosAngle() const;

constexpr float_t& __cordl_internal_get_playersViewCenterCosAngle() ;

constexpr float_t const& __cordl_internal_get_pretendingToBeNormalUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_pretendingToBeNormalUntilTimestamp() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightEye() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightEye() ;

constexpr float_t const& __cordl_internal_get_timeBetweenUpdates() const;

constexpr float_t& __cordl_internal_get_timeBetweenUpdates() ;

constexpr float_t const& __cordl_internal_get_watchMaxAngle() const;

constexpr float_t& __cordl_internal_get_watchMaxAngle() ;

constexpr float_t const& __cordl_internal_get_watchMinCosAngle() const;

constexpr float_t& __cordl_internal_get_watchMinCosAngle() ;

constexpr float_t const& __cordl_internal_get_watchRange() const;

constexpr float_t& __cordl_internal_get_watchRange() ;

constexpr void __cordl_internal_set_durationToBeNormalWhenPlayerLooks(float_t  value) ;

constexpr void __cordl_internal_set_leftEye(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lerpDuration(float_t  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_playersViewCenterAngle(float_t  value) ;

constexpr void __cordl_internal_set_playersViewCenterCosAngle(float_t  value) ;

constexpr void __cordl_internal_set_pretendingToBeNormalUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_rightEye(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_timeBetweenUpdates(float_t  value) ;

constexpr void __cordl_internal_set_watchMaxAngle(float_t  value) ;

constexpr void __cordl_internal_set_watchMinCosAngle(float_t  value) ;

constexpr void __cordl_internal_set_watchRange(float_t  value) ;

/// @brief Method .ctor, addr 0x5a13718, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HalloweenWatcherEyes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HalloweenWatcherEyes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HalloweenWatcherEyes(HalloweenWatcherEyes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HalloweenWatcherEyes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HalloweenWatcherEyes(HalloweenWatcherEyes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2788};

/// @brief Field timeBetweenUpdates, offset: 0x20, size: 0x4, def value: None
 float_t  ___timeBetweenUpdates;

/// @brief Field watchRange, offset: 0x24, size: 0x4, def value: None
 float_t  ___watchRange;

/// @brief Field watchMaxAngle, offset: 0x28, size: 0x4, def value: None
 float_t  ___watchMaxAngle;

/// @brief Field lerpDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___lerpDuration;

/// @brief Field playersViewCenterAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ___playersViewCenterAngle;

/// @brief Field durationToBeNormalWhenPlayerLooks, offset: 0x34, size: 0x4, def value: None
 float_t  ___durationToBeNormalWhenPlayerLooks;

/// @brief Field leftEye, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftEye;

/// @brief Field rightEye, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightEye;

/// @brief Field playersViewCenterCosAngle, offset: 0x48, size: 0x4, def value: None
 float_t  ___playersViewCenterCosAngle;

/// @brief Field watchMinCosAngle, offset: 0x4c, size: 0x4, def value: None
 float_t  ___watchMinCosAngle;

/// @brief Field pretendingToBeNormalUntilTimestamp, offset: 0x50, size: 0x4, def value: None
 float_t  ___pretendingToBeNormalUntilTimestamp;

/// @brief Field lerpValue, offset: 0x54, size: 0x4, def value: None
 float_t  ___lerpValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___timeBetweenUpdates) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___watchRange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___watchMaxAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___lerpDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___playersViewCenterAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___durationToBeNormalWhenPlayerLooks) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___leftEye) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___rightEye) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___playersViewCenterCosAngle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___watchMinCosAngle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___pretendingToBeNormalUntilTimestamp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes, ___lerpValue) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HalloweenWatcherEyes) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HalloweenWatcherEyes/<CheckIfNearPlayer>d__13
class CORDL_TYPE HalloweenWatcherEyes__CheckIfNearPlayer_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HalloweenWatcherEyes>  __4__this;

/// @brief Field initialSleep, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialSleep, put=__cordl_internal_set_initialSleep)) float_t  initialSleep;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a13740, size 0x1f4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a13934, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a1393c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a13974, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a1373c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HalloweenWatcherEyes> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HalloweenWatcherEyes>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_initialSleep() const;

constexpr float_t& __cordl_internal_get_initialSleep() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HalloweenWatcherEyes>  value) ;

constexpr void __cordl_internal_set_initialSleep(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a1321c, size 0x28, virtual false, abstract: false, final false
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
constexpr HalloweenWatcherEyes__CheckIfNearPlayer_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HalloweenWatcherEyes__CheckIfNearPlayer_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HalloweenWatcherEyes__CheckIfNearPlayer_d__13(HalloweenWatcherEyes__CheckIfNearPlayer_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HalloweenWatcherEyes__CheckIfNearPlayer_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HalloweenWatcherEyes__CheckIfNearPlayer_d__13(HalloweenWatcherEyes__CheckIfNearPlayer_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2787};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field initialSleep, offset: 0x20, size: 0x4, def value: None
 float_t  ___initialSleep;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HalloweenWatcherEyes>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13, ___initialSleep) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
