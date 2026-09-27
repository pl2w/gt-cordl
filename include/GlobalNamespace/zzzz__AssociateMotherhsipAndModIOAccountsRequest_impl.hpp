#pragma once
// IWYU pragma private; include "GlobalNamespace/AssociateMotherhsipAndModIOAccountsRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AssociateMotherhsipAndModIOAccountsRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::*)()>(&::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f1858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_MothershipPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipPlayerId;
}
constexpr ::StringW const& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_MothershipPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipPlayerId;
}
constexpr void GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_set_MothershipPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipPlayerId = value;
}
constexpr ::StringW& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
constexpr ::StringW& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_ModIOId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModIOId;
}
constexpr ::StringW const& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_ModIOId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModIOId;
}
constexpr void GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_set_ModIOId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ModIOId = value;
}
constexpr ::StringW& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_ModIOToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModIOToken;
}
constexpr ::StringW const& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_ModIOToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModIOToken;
}
constexpr void GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_set_ModIOToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ModIOToken = value;
}
constexpr ::StringW& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_MothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr ::StringW const& GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_get_MothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr void GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::__cordl_internal_set_MothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipEnvId = value;
}
inline void GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest* GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest::AssociateMotherhsipAndModIOAccountsRequest()   {
}
