#pragma once
// IWYU pragma private; include "Modio/Errors/ArchiveError.hpp"
#include "Modio/zzzz__Error_impl.hpp"
#include "Modio/Errors/zzzz__ArchiveError_def.hpp"
#include "Modio/Errors/zzzz__ArchiveErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::ArchiveError.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Errors::ArchiveErrorCode (::Modio::Errors::ArchiveError::*)()>(&::Modio::Errors::ArchiveError::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa056494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ArchiveError*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ArchiveError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Errors::ArchiveError::*)(::Modio::Errors::ArchiveErrorCode)>(&::Modio::Errors::ArchiveError::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa05649c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ArchiveError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ArchiveErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Errors::ArchiveError::setStaticF_None(::Modio::Errors::ArchiveError*  value)  {
::cordl_internals::setStaticField<::Modio::Errors::ArchiveError*, "None", ::Modio::Errors::ArchiveError*>(std::forward<::Modio::Errors::ArchiveError*>(value));
}
inline ::Modio::Errors::ArchiveError* Modio::Errors::ArchiveError::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Modio::Errors::ArchiveError*, "None", ::Modio::Errors::ArchiveError*>();
}
inline ::Modio::Errors::ArchiveErrorCode Modio::Errors::ArchiveError::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ArchiveError*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Errors::ArchiveErrorCode>(this, ___internal_method);
}
inline void Modio::Errors::ArchiveError::_ctor(::Modio::Errors::ArchiveErrorCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ArchiveError*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Errors::ArchiveErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::Modio::Errors::ArchiveError* Modio::Errors::ArchiveError::New_ctor(::Modio::Errors::ArchiveErrorCode  code)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Errors::ArchiveError*>(code));
}
// Ctor Parameters []
constexpr ::Modio::Errors::ArchiveError::ArchiveError()   {
}
