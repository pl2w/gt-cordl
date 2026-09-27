#pragma once
// IWYU pragma private; include "JetBrains/Annotations/StringFormatMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__StringFormatMethodAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::StringFormatMethodAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::StringFormatMethodAttribute::*)(::StringW)>(&::JetBrains::Annotations::StringFormatMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb5604d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_get__FormatParameterName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatParameterName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_get__FormatParameterName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatParameterName_k__BackingField;
}
constexpr void JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_set__FormatParameterName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormatParameterName_k__BackingField = value;
}
inline void JetBrains::Annotations::StringFormatMethodAttribute::_ctor(/* [NotNull] */ ::StringW  formatParameterName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatParameterName);
}
inline ::JetBrains::Annotations::StringFormatMethodAttribute* JetBrains::Annotations::StringFormatMethodAttribute::New_ctor(/* [NotNull] */ ::StringW  formatParameterName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::StringFormatMethodAttribute*>(formatParameterName));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::StringFormatMethodAttribute::StringFormatMethodAttribute()   {
}
