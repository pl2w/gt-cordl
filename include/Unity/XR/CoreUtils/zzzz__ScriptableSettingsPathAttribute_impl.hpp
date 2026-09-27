#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ScriptableSettingsPathAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsPathAttribute_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::*)()>(&::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::get_Path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3eddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::*)(::StringW)>(&::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3eddd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::__cordl_internal_get_m_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr ::StringW const& Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::__cordl_internal_get_m_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr void Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::__cordl_internal_set_m_Path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Path = value;
}
inline ::StringW Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute* Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute*>(path));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ScriptableSettingsPathAttribute::ScriptableSettingsPathAttribute()   {
}
