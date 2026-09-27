#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RegisterUxmlCacheAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RegisterUxmlCacheAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RegisterUxmlCacheAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RegisterUxmlCacheAttribute::*)()>(&::UnityEngine::UIElements::RegisterUxmlCacheAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7b7360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::RegisterUxmlCacheAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RegisterUxmlCacheAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::RegisterUxmlCacheAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RegisterUxmlCacheAttribute* UnityEngine::UIElements::RegisterUxmlCacheAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RegisterUxmlCacheAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RegisterUxmlCacheAttribute::RegisterUxmlCacheAttribute()   {
}
