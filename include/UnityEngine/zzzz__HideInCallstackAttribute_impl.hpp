#pragma once
// IWYU pragma private; include "UnityEngine/HideInCallstackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__HideInCallstackAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::HideInCallstackAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HideInCallstackAttribute::*)()>(&::UnityEngine::HideInCallstackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5d8408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HideInCallstackAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::HideInCallstackAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HideInCallstackAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::HideInCallstackAttribute* UnityEngine::HideInCallstackAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::HideInCallstackAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::HideInCallstackAttribute::HideInCallstackAttribute()   {
}
