#pragma once
// IWYU pragma private; include "GlobalNamespace/OnTapHandler.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GlobalNamespace/zzzz__OnTapHandler_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnTapHandler.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTapHandler::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::OnTapHandler::OnTapLocal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x570e0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnTapHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::OnTapHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTapHandler.OnGrabLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTapHandler::*)(float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::OnTapHandler::OnGrabLocal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x570e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnTapHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::OnTapHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTapHandler.OnReleaseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTapHandler::*)(float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::OnTapHandler::OnReleaseLocal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x570e114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnTapHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::OnTapHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTapHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTapHandler::*)()>(&::GlobalNamespace::OnTapHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570e128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnTapHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OnTapHandler::__cordl_internal_get_OnTapEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapEvents;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OnTapHandler::__cordl_internal_get_OnTapEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapEvents;
}
constexpr void GlobalNamespace::OnTapHandler::__cordl_internal_set_OnTapEvents(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTapEvents = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OnTapHandler::__cordl_internal_get_OnGrabEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabEvents;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OnTapHandler::__cordl_internal_get_OnGrabEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabEvents;
}
constexpr void GlobalNamespace::OnTapHandler::__cordl_internal_set_OnGrabEvents(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabEvents = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OnTapHandler::__cordl_internal_get_OnReleaseEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleaseEvents;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OnTapHandler::__cordl_internal_get_OnReleaseEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleaseEvents;
}
constexpr void GlobalNamespace::OnTapHandler::__cordl_internal_set_OnReleaseEvents(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReleaseEvents = value;
}
inline void GlobalNamespace::OnTapHandler::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnTapHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, sender);
}
inline void GlobalNamespace::OnTapHandler::OnGrabLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnTapHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapTime, sender);
}
inline void GlobalNamespace::OnTapHandler::OnReleaseLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnTapHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapTime, sender);
}
inline void GlobalNamespace::OnTapHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnTapHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnTapHandler* GlobalNamespace::OnTapHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnTapHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTapHandler::OnTapHandler()   {
}
