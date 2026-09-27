#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityPermissionStatement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ProfilesModels/zzzz__EffectType_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EntityPermissionStatement)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityPermissionStatement;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityPermissionStatement*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityPermissionStatement*, "PlayFab.ProfilesModels", "EntityPermissionStatement");
// Dependencies PlayFab.ProfilesModels.EffectType, PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityPermissionStatement
class CORDL_TYPE EntityPermissionStatement : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::StringW  Action;

/// @brief Field Comment, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Comment, put=__cordl_internal_set_Comment)) ::StringW  Comment;

/// @brief Field Condition, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Condition, put=__cordl_internal_set_Condition)) ::System::Object*  Condition;

/// @brief Field Effect, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Effect, put=__cordl_internal_set_Effect)) ::PlayFab::ProfilesModels::EffectType  Effect;

/// @brief Field Principal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Principal, put=__cordl_internal_set_Principal)) ::System::Object*  Principal;

/// @brief Field Resource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Resource, put=__cordl_internal_set_Resource)) ::StringW  Resource;

static inline ::PlayFab::ProfilesModels::EntityPermissionStatement* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Action() const;

constexpr ::StringW& __cordl_internal_get_Action() ;

constexpr ::StringW const& __cordl_internal_get_Comment() const;

constexpr ::StringW& __cordl_internal_get_Comment() ;

constexpr ::System::Object* const& __cordl_internal_get_Condition() const;

constexpr ::System::Object*& __cordl_internal_get_Condition() ;

constexpr ::PlayFab::ProfilesModels::EffectType const& __cordl_internal_get_Effect() const;

constexpr ::PlayFab::ProfilesModels::EffectType& __cordl_internal_get_Effect() ;

constexpr ::System::Object* const& __cordl_internal_get_Principal() const;

constexpr ::System::Object*& __cordl_internal_get_Principal() ;

constexpr ::StringW const& __cordl_internal_get_Resource() const;

constexpr ::StringW& __cordl_internal_get_Resource() ;

constexpr void __cordl_internal_set_Action(::StringW  value) ;

constexpr void __cordl_internal_set_Comment(::StringW  value) ;

constexpr void __cordl_internal_set_Condition(::System::Object*  value) ;

constexpr void __cordl_internal_set_Effect(::PlayFab::ProfilesModels::EffectType  value) ;

constexpr void __cordl_internal_set_Principal(::System::Object*  value) ;

constexpr void __cordl_internal_set_Resource(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840700, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityPermissionStatement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityPermissionStatement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityPermissionStatement(EntityPermissionStatement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityPermissionStatement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityPermissionStatement(EntityPermissionStatement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19561};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Action;

/// @brief Field Comment, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Comment;

/// @brief Field Condition, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___Condition;

/// @brief Field Effect, offset: 0x28, size: 0x4, def value: None
 ::PlayFab::ProfilesModels::EffectType  ___Effect;

/// @brief Field Principal, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___Principal;

/// @brief Field Resource, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Resource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityPermissionStatement, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityPermissionStatement, ___Comment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityPermissionStatement, ___Condition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityPermissionStatement, ___Effect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityPermissionStatement, ___Principal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityPermissionStatement, ___Resource) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityPermissionStatement) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
