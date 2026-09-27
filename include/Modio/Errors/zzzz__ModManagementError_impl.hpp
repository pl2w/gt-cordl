#pragma once
// IWYU pragma private; include "Modio/Errors/ModManagementError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__ModManagementError_def.hpp"
#include "Modio/Errors/zzzz__ModManagementErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::ModManagementError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::ModManagementErrorCode (::Modio::Errors::ModManagementError::*)()>(&::Modio::Errors::ModManagementError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0568cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModManagementError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ModManagementError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::ModManagementError::*)(::Modio::Errors::ModManagementErrorCode)>(&::Modio::Errors::ModManagementError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa0568d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModManagementError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ModManagementErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::ModManagementError::setStaticF_None(::Modio::Errors::ModManagementError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::ModManagementError*, "None", ::Modio::Errors::ModManagementError*>(std::forward<::Modio::Errors::ModManagementError*>(value));
}
inline ::Modio::Errors::ModManagementError* Modio::Errors::ModManagementError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::ModManagementError*, "None", ::Modio::Errors::ModManagementError*>();
}
inline ::Modio::Errors::ModManagementErrorCode Modio::Errors::ModManagementError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModManagementError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::ModManagementErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::ModManagementError::_ctor(::Modio::Errors::ModManagementErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ModManagementError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ModManagementErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::ModManagementError* Modio::Errors::ModManagementError::New_ctor(::Modio::Errors::ModManagementErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::ModManagementError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::ModManagementError::ModManagementError()   {
}
