#pragma once
// IWYU pragma private; include "GlobalNamespace/HapticsWithDistance.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HapticsWithDistance_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.OnWrongLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HapticsWithDistance::*)()>(&::GlobalNamespace::HapticsWithDistance::OnWrongLayer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x578a1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnWrongLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.SetVibrationMult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)(float_t)>(&::GlobalNamespace::HapticsWithDistance::SetVibrationMult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578a224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"SetVibrationMult", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.FingerFlexVibrationMult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)(bool, float_t)>(&::GlobalNamespace::HapticsWithDistance::FingerFlexVibrationMult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578a22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"FingerFlexVibrationMult", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)()>(&::GlobalNamespace::HapticsWithDistance::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x578a234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::HapticsWithDistance::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x578a29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::HapticsWithDistance::OnTriggerExit)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x578a3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)()>(&::GlobalNamespace::HapticsWithDistance::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x578a548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HapticsWithDistance::*)()>(&::GlobalNamespace::HapticsWithDistance::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578a5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)(bool)>(&::GlobalNamespace::HapticsWithDistance::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578a5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)()>(&::GlobalNamespace::HapticsWithDistance::Tick)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x578a5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticsWithDistance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HapticsWithDistance::*)()>(&::GlobalNamespace::HapticsWithDistance::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x578a914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_vibrationIntensityByDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationIntensityByDistance;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_vibrationIntensityByDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationIntensityByDistance;
}
constexpr void GlobalNamespace::HapticsWithDistance::__cordl_internal_set_vibrationIntensityByDistance(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationIntensityByDistance = value;
}
constexpr float_t& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_inverseColliderRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseColliderRadius;
}
constexpr float_t const& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_inverseColliderRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseColliderRadius;
}
constexpr void GlobalNamespace::HapticsWithDistance::__cordl_internal_set_inverseColliderRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseColliderRadius = value;
}
constexpr float_t& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_vibrationMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationMult;
}
constexpr float_t const& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_vibrationMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationMult;
}
constexpr void GlobalNamespace::HapticsWithDistance::__cordl_internal_set_vibrationMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationMult = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_leftOfflineHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftOfflineHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_leftOfflineHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftOfflineHand;
}
constexpr void GlobalNamespace::HapticsWithDistance::__cordl_internal_set_leftOfflineHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftOfflineHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_rightOfflineHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightOfflineHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HapticsWithDistance::__cordl_internal_get_rightOfflineHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightOfflineHand;
}
constexpr void GlobalNamespace::HapticsWithDistance::__cordl_internal_set_rightOfflineHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightOfflineHand = value;
}
constexpr bool& GlobalNamespace::HapticsWithDistance::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::HapticsWithDistance::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::HapticsWithDistance::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GlobalNamespace::HapticsWithDistance::OnWrongLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnWrongLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HapticsWithDistance::SetVibrationMult(float_t  mult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"SetVibrationMult", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mult);
}
inline void GlobalNamespace::HapticsWithDistance::FingerFlexVibrationMult(bool  dummy, float_t  mult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"FingerFlexVibrationMult", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dummy, mult);
}
inline void GlobalNamespace::HapticsWithDistance::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HapticsWithDistance::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::HapticsWithDistance::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::HapticsWithDistance::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HapticsWithDistance::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HapticsWithDistance::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HapticsWithDistance::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HapticsWithDistance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HapticsWithDistance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HapticsWithDistance* GlobalNamespace::HapticsWithDistance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HapticsWithDistance*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::HapticsWithDistance::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::HapticsWithDistance::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HapticsWithDistance::HapticsWithDistance()   {
}
