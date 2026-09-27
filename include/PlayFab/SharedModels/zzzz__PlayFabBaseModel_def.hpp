#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabBaseModel)
// Forward declare root types
namespace PlayFab::SharedModels {
class PlayFabBaseModel;
}
// Write type traits
MARK_REF_T(::PlayFab::SharedModels::PlayFabBaseModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::SharedModels::PlayFabBaseModel*, "PlayFab.SharedModels", "PlayFabBaseModel");
// Dependencies System.Object
namespace PlayFab::SharedModels {
// Is value type: false
// CS Name: PlayFab.SharedModels.PlayFabBaseModel
class CORDL_TYPE PlayFabBaseModel : public ::System::Object {
public:
// Declarations
static inline ::PlayFab::SharedModels::PlayFabBaseModel* New_ctor() ;

/// @brief Method ToJson, addr 0xa7dee4c, size 0x104, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method .ctor, addr 0xa7def50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabBaseModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabBaseModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabBaseModel(PlayFabBaseModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabBaseModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabBaseModel(PlayFabBaseModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19530};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::SharedModels::PlayFabBaseModel) == 0x10, "Size mismatch!");

} // namespace end def PlayFab::SharedModels
