#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeDisrupt.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeDisrupt_State_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeDisrupt_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenadeDisrupt_State_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)()>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58deb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)(float_t)>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58deb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)(::GlobalNamespace::SIGadgetGrenadeDisrupt_State)>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58deba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetGrenadeDisrupt_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)(::GlobalNamespace::SIGadgetGrenadeDisrupt_State)>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::SetState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58deb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetGrenadeDisrupt_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.TriggerExplosion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)()>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::TriggerExplosion)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x58debd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {"TriggerExplosion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.HandleActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)()>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::HandleActivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dede8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.HandleHitSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)()>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::HandleHitSurface)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58dedec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt.HandleThrown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)()>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::HandleThrown)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58dee04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenadeDisrupt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenadeDisrupt::*)()>(&::GlobalNamespace::SIGadgetGrenadeDisrupt::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_get_disruptTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disruptTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_get_disruptTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disruptTime;
}
constexpr void GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_set_disruptTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disruptTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_get_explosionRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionRadius;
}
constexpr float_t const& GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_get_explosionRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionRadius;
}
constexpr void GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_set_explosionRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explosionRadius = value;
}
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State& GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State const& GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::SIGadgetGrenadeDisrupt::__cordl_internal_set_state(::GlobalNamespace::SIGadgetGrenadeDisrupt_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeDisrupt_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetGrenadeDisrupt_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::SetState(::GlobalNamespace::SIGadgetGrenadeDisrupt_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetGrenadeDisrupt_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::TriggerExplosion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {"TriggerExplosion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::HandleActivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::HandleHitSurface()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::HandleThrown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenadeDisrupt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenadeDisrupt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetGrenadeDisrupt* GlobalNamespace::SIGadgetGrenadeDisrupt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetGrenadeDisrupt*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt::SIGadgetGrenadeDisrupt()   {
}
