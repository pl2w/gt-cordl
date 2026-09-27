#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraShaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraShaker)
namespace GlobalNamespace {
class CameraShaker__crRumble_d__22;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System {
class Action;
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
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraShaker;
}
namespace GlobalNamespace {
class CameraShaker__crRumble_d__22;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CameraShaker*);
MARK_REF_T(::GlobalNamespace::CameraShaker__crRumble_d__22*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraShaker*, "", "CameraShaker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraShaker__crRumble_d__22*, "", "CameraShaker/<crRumble>d__22");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraShaker
class CORDL_TYPE CameraShaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _crRumble_d__22 = ::GlobalNamespace::CameraShaker__crRumble_d__22;

/// @brief Field HaltRequested, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HaltRequested, put=setStaticF_HaltRequested)) ::System::Action*  HaltRequested;

/// @brief Field ShakeRequested, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ShakeRequested, put=setStaticF_ShakeRequested)) ::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*  ShakeRequested;

/// @brief Field duration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field freqRange, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_freqRange, put=__cordl_internal_set_freqRange)) ::UnityEngine::Vector2  freqRange;

/// @brief Field magnitude, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnitude, put=__cordl_internal_set_magnitude)) float_t  magnitude;

/// @brief Field rollOff, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_rollOff, put=__cordl_internal_set_rollOff)) bool  rollOff;

/// @brief Field rumbling, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_rumbling, put=__cordl_internal_set_rumbling)) bool  rumbling;

/// @brief Field stopTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_stopTime, put=__cordl_internal_set_stopTime)) float_t  stopTime;

/// @brief Method Halt, addr 0x55ec95c, size 0x64, virtual false, abstract: false, final false
static inline void Halt() ;

static inline ::GlobalNamespace::CameraShaker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x55ed1c8, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x55ed0f8, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x55ece3c, size 0xd0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Shake, addr 0x55eccf8, size 0x9c, virtual false, abstract: false, final false
static inline void Shake(float_t  duration, float_t  magnitude) ;

/// @brief Method Shake, addr 0x55ecd94, size 0xa8, virtual false, abstract: false, final false
static inline void Shake(float_t  duration, float_t  magnitude, ::UnityEngine::Vector2  freqRange) ;

/// @brief Method Shake, addr 0x55ec7e4, size 0xac, virtual false, abstract: false, final false
static inline void Shake(float_t  duration, float_t  magnitude, ::UnityEngine::Vector2  freqRange, bool  rollOffOverDuration) ;

/// @brief Method ShakeInProximity, addr 0x55ec890, size 0xcc, virtual false, abstract: false, final false
static inline void ShakeInProximity(float_t  duration, float_t  magnitude, ::UnityEngine::Vector2  freqRange, bool  rollOffOverDuration, ::UnityEngine::Transform*  source, float_t  distance) ;

/// @brief Method _HaltRequested, addr 0x55ed0dc, size 0x1c, virtual false, abstract: false, final false
inline void _HaltRequested() ;

/// @brief Method _ShakeRequested, addr 0x55ecf0c, size 0x164, virtual false, abstract: false, final false
inline void _ShakeRequested(float_t  _duration, float_t  _magnitude, ::UnityEngine::Vector2  _freqRange, bool  _rollOff, ::UnityEngine::Transform*  source, float_t  distance) ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_freqRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_freqRange() ;

constexpr float_t const& __cordl_internal_get_magnitude() const;

constexpr float_t& __cordl_internal_get_magnitude() ;

constexpr bool const& __cordl_internal_get_rollOff() const;

constexpr bool& __cordl_internal_get_rollOff() ;

constexpr bool const& __cordl_internal_get_rumbling() const;

constexpr bool& __cordl_internal_get_rumbling() ;

constexpr float_t const& __cordl_internal_get_stopTime() const;

constexpr float_t& __cordl_internal_get_stopTime() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_freqRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_magnitude(float_t  value) ;

constexpr void __cordl_internal_set_rollOff(bool  value) ;

constexpr void __cordl_internal_set_rumbling(bool  value) ;

constexpr void __cordl_internal_set_stopTime(float_t  value) ;

/// @brief Method .ctor, addr 0x55ed2c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_HaltRequested, addr 0x55ecb80, size 0xbc, virtual false, abstract: false, final false
static inline void add_HaltRequested(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ShakeRequested, addr 0x55ec9e8, size 0xcc, virtual false, abstract: false, final false
static inline void add_ShakeRequested(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*  value) ;

/// [IteratorStateMachine(typeof(CameraShaker::<crRumble>d__22))]
/// @brief Method crRumble, addr 0x55ed070, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* crRumble() ;

static inline ::System::Action* getStaticF_HaltRequested() ;

static inline ::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>* getStaticF_ShakeRequested() ;

/// [CompilerGenerated]
/// @brief Method remove_HaltRequested, addr 0x55ecc3c, size 0xbc, virtual false, abstract: false, final false
static inline void remove_HaltRequested(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ShakeRequested, addr 0x55ecab4, size 0xcc, virtual false, abstract: false, final false
static inline void remove_ShakeRequested(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*  value) ;

static inline void setStaticF_HaltRequested(::System::Action*  value) ;

static inline void setStaticF_ShakeRequested(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraShaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraShaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraShaker(CameraShaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraShaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraShaker(CameraShaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{56};

/// @brief Field rumbling, offset: 0x20, size: 0x1, def value: None
 bool  ___rumbling;

/// @brief Field stopTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___stopTime;

/// @brief Field rollOff, offset: 0x28, size: 0x1, def value: None
 bool  ___rollOff;

/// @brief Field magnitude, offset: 0x2c, size: 0x4, def value: None
 float_t  ___magnitude;

/// @brief Field duration, offset: 0x30, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field freqRange, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___freqRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraShaker, ___rumbling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShaker, ___stopTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShaker, ___rollOff) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShaker, ___magnitude) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShaker, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShaker, ___freqRange) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraShaker) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraShaker/<crRumble>d__22
class CORDL_TYPE CameraShaker__crRumble_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CameraShaker>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55ed2cc, size 0x16c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CameraShaker__crRumble_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55ed438, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55ed440, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55ed478, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55ed2c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CameraShaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CameraShaker>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CameraShaker>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55ed298, size 0x28, virtual false, abstract: false, final false
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
constexpr CameraShaker__crRumble_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraShaker__crRumble_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraShaker__crRumble_d__22(CameraShaker__crRumble_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraShaker__crRumble_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraShaker__crRumble_d__22(CameraShaker__crRumble_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{55};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CameraShaker>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraShaker__crRumble_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShaker__crRumble_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShaker__crRumble_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraShaker__crRumble_d__22) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
