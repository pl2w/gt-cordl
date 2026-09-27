#pragma once
// IWYU pragma private; include "Meta/WitAi/Composer/Attributes/VersionTagDropdownAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Meta/WitAi/Composer/Attributes/zzzz__VersionTagDropdownAttribute_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute::*)()>(&::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9ef8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute* Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Composer::Attributes::VersionTagDropdownAttribute::VersionTagDropdownAttribute()   {
}
