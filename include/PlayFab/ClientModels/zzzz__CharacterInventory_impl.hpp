#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CharacterInventory.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CharacterInventory_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CharacterInventory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CharacterInventory::*)()>(&::PlayFab::ClientModels::CharacterInventory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CharacterInventory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::CharacterInventory::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterInventory::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::CharacterInventory::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::CharacterInventory::__cordl_internal_get_Inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::CharacterInventory::__cordl_internal_get_Inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr void PlayFab::ClientModels::CharacterInventory::__cordl_internal_set_Inventory(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Inventory = value;
}
inline void PlayFab::ClientModels::CharacterInventory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CharacterInventory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CharacterInventory* PlayFab::ClientModels::CharacterInventory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CharacterInventory*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CharacterInventory::CharacterInventory()   {
}
