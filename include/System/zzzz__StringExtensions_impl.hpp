#pragma once
// IWYU pragma private; include "System/StringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__StringExtensions_def.hpp"
//  Writing Method size for method: ::System::StringExtensions.SubstringTrim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::StringExtensions::SubstringTrim)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xad00040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::StringExtensions*>(),
                        {"SubstringTrim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::StringExtensions.SubstringTrim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, int32_t)>(&::System::StringExtensions::SubstringTrim)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xad00058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::StringExtensions*>(),
                        {"SubstringTrim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::StringExtensions::SubstringTrim(::StringW  value, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::StringExtensions*>(),
                        {"SubstringTrim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, startIndex);
}
inline ::StringW System::StringExtensions::SubstringTrim(::StringW  value, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::StringExtensions*>(),
                        {"SubstringTrim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, startIndex, length);
}
// Ctor Parameters []
constexpr ::System::StringExtensions::StringExtensions()   {
}
