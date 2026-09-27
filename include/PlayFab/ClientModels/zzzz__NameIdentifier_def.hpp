#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/NameIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NameIdentifier)
// Forward declare root types
namespace PlayFab::ClientModels {
class NameIdentifier;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::NameIdentifier*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::NameIdentifier*, "PlayFab.ClientModels", "NameIdentifier");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.NameIdentifier
class CORDL_TYPE NameIdentifier : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::PlayFab::ClientModels::NameIdentifier* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e0c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NameIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NameIdentifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NameIdentifier(NameIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameIdentifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameIdentifier(NameIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20170};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::NameIdentifier, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::NameIdentifier, ___Name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::NameIdentifier) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
