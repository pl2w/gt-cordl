#pragma once
// IWYU pragma private; include "PlayFab/PlayFabException.hpp"
#include "PlayFab/zzzz__PlayFabExceptionCode_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "PlayFab/zzzz__PlayFabException_def.hpp"
#include "PlayFab/zzzz__PlayFabExceptionCode_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabException::*)(::PlayFab::PlayFabExceptionCode, ::StringW)>(&::PlayFab::PlayFabException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7c1a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabException*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabExceptionCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabExceptionCode& PlayFab::PlayFabException::__cordl_internal_get_Code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr ::PlayFab::PlayFabExceptionCode const& PlayFab::PlayFabException::__cordl_internal_get_Code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr void PlayFab::PlayFabException::__cordl_internal_set_Code(::PlayFab::PlayFabExceptionCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Code = value;
}
inline void PlayFab::PlayFabException::_ctor(::PlayFab::PlayFabExceptionCode  code, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabException*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabExceptionCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::PlayFab::PlayFabException* PlayFab::PlayFabException::New_ctor(::PlayFab::PlayFabExceptionCode  code, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabException*>(code, message));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabException::PlayFabException()   {
}
