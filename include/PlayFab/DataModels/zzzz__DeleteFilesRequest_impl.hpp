#pragma once
// IWYU pragma private; include "PlayFab/DataModels/DeleteFilesRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/DataModels/zzzz__DeleteFilesRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::DeleteFilesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::DeleteFilesRequest::*)()>(&::PlayFab::DataModels::DeleteFilesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::DeleteFilesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_get_FileNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_get_FileNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileNames;
}
constexpr void PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_set_FileNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileNames = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::DataModels::DeleteFilesRequest::__cordl_internal_set_ProfileVersion(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
inline void PlayFab::DataModels::DeleteFilesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::DeleteFilesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::DeleteFilesRequest* PlayFab::DataModels::DeleteFilesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::DeleteFilesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::DeleteFilesRequest::DeleteFilesRequest()   {
}
