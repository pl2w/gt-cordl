#pragma once
// IWYU pragma private; include "UnityChan/IdleChanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IdleChanger)
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
namespace UnityChan {
class IdleChanger__RandomChange_d__12;
}
namespace UnityEngine::InputSystem {
class Keyboard;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityChan {
class IdleChanger;
}
namespace UnityChan {
class IdleChanger__RandomChange_d__12;
}
// Write type traits
MARK_REF_T(::UnityChan::IdleChanger*);
MARK_REF_T(::UnityChan::IdleChanger__RandomChange_d__12*);
DEFINE_IL2CPP_CLASS(::UnityChan::IdleChanger*, "UnityChan", "IdleChanger");
DEFINE_IL2CPP_CLASS(::UnityChan::IdleChanger__RandomChange_d__12*, "UnityChan", "IdleChanger/<RandomChange>d__12");
// Dependencies UnityEngine.AnimatorStateInfo, UnityEngine.MonoBehaviour
namespace UnityChan {
// Is value type: false
// CS Name: UnityChan.IdleChanger
class CORDL_TYPE IdleChanger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RandomChange_d__12 = ::UnityChan::IdleChanger__RandomChange_d__12;

/// @brief Field UnityChanA, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnityChanA, put=__cordl_internal_set_UnityChanA)) ::UnityW<::UnityEngine::Animator>  UnityChanA;

/// @brief Field UnityChanB, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnityChanB, put=__cordl_internal_set_UnityChanB)) ::UnityW<::UnityEngine::Animator>  UnityChanB;

/// @brief Field _interval, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__interval, put=__cordl_internal_set__interval)) float_t  _interval;

/// @brief Field _random, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__random, put=__cordl_internal_set__random)) bool  _random;

/// @brief Field _threshold, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold, put=__cordl_internal_set__threshold)) float_t  _threshold;

/// @brief Field currentState, offset 0x20, size 0x24 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::UnityEngine::AnimatorStateInfo  currentState;

/// @brief Field isGUI, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGUI, put=__cordl_internal_set_isGUI)) bool  isGUI;

/// @brief Field kb, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_kb, put=__cordl_internal_set_kb)) ::UnityEngine::InputSystem::Keyboard*  kb;

/// @brief Field previousState, offset 0x44, size 0x24 
 __declspec(property(get=__cordl_internal_get_previousState, put=__cordl_internal_set_previousState)) ::UnityEngine::AnimatorStateInfo  previousState;

static inline ::UnityChan::IdleChanger* New_ctor() ;

/// @brief Method OnGUI, addr 0x5e0ffbc, size 0x1d0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// [IteratorStateMachine(typeof(UnityChan.IdleChanger::<RandomChange>d__12))]
/// @brief Method RandomChange, addr 0x5e1018c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RandomChange() ;

/// @brief Method Start, addr 0x5e0fc68, size 0xd4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5e0fd3c, size 0x280, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_UnityChanA() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_UnityChanA() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_UnityChanB() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_UnityChanB() ;

constexpr float_t const& __cordl_internal_get__interval() const;

constexpr float_t& __cordl_internal_get__interval() ;

constexpr bool const& __cordl_internal_get__random() const;

constexpr bool& __cordl_internal_get__random() ;

constexpr float_t const& __cordl_internal_get__threshold() const;

constexpr float_t& __cordl_internal_get__threshold() ;

constexpr ::UnityEngine::AnimatorStateInfo const& __cordl_internal_get_currentState() const;

constexpr ::UnityEngine::AnimatorStateInfo& __cordl_internal_get_currentState() ;

constexpr bool const& __cordl_internal_get_isGUI() const;

constexpr bool& __cordl_internal_get_isGUI() ;

constexpr ::UnityEngine::InputSystem::Keyboard* const& __cordl_internal_get_kb() const;

constexpr ::UnityEngine::InputSystem::Keyboard*& __cordl_internal_get_kb() ;

constexpr ::UnityEngine::AnimatorStateInfo const& __cordl_internal_get_previousState() const;

constexpr ::UnityEngine::AnimatorStateInfo& __cordl_internal_get_previousState() ;

constexpr void __cordl_internal_set_UnityChanA(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_UnityChanB(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__interval(float_t  value) ;

constexpr void __cordl_internal_set__random(bool  value) ;

constexpr void __cordl_internal_set__threshold(float_t  value) ;

constexpr void __cordl_internal_set_currentState(::UnityEngine::AnimatorStateInfo  value) ;

constexpr void __cordl_internal_set_isGUI(bool  value) ;

constexpr void __cordl_internal_set_kb(::UnityEngine::InputSystem::Keyboard*  value) ;

constexpr void __cordl_internal_set_previousState(::UnityEngine::AnimatorStateInfo  value) ;

/// @brief Method .ctor, addr 0x5e10220, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IdleChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdleChanger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IdleChanger(IdleChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdleChanger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdleChanger(IdleChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5160};

/// @brief Field currentState, offset: 0x20, size: 0x24, def value: None
 ::UnityEngine::AnimatorStateInfo  ___currentState;

/// @brief Field previousState, offset: 0x44, size: 0x24, def value: None
 ::UnityEngine::AnimatorStateInfo  ___previousState;

/// @brief Field _random, offset: 0x68, size: 0x1, def value: None
 bool  ____random;

/// @brief Field _threshold, offset: 0x6c, size: 0x4, def value: None
 float_t  ____threshold;

/// @brief Field _interval, offset: 0x70, size: 0x4, def value: None
 float_t  ____interval;

/// @brief Field isGUI, offset: 0x74, size: 0x1, def value: None
 bool  ___isGUI;

/// @brief Field UnityChanA, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___UnityChanA;

/// @brief Field UnityChanB, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___UnityChanB;

/// @brief Field kb, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Keyboard*  ___kb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityChan::IdleChanger, ___currentState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ___previousState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ____random) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ____threshold) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ____interval) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ___isGUI) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ___UnityChanA) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ___UnityChanB) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger, ___kb) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityChan::IdleChanger) == 0x90, "Size mismatch!");

} // namespace end def UnityChan
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityChan {
// Is value type: false
// CS Name: UnityChan.IdleChanger/<RandomChange>d__12
class CORDL_TYPE IdleChanger__RandomChange_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityChan::IdleChanger>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e10240, size 0x138, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityChan::IdleChanger__RandomChange_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e10378, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e10380, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e103b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e1023c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityChan::IdleChanger> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityChan::IdleChanger>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityChan::IdleChanger>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e101f8, size 0x28, virtual false, abstract: false, final false
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
constexpr IdleChanger__RandomChange_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdleChanger__RandomChange_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IdleChanger__RandomChange_d__12(IdleChanger__RandomChange_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdleChanger__RandomChange_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdleChanger__RandomChange_d__12(IdleChanger__RandomChange_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5159};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityChan::IdleChanger>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityChan::IdleChanger__RandomChange_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger__RandomChange_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityChan::IdleChanger__RandomChange_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityChan::IdleChanger__RandomChange_d__12) == 0x28, "Size mismatch!");

} // namespace end def UnityChan
