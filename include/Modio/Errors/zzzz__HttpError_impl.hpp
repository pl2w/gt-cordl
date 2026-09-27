#pragma once
// IWYU pragma private; include "Modio/Errors/HttpError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__HttpError_def.hpp"
#include "Modio/Errors/zzzz__HttpErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::HttpError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::HttpErrorCode (::Modio::Errors::HttpError::*)()>(&::Modio::Errors::HttpError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::HttpError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::HttpError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::HttpError::*)(::Modio::Errors::HttpErrorCode)>(&::Modio::Errors::HttpError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::HttpError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::HttpErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::HttpError::setStaticF_None(::Modio::Errors::HttpError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::HttpError*, "None", ::Modio::Errors::HttpError*>(std::forward<::Modio::Errors::HttpError*>(value));
}
inline ::Modio::Errors::HttpError* Modio::Errors::HttpError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::HttpError*, "None", ::Modio::Errors::HttpError*>();
}
inline ::Modio::Errors::HttpErrorCode Modio::Errors::HttpError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::HttpError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::HttpErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::HttpError::_ctor(::Modio::Errors::HttpErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::HttpError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::HttpErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::HttpError* Modio::Errors::HttpError::New_ctor(::Modio::Errors::HttpErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::HttpError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::HttpError::HttpError()   {
}
