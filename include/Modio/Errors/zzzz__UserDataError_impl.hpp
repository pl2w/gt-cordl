#pragma once
// IWYU pragma private; include "Modio/Errors/UserDataError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__UserDataError_def.hpp"
#include "Modio/Errors/zzzz__UserDataErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::UserDataError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::UserDataErrorCode (::Modio::Errors::UserDataError::*)()>(&::Modio::Errors::UserDataError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserDataError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::UserDataError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::UserDataError::*)(::Modio::Errors::UserDataErrorCode)>(&::Modio::Errors::UserDataError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserDataError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::UserDataErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::UserDataError::setStaticF_None(::Modio::Errors::UserDataError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::UserDataError*, "None", ::Modio::Errors::UserDataError*>(std::forward<::Modio::Errors::UserDataError*>(value));
}
inline ::Modio::Errors::UserDataError* Modio::Errors::UserDataError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::UserDataError*, "None", ::Modio::Errors::UserDataError*>();
}
inline ::Modio::Errors::UserDataErrorCode Modio::Errors::UserDataError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserDataError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::UserDataErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::UserDataError::_ctor(::Modio::Errors::UserDataErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::UserDataError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::UserDataErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::UserDataError* Modio::Errors::UserDataError::New_ctor(::Modio::Errors::UserDataErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::UserDataError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::UserDataError::UserDataError()   {
}
