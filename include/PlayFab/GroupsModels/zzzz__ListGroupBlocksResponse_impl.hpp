#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListGroupBlocksResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ListGroupBlocksResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupBlock_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ListGroupBlocksResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ListGroupBlocksResponse::*)()>(&::PlayFab::GroupsModels::ListGroupBlocksResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListGroupBlocksResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>*& PlayFab::GroupsModels::ListGroupBlocksResponse::__cordl_internal_get_BlockedEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlockedEntities;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>* const& PlayFab::GroupsModels::ListGroupBlocksResponse::__cordl_internal_get_BlockedEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlockedEntities;
}
constexpr void PlayFab::GroupsModels::ListGroupBlocksResponse::__cordl_internal_set_BlockedEntities(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlockedEntities = value;
}
inline void PlayFab::GroupsModels::ListGroupBlocksResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ListGroupBlocksResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ListGroupBlocksResponse* PlayFab::GroupsModels::ListGroupBlocksResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ListGroupBlocksResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ListGroupBlocksResponse::ListGroupBlocksResponse()   {
}
