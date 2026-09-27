#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ContainerImageReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ContainerImageReference)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ContainerImageReference;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ContainerImageReference*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ContainerImageReference*, "PlayFab.MultiplayerModels", "ContainerImageReference");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ContainerImageReference
class CORDL_TYPE ContainerImageReference : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ImageName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImageName, put=__cordl_internal_set_ImageName)) ::StringW  ImageName;

/// @brief Field Tag, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tag, put=__cordl_internal_set_Tag)) ::StringW  Tag;

static inline ::PlayFab::MultiplayerModels::ContainerImageReference* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ImageName() const;

constexpr ::StringW& __cordl_internal_get_ImageName() ;

constexpr ::StringW const& __cordl_internal_get_Tag() const;

constexpr ::StringW& __cordl_internal_get_Tag() ;

constexpr void __cordl_internal_set_ImageName(::StringW  value) ;

constexpr void __cordl_internal_set_Tag(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContainerImageReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContainerImageReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContainerImageReference(ContainerImageReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContainerImageReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContainerImageReference(ContainerImageReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19609};

/// @brief Field ImageName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ImageName;

/// @brief Field Tag, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ContainerImageReference, ___ImageName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ContainerImageReference, ___Tag) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ContainerImageReference) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
