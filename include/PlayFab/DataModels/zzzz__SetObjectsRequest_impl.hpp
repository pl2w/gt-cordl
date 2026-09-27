#pragma once
// IWYU pragma private; include "PlayFab/DataModels/SetObjectsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/DataModels/zzzz__SetObjectsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/DataModels/zzzz__SetObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::SetObjectsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::SetObjectsRequest::*)()>(&::PlayFab::DataModels::SetObjectsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::SetObjectsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::SetObjectsRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::SetObjectsRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::SetObjectsRequest::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::DataModels::SetObjectsRequest::__cordl_internal_get_ExpectedProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedProfileVersion;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::DataModels::SetObjectsRequest::__cordl_internal_get_ExpectedProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedProfileVersion;
}
constexpr void PlayFab::DataModels::SetObjectsRequest::__cordl_internal_set_ExpectedProfileVersion(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedProfileVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>*& PlayFab::DataModels::SetObjectsRequest::__cordl_internal_get_Objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>* const& PlayFab::DataModels::SetObjectsRequest::__cordl_internal_get_Objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr void PlayFab::DataModels::SetObjectsRequest::__cordl_internal_set_Objects(::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Objects = value;
}
inline void PlayFab::DataModels::SetObjectsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::SetObjectsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::SetObjectsRequest* PlayFab::DataModels::SetObjectsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::SetObjectsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::SetObjectsRequest::SetObjectsRequest()   {
}
