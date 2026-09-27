#pragma once
// IWYU pragma private; include "GlobalNamespace/RubberDuckEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RubberDuckEvents.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuckEvents::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RubberDuckEvents::Init)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5793a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuckEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuckEvents::*)()>(&::GlobalNamespace::RubberDuckEvents::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5794d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuckEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuckEvents::*)()>(&::GlobalNamespace::RubberDuckEvents::OnDisable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5794d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuckEvents.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuckEvents::*)()>(&::GlobalNamespace::RubberDuckEvents::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5794d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuckEvents.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuckEvents::*)()>(&::GlobalNamespace::RubberDuckEvents::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5793ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RubberDuckEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RubberDuckEvents::*)()>(&::GlobalNamespace::RubberDuckEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5794d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_PlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr int32_t const& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_PlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr void GlobalNamespace::RubberDuckEvents::__cordl_internal_set_PlayerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerId = value;
}
constexpr ::StringW& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_PlayerIdString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIdString;
}
constexpr ::StringW const& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_PlayerIdString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIdString;
}
constexpr void GlobalNamespace::RubberDuckEvents::__cordl_internal_set_PlayerIdString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerIdString = value;
}
constexpr ::GlobalNamespace::PhotonEvent*& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_Activate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activate;
}
constexpr ::GlobalNamespace::PhotonEvent* const& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_Activate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activate;
}
constexpr void GlobalNamespace::RubberDuckEvents::__cordl_internal_set_Activate(::GlobalNamespace::PhotonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Activate = value;
}
constexpr ::GlobalNamespace::PhotonEvent*& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_Deactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deactivate;
}
constexpr ::GlobalNamespace::PhotonEvent* const& GlobalNamespace::RubberDuckEvents::__cordl_internal_get_Deactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deactivate;
}
constexpr void GlobalNamespace::RubberDuckEvents::__cordl_internal_set_Deactivate(::GlobalNamespace::PhotonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Deactivate = value;
}
inline void GlobalNamespace::RubberDuckEvents::Init(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RubberDuckEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuckEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuckEvents::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuckEvents::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RubberDuckEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RubberDuckEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RubberDuckEvents* GlobalNamespace::RubberDuckEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RubberDuckEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RubberDuckEvents::RubberDuckEvents()   {
}
