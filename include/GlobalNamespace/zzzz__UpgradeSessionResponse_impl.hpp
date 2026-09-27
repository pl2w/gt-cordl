#pragma once
// IWYU pragma private; include "GlobalNamespace/UpgradeSessionResponse.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UpgradeSessionResponse_def.hpp"
#include "KID/Model/zzzz__Session_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpgradeSessionResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpgradeSessionResponse::*)()>(&::GlobalNamespace::UpgradeSessionResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpgradeSessionResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SessionStatus& GlobalNamespace::UpgradeSessionResponse::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr ::GlobalNamespace::SessionStatus const& GlobalNamespace::UpgradeSessionResponse::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void GlobalNamespace::UpgradeSessionResponse::__cordl_internal_set_status(::GlobalNamespace::SessionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::KID::Model::Session*& GlobalNamespace::UpgradeSessionResponse::__cordl_internal_get_session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___session;
}
constexpr ::KID::Model::Session* const& GlobalNamespace::UpgradeSessionResponse::__cordl_internal_get_session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___session;
}
constexpr void GlobalNamespace::UpgradeSessionResponse::__cordl_internal_set_session(::KID::Model::Session*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___session = value;
}
inline void GlobalNamespace::UpgradeSessionResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpgradeSessionResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UpgradeSessionResponse* GlobalNamespace::UpgradeSessionResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpgradeSessionResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpgradeSessionResponse::UpgradeSessionResponse()   {
}
