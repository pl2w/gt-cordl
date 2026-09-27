#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/FunctionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FunctionModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class FunctionModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::FunctionModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::FunctionModel*, "PlayFab.CloudScriptModels", "FunctionModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.FunctionModel
class CORDL_TYPE FunctionModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FunctionAddress, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionAddress, put=__cordl_internal_set_FunctionAddress)) ::StringW  FunctionAddress;

/// @brief Field FunctionName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field TriggerType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerType, put=__cordl_internal_set_TriggerType)) ::StringW  TriggerType;

static inline ::PlayFab::CloudScriptModels::FunctionModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FunctionAddress() const;

constexpr ::StringW& __cordl_internal_get_FunctionAddress() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr ::StringW const& __cordl_internal_get_TriggerType() const;

constexpr ::StringW& __cordl_internal_get_TriggerType() ;

constexpr void __cordl_internal_set_FunctionAddress(::StringW  value) ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_TriggerType(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842f54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FunctionModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FunctionModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FunctionModel(FunctionModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FunctionModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FunctionModel(FunctionModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19882};

/// @brief Field FunctionAddress, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FunctionAddress;

/// @brief Field FunctionName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field TriggerType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TriggerType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::FunctionModel, ___FunctionAddress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::FunctionModel, ___FunctionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::FunctionModel, ___TriggerType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::FunctionModel) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
