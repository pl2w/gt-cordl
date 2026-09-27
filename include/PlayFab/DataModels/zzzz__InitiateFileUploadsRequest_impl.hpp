#pragma once
// IWYU pragma private; include "PlayFab/DataModels/InitiateFileUploadsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/DataModels/zzzz__InitiateFileUploadsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::InitiateFileUploadsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::InitiateFileUploadsRequest::*)()>(&::PlayFab::DataModels::InitiateFileUploadsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::InitiateFileUploadsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_get_FileNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_get_FileNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileNames;
}
constexpr void PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_set_FileNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileNames = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::DataModels::InitiateFileUploadsRequest::__cordl_internal_set_ProfileVersion(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
inline void PlayFab::DataModels::InitiateFileUploadsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::InitiateFileUploadsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::InitiateFileUploadsRequest* PlayFab::DataModels::InitiateFileUploadsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::InitiateFileUploadsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::InitiateFileUploadsRequest::InitiateFileUploadsRequest()   {
}
