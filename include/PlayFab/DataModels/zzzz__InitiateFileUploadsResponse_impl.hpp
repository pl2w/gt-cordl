#pragma once
// IWYU pragma private; include "PlayFab/DataModels/InitiateFileUploadsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/DataModels/zzzz__InitiateFileUploadsResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/DataModels/zzzz__InitiateFileUploadMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::InitiateFileUploadsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::InitiateFileUploadsResponse::*)()>(&::PlayFab::DataModels::InitiateFileUploadsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::InitiateFileUploadsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr int32_t& PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>*& PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_get_UploadDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadDetails;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>* const& PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_get_UploadDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadDetails;
}
constexpr void PlayFab::DataModels::InitiateFileUploadsResponse::__cordl_internal_set_UploadDetails(::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UploadDetails = value;
}
inline void PlayFab::DataModels::InitiateFileUploadsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::InitiateFileUploadsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::InitiateFileUploadsResponse* PlayFab::DataModels::InitiateFileUploadsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::InitiateFileUploadsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::InitiateFileUploadsResponse::InitiateFileUploadsResponse()   {
}
