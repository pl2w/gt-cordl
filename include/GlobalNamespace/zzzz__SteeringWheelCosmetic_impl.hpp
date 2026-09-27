#pragma once
// IWYU pragma private; include "GlobalNamespace/SteeringWheelCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SteeringWheelCosmetic_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteeringWheelCosmetic.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteeringWheelCosmetic::*)()>(&::GlobalNamespace::SteeringWheelCosmetic::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57f4530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteeringWheelCosmetic.TryHornHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteeringWheelCosmetic::*)()>(&::GlobalNamespace::SteeringWheelCosmetic::TryHornHit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57f4534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {"TryHornHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteeringWheelCosmetic.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteeringWheelCosmetic::*)()>(&::GlobalNamespace::SteeringWheelCosmetic::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57f4580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteeringWheelCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteeringWheelCosmetic::*)()>(&::GlobalNamespace::SteeringWheelCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57f4628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr float_t& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_dramaticTurnThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dramaticTurnThreshold;
}
constexpr float_t const& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_dramaticTurnThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dramaticTurnThreshold;
}
constexpr void GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_set_dramaticTurnThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dramaticTurnThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_onHornHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHornHit;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_onHornHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHornHit;
}
constexpr void GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_set_onHornHit(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHornHit = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_onDramaticTurn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDramaticTurn;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_onDramaticTurn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDramaticTurn;
}
constexpr void GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_set_onDramaticTurn(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDramaticTurn = value;
}
constexpr float_t& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_lastHornTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHornTime;
}
constexpr float_t const& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_lastHornTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHornTime;
}
constexpr void GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_set_lastHornTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHornTime = value;
}
constexpr float_t& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_lastZAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastZAngle;
}
constexpr float_t const& GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_get_lastZAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastZAngle;
}
constexpr void GlobalNamespace::SteeringWheelCosmetic::__cordl_internal_set_lastZAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastZAngle = value;
}
inline void GlobalNamespace::SteeringWheelCosmetic::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteeringWheelCosmetic::TryHornHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {"TryHornHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteeringWheelCosmetic::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteeringWheelCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteeringWheelCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteeringWheelCosmetic* GlobalNamespace::SteeringWheelCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteeringWheelCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteeringWheelCosmetic::SteeringWheelCosmetic()   {
}
