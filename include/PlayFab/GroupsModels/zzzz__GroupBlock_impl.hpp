#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupBlock.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupBlock_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityWithLineage_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::GroupBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::GroupBlock::*)()>(&::PlayFab::GroupsModels::GroupBlock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityWithLineage*& PlayFab::GroupsModels::GroupBlock::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& PlayFab::GroupsModels::GroupBlock::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::GroupsModels::GroupBlock::__cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityWithLineage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::GroupBlock::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::GroupBlock::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::GroupBlock::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
inline void PlayFab::GroupsModels::GroupBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::GroupBlock* PlayFab::GroupsModels::GroupBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::GroupBlock*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::GroupBlock::GroupBlock()   {
}
