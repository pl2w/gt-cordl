#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyAgeData.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VerifyAgeData_def.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
#include "GlobalNamespace/zzzz__VerifyAgeResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VerifyAgeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyAgeData::*)(::GlobalNamespace::VerifyAgeResponse*)>(&::GlobalNamespace::VerifyAgeData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a27510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VerifyAgeResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::VerifyAgeData::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::VerifyAgeData::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void GlobalNamespace::VerifyAgeData::__cordl_internal_set_Status(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::GlobalNamespace::TMPSession*& GlobalNamespace::VerifyAgeData::__cordl_internal_get_Session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Session;
}
constexpr ::GlobalNamespace::TMPSession* const& GlobalNamespace::VerifyAgeData::__cordl_internal_get_Session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Session;
}
constexpr void GlobalNamespace::VerifyAgeData::__cordl_internal_set_Session(::GlobalNamespace::TMPSession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Session = value;
}
inline void GlobalNamespace::VerifyAgeData::_ctor(::GlobalNamespace::VerifyAgeResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyAgeData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VerifyAgeResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::GlobalNamespace::VerifyAgeData* GlobalNamespace::VerifyAgeData::New_ctor(::GlobalNamespace::VerifyAgeResponse*  response)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VerifyAgeData*>(response));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VerifyAgeData::VerifyAgeData()   {
}
