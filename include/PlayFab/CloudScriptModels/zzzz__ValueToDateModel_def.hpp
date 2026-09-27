#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ValueToDateModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueToDateModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class ValueToDateModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::ValueToDateModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ValueToDateModel*, "PlayFab.CloudScriptModels", "ValueToDateModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.ValueToDateModel
class CORDL_TYPE ValueToDateModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Currency, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Currency, put=__cordl_internal_set_Currency)) ::StringW  Currency;

/// @brief Field TotalValue, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalValue, put=__cordl_internal_set_TotalValue)) uint32_t  TotalValue;

/// @brief Field TotalValueAsDecimal, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalValueAsDecimal, put=__cordl_internal_set_TotalValueAsDecimal)) ::StringW  TotalValueAsDecimal;

static inline ::PlayFab::CloudScriptModels::ValueToDateModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Currency() const;

constexpr ::StringW& __cordl_internal_get_Currency() ;

constexpr uint32_t const& __cordl_internal_get_TotalValue() const;

constexpr uint32_t& __cordl_internal_get_TotalValue() ;

constexpr ::StringW const& __cordl_internal_get_TotalValueAsDecimal() const;

constexpr ::StringW& __cordl_internal_get_TotalValueAsDecimal() ;

constexpr void __cordl_internal_set_Currency(::StringW  value) ;

constexpr void __cordl_internal_set_TotalValue(uint32_t  value) ;

constexpr void __cordl_internal_set_TotalValueAsDecimal(::StringW  value) ;

/// @brief Method .ctor, addr 0xa843024, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueToDateModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueToDateModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueToDateModel(ValueToDateModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueToDateModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueToDateModel(ValueToDateModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19912};

/// @brief Field Currency, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Currency;

/// @brief Field TotalValue, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___TotalValue;

/// @brief Field TotalValueAsDecimal, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TotalValueAsDecimal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::ValueToDateModel, ___Currency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ValueToDateModel, ___TotalValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ValueToDateModel, ___TotalValueAsDecimal) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::ValueToDateModel) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
