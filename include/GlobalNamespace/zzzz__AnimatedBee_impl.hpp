#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatedBee.hpp"
#include "GlobalNamespace/zzzz__AnimatedBee_TimedDestination_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatedBee_def.hpp"
#include "GlobalNamespace/zzzz__AnimatedBee_TimedDestination_def.hpp"
#include "GlobalNamespace/zzzz__BeePerchPoint_def.hpp"
#include "GlobalNamespace/zzzz__BeeSwarmManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatedBee.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedBee::*)(float_t, ::GlobalNamespace::BeeSwarmManager*)>(&::GlobalNamespace::AnimatedBee::UpdateVisual)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x56109f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"UpdateVisual", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeeSwarmManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedBee.GetPositionAndDestinationAtTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedBee::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::AnimatedBee::GetPositionAndDestinationAtTime)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5611794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"GetPositionAndDestinationAtTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedBee.InitVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedBee::*)(::UnityEngine::MeshRenderer*, ::GlobalNamespace::BeeSwarmManager*)>(&::GlobalNamespace::AnimatedBee::InitVisual)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5611a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"InitVisual", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::BeeSwarmManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedBee.InitRouteTimestamps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedBee::*)()>(&::GlobalNamespace::AnimatedBee::InitRouteTimestamps)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x56112b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"InitRouteTimestamps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedBee.InitRoute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedBee::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*, ::System::Collections::Generic::List_1<float_t>*, ::GlobalNamespace::BeeSwarmManager*)>(&::GlobalNamespace::AnimatedBee::InitRoute)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5611aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"InitRoute", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::GlobalNamespace::BeeSwarmManager*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AnimatedBee::UpdateVisual(float_t  syncTime, ::GlobalNamespace::BeeSwarmManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"UpdateVisual", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeeSwarmManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, syncTime, manager);
}
inline void GlobalNamespace::AnimatedBee::GetPositionAndDestinationAtTime(float_t  syncTime, ::by_ref<::UnityEngine::Vector3>  idealPosition, ::by_ref<::UnityEngine::Vector3>  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"GetPositionAndDestinationAtTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, syncTime, idealPosition, destination);
}
inline void GlobalNamespace::AnimatedBee::InitVisual(::UnityEngine::MeshRenderer*  prefab, ::GlobalNamespace::BeeSwarmManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"InitVisual", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::BeeSwarmManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefab, manager);
}
inline void GlobalNamespace::AnimatedBee::InitRouteTimestamps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"InitRouteTimestamps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AnimatedBee::InitRoute(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  route, ::System::Collections::Generic::List_1<float_t>*  holdTimes, ::GlobalNamespace::BeeSwarmManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedBee>(),
                        {"InitRoute", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::GlobalNamespace::BeeSwarmManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, route, holdTimes, manager);
}
// Ctor Parameters [CppParam { name: "destinationCache", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee_TimedDestination>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destinationA", ty: "::GlobalNamespace::AnimatedBee_TimedDestination", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destinationB", ty: "::GlobalNamespace::AnimatedBee_TimedDestination", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "loopDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "oldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visual", ty: "::UnityW<::UnityEngine::MeshRenderer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "oldSyncTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "route", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "holdTimes", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxTravelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimatedBee::AnimatedBee(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee_TimedDestination>*  destinationCache, ::GlobalNamespace::AnimatedBee_TimedDestination  destinationA, ::GlobalNamespace::AnimatedBee_TimedDestination  destinationB, float_t  loopDuration, ::UnityEngine::Vector3  oldPosition, ::UnityEngine::Vector3  velocity, ::UnityW<::UnityEngine::MeshRenderer>  visual, float_t  oldSyncTime, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  route, ::System::Collections::Generic::List_1<float_t>*  holdTimes, float_t  speed, float_t  maxTravelTime) noexcept  {
this->destinationCache = destinationCache;
this->destinationA = destinationA;
this->destinationB = destinationB;
this->loopDuration = loopDuration;
this->oldPosition = oldPosition;
this->velocity = velocity;
this->visual = visual;
this->oldSyncTime = oldSyncTime;
this->route = route;
this->holdTimes = holdTimes;
this->speed = speed;
this->maxTravelTime = maxTravelTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatedBee::AnimatedBee()   {
}
