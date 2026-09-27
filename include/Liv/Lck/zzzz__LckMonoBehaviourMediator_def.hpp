#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonoBehaviourMediator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckMonoBehaviourMediator)
namespace GlobalNamespace {
struct LckMonoBehaviourMediator_ApplicationLifecycleEventType;
}
namespace Liv::Lck {
class LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Liv::Lck {
class LckMonoBehaviourMediator;
}
namespace Liv::Lck {
class LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckMonoBehaviourMediator*);
MARK_REF_T(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckMonoBehaviourMediator*, "Liv.Lck", "LckMonoBehaviourMediator");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*, "Liv.Lck", "LckMonoBehaviourMediator/LckApplicationLifecycleEventDelegate");
// [DefaultExecutionOrder(-1000)]
// Dependencies UnityEngine.Component, UnityEngine.MonoBehaviour, UnityEngine.Object, UnityEngine.XR.InputDevice
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckMonoBehaviourMediator
class CORDL_TYPE LckMonoBehaviourMediator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ApplicationLifecycleEventType = ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType;

using LckApplicationLifecycleEventDelegate = ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate;

/// @brief Field OnApplicationLifecycleEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnApplicationLifecycleEvent, put=setStaticF_OnApplicationLifecycleEvent)) ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*  OnApplicationLifecycleEvent;

/// @brief Field _activeCoroutines, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeCoroutines, put=__cordl_internal_set__activeCoroutines)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  _activeCoroutines;

/// @brief Field _executionQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__executionQueue, put=setStaticF__executionQueue)) ::System::Collections::Generic::Queue_1<::System::Action*>*  _executionQueue;

/// @brief Field _hMDFound, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__hMDFound, put=__cordl_internal_set__hMDFound)) bool  _hMDFound;

/// @brief Field _hMDIdleTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__hMDIdleTime, put=__cordl_internal_set__hMDIdleTime)) float_t  _hMDIdleTime;

/// @brief Field _hMDIsIdle, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__hMDIsIdle, put=__cordl_internal_set__hMDIsIdle)) bool  _hMDIsIdle;

/// @brief Field _hMDWasMoving, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__hMDWasMoving, put=__cordl_internal_set__hMDWasMoving)) bool  _hMDWasMoving;

/// @brief Field _hmd, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityEngine::XR::InputDevice  _hmd;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Liv::Lck::LckMonoBehaviourMediator>  _instance;

/// @brief Method AddComponentToMediator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T AddComponentToMediator() ;

/// @brief Method Awake, addr 0x9ce50e4, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnqueueMainThreadAction, addr 0x9ce5cc8, size 0x144, virtual false, abstract: false, final false
inline void EnqueueMainThreadAction(::System::Action*  action) ;

/// @brief Method FindObjectsOfComponentType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline ::ArrayW<T> FindObjectsOfComponentType() ;

/// @brief Method HMDMountedOnHeadStateChange, addr 0x9ce53a8, size 0x334, virtual false, abstract: false, final false
inline void HMDMountedOnHeadStateChange() ;

static inline ::Liv::Lck::LckMonoBehaviourMediator* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x9ce5254, size 0x84, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pauseStatus) ;

/// @brief Method OnApplicationQuit, addr 0x9ce52d8, size 0x78, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x9ce5e0c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ProcessExectionQueue, addr 0x9ce56dc, size 0x1a0, virtual false, abstract: false, final false
static inline void ProcessExectionQueue() ;

/// @brief Method StartCoroutine, addr 0x9ce587c, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Coroutine* StartCoroutine(::StringW  coroutineName, ::System::Collections::IEnumerator*  routine) ;

/// @brief Method StartCoroutineInternal, addr 0x9ce58ec, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutineInternal(::StringW  coroutineName, ::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopAllActiveCoroutines, addr 0x9ce5bb0, size 0xbc, virtual false, abstract: false, final false
static inline void StopAllActiveCoroutines() ;

/// @brief Method StopAllCoroutinesInternal, addr 0x9ce5c6c, size 0x5c, virtual false, abstract: false, final false
inline void StopAllCoroutinesInternal() ;

/// @brief Method StopCoroutineByName, addr 0x9ce59ac, size 0xc4, virtual false, abstract: false, final false
static inline void StopCoroutineByName(::StringW  coroutineName) ;

