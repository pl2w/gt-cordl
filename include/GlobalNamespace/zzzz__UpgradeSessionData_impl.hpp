#pragma once
// IWYU pragma private; include "GlobalNamespace/UpgradeSessionData.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UpgradeSessionData_def.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
#include "GlobalNamespace/zzzz__UpgradeSessionResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpgradeSessionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpgradeSessionData::*)(::GlobalNamespace::UpgradeSessionResponse*)>(&::GlobalNamespace::UpgradeSessionData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a2747c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpgradeSessionData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UpgradeSessionResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::UpgradeSessionData::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::UpgradeSessionData::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void GlobalNamespace::UpgradeSessionData::__cordl_internal_set_status(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::GlobalNamespace::TMPSession*& GlobalNamespace::UpgradeSessionData::__cordl_internal_get_session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___session;
}
constexpr ::GlobalNamespace::TMPSession* const& GlobalNamespace::UpgradeSessionData::__cordl_internal_get_session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___session;
}
constexpr void GlobalNamespace::UpgradeSessionData::__cordl_internal_set_session(::GlobalNamespace::TMPSession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___session = value;
}
inline void GlobalNamespace::UpgradeSessionData::_ctor(::GlobalNamespace::UpgradeSessionResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpgradeSessionData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UpgradeSessionResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::GlobalNamespace::UpgradeSessionData* GlobalNamespace::UpgradeSessionData::New_ctor(::GlobalNamespace::UpgradeSessionResponse*  response)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpgradeSessionData*>(response));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpgradeSessionData::UpgradeSessionData()   {
}
