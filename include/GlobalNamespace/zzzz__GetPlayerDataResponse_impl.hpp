#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerDataResponse.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetPlayerDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__KIDDefaultSession_def.hpp"
#include "KID/Model/zzzz__Session_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetPlayerDataResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetPlayerDataResponse::*)()>(&::GlobalNamespace::GetPlayerDataResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerDataResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus>& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus> const& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void GlobalNamespace::GetPlayerDataResponse::__cordl_internal_set_Status(::System::Nullable_1<::GlobalNamespace::SessionStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::KID::Model::Session*& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_Session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Session;
}
constexpr ::KID::Model::Session* const& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_Session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Session;
}
constexpr void GlobalNamespace::GetPlayerDataResponse::__cordl_internal_set_Session(::KID::Model::Session*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Session = value;
}
constexpr ::GlobalNamespace::KIDDefaultSession*& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_DefaultSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultSession;
}
constexpr ::GlobalNamespace::KIDDefaultSession* const& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_DefaultSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultSession;
}
constexpr void GlobalNamespace::GetPlayerDataResponse::__cordl_internal_set_DefaultSession(::GlobalNamespace::KIDDefaultSession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultSession = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_Permissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_Permissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr void GlobalNamespace::GetPlayerDataResponse::__cordl_internal_set_Permissions(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permissions = value;
}
constexpr bool& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_HasConfirmedSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasConfirmedSetup;
}
constexpr bool const& GlobalNamespace::GetPlayerDataResponse::__cordl_internal_get_HasConfirmedSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasConfirmedSetup;
}
constexpr void GlobalNamespace::GetPlayerDataResponse::__cordl_internal_set_HasConfirmedSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasConfirmedSetup = value;
}
inline void GlobalNamespace::GetPlayerDataResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerDataResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetPlayerDataResponse* GlobalNamespace::GetPlayerDataResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetPlayerDataResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetPlayerDataResponse::GetPlayerDataResponse()   {
}
