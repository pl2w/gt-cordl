#pragma once
// IWYU pragma private; include "Modio/Errors/ModValidationError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__ModValidationError_def.hpp"
#include "Modio/Errors/zzzz__ModValidationErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::ModValidationError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::ModValidationErrorCode (::Modio::Errors::ModValidationError::*)()>(&::Modio::Errors::ModValidationError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0569a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModValidationError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ModValidationError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::ModValidationError::*)(::Modio::Errors::ModValidationErrorCode)>(&::Modio::Errors::ModValidationError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa0569ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModValidationError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ModValidationErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::ModValidationError::setStaticF_None(::Modio::Errors::ModValidationError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::ModValidationError*, "None", ::Modio::Errors::ModValidationError*>(std::forward<::Modio::Errors::ModValidationError*>(value));
}
inline ::Modio::Errors::ModValidationError* Modio::Errors::ModValidationError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::ModValidationError*, "None", ::Modio::Errors::ModValidationError*>();
}
inline ::Modio::Errors::ModValidationErrorCode Modio::Errors::ModValidationError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModValidationError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::ModValidationErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::ModValidationError::_ctor(::Modio::Errors::ModValidationErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModValidationError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ModValidationErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::ModValidationError* Modio::Errors::ModValidationError::New_ctor(::Modio::Errors::ModValidationErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::ModValidationError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::ModValidationError::ModValidationError()   {
}
