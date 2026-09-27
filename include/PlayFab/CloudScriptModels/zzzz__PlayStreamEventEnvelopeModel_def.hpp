#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PlayStreamEventEnvelopeModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayStreamEventEnvelopeModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class PlayStreamEventEnvelopeModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*, "PlayFab.CloudScriptModels", "PlayStreamEventEnvelopeModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.PlayStreamEventEnvelopeModel
class CORDL_TYPE PlayStreamEventEnvelopeModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field EntityId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityId, put=__cordl_internal_set_EntityId)) ::StringW  EntityId;

/// @brief Field EntityType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EntityType, put=__cordl_internal_set_EntityType)) ::StringW  EntityType;

/// @brief Field EventData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventData, put=__cordl_internal_set_EventData)) ::StringW  EventData;

/// @brief Field EventName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventName, put=__cordl_internal_set_EventName)) ::StringW  EventName;

/// @brief Field EventNamespace, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventNamespace, put=__cordl_internal_set_EventNamespace)) ::StringW  EventNamespace;

/// @brief Field EventSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventSettings, put=__cordl_internal_set_EventSettings)) ::StringW  EventSettings;

static inline ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_EntityId() const;

constexpr ::StringW& __cordl_internal_get_EntityId() ;

constexpr ::StringW const& __cordl_internal_get_EntityType() const;

constexpr ::StringW& __cordl_internal_get_EntityType() ;

constexpr ::StringW const& __cordl_internal_get_EventData() const;

constexpr ::StringW& __cordl_internal_get_EventData() ;

constexpr ::StringW const& __cordl_internal_get_EventName() const;

constexpr ::StringW& __cordl_internal_get_EventName() ;

constexpr ::StringW const& __cordl_internal_get_EventNamespace() const;

constexpr ::StringW& __cordl_internal_get_EventNamespace() ;

constexpr ::StringW const& __cordl_internal_get_EventSettings() const;

constexpr ::StringW& __cordl_internal_get_EventSettings() ;

constexpr void __cordl_internal_set_EntityId(::StringW  value) ;

constexpr void __cordl_internal_set_EntityType(::StringW  value) ;

constexpr void __cordl_internal_set_EventData(::StringW  value) ;

constexpr void __cordl_internal_set_EventName(::StringW  value) ;

constexpr void __cordl_internal_set_EventNamespace(::StringW  value) ;

constexpr void __cordl_internal_set_EventSettings(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842fb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayStreamEventEnvelopeModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayStreamEventEnvelopeModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayStreamEventEnvelopeModel(PlayStreamEventEnvelopeModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayStreamEventEnvelopeModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayStreamEventEnvelopeModel(PlayStreamEventEnvelopeModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19895};

/// @brief Field EntityId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___EntityId;

/// @brief Field EntityType, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EntityType;

/// @brief Field EventData, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___EventData;

/// @brief Field EventName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___EventName;

/// @brief Field EventNamespace, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___EventNamespace;

/// @brief Field EventSettings, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___EventSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel, ___EntityId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel, ___EntityType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel, ___EventData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel, ___EventName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel, ___EventNamespace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel, ___EventSettings) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
