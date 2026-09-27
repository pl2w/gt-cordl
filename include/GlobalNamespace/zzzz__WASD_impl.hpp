#pragma once
// IWYU pragma private; include "GlobalNamespace/WASD.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__WASD_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WASD.get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::WASD::*)()>(&::GlobalNamespace::WASD::get_Velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55eb78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WASD*>(),
                        {"get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WASD.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WASD::*)()>(&::GlobalNamespace::WASD::Update)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x55eb798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WASD*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WASD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WASD::*)()>(&::GlobalNamespace::WASD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55ebb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WASD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::WASD::__cordl_internal_get_Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr float_t const& GlobalNamespace::WASD::__cordl_internal_get_Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speed;
}
constexpr void GlobalNamespace::WASD::__cordl_internal_set_Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Speed = value;
}
constexpr float_t& GlobalNamespace::WASD::__cordl_internal_get_Omega()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Omega;
}
constexpr float_t const& GlobalNamespace::WASD::__cordl_internal_get_Omega() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Omega;
}
constexpr void GlobalNamespace::WASD::__cordl_internal_set_Omega(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Omega = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::WASD::__cordl_internal_get_m_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::WASD::__cordl_internal_get_m_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_velocity;
}
constexpr void GlobalNamespace::WASD::__cordl_internal_set_m_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_velocity = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::WASD::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WASD*>(),
                        {"get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::WASD::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WASD*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WASD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WASD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WASD* GlobalNamespace::WASD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WASD*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WASD::WASD()   {
}
