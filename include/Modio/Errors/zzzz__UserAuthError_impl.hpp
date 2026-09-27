#pragma once
// IWYU pragma private; include "Modio/Errors/UserAuthError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__UserAuthError_def.hpp"
#include "Modio/Errors/zzzz__UserAuthErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::UserAuthError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::UserAuthErrorCode (::Modio::Errors::UserAuthError::*)()>(&::Modio::Errors::UserAuthError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserAuthError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::UserAuthError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::UserAuthError::*)(::Modio::Errors::UserAuthErrorCode)>(&::Modio::Errors::UserAuthError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserAuthError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::UserAuthErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::UserAuthError::setStaticF_None(::Modio::Errors::UserAuthError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::UserAuthError*, "None", ::Modio::Errors::UserAuthError*>(std::forward<::Modio::Errors::UserAuthError*>(value));
}
inline ::Modio::Errors::UserAuthError* Modio::Errors::UserAuthError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::UserAuthError*, "None", ::Modio::Errors::UserAuthError*>();
}
inline ::Modio::Errors::UserAuthErrorCode Modio::Errors::UserAuthError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserAuthError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::UserAuthErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::UserAuthError::_ctor(::Modio::Errors::UserAuthErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserAuthError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::UserAuthErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::UserAuthError* Modio::Errors::UserAuthError::New_ctor(::Modio::Errors::UserAuthErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::UserAuthError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::UserAuthError::UserAuthError()   {
}
