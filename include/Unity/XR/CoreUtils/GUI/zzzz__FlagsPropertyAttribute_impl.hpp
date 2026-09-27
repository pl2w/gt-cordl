#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GUI/FlagsPropertyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/XR/CoreUtils/GUI/zzzz__FlagsPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::*)()>(&::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fe048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute* Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::FlagsPropertyAttribute()   {
}
