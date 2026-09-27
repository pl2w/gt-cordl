#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/Variable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Variable)
// Forward declare root types
namespace PlayFab::ClientModels {
class Variable;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::Variable*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::Variable*, "PlayFab.ClientModels", "Variable");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.Variable
class CORDL_TYPE Variable : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) ::StringW  Value;

static inline ::PlayFab::ClientModels::Variable* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_Value() const;

constexpr ::StringW& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Value(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e550, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Variable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Variable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Variable(Variable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Variable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Variable(Variable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20324};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Value, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::Variable, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::Variable, ___Value) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::Variable) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
