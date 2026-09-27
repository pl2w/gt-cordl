#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOESender.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOESender_FalloffMode_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOESender_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOEReceiver_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOESender_FalloffMode_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOESender::*)()>(&::GorillaTag::Cosmetics::AOESender::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d6d79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOESender::*)()>(&::GorillaTag::Cosmetics::AOESender::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d6d820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOESender::*)()>(&::GorillaTag::Cosmetics::AOESender::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d6d880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender.ApplyAOE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOESender::*)()>(&::GorillaTag::Cosmetics::AOESender::ApplyAOE)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d6d854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"ApplyAOE", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender.ApplyAOE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOESender::*)(::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::AOESender::ApplyAOE)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5d6d8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"ApplyAOE", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender.EvaluateFalloff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::AOESender::*)(float_t)>(&::GorillaTag::Cosmetics::AOESender::EvaluateFalloff)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d6ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"EvaluateFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender.TagValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::AOESender::*)(::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::AOESender::TagValidation)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d6dca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"TagValidation", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOESender._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOESender::*)()>(&::GorillaTag::Cosmetics::AOESender::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d6de00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_triggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_triggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerInteraction;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_triggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerInteraction = value;
}
constexpr ::ArrayW<::StringW>& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_includeTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeTags;
}
constexpr ::ArrayW<::StringW> const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_includeTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeTags;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_includeTags(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeTags = value;
}
constexpr ::GlobalNamespace::AOESender_FalloffMode& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_falloffMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffMode;
}
constexpr ::GlobalNamespace::AOESender_FalloffMode const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_falloffMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffMode;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_falloffMode(::GlobalNamespace::AOESender_FalloffMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloffMode = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_falloffCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_falloffCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffCurve;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_falloffCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloffCurve = value;
}
constexpr float_t& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr float_t& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_minStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minStrength;
}
constexpr float_t const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_minStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minStrength;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_minStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minStrength = value;
}
constexpr bool& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_applyOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnEnable;
}
constexpr bool const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_applyOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyOnEnable;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_applyOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyOnEnable = value;
}
constexpr float_t& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_repeatInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatInterval;
}
constexpr float_t const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_repeatInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatInterval;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_repeatInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatInterval = value;
}
constexpr int32_t& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_maxColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxColliders;
}
constexpr int32_t const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_maxColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxColliders;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_maxColliders(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxColliders = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_hits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hits = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>*& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_visited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visited;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>* const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_visited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visited;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_visited(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visited = value;
}
constexpr float_t& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_nextTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTime;
}
constexpr float_t const& GorillaTag::Cosmetics::AOESender::__cordl_internal_get_nextTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTime;
}
constexpr void GorillaTag::Cosmetics::AOESender::__cordl_internal_set_nextTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextTime = value;
}
inline void GorillaTag::Cosmetics::AOESender::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::AOESender::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::AOESender::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::AOESender::ApplyAOE()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"ApplyAOE", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::AOESender::ApplyAOE(::UnityEngine::Vector3  worldOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"ApplyAOE", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldOrigin);
}
inline float_t GorillaTag::Cosmetics::AOESender::EvaluateFalloff(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"EvaluateFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline bool GorillaTag::Cosmetics::AOESender::TagValidation(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {"TagValidation", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go);
}
inline void GorillaTag::Cosmetics::AOESender::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOESender*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::AOESender* GorillaTag::Cosmetics::AOESender::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::AOESender*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::AOESender::AOESender()   {
}
