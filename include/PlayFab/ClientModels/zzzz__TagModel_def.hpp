#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TagModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TagModel)
// Forward declare root types
namespace PlayFab::ClientModels {
class TagModel;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::TagModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TagModel*, "PlayFab.ClientModels", "TagModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.TagModel
class CORDL_TYPE TagModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field TagValue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TagValue, put=__cordl_internal_set_TagValue)) ::StringW  TagValue;

static inline ::PlayFab::ClientModels::TagModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TagValue() const;

constexpr ::StringW& __cordl_internal_get_TagValue() ;

constexpr void __cordl_internal_set_TagValue(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e2b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagModel(TagModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagModel(TagModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20236};

/// @brief Field TagValue, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___TagValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TagModel, ___TagValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TagModel) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
