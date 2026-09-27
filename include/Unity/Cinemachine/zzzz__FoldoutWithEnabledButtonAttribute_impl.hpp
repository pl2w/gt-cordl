#pragma once
// IWYU pragma private; include "Unity/Cinemachine/FoldoutWithEnabledButtonAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__FoldoutWithEnabledButtonAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::*)(::StringW)>(&::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeb3618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::__cordl_internal_get_EnabledPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnabledPropertyName;
}
constexpr ::StringW const& Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::__cordl_internal_get_EnabledPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnabledPropertyName;
}
constexpr void Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::__cordl_internal_set_EnabledPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnabledPropertyName = value;
}
inline void Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::_ctor(::StringW  enabledProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabledProperty);
}
inline ::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute* Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::New_ctor(::StringW  enabledProperty)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute*>(enabledProperty));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute::FoldoutWithEnabledButtonAttribute()   {
}
