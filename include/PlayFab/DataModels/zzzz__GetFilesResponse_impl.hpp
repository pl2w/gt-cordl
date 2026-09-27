#pragma once
// IWYU pragma private; include "PlayFab/DataModels/GetFilesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/DataModels/zzzz__GetFilesResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/DataModels/zzzz__GetFileMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::GetFilesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::GetFilesResponse::*)()>(&::PlayFab::DataModels::GetFilesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetFilesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::GetFilesResponse::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::GetFilesResponse::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::GetFilesResponse::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>*& PlayFab::DataModels::GetFilesResponse::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>* const& PlayFab::DataModels::GetFilesResponse::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::DataModels::GetFilesResponse::__cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
constexpr int32_t& PlayFab::DataModels::GetFilesResponse::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::DataModels::GetFilesResponse::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::DataModels::GetFilesResponse::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
inline void PlayFab::DataModels::GetFilesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetFilesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::GetFilesResponse* PlayFab::DataModels::GetFilesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::GetFilesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::GetFilesResponse::GetFilesResponse()   {
}
