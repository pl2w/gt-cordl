#pragma once
// IWYU pragma private; include "GlobalNamespace/ScaleSpring.hpp"
#include "BoingKit/zzzz__Vector3Spring_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScaleSpring_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScaleSpring.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScaleSpring::*)()>(&::GlobalNamespace::ScaleSpring::Tick)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x55e8b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScaleSpring.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScaleSpring::*)()>(&::GlobalNamespace::ScaleSpring::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x55e8c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScaleSpring.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScaleSpring::*)()>(&::GlobalNamespace::ScaleSpring::FixedUpdate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x55e8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScaleSpring._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScaleSpring::*)()>(&::GlobalNamespace::ScaleSpring::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e8eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::BoingKit::Vector3Spring& GlobalNamespace::ScaleSpring::__cordl_internal_get_m_spring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr ::BoingKit::Vector3Spring const& GlobalNamespace::ScaleSpring::__cordl_internal_get_m_spring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spring;
}
constexpr void GlobalNamespace::ScaleSpring::__cordl_internal_set_m_spring(::BoingKit::Vector3Spring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spring = value;
}
constexpr float_t& GlobalNamespace::ScaleSpring::__cordl_internal_get_m_targetScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetScale;
}
constexpr float_t const& GlobalNamespace::ScaleSpring::__cordl_internal_get_m_targetScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetScale;
}
constexpr void GlobalNamespace::ScaleSpring::__cordl_internal_set_m_targetScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_targetScale = value;
}
constexpr float_t& GlobalNamespace::ScaleSpring::__cordl_internal_get_m_lastTickTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastTickTime;
}
constexpr float_t const& GlobalNamespace::ScaleSpring::__cordl_internal_get_m_lastTickTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastTickTime;
}
constexpr void GlobalNamespace::ScaleSpring::__cordl_internal_set_m_lastTickTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lastTickTime = value;
}
inline void GlobalNamespace::ScaleSpring::setStaticF_kInterval(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kInterval", ::GlobalNamespace::ScaleSpring*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::ScaleSpring::getStaticF_kInterval()  {
return ::cordl_internals::getStaticField<float_t, "kInterval", ::GlobalNamespace::ScaleSpring*>();
}
inline void GlobalNamespace::ScaleSpring::setStaticF_kSmallScale(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kSmallScale", ::GlobalNamespace::ScaleSpring*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::ScaleSpring::getStaticF_kSmallScale()  {
return ::cordl_internals::getStaticField<float_t, "kSmallScale", ::GlobalNamespace::ScaleSpring*>();
}
inline void GlobalNamespace::ScaleSpring::setStaticF_kLargeScale(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kLargeScale", ::GlobalNamespace::ScaleSpring*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::ScaleSpring::getStaticF_kLargeScale()  {
return ::cordl_internals::getStaticField<float_t, "kLargeScale", ::GlobalNamespace::ScaleSpring*>();
}
inline void GlobalNamespace::ScaleSpring::setStaticF_kMoveDistance(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kMoveDistance", ::GlobalNamespace::ScaleSpring*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::ScaleSpring::getStaticF_kMoveDistance()  {
return ::cordl_internals::getStaticField<float_t, "kMoveDistance", ::GlobalNamespace::ScaleSpring*>();
}
inline void GlobalNamespace::ScaleSpring::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScaleSpring::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScaleSpring::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScaleSpring::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScaleSpring*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScaleSpring* GlobalNamespace::ScaleSpring::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScaleSpring*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScaleSpring::ScaleSpring()   {
}
