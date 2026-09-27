#pragma once
// IWYU pragma private; include "POpusCodec/OpusException.hpp"
#include "POpusCodec/Enums/zzzz__OpusStatusCode_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "POpusCodec/zzzz__OpusException_def.hpp"
#include "POpusCodec/Enums/zzzz__OpusStatusCode_def.hpp"
//  Writing Method size for method: ::POpusCodec::OpusException.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::OpusStatusCode (::POpusCodec::OpusException::*)()>(&::POpusCodec::OpusException::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7437a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusException*>(),
                        {"get_StatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusException::*)(::POpusCodec::Enums::OpusStatusCode, ::StringW)>(&::POpusCodec::OpusException::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa743028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusException*>(),
                        {".ctor", {}, {::i2c::type_of<::POpusCodec::Enums::OpusStatusCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::POpusCodec::Enums::OpusStatusCode& POpusCodec::OpusException::__cordl_internal_get__statusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusCode;
}
constexpr ::POpusCodec::Enums::OpusStatusCode const& POpusCodec::OpusException::__cordl_internal_get__statusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusCode;
}
constexpr void POpusCodec::OpusException::__cordl_internal_set__statusCode(::POpusCodec::Enums::OpusStatusCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statusCode = value;
}
inline ::POpusCodec::Enums::OpusStatusCode POpusCodec::OpusException::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusException*>(),
                        {"get_StatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::OpusStatusCode>(this, ___internal_method);
}
inline void POpusCodec::OpusException::_ctor(::POpusCodec::Enums::OpusStatusCode  statusCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusException*>(),
                        {".ctor", {}, {::i2c::type_of<::POpusCodec::Enums::OpusStatusCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode, message);
}
inline ::POpusCodec::OpusException* POpusCodec::OpusException::New_ctor(::POpusCodec::Enums::OpusStatusCode  statusCode, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::POpusCodec::OpusException*>(statusCode, message));
}
// Ctor Parameters []
constexpr ::POpusCodec::OpusException::OpusException()   {
}
