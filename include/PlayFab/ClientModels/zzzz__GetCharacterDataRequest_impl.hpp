#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterDataRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetCharacterDataRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetCharacterDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetCharacterDataRequest::*)()>(&::PlayFab::ClientModels::GetCharacterDataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_IfChangedFromDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IfChangedFromDataVersion;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_IfChangedFromDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IfChangedFromDataVersion;
}
constexpr void PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_set_IfChangedFromDataVersion(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IfChangedFromDataVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_Keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_Keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr void PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_set_Keys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Keys = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GetCharacterDataRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::GetCharacterDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetCharacterDataRequest* PlayFab::ClientModels::GetCharacterDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetCharacterDataRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetCharacterDataRequest::GetCharacterDataRequest()   {
}
