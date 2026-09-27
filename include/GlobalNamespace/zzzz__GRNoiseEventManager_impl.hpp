#pragma once
// IWYU pragma private; include "GlobalNamespace/GRNoiseEventManager.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GRNoiseEventManager_def.hpp"
#include "GlobalNamespace/zzzz__GameNoiseEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNoiseEventManager::*)()>(&::GlobalNamespace::GRNoiseEventManager::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x589f158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNoiseEventManager::*)()>(&::GlobalNamespace::GRNoiseEventManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNoiseEventManager::*)()>(&::GlobalNamespace::GRNoiseEventManager::Tick)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x589f1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.FindUnusedEventEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRNoiseEventManager::*)()>(&::GlobalNamespace::GRNoiseEventManager::FindUnusedEventEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"FindUnusedEventEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.AddNoiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNoiseEventManager::*)(::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GRNoiseEventManager::AddNoiseEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x589f45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"AddNoiseEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.GetNoiseEventsInRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>* (::GlobalNamespace::GRNoiseEventManager::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GRNoiseEventManager::GetNoiseEventsInRadius)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x589f564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"GetNoiseEventsInRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.GetMostRecentNoiseEventInRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRNoiseEventManager::*)(::UnityEngine::Vector3, float_t, ::by_ref<::GlobalNamespace::GameNoiseEvent>)>(&::GlobalNamespace::GRNoiseEventManager::GetMostRecentNoiseEventInRadius)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x589f7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"GetMostRecentNoiseEventInRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameNoiseEvent>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.RenderDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNoiseEventManager::*)()>(&::GlobalNamespace::GRNoiseEventManager::RenderDebug)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x589f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"RenderDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager.RemoveExpiredEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNoiseEventManager::*)()>(&::GlobalNamespace::GRNoiseEventManager::RemoveExpiredEvents)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x589f22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"RemoveExpiredEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNoiseEventManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNoiseEventManager::*)()>(&::GlobalNamespace::GRNoiseEventManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x589f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>*& GlobalNamespace::GRNoiseEventManager::__cordl_internal_get_noiseEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseEvents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>* const& GlobalNamespace::GRNoiseEventManager::__cordl_internal_get_noiseEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseEvents;
}
constexpr void GlobalNamespace::GRNoiseEventManager::__cordl_internal_set_noiseEvents(::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseEvents = value;
}
constexpr float_t& GlobalNamespace::GRNoiseEventManager::__cordl_internal_get_debugMeshScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMeshScale;
}
constexpr float_t const& GlobalNamespace::GRNoiseEventManager::__cordl_internal_get_debugMeshScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMeshScale;
}
constexpr void GlobalNamespace::GRNoiseEventManager::__cordl_internal_set_debugMeshScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMeshScale = value;
}
inline void GlobalNamespace::GRNoiseEventManager::setStaticF_instance(::UnityW<::GlobalNamespace::GRNoiseEventManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GRNoiseEventManager>, "instance", ::GlobalNamespace::GRNoiseEventManager*>(std::forward<::UnityW<::GlobalNamespace::GRNoiseEventManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GRNoiseEventManager> GlobalNamespace::GRNoiseEventManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GRNoiseEventManager>, "instance", ::GlobalNamespace::GRNoiseEventManager*>();
}
inline void GlobalNamespace::GRNoiseEventManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRNoiseEventManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRNoiseEventManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRNoiseEventManager::FindUnusedEventEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"FindUnusedEventEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRNoiseEventManager::AddNoiseEvent(::UnityEngine::Vector3  position, float_t  magnitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"AddNoiseEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, magnitude, duration);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>* GlobalNamespace::GRNoiseEventManager::GetNoiseEventsInRadius(::UnityEngine::Vector3  origin, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"GetNoiseEventsInRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>*>(this, ___internal_method, origin, radius);
}
inline bool GlobalNamespace::GRNoiseEventManager::GetMostRecentNoiseEventInRadius(::UnityEngine::Vector3  origin, float_t  radius, ::by_ref<::GlobalNamespace::GameNoiseEvent>  outEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"GetMostRecentNoiseEventInRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameNoiseEvent>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, radius, outEvent);
}
inline void GlobalNamespace::GRNoiseEventManager::RenderDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"RenderDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRNoiseEventManager::RemoveExpiredEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {"RemoveExpiredEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRNoiseEventManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNoiseEventManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRNoiseEventManager* GlobalNamespace::GRNoiseEventManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRNoiseEventManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRNoiseEventManager::GRNoiseEventManager()   {
}
