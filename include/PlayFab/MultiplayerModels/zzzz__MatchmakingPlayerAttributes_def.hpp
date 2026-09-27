#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingPlayerAttributes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchmakingPlayerAttributes)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MatchmakingPlayerAttributes;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*, "PlayFab.MultiplayerModels", "MatchmakingPlayerAttributes");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MatchmakingPlayerAttributes
class CORDL_TYPE MatchmakingPlayerAttributes : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DataObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataObject, put=__cordl_internal_set_DataObject)) ::System::Object*  DataObject;

/// @brief Field EscapedDataObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EscapedDataObject, put=__cordl_internal_set_EscapedDataObject)) ::StringW  EscapedDataObject;

static inline ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_DataObject() const;

constexpr ::System::Object*& __cordl_internal_get_DataObject() ;

constexpr ::StringW const& __cordl_internal_get_EscapedDataObject() const;

constexpr ::StringW& __cordl_internal_get_EscapedDataObject() ;

constexpr void __cordl_internal_set_DataObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_EscapedDataObject(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840b58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingPlayerAttributes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerAttributes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingPlayerAttributes(MatchmakingPlayerAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerAttributes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingPlayerAttributes(MatchmakingPlayerAttributes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19709};

/// @brief Field DataObject, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___DataObject;

/// @brief Field EscapedDataObject, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EscapedDataObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes, ___DataObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes, ___EscapedDataObject) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
