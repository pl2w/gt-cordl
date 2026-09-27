#pragma once
// IWYU pragma private; include "Modio/Errors/MonetizationError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__MonetizationError_def.hpp"
#include "Modio/Errors/zzzz__MonetizationErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::MonetizationError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::MonetizationErrorCode (::Modio::Errors::MonetizationError::*)()>(&::Modio::Errors::MonetizationError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MonetizationError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::MonetizationError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::MonetizationError::*)(::Modio::Errors::MonetizationErrorCode)>(&::Modio::Errors::MonetizationError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MonetizationError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::MonetizationErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::MonetizationError::setStaticF_None(::Modio::Errors::MonetizationError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::MonetizationError*, "None", ::Modio::Errors::MonetizationError*>(std::forward<::Modio::Errors::MonetizationError*>(value));
}
inline ::Modio::Errors::MonetizationError* Modio::Errors::MonetizationError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::MonetizationError*, "None", ::Modio::Errors::MonetizationError*>();
}
inline ::Modio::Errors::MonetizationErrorCode Modio::Errors::MonetizationError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MonetizationError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::MonetizationErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::MonetizationError::_ctor(::Modio::Errors::MonetizationErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::MonetizationError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::MonetizationErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::MonetizationError* Modio::Errors::MonetizationError::New_ctor(::Modio::Errors::MonetizationErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::MonetizationError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::MonetizationError::MonetizationError()   {
}
