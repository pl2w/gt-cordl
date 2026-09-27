#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetUserDataRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserDataRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetUserDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetUserDataRequest::*)()>(&::PlayFab::ClientModels::GetUserDataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_get_IfChangedFromDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IfChangedFromDataVersion;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_get_IfChangedFromDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IfChangedFromDataVersion;
}
constexpr void PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_set_IfChangedFromDataVersion(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IfChangedFromDataVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_get_Keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_get_Keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr void PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_set_Keys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Keys = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GetUserDataRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::GetUserDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetUserDataRequest* PlayFab::ClientModels::GetUserDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetUserDataRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetUserDataRequest::GetUserDataRequest()   {
}
