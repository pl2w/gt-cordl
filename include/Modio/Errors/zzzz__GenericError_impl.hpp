#pragma once
// IWYU pragma private; include "Modio/Errors/GenericError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__GenericError_def.hpp"
#include "Modio/Errors/zzzz__GenericErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::GenericError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::GenericErrorCode (::Modio::Errors::GenericError::*)()>(&::Modio::Errors::GenericError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::GenericError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::GenericError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::GenericError::*)(::Modio::Errors::GenericErrorCode)>(&::Modio::Errors::GenericError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa05664c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::GenericError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::GenericErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::GenericError::setStaticF_None(::Modio::Errors::GenericError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::GenericError*, "None", ::Modio::Errors::GenericError*>(std::forward<::Modio::Errors::GenericError*>(value));
}
inline ::Modio::Errors::GenericError* Modio::Errors::GenericError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::GenericError*, "None", ::Modio::Errors::GenericError*>();
}
inline ::Modio::Errors::GenericErrorCode Modio::Errors::GenericError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::GenericError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::GenericErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::GenericError::_ctor(::Modio::Errors::GenericErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::GenericError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::GenericErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::GenericError* Modio::Errors::GenericError::New_ctor(::Modio::Errors::GenericErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::GenericError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::GenericError::GenericError()   {
}
