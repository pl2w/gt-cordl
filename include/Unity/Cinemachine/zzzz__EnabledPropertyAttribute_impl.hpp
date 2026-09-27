#pragma once
// IWYU pragma private; include "Unity/Cinemachine/EnabledPropertyAttribute.hpp"
#include "Unity/Cinemachine/zzzz__FoldoutWithEnabledButtonAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__EnabledPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::EnabledPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::EnabledPropertyAttribute::*)(::StringW, ::StringW)>(&::Unity::Cinemachine::EnabledPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaeb3648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::EnabledPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Cinemachine::EnabledPropertyAttribute::__cordl_internal_get_ToggleDisabledText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleDisabledText;
}
constexpr ::StringW const& Unity::Cinemachine::EnabledPropertyAttribute::__cordl_internal_get_ToggleDisabledText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToggleDisabledText;
}
constexpr void Unity::Cinemachine::EnabledPropertyAttribute::__cordl_internal_set_ToggleDisabledText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToggleDisabledText = value;
}
inline void Unity::Cinemachine::EnabledPropertyAttribute::_ctor(::StringW  enabledProperty, ::StringW  toggleText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::EnabledPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabledProperty, toggleText);
}
inline ::Unity::Cinemachine::EnabledPropertyAttribute* Unity::Cinemachine::EnabledPropertyAttribute::New_ctor(::StringW  enabledProperty, ::StringW  toggleText)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::EnabledPropertyAttribute*>(enabledProperty, toggleText));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::EnabledPropertyAttribute::EnabledPropertyAttribute()   {
}