/// @brief Method StopCoroutineInternal, addr 0x9ce5a70, size 0x140, virtual false, abstract: false, final false
inline void StopCoroutineInternal(::StringW  coroutineName) ;

/// @brief Method Update, addr 0x9ce5350, size 0x58, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>* const& __cordl_internal_get__activeCoroutines() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*& __cordl_internal_get__activeCoroutines() ;

constexpr bool const& __cordl_internal_get__hMDFound() const;

constexpr bool& __cordl_internal_get__hMDFound() ;

constexpr float_t const& __cordl_internal_get__hMDIdleTime() const;

constexpr float_t& __cordl_internal_get__hMDIdleTime() ;

constexpr bool const& __cordl_internal_get__hMDIsIdle() const;

constexpr bool& __cordl_internal_get__hMDIsIdle() ;

constexpr bool const& __cordl_internal_get__hMDWasMoving() const;

constexpr bool& __cordl_internal_get__hMDWasMoving() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get__hmd() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get__hmd() ;

constexpr void __cordl_internal_set__activeCoroutines(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  value) ;

constexpr void __cordl_internal_set__hMDFound(bool  value) ;

constexpr void __cordl_internal_set__hMDIdleTime(float_t  value) ;

constexpr void __cordl_internal_set__hMDIsIdle(bool  value) ;

constexpr void __cordl_internal_set__hMDWasMoving(bool  value) ;

constexpr void __cordl_internal_set__hmd(::UnityEngine::XR::InputDevice  value) ;

/// @brief Method .ctor, addr 0x9ce5e10, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnApplicationLifecycleEvent, addr 0x9ce4dc4, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnApplicationLifecycleEvent(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*  value) ;

static inline ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate* getStaticF_OnApplicationLifecycleEvent() ;

static inline ::System::Collections::Generic::Queue_1<::System::Action*>* getStaticF__executionQueue() ;

static inline ::UnityW<::Liv::Lck::LckMonoBehaviourMediator> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x9ce4f7c, size 0x168, virtual false, abstract: false, final false
static inline ::UnityW<::Liv::Lck::LckMonoBehaviourMediator> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method remove_OnApplicationLifecycleEvent, addr 0x9ce4ea0, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnApplicationLifecycleEvent(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*  value) ;

static inline void setStaticF_OnApplicationLifecycleEvent(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*  value) ;

static inline void setStaticF__executionQueue(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

static inline void setStaticF__instance(::UnityW<::Liv::Lck::LckMonoBehaviourMediator>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMonoBehaviourMediator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourMediator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMonoBehaviourMediator(LckMonoBehaviourMediator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourMediator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMonoBehaviourMediator(LckMonoBehaviourMediator const& ) = delete;

/// @brief Field DurationForHMDToBecomeIdle offset 0xffffffff size 0x4
static constexpr float_t  DurationForHMDToBecomeIdle{static_cast<float_t>(10.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24740};

/// @brief Field _hMDIdleTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____hMDIdleTime;

/// @brief Field _activeCoroutines, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  ____activeCoroutines;

/// @brief Field _hMDFound, offset: 0x30, size: 0x1, def value: None
 bool  ____hMDFound;

/// @brief Field _hMDWasMoving, offset: 0x31, size: 0x1, def value: None
 bool  ____hMDWasMoving;

/// @brief Field _hMDIsIdle, offset: 0x32, size: 0x1, def value: None
 bool  ____hMDIsIdle;

/// @brief Field _hmd, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ____hmd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckMonoBehaviourMediator, ____hMDIdleTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckMonoBehaviourMediator, ____activeCoroutines) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckMonoBehaviourMediator, ____hMDFound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckMonoBehaviourMediator, ____hMDWasMoving) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckMonoBehaviourMediator, ____hMDIsIdle) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckMonoBehaviourMediator, ____hmd) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckMonoBehaviourMediator) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck
// Dependencies System.MulticastDelegate
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckMonoBehaviourMediator/LckApplicationLifecycleEventDelegate
class CORDL_TYPE LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9ce5fe4, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  applicationLifecycleEventType, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9ce6068, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9ce5fd0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  applicationLifecycleEventType) ;

static inline ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ce5f30, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate(LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate(LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24739};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck
