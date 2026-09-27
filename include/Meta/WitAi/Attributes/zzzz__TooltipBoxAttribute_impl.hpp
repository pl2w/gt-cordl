#pragma once
// IWYU pragma private; include "Meta/WitAi/Attributes/TooltipBoxAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Meta/WitAi/Attributes/zzzz__TooltipBoxAttribute_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Attributes::TooltipBoxAttribute.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Attributes::TooltipBoxAttribute::*)(::StringW)>(&::Meta::WitAi::Attributes::TooltipBoxAttribute::set_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9ef54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::TooltipBoxAttribute*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Attributes::TooltipBoxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Attributes::TooltipBoxAttribute::*)(::StringW)>(&::Meta::WitAi::Attributes::TooltipBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e9ef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::TooltipBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Attributes::TooltipBoxAttribute::__cordl_internal_get__Text_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Attributes::TooltipBoxAttribute::__cordl_internal_get__Text_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr void Meta::WitAi::Attributes::TooltipBoxAttribute::__cordl_internal_set__Text_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Text_k__BackingField = value;
}
inline void Meta::WitAi::Attributes::TooltipBoxAttribute::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::TooltipBoxAttribute*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Attributes::TooltipBoxAttribute::_ctor(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::TooltipBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline ::Meta::WitAi::Attributes::TooltipBoxAttribute* Meta::WitAi::Attributes::TooltipBoxAttribute::New_ctor(::StringW  text)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Attributes::TooltipBoxAttribute*>(text));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Attributes::TooltipBoxAttribute::TooltipBoxAttribute()   {
}
