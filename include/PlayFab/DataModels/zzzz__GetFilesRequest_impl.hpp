#pragma once
// IWYU pragma private; include "PlayFab/DataModels/GetFilesRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/DataModels/zzzz__GetFilesRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::GetFilesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::GetFilesRequest::*)()>(&::PlayFab::DataModels::GetFilesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetFilesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::GetFilesRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::GetFilesRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::GetFilesRequest::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
inline void PlayFab::DataModels::GetFilesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetFilesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::GetFilesRequest* PlayFab::DataModels::GetFilesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::GetFilesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::GetFilesRequest::GetFilesRequest()   {
}
