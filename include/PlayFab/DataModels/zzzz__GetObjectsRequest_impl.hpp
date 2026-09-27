#pragma once
// IWYU pragma private; include "PlayFab/DataModels/GetObjectsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/DataModels/zzzz__GetObjectsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::GetObjectsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::GetObjectsRequest::*)()>(&::PlayFab::DataModels::GetObjectsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetObjectsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::GetObjectsRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::GetObjectsRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::GetObjectsRequest::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::DataModels::GetObjectsRequest::__cordl_internal_get_EscapeObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapeObject;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::DataModels::GetObjectsRequest::__cordl_internal_get_EscapeObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapeObject;
}
constexpr void PlayFab::DataModels::GetObjectsRequest::__cordl_internal_set_EscapeObject(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EscapeObject = value;
}
inline void PlayFab::DataModels::GetObjectsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetObjectsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::GetObjectsRequest* PlayFab::DataModels::GetObjectsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::GetObjectsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::GetObjectsRequest::GetObjectsRequest()   {
}
