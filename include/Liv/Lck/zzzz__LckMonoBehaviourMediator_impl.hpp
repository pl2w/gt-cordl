#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonoBehaviourMediator.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckMonoBehaviourMediator_def.hpp"
#include "Liv/Lck/zzzz__LckMonoBehaviourMediator_ApplicationLifecycleEventType_def.hpp"
#include "Liv/Lck/zzzz__LckMonoBehaviourMediator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.add_OnApplicationLifecycleEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*)>(&::Liv::Lck::LckMonoBehaviourMediator::add_OnApplicationLifecycleEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ce4dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"add_OnApplicationLifecycleEvent", {}, {::i2c::type_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.remove_OnApplicationLifecycleEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*)>(&::Liv::Lck::LckMonoBehaviourMediator::remove_OnApplicationLifecycleEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ce4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"remove_OnApplicationLifecycleEvent", {}, {::i2c::type_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::LckMonoBehaviourMediator> (*)()>(&::Liv::Lck::LckMonoBehaviourMediator::get_Instance)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9ce4f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)()>(&::Liv::Lck::LckMonoBehaviourMediator::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9ce50e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)(bool)>(&::Liv::Lck::LckMonoBehaviourMediator::OnApplicationPause)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ce5254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)()>(&::Liv::Lck::LckMonoBehaviourMediator::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ce52d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)()>(&::Liv::Lck::LckMonoBehaviourMediator::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9ce5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.HMDMountedOnHeadStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)()>(&::Liv::Lck::LckMonoBehaviourMediator::HMDMountedOnHeadStateChange)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x9ce53a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"HMDMountedOnHeadStateChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.ProcessExectionQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LckMonoBehaviourMediator::ProcessExectionQueue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9ce56dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"ProcessExectionQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.StartCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (*)(::StringW, ::System::Collections::IEnumerator*)>(&::Liv::Lck::LckMonoBehaviourMediator::StartCoroutine)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9ce587c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StartCoroutine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.StopCoroutineByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Liv::Lck::LckMonoBehaviourMediator::StopCoroutineByName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9ce59ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopCoroutineByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.StopAllActiveCoroutines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LckMonoBehaviourMediator::StopAllActiveCoroutines)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9ce5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopAllActiveCoroutines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.EnqueueMainThreadAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)(::System::Action*)>(&::Liv::Lck::LckMonoBehaviourMediator::EnqueueMainThreadAction)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9ce5cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"EnqueueMainThreadAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.StartCoroutineInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::Liv::Lck::LckMonoBehaviourMediator::*)(::StringW, ::System::Collections::IEnumerator*)>(&::Liv::Lck::LckMonoBehaviourMediator::StartCoroutineInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ce58ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StartCoroutineInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.StopCoroutineInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)(::StringW)>(&::Liv::Lck::LckMonoBehaviourMediator::StopCoroutineInternal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9ce5a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopCoroutineInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.StopAllCoroutinesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)()>(&::Liv::Lck::LckMonoBehaviourMediator::StopAllCoroutinesInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ce5c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopAllCoroutinesInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)()>(&::Liv::Lck::LckMonoBehaviourMediator::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ce5e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator::*)()>(&::Liv::Lck::LckMonoBehaviourMediator::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ce5e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDIdleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDIdleTime;
}
constexpr float_t const& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDIdleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDIdleTime;
}
constexpr void Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_set__hMDIdleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hMDIdleTime = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__activeCoroutines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCoroutines;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>* const& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__activeCoroutines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCoroutines;
}
constexpr void Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_set__activeCoroutines(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeCoroutines = value;
}
constexpr bool& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDFound;
}
constexpr bool const& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDFound;
}
constexpr void Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_set__hMDFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hMDFound = value;
}
constexpr bool& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDWasMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDWasMoving;
}
constexpr bool const& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDWasMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDWasMoving;
}
constexpr void Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_set__hMDWasMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hMDWasMoving = value;
}
constexpr bool& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDIsIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDIsIdle;
}
constexpr bool const& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hMDIsIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hMDIsIdle;
}
constexpr void Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_set__hMDIsIdle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hMDIsIdle = value;
}
constexpr ::UnityEngine::XR::InputDevice& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityEngine::XR::InputDevice const& Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Liv::Lck::LckMonoBehaviourMediator::__cordl_internal_set__hmd(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
inline void Liv::Lck::LckMonoBehaviourMediator::setStaticF__executionQueue(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "_executionQueue", ::Liv::Lck::LckMonoBehaviourMediator*>(std::forward<::System::Collections::Generic::Queue_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::System::Action*>* Liv::Lck::LckMonoBehaviourMediator::getStaticF__executionQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::System::Action*>*, "_executionQueue", ::Liv::Lck::LckMonoBehaviourMediator*>();
}
inline void Liv::Lck::LckMonoBehaviourMediator::setStaticF__instance(::UnityW<::Liv::Lck::LckMonoBehaviourMediator>  value)  {
::cordl_internals::setStaticField<::UnityW<::Liv::Lck::LckMonoBehaviourMediator>, "_instance", ::Liv::Lck::LckMonoBehaviourMediator*>(std::forward<::UnityW<::Liv::Lck::LckMonoBehaviourMediator>>(value));
}
inline ::UnityW<::Liv::Lck::LckMonoBehaviourMediator> Liv::Lck::LckMonoBehaviourMediator::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Liv::Lck::LckMonoBehaviourMediator>, "_instance", ::Liv::Lck::LckMonoBehaviourMediator*>();
}
inline void Liv::Lck::LckMonoBehaviourMediator::setStaticF_OnApplicationLifecycleEvent(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*, "OnApplicationLifecycleEvent", ::Liv::Lck::LckMonoBehaviourMediator*>(std::forward<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(value));
}
inline ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate* Liv::Lck::LckMonoBehaviourMediator::getStaticF_OnApplicationLifecycleEvent()  {
return ::cordl_internals::getStaticField<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*, "OnApplicationLifecycleEvent", ::Liv::Lck::LckMonoBehaviourMediator*>();
}
inline void Liv::Lck::LckMonoBehaviourMediator::add_OnApplicationLifecycleEvent(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"add_OnApplicationLifecycleEvent", {}, {::i2c::type_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMonoBehaviourMediator::remove_OnApplicationLifecycleEvent(::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"remove_OnApplicationLifecycleEvent", {}, {::i2c::type_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::Liv::Lck::LckMonoBehaviourMediator> Liv::Lck::LckMonoBehaviourMediator::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::LckMonoBehaviourMediator>>(nullptr, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::OnApplicationPause(bool  pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline void Liv::Lck::LckMonoBehaviourMediator::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::HMDMountedOnHeadStateChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"HMDMountedOnHeadStateChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::ProcessExectionQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"ProcessExectionQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::ArrayW<T> Liv::Lck::LckMonoBehaviourMediator::FindObjectsOfComponentType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                    {"FindObjectsOfComponentType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Liv::Lck::LckMonoBehaviourMediator::AddComponentToMediator()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                    {"AddComponentToMediator", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline ::UnityEngine::Coroutine* Liv::Lck::LckMonoBehaviourMediator::StartCoroutine(::StringW  coroutineName, ::System::Collections::IEnumerator*  routine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StartCoroutine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(nullptr, ___internal_method, coroutineName, routine);
}
inline void Liv::Lck::LckMonoBehaviourMediator::StopCoroutineByName(::StringW  coroutineName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopCoroutineByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, coroutineName);
}
inline void Liv::Lck::LckMonoBehaviourMediator::StopAllActiveCoroutines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopAllActiveCoroutines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::EnqueueMainThreadAction(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"EnqueueMainThreadAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::UnityEngine::Coroutine* Liv::Lck::LckMonoBehaviourMediator::StartCoroutineInternal(::StringW  coroutineName, ::System::Collections::IEnumerator*  routine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StartCoroutineInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, coroutineName, routine);
}
inline void Liv::Lck::LckMonoBehaviourMediator::StopCoroutineInternal(::StringW  coroutineName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopCoroutineInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coroutineName);
}
inline void Liv::Lck::LckMonoBehaviourMediator::StopAllCoroutinesInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"StopAllCoroutinesInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonoBehaviourMediator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckMonoBehaviourMediator* Liv::Lck::LckMonoBehaviourMediator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckMonoBehaviourMediator*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckMonoBehaviourMediator::LckMonoBehaviourMediator()   {
}
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ce5f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::*)(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType)>(&::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ce5fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::*)(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ce5fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ce6068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::Invoke(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  applicationLifecycleEventType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, applicationLifecycleEventType);
}
inline ::System::IAsyncResult* Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::BeginInvoke(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  applicationLifecycleEventType, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, applicationLifecycleEventType, callback, object);
}
inline void Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate* Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate::LckMonoBehaviourMediator_LckApplicationLifecycleEventDelegate()   {
}
