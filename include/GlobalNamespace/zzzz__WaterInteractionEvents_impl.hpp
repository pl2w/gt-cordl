#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterInteractionEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WaterInteractionEvents_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaterInteractionEvents.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterInteractionEvents::*)()>(&::GlobalNamespace::WaterInteractionEvents::Update)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5abc808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterInteractionEvents.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterInteractionEvents::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::WaterInteractionEvents::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5abcb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterInteractionEvents.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterInteractionEvents::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::WaterInteractionEvents::OnTriggerExit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5abcc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterInteractionEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterInteractionEvents::*)()>(&::GlobalNamespace::WaterInteractionEvents::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5abcd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_onEnterWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterWater;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_onEnterWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterWater;
}
constexpr void GlobalNamespace::WaterInteractionEvents::__cordl_internal_set_onEnterWater(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnterWater = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_onExitWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitWater;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_onExitWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitWater;
}
constexpr void GlobalNamespace::WaterInteractionEvents::__cordl_internal_set_onExitWater(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onExitWater = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_waterContactSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterContactSphere;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_waterContactSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterContactSphere;
}
constexpr void GlobalNamespace::WaterInteractionEvents::__cordl_internal_set_waterContactSphere(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterContactSphere = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_overlappingWaterVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlappingWaterVolumes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* const& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_overlappingWaterVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlappingWaterVolumes;
}
constexpr void GlobalNamespace::WaterInteractionEvents::__cordl_internal_set_overlappingWaterVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlappingWaterVolumes = value;
}
constexpr bool& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_inWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inWater;
}
constexpr bool const& GlobalNamespace::WaterInteractionEvents::__cordl_internal_get_inWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inWater;
}
constexpr void GlobalNamespace::WaterInteractionEvents::__cordl_internal_set_inWater(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inWater = value;
}
inline void GlobalNamespace::WaterInteractionEvents::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterInteractionEvents::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::WaterInteractionEvents::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::WaterInteractionEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterInteractionEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterInteractionEvents* GlobalNamespace::WaterInteractionEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaterInteractionEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterInteractionEvents::WaterInteractionEvents()   {
}
