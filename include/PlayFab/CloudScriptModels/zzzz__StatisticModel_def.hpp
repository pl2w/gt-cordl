#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/StatisticModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatisticModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class StatisticModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::StatisticModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::StatisticModel*, "PlayFab.CloudScriptModels", "StatisticModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.StatisticModel
class CORDL_TYPE StatisticModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) int32_t  Value;

/// @brief Field Version, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) int32_t  Version;

static inline ::PlayFab::CloudScriptModels::StatisticModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr int32_t const& __cordl_internal_get_Value() const;

constexpr int32_t& __cordl_internal_get_Value() ;

constexpr int32_t const& __cordl_internal_get_Version() const;

constexpr int32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Value(int32_t  value) ;

constexpr void __cordl_internal_set_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0xa843004, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatisticModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatisticModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StatisticModel(StatisticModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatisticModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatisticModel(StatisticModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19906};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Value, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Value;

/// @brief Field Version, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::StatisticModel, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::StatisticModel, ___Value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::StatisticModel, ___Version) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::StatisticModel) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
