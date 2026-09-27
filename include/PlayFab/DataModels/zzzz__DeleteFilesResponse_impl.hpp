#pragma once
// IWYU pragma private; include "PlayFab/DataModels/DeleteFilesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/DataModels/zzzz__DeleteFilesResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::DeleteFilesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::DeleteFilesResponse::*)()>(&::PlayFab::DataModels::DeleteFilesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::DeleteFilesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::DataModels::EntityKey*& PlayFab::DataModels::DeleteFilesResponse::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::DataModels::EntityKey* const& PlayFab::DataModels::DeleteFilesResponse::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::DataModels::DeleteFilesResponse::__cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr int32_t& PlayFab::DataModels::DeleteFilesResponse::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::DataModels::DeleteFilesResponse::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::DataModels::DeleteFilesResponse::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
inline void PlayFab::DataModels::DeleteFilesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::DeleteFilesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::DeleteFilesResponse* PlayFab::DataModels::DeleteFilesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::DeleteFilesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::DeleteFilesResponse::DeleteFilesResponse()   {
}
