#pragma once
// IWYU pragma private; include "PlayFab/DataModels/SetObjectsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/DataModels/zzzz__SetObjectsResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__SetObjectInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::SetObjectsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::SetObjectsResponse::*)()>(&::PlayFab::DataModels::SetObjectsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::SetObjectsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::DataModels::SetObjectsResponse::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::DataModels::SetObjectsResponse::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::DataModels::SetObjectsResponse::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>*& PlayFab::DataModels::SetObjectsResponse::__cordl_internal_get_SetResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetResults;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>* const& PlayFab::DataModels::SetObjectsResponse::__cordl_internal_get_SetResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetResults;
}
constexpr void PlayFab::DataModels::SetObjectsResponse::__cordl_internal_set_SetResults(::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetResults = value;
}
inline void PlayFab::DataModels::SetObjectsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::SetObjectsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::SetObjectsResponse* PlayFab::DataModels::SetObjectsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::SetObjectsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::SetObjectsResponse::SetObjectsResponse()   {
}
