#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxEvent.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBoxEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxEvent.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxEvent::*)()>(&::GlobalNamespace::GorillaTriggerBoxEvent::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x579deb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxEvent.OnBoxExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxEvent::*)()>(&::GlobalNamespace::GorillaTriggerBoxEvent::OnBoxExited)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x579dec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxEvent::*)()>(&::GlobalNamespace::GorillaTriggerBoxEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579dedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GorillaTriggerBoxEvent::__cordl_internal_get_onBoxTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBoxTriggered;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GorillaTriggerBoxEvent::__cordl_internal_get_onBoxTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBoxTriggered;
}
constexpr void GlobalNamespace::GorillaTriggerBoxEvent::__cordl_internal_set_onBoxTriggered(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBoxTriggered = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GorillaTriggerBoxEvent::__cordl_internal_get_onBoxExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBoxExited;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GorillaTriggerBoxEvent::__cordl_internal_get_onBoxExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBoxExited;
}
constexpr void GlobalNamespace::GorillaTriggerBoxEvent::__cordl_internal_set_onBoxExited(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBoxExited = value;
}
inline void GlobalNamespace::GorillaTriggerBoxEvent::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTriggerBoxEvent::OnBoxExited()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTriggerBoxEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTriggerBoxEvent* GlobalNamespace::GorillaTriggerBoxEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTriggerBoxEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTriggerBoxEvent::GorillaTriggerBoxEvent()   {
}
