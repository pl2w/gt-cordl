#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/ContinuousEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__ContinuousEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::ContinuousEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::ContinuousEvent::*)()>(&::UnityEngine::Analytics::ContinuousEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb924324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::ContinuousEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::ContinuousEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::ContinuousEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::ContinuousEvent* UnityEngine::Analytics::ContinuousEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::ContinuousEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::ContinuousEvent::ContinuousEvent()   {
}
