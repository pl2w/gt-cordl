#pragma once
// IWYU pragma private; include "Fusion/InlineHelpAttribute.hpp"
#include "Fusion/zzzz__DecoratingPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__InlineHelpAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::InlineHelpAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::InlineHelpAttribute::*)()>(&::Fusion::InlineHelpAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f3d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::InlineHelpAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::InlineHelpAttribute::__cordl_internal_get__ShowTypeHelp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowTypeHelp_k__BackingField;
}
constexpr bool const& Fusion::InlineHelpAttribute::__cordl_internal_get__ShowTypeHelp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowTypeHelp_k__BackingField;
}
constexpr void Fusion::InlineHelpAttribute::__cordl_internal_set__ShowTypeHelp_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowTypeHelp_k__BackingField = value;
}
inline void Fusion::InlineHelpAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::InlineHelpAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::InlineHelpAttribute* Fusion::InlineHelpAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::InlineHelpAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::InlineHelpAttribute::InlineHelpAttribute()   {
}
