#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityEventOnGrab.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UnityEventOnGrab_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityEventOnGrab.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityEventOnGrab::*)()>(&::GlobalNamespace::UnityEventOnGrab::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x579534c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEventOnGrab.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityEventOnGrab::*)()>(&::GlobalNamespace::UnityEventOnGrab::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57954b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEventOnGrab.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityEventOnGrab::*)()>(&::GlobalNamespace::UnityEventOnGrab::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57954c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEventOnGrab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityEventOnGrab::*)()>(&::GlobalNamespace::UnityEventOnGrab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57954d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::UnityEventOnGrab::__cordl_internal_get_onGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrab;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::UnityEventOnGrab::__cordl_internal_get_onGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrab;
}
constexpr void GlobalNamespace::UnityEventOnGrab::__cordl_internal_set_onGrab(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGrab = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::UnityEventOnGrab::__cordl_internal_get_onRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::UnityEventOnGrab::__cordl_internal_get_onRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr void GlobalNamespace::UnityEventOnGrab::__cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRelease = value;
}
inline void GlobalNamespace::UnityEventOnGrab::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityEventOnGrab::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityEventOnGrab::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityEventOnGrab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEventOnGrab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityEventOnGrab* GlobalNamespace::UnityEventOnGrab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityEventOnGrab*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityEventOnGrab::UnityEventOnGrab()   {
}
