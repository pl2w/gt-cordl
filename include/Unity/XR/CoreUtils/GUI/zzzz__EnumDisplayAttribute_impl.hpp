#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GUI/EnumDisplayAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/XR/CoreUtils/GUI/zzzz__EnumDisplayAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::*)(::ArrayW<::System::Object*>)>(&::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb3fde28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
constexpr ::ArrayW<::StringW> const& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Names;
}
constexpr void Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_set_Names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Names = value;
}
constexpr ::ArrayW<int32_t>& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Values;
}
constexpr ::ArrayW<int32_t> const& Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_get_Values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Values;
}
constexpr void Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::__cordl_internal_set_Values(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Values = value;
}
inline void Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::_ctor(/* [ParamArray] */ ::ArrayW<::System::Object*>  enumValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumValues);
}
inline ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute* Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::New_ctor(/* [ParamArray] */ ::ArrayW<::System::Object*>  enumValues)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*>(enumValues));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute::EnumDisplayAttribute()   {
}
