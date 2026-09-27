#pragma once
// IWYU pragma private; include "Modio/Errors/FilesystemError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__FilesystemError_def.hpp"
#include "Modio/Errors/zzzz__FilesystemErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::FilesystemError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::FilesystemErrorCode (::Modio::Errors::FilesystemError::*)()>(&::Modio::Errors::FilesystemError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05656c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::FilesystemError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::FilesystemError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::FilesystemError::*)(::Modio::Errors::FilesystemErrorCode)>(&::Modio::Errors::FilesystemError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::FilesystemError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::FilesystemErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::FilesystemError::setStaticF_None(::Modio::Errors::FilesystemError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::FilesystemError*, "None", ::Modio::Errors::FilesystemError*>(std::forward<::Modio::Errors::FilesystemError*>(value));
}
inline ::Modio::Errors::FilesystemError* Modio::Errors::FilesystemError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::FilesystemError*, "None", ::Modio::Errors::FilesystemError*>();
}
inline ::Modio::Errors::FilesystemErrorCode Modio::Errors::FilesystemError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::FilesystemError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::FilesystemErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::FilesystemError::_ctor(::Modio::Errors::FilesystemErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::FilesystemError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::FilesystemErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::FilesystemError* Modio::Errors::FilesystemError::New_ctor(::Modio::Errors::FilesystemErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::FilesystemError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::FilesystemError::FilesystemError()   {
}
