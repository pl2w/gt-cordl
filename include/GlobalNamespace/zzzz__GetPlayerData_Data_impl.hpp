#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerData_Data.hpp"
#include "GlobalNamespace/zzzz__GetSessionResponseType_impl.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetPlayerData_Data_def.hpp"
#include "GlobalNamespace/zzzz__GetPlayerDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__GetSessionResponseType_def.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetPlayerData_Data._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetPlayerData_Data::*)(::GlobalNamespace::GetSessionResponseType, ::GlobalNamespace::GetPlayerDataResponse*)>(&::GlobalNamespace::GetPlayerData_Data::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5a257d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerData_Data*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GetSessionResponseType>(), ::i2c::type_of<::GlobalNamespace::GetPlayerDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GetSessionResponseType& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_responseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseType;
}
constexpr ::GlobalNamespace::GetSessionResponseType const& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_responseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseType;
}
constexpr void GlobalNamespace::GetPlayerData_Data::__cordl_internal_set_responseType(::GlobalNamespace::GetSessionResponseType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseType = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus>& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus> const& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void GlobalNamespace::GetPlayerData_Data::__cordl_internal_set_status(::System::Nullable_1<::GlobalNamespace::SessionStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::GlobalNamespace::TMPSession*& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___session;
}
constexpr ::GlobalNamespace::TMPSession* const& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___session;
}
constexpr void GlobalNamespace::GetPlayerData_Data::__cordl_internal_set_session(::GlobalNamespace::TMPSession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___session = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_OptInPermissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptInPermissions;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_OptInPermissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptInPermissions;
}
constexpr void GlobalNamespace::GetPlayerData_Data::__cordl_internal_set_OptInPermissions(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OptInPermissions = value;
}
constexpr bool& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_HasConfirmedSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasConfirmedSetup;
}
constexpr bool const& GlobalNamespace::GetPlayerData_Data::__cordl_internal_get_HasConfirmedSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasConfirmedSetup;
}
constexpr void GlobalNamespace::GetPlayerData_Data::__cordl_internal_set_HasConfirmedSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasConfirmedSetup = value;
}
inline void GlobalNamespace::GetPlayerData_Data::_ctor(::GlobalNamespace::GetSessionResponseType  type, ::GlobalNamespace::GetPlayerDataResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerData_Data*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GetSessionResponseType>(), ::i2c::type_of<::GlobalNamespace::GetPlayerDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, response);
}
inline ::GlobalNamespace::GetPlayerData_Data* GlobalNamespace::GetPlayerData_Data::New_ctor(::GlobalNamespace::GetSessionResponseType  type, ::GlobalNamespace::GetPlayerDataResponse*  response)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetPlayerData_Data*>(type, response));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetPlayerData_Data::GetPlayerData_Data()   {
}
