#pragma once
// IWYU pragma private; include "GlobalNamespace/ChestHeartbeat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChestHeartbeat)
namespace GlobalNamespace {
class ChestHeartbeat__HeartBeat_d__13;
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
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ChestHeartbeat;
}
namespace GlobalNamespace {
class ChestHeartbeat__HeartBeat_d__13;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChestHeartbeat*);
MARK_REF_T(::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChestHeartbeat*, "", "ChestHeartbeat");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*, "", "ChestHeartbeat/<HeartBeat>d__13");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChestHeartbeat
class CORDL_TYPE ChestHeartbeat : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _HeartBeat_d__13 = ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13;

/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field currentTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentTime, put=__cordl_internal_set_currentTime)) float_t  currentTime;

/// @brief Field deltaTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

/// @brief Field endtime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_endtime, put=__cordl_internal_set_endtime)) float_t  endtime;

/// @brief Field heartMaxSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_heartMaxSize, put=__cordl_internal_set_heartMaxSize)) float_t  heartMaxSize;

/// @brief Field heartMinSize, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_heartMinSize, put=__cordl_internal_set_heartMinSize)) float_t  heartMinSize;

/// @brief Field lastShot, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastShot, put=__cordl_internal_set_lastShot)) int32_t  lastShot;

/// @brief Field maxTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTime, put=__cordl_internal_set_maxTime)) float_t  maxTime;

/// @brief Field millisMin, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_millisMin, put=__cordl_internal_set_millisMin)) int32_t  millisMin;

/// @brief Field millisToWait, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_millisToWait, put=__cordl_internal_set_millisToWait)) int32_t  millisToWait;

/// @brief Field minTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTime, put=__cordl_internal_set_minTime)) float_t  minTime;

/// @brief Field scaleTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleTransform, put=__cordl_internal_set_scaleTransform)) ::UnityW<::UnityEngine::Transform>  scaleTransform;

/// [IteratorStateMachine(typeof(ChestHeartbeat::<HeartBeat>d__13))]
/// @brief Method HeartBeat, addr 0x57e7b00, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HeartBeat() ;

static inline ::GlobalNamespace::ChestHeartbeat* New_ctor() ;

/// @brief Method Update, addr 0x57e78d0, size 0x230, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_currentTime() const;

constexpr float_t& __cordl_internal_get_currentTime() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr float_t const& __cordl_internal_get_endtime() const;

constexpr float_t& __cordl_internal_get_endtime() ;

constexpr float_t const& __cordl_internal_get_heartMaxSize() const;

constexpr float_t& __cordl_internal_get_heartMaxSize() ;

constexpr float_t const& __cordl_internal_get_heartMinSize() const;

constexpr float_t& __cordl_internal_get_heartMinSize() ;

constexpr int32_t const& __cordl_internal_get_lastShot() const;

constexpr int32_t& __cordl_internal_get_lastShot() ;

constexpr float_t const& __cordl_internal_get_maxTime() const;

constexpr float_t& __cordl_internal_get_maxTime() ;

constexpr int32_t const& __cordl_internal_get_millisMin() const;

constexpr int32_t& __cordl_internal_get_millisMin() ;

constexpr int32_t const& __cordl_internal_get_millisToWait() const;

constexpr int32_t& __cordl_internal_get_millisToWait() ;

constexpr float_t const& __cordl_internal_get_minTime() const;

constexpr float_t& __cordl_internal_get_minTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleTransform() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentTime(float_t  value) ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_endtime(float_t  value) ;

constexpr void __cordl_internal_set_heartMaxSize(float_t  value) ;

constexpr void __cordl_internal_set_heartMinSize(float_t  value) ;

constexpr void __cordl_internal_set_lastShot(int32_t  value) ;

constexpr void __cordl_internal_set_maxTime(float_t  value) ;

constexpr void __cordl_internal_set_millisMin(int32_t  value) ;

constexpr void __cordl_internal_set_millisToWait(int32_t  value) ;

constexpr void __cordl_internal_set_minTime(float_t  value) ;

constexpr void __cordl_internal_set_scaleTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x57e7b94, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChestHeartbeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChestHeartbeat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChestHeartbeat(ChestHeartbeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChestHeartbeat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChestHeartbeat(ChestHeartbeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1663};

/// @brief Field millisToWait, offset: 0x20, size: 0x4, def value: None
 int32_t  ___millisToWait;

/// @brief Field millisMin, offset: 0x24, size: 0x4, def value: None
 int32_t  ___millisMin;

/// @brief Field lastShot, offset: 0x28, size: 0x4, def value: None
 int32_t  ___lastShot;

/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field scaleTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___scaleTransform;

/// @brief Field deltaTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field heartMinSize, offset: 0x44, size: 0x4, def value: None
 float_t  ___heartMinSize;

/// @brief Field heartMaxSize, offset: 0x48, size: 0x4, def value: None
 float_t  ___heartMaxSize;

/// @brief Field minTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ___minTime;

/// @brief Field maxTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxTime;

/// @brief Field endtime, offset: 0x54, size: 0x4, def value: None
 float_t  ___endtime;

/// @brief Field currentTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___currentTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___millisToWait) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___millisMin) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___lastShot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___scaleTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___deltaTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___heartMinSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___heartMaxSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___minTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___maxTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___endtime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat, ___currentTime) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChestHeartbeat) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChestHeartbeat/<HeartBeat>d__13
class CORDL_TYPE ChestHeartbeat__HeartBeat_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ChestHeartbeat>  __4__this;

/// @brief Field <startTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57e7bbc, size 0x314, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57e7ed0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57e7ed8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57e7f10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57e7bb8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ChestHeartbeat> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ChestHeartbeat>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ChestHeartbeat>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57e7b6c, size 0x28, virtual false, abstract: false, final false
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
constexpr ChestHeartbeat__HeartBeat_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChestHeartbeat__HeartBeat_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChestHeartbeat__HeartBeat_d__13(ChestHeartbeat__HeartBeat_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChestHeartbeat__HeartBeat_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChestHeartbeat__HeartBeat_d__13(ChestHeartbeat__HeartBeat_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1662};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ChestHeartbeat>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13, ____startTime_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
