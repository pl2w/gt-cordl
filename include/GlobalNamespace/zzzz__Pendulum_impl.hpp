#pragma once
// IWYU pragma private; include "GlobalNamespace/Pendulum.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Pendulum_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Pendulum.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Pendulum::*)()>(&::GlobalNamespace::Pendulum::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bffccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Pendulum*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Pendulum.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Pendulum::*)()>(&::GlobalNamespace::Pendulum::Update)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bffd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Pendulum*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Pendulum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Pendulum::*)()>(&::GlobalNamespace::Pendulum::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bffe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Pendulum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::Pendulum::__cordl_internal_get_MaxAngleDeflection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngleDeflection;
}
constexpr float_t const& GlobalNamespace::Pendulum::__cordl_internal_get_MaxAngleDeflection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngleDeflection;
}
constexpr void GlobalNamespace::Pendulum::__cordl_internal_set_MaxAngleDeflection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxAngleDeflection = value;
}
constexpr float_t& GlobalNamespace::Pendulum::__cordl_internal_get_SpeedOfPendulum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeedOfPendulum;
}
constexpr float_t const& GlobalNamespace::Pendulum::__cordl_internal_get_SpeedOfPendulum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeedOfPendulum;
}
constexpr void GlobalNamespace::Pendulum::__cordl_internal_set_SpeedOfPendulum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeedOfPendulum = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Pendulum::__cordl_internal_get_ClockPendulum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClockPendulum;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Pendulum::__cordl_internal_get_ClockPendulum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClockPendulum;
}
constexpr void GlobalNamespace::Pendulum::__cordl_internal_set_ClockPendulum(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClockPendulum = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Pendulum::__cordl_internal_get_pendulum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendulum;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Pendulum::__cordl_internal_get_pendulum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendulum;
}
constexpr void GlobalNamespace::Pendulum::__cordl_internal_set_pendulum(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendulum = value;
}
inline void GlobalNamespace::Pendulum::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Pendulum*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Pendulum::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Pendulum*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Pendulum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Pendulum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Pendulum* GlobalNamespace::Pendulum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Pendulum*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Pendulum::Pendulum()   {
}
