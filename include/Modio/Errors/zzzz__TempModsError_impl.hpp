#pragma once
// IWYU pragma private; include "Modio/Errors/TempModsError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__TempModsError_def.hpp"
#include "Modio/Errors/zzzz__TempModsErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::TempModsError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::TempModsErrorCode (::Modio::Errors::TempModsError::*)()>(&::Modio::Errors::TempModsError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::TempModsError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::TempModsError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::TempModsError::*)(::Modio::Errors::TempModsErrorCode)>(&::Modio::Errors::TempModsError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa056c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::TempModsError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::TempModsErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::TempModsError::setStaticF_None(::Modio::Errors::TempModsError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::TempModsError*, "None", ::Modio::Errors::TempModsError*>(std::forward<::Modio::Errors::TempModsError*>(value));
}
inline ::Modio::Errors::TempModsError* Modio::Errors::TempModsError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::TempModsError*, "None", ::Modio::Errors::TempModsError*>();
}
inline ::Modio::Errors::TempModsErrorCode Modio::Errors::TempModsError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::TempModsError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::TempModsErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::TempModsError::_ctor(::Modio::Errors::TempModsErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::TempModsError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::TempModsErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::TempModsError* Modio::Errors::TempModsError::New_ctor(::Modio::Errors::TempModsErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::TempModsError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::TempModsError::TempModsError()   {
}
