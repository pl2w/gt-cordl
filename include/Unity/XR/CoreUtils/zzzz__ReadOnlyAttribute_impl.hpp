#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ReadOnlyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ReadOnlyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReadOnlyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::ReadOnlyAttribute::*)()>(&::Unity::XR::CoreUtils::ReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3eddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReadOnlyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::ReadOnlyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReadOnlyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::ReadOnlyAttribute* Unity::XR::CoreUtils::ReadOnlyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::ReadOnlyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ReadOnlyAttribute::ReadOnlyAttribute()   {
}
