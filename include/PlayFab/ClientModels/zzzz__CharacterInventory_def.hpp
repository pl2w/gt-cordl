#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CharacterInventory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CharacterInventory)
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class CharacterInventory;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CharacterInventory*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CharacterInventory*, "PlayFab.ClientModels", "CharacterInventory");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CharacterInventory
class CORDL_TYPE CharacterInventory : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CharacterId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field Inventory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Inventory, put=__cordl_internal_set_Inventory)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  Inventory;

static inline ::PlayFab::ClientModels::CharacterInventory* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_Inventory() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_Inventory() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_Inventory(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

/// @brief Method .ctor, addr 0xa84dab0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterInventory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterInventory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterInventory(CharacterInventory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterInventory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterInventory(CharacterInventory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19966};

/// @brief Field CharacterId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field Inventory, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___Inventory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CharacterInventory, ___CharacterId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterInventory, ___Inventory) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CharacterInventory) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
