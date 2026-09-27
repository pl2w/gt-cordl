#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOEContextEvent.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOEReceiver_AOEContext_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOEContextEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOEContextEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOEContextEvent::*)()>(&::GorillaTag::Cosmetics::AOEContextEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d6d6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOEContextEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Cosmetics::AOEContextEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOEContextEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::AOEContextEvent* GorillaTag::Cosmetics::AOEContextEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::AOEContextEvent*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::AOEContextEvent::AOEContextEvent()   {
}
