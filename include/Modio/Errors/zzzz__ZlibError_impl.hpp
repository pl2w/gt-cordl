#pragma once
// IWYU pragma private; include "Modio/Errors/ZlibError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__ZlibError_def.hpp"
#include "Modio/Errors/zzzz__ZlibErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::ZlibError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::ZlibErrorCode (::Modio::Errors::ZlibError::*)()>(&::Modio::Errors::ZlibError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ZlibError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ZlibError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::ZlibError::*)(::Modio::Errors::ZlibErrorCode)>(&::Modio::Errors::ZlibError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ZlibError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ZlibErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::ZlibError::setStaticF_None(::Modio::Errors::ZlibError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::ZlibError*, "None", ::Modio::Errors::ZlibError*>(std::forward<::Modio::Errors::ZlibError*>(value));
}
inline ::Modio::Errors::ZlibError* Modio::Errors::ZlibError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::ZlibError*, "None", ::Modio::Errors::ZlibError*>();
}
inline ::Modio::Errors::ZlibErrorCode Modio::Errors::ZlibError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ZlibError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::ZlibErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::ZlibError::_ctor(::Modio::Errors::ZlibErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ZlibError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ZlibErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::ZlibError* Modio::Errors::ZlibError::New_ctor(::Modio::Errors::ZlibErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::ZlibError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::ZlibError::ZlibError()   {
}
