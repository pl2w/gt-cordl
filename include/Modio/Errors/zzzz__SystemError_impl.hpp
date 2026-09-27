#pragma once
// IWYU pragma private; include "Modio/Errors/SystemError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__SystemError_def.hpp"
#include "Modio/Errors/zzzz__SystemErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::SystemError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::SystemErrorCode (::Modio::Errors::SystemError::*)()>(&::Modio::Errors::SystemError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::SystemError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::SystemError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::SystemError::*)(::Modio::Errors::SystemErrorCode)>(&::Modio::Errors::SystemError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::SystemError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::SystemErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::SystemError::setStaticF_None(::Modio::Errors::SystemError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::SystemError*, "None", ::Modio::Errors::SystemError*>(std::forward<::Modio::Errors::SystemError*>(value));
}
inline ::Modio::Errors::SystemError* Modio::Errors::SystemError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::SystemError*, "None", ::Modio::Errors::SystemError*>();
}
inline ::Modio::Errors::SystemErrorCode Modio::Errors::SystemError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::SystemError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::SystemErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::SystemError::_ctor(::Modio::Errors::SystemErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::SystemError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::SystemErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::SystemError* Modio::Errors::SystemError::New_ctor(::Modio::Errors::SystemErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::SystemError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::SystemError::SystemError()   {
}
