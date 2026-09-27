#pragma once
// IWYU pragma private; include "Modio/Errors/ApiError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__ApiError_def.hpp"
#include "Modio/Errors/zzzz__ApiErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::ApiError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::ApiErrorCode (::Modio::Errors::ApiError::*)()>(&::Modio::Errors::ApiError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa055244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ApiError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ApiError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::ApiError::*)(::Modio::Errors::ApiErrorCode)>(&::Modio::Errors::ApiError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa05524c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ApiError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ApiErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::ApiError::setStaticF_None(::Modio::Errors::ApiError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::ApiError*, "None", ::Modio::Errors::ApiError*>(std::forward<::Modio::Errors::ApiError*>(value));
}
inline ::Modio::Errors::ApiError* Modio::Errors::ApiError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::ApiError*, "None", ::Modio::Errors::ApiError*>();
}
inline ::Modio::Errors::ApiErrorCode Modio::Errors::ApiError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ApiError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::ApiErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::ApiError::_ctor(::Modio::Errors::ApiErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ApiError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ApiErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::ApiError* Modio::Errors::ApiError::New_ctor(::Modio::Errors::ApiErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::ApiError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::ApiError::ApiError()   {
}
