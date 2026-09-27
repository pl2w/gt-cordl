#pragma once
// IWYU pragma private; include "GlobalNamespace/GreyZoneActivator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GreyZoneActivator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GreyZoneActivator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneActivator::*)()>(&::GlobalNamespace::GreyZoneActivator::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56bd04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneActivator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneActivator::*)()>(&::GlobalNamespace::GreyZoneActivator::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56bd0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneActivator.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneActivator::*)()>(&::GlobalNamespace::GreyZoneActivator::Activate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56bd05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"Activate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneActivator.ActivateWithG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneActivator::*)(float_t)>(&::GlobalNamespace::GreyZoneActivator::ActivateWithG)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56bd138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"ActivateWithG", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneActivator.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneActivator::*)()>(&::GlobalNamespace::GreyZoneActivator::Deactivate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56bd0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneActivator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneActivator::*)()>(&::GlobalNamespace::GreyZoneActivator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56bd1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GreyZoneActivator::__cordl_internal_get_activateOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnable;
}
constexpr bool const& GlobalNamespace::GreyZoneActivator::__cordl_internal_get_activateOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnable;
}
constexpr void GlobalNamespace::GreyZoneActivator::__cordl_internal_set_activateOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateOnEnable = value;
}
constexpr bool& GlobalNamespace::GreyZoneActivator::__cordl_internal_get_deactivateOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivateOnDisable;
}
constexpr bool const& GlobalNamespace::GreyZoneActivator::__cordl_internal_get_deactivateOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivateOnDisable;
}
constexpr void GlobalNamespace::GreyZoneActivator::__cordl_internal_set_deactivateOnDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivateOnDisable = value;
}
constexpr float_t& GlobalNamespace::GreyZoneActivator::__cordl_internal_get_gMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gMultiplier;
}
constexpr float_t const& GlobalNamespace::GreyZoneActivator::__cordl_internal_get_gMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gMultiplier;
}
constexpr void GlobalNamespace::GreyZoneActivator::__cordl_internal_set_gMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gMultiplier = value;
}
inline void GlobalNamespace::GreyZoneActivator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneActivator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneActivator::Activate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"Activate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneActivator::ActivateWithG(float_t  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"ActivateWithG", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, g);
}
inline void GlobalNamespace::GreyZoneActivator::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneActivator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneActivator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GreyZoneActivator* GlobalNamespace::GreyZoneActivator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreyZoneActivator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreyZoneActivator::GreyZoneActivator()   {
}
