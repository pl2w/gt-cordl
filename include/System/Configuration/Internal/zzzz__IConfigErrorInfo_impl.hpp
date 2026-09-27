#pragma once
// IWYU pragma private; include "System/Configuration/Internal/IConfigErrorInfo.hpp"
#include "System/Configuration/Internal/zzzz__IConfigErrorInfo_def.hpp"
//  Writing Method size for method: ::System::Configuration::Internal::IConfigErrorInfo.get_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::Internal::IConfigErrorInfo::*)()>(&::System::Configuration::Internal::IConfigErrorInfo::get_Filename)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::Internal::IConfigErrorInfo*>(),
                    {::i2c::class_of<::System::Configuration::Internal::IConfigErrorInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::Internal::IConfigErrorInfo.get_LineNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Configuration::Internal::IConfigErrorInfo::*)()>(&::System::Configuration::Internal::IConfigErrorInfo::get_LineNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::Internal::IConfigErrorInfo*>(),
                    {::i2c::class_of<::System::Configuration::Internal::IConfigErrorInfo*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW System::Configuration::Internal::IConfigErrorInfo::get_Filename()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::Internal::IConfigErrorInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Configuration::Internal::IConfigErrorInfo::get_LineNumber()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::Internal::IConfigErrorInfo*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
