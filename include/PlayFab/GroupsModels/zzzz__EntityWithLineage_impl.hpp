#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/EntityWithLineage.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityWithLineage_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::EntityWithLineage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::EntityWithLineage::*)()>(&::PlayFab::GroupsModels::EntityWithLineage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::EntityWithLineage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::EntityWithLineage::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::EntityWithLineage::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void PlayFab::GroupsModels::EntityWithLineage::__cordl_internal_set_Key(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>*& PlayFab::GroupsModels::EntityWithLineage::__cordl_internal_get_Lineage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lineage;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>* const& PlayFab::GroupsModels::EntityWithLineage::__cordl_internal_get_Lineage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lineage;
}
constexpr void PlayFab::GroupsModels::EntityWithLineage::__cordl_internal_set_Lineage(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::GroupsModels::EntityKey*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lineage = value;
}
inline void PlayFab::GroupsModels::EntityWithLineage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::EntityWithLineage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::EntityWithLineage* PlayFab::GroupsModels::EntityWithLineage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::EntityWithLineage*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::EntityWithLineage::EntityWithLineage()   {
}
