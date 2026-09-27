#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatedButterfly.hpp"
#include "GlobalNamespace/zzzz__AnimatedButterfly_TimedDestination_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatedButterfly_def.hpp"
#include "GlobalNamespace/zzzz__AnimatedButterfly_TimedDestination_def.hpp"
#include "GlobalNamespace/zzzz__ButterflySwarmManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatedButterfly.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedButterfly::*)(float_t, ::GlobalNamespace::ButterflySwarmManager*)>(&::GlobalNamespace::AnimatedButterfly::UpdateVisual)> {
  constexpr static std::size_t size = 0xb68;
  constexpr static std::size_t addrs = 0x5611dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"UpdateVisual", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ButterflySwarmManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedButterfly.GetPositionAndDestinationAtTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedButterfly::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::AnimatedButterfly::GetPositionAndDestinationAtTime)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5612938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"GetPositionAndDestinationAtTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedButterfly.InitVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedButterfly::*)(::UnityEngine::MeshRenderer*, ::GlobalNamespace::ButterflySwarmManager*)>(&::GlobalNamespace::AnimatedButterfly::InitVisual)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5612bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"InitVisual", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::ButterflySwarmManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedButterfly.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedButterfly::*)(::UnityEngine::Color)>(&::GlobalNamespace::AnimatedButterfly::SetColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5612cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedButterfly.SetFlapSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedButterfly::*)(float_t)>(&::GlobalNamespace::AnimatedButterfly::SetFlapSpeed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5612d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"SetFlapSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedButterfly.InitRoute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatedButterfly::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::System::Collections::Generic::List_1<float_t>*, ::GlobalNamespace::ButterflySwarmManager*)>(&::GlobalNamespace::AnimatedButterfly::InitRoute)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x5612df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"InitRoute", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::GlobalNamespace::ButterflySwarmManager*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AnimatedButterfly::UpdateVisual(float_t  syncTime, ::GlobalNamespace::ButterflySwarmManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"UpdateVisual", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ButterflySwarmManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, syncTime, manager);
}
inline void GlobalNamespace::AnimatedButterfly::GetPositionAndDestinationAtTime(float_t  syncTime, ::by_ref<::UnityEngine::Vector3>  idealPosition, ::by_ref<::UnityEngine::Vector3>  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"GetPositionAndDestinationAtTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, syncTime, idealPosition, destination);
}
inline void GlobalNamespace::AnimatedButterfly::InitVisual(::UnityEngine::MeshRenderer*  prefab, ::GlobalNamespace::ButterflySwarmManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"InitVisual", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::ButterflySwarmManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefab, manager);
}
inline void GlobalNamespace::AnimatedButterfly::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void GlobalNamespace::AnimatedButterfly::SetFlapSpeed(float_t  flapSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"SetFlapSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flapSpeed);
}
inline void GlobalNamespace::AnimatedButterfly::InitRoute(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  route, ::System::Collections::Generic::List_1<float_t>*  holdTimes, ::GlobalNamespace::ButterflySwarmManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatedButterfly>(),
                        {"InitRoute", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::GlobalNamespace::ButterflySwarmManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, route, holdTimes, manager);
}
// Ctor Parameters [CppParam { name: "destinationCache", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly_TimedDestination>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destinationA", ty: "::GlobalNamespace::AnimatedButterfly_TimedDestination", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destinationB", ty: "::GlobalNamespace::AnimatedButterfly_TimedDestination", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "loopDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "oldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visual", ty: "::UnityW<::UnityEngine::MeshRenderer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxTravelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "travellingLocalRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseFlapSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wasPerched", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimatedButterfly::AnimatedButterfly(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly_TimedDestination>*  destinationCache, ::GlobalNamespace::AnimatedButterfly_TimedDestination  destinationA, ::GlobalNamespace::AnimatedButterfly_TimedDestination  destinationB, float_t  loopDuration, ::UnityEngine::Vector3  oldPosition, ::UnityEngine::Vector3  velocity, ::UnityW<::UnityEngine::MeshRenderer>  visual, ::UnityW<::UnityEngine::Material>  material, float_t  speed, float_t  maxTravelTime, ::UnityEngine::Quaternion  travellingLocalRotation, float_t  baseFlapSpeed, bool  wasPerched) noexcept  {
this->destinationCache = destinationCache;
this->destinationA = destinationA;
this->destinationB = destinationB;
this->loopDuration = loopDuration;
this->oldPosition = oldPosition;
this->velocity = velocity;
this->visual = visual;
this->material = material;
this->speed = speed;
this->maxTravelTime = maxTravelTime;
this->travellingLocalRotation = travellingLocalRotation;
this->baseFlapSpeed = baseFlapSpeed;
this->wasPerched = wasPerched;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatedButterfly::AnimatedButterfly()   {
}
