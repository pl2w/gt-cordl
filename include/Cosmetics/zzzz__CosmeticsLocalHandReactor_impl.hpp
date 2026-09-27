#pragma once
// IWYU pragma private; include "Cosmetics/CosmeticsLocalHandReactor.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Cosmetics/zzzz__CosmeticsLocalHandReactor_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Cosmetics::CosmeticsLocalHandReactor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticsLocalHandReactor::*)()>(&::Cosmetics::CosmeticsLocalHandReactor::Awake)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5d1b7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticsLocalHandReactor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticsLocalHandReactor.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticsLocalHandReactor::*)()>(&::Cosmetics::CosmeticsLocalHandReactor::LateUpdate)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5d1b978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticsLocalHandReactor*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticsLocalHandReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticsLocalHandReactor::*)()>(&::Cosmetics::CosmeticsLocalHandReactor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d1bbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticsLocalHandReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr float_t& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_proximityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityThreshold;
}
constexpr float_t const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_proximityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityThreshold;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_proximityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityThreshold = value;
}
constexpr float_t& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_cooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr float_t const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_cooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_cooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTime = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_onTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTrigger;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_onTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTrigger;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_onTrigger(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
constexpr bool& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_ownerIsLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerIsLocal;
}
constexpr bool const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_ownerIsLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerIsLocal;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_ownerIsLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerIsLocal = value;
}
constexpr float_t& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_lastTriggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr float_t const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_lastTriggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_lastTriggerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggerTime = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::UnityEngine::LayerMask& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_handLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handLayer;
}
constexpr ::UnityEngine::LayerMask const& Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_get_handLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handLayer;
}
constexpr void Cosmetics::CosmeticsLocalHandReactor::__cordl_internal_set_handLayer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handLayer = value;
}
inline void Cosmetics::CosmeticsLocalHandReactor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticsLocalHandReactor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticsLocalHandReactor::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticsLocalHandReactor*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticsLocalHandReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticsLocalHandReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cosmetics::CosmeticsLocalHandReactor* Cosmetics::CosmeticsLocalHandReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cosmetics::CosmeticsLocalHandReactor*>());
}
// Ctor Parameters []
constexpr ::Cosmetics::CosmeticsLocalHandReactor::CosmeticsLocalHandReactor()   {
}
