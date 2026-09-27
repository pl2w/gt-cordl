#pragma once
// IWYU pragma private; include "GlobalNamespace/UseableObjectEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UseableObjectEvents_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UseableObjectEvents.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObjectEvents::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::UseableObjectEvents::Init)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x579570c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObjectEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObjectEvents::*)()>(&::GlobalNamespace::UseableObjectEvents::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5795ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObjectEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObjectEvents::*)()>(&::GlobalNamespace::UseableObjectEvents::OnDisable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5795d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObjectEvents.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObjectEvents::*)()>(&::GlobalNamespace::UseableObjectEvents::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5795d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObjectEvents.DisposeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObjectEvents::*)()>(&::GlobalNamespace::UseableObjectEvents::DisposeEvents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5795c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"DisposeEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseableObjectEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseableObjectEvents::*)()>(&::GlobalNamespace::UseableObjectEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5795d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_PlayerIdString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIdString;
}
constexpr ::StringW const& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_PlayerIdString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIdString;
}
constexpr void GlobalNamespace::UseableObjectEvents::__cordl_internal_set_PlayerIdString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerIdString = value;
}
constexpr int32_t& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_PlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr int32_t const& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_PlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr void GlobalNamespace::UseableObjectEvents::__cordl_internal_set_PlayerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerId = value;
}
constexpr ::GlobalNamespace::PhotonEvent*& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_Activate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activate;
}
constexpr ::GlobalNamespace::PhotonEvent* const& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_Activate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activate;
}
constexpr void GlobalNamespace::UseableObjectEvents::__cordl_internal_set_Activate(::GlobalNamespace::PhotonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Activate = value;
}
constexpr ::GlobalNamespace::PhotonEvent*& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_Deactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deactivate;
}
constexpr ::GlobalNamespace::PhotonEvent* const& GlobalNamespace::UseableObjectEvents::__cordl_internal_get_Deactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deactivate;
}
constexpr void GlobalNamespace::UseableObjectEvents::__cordl_internal_set_Deactivate(::GlobalNamespace::PhotonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Deactivate = value;
}
inline void GlobalNamespace::UseableObjectEvents::Init(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::UseableObjectEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObjectEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObjectEvents::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObjectEvents::DisposeEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {"DisposeEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseableObjectEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UseableObjectEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UseableObjectEvents* GlobalNamespace::UseableObjectEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UseableObjectEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UseableObjectEvents::UseableObjectEvents()   {
}
