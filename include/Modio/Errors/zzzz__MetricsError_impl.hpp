#pragma once
// IWYU pragma private; include "Modio/Errors/MetricsError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__MetricsError_def.hpp"
#include "Modio/Errors/zzzz__MetricsErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::MetricsError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::MetricsErrorCode (::Modio::Errors::MetricsError::*)()>(&::Modio::Errors::MetricsError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0567f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MetricsError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::MetricsError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::MetricsError::*)(::Modio::Errors::MetricsErrorCode)>(&::Modio::Errors::MetricsError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa0567fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MetricsError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::MetricsErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::MetricsError::setStaticF_None(::Modio::Errors::MetricsError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::MetricsError*, "None", ::Modio::Errors::MetricsError*>(std::forward<::Modio::Errors::MetricsError*>(value));
}
inline ::Modio::Errors::MetricsError* Modio::Errors::MetricsError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::MetricsError*, "None", ::Modio::Errors::MetricsError*>();
}
inline ::Modio::Errors::MetricsErrorCode Modio::Errors::MetricsError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MetricsError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::MetricsErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::MetricsError::_ctor(::Modio::Errors::MetricsErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MetricsError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::MetricsErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::MetricsError* Modio::Errors::MetricsError::New_ctor(::Modio::Errors::MetricsErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::MetricsError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::MetricsError::MetricsError()   {
}
