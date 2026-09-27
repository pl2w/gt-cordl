#pragma once
// IWYU pragma private; include "VYaml/Annotations/PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "VYaml/Annotations/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::VYaml::Annotations::PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Annotations::PreserveAttribute::*)()>(&::VYaml::Annotations::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa04;
  constexpr static std::size_t addrs = 0xb973174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Annotations::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Annotations::PreserveAttribute* VYaml::Annotations::PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Annotations::PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::VYaml::Annotations::PreserveAttribute::PreserveAttribute()   {
}
