#pragma once
// IWYU pragma private; include "GlobalNamespace/UFOEffector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UFOEffector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UFOEffector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UFOEffector::*)()>(&::GlobalNamespace::UFOEffector::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55e7ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOEffector*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UFOEffector.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UFOEffector::*)()>(&::GlobalNamespace::UFOEffector::FixedUpdate)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x55e7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOEffector*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UFOEffector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UFOEffector::*)()>(&::GlobalNamespace::UFOEffector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e7e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOEffector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::UFOEffector::__cordl_internal_get_m_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_radius;
}
constexpr float_t const& GlobalNamespace::UFOEffector::__cordl_internal_get_m_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_radius;
}
constexpr void GlobalNamespace::UFOEffector::__cordl_internal_set_m_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_radius = value;
}
constexpr float_t& GlobalNamespace::UFOEffector::__cordl_internal_get_m_moveDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_moveDistance;
}
constexpr float_t const& GlobalNamespace::UFOEffector::__cordl_internal_get_m_moveDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_moveDistance;
}
constexpr void GlobalNamespace::UFOEffector::__cordl_internal_set_m_moveDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_moveDistance = value;
}
constexpr float_t& GlobalNamespace::UFOEffector::__cordl_internal_get_m_rotateAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rotateAngle;
}
constexpr float_t const& GlobalNamespace::UFOEffector::__cordl_internal_get_m_rotateAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rotateAngle;
}
constexpr void GlobalNamespace::UFOEffector::__cordl_internal_set_m_rotateAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rotateAngle = value;
}
inline void GlobalNamespace::UFOEffector::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOEffector*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UFOEffector::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOEffector*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UFOEffector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UFOEffector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UFOEffector* GlobalNamespace::UFOEffector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UFOEffector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UFOEffector::UFOEffector()   {
}
