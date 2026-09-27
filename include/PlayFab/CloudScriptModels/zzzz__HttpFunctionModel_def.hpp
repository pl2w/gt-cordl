#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/HttpFunctionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpFunctionModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class HttpFunctionModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::HttpFunctionModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::HttpFunctionModel*, "PlayFab.CloudScriptModels", "HttpFunctionModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.HttpFunctionModel
class CORDL_TYPE HttpFunctionModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FunctionName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field FunctionUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionUrl, put=__cordl_internal_set_FunctionUrl)) ::StringW  FunctionUrl;

static inline ::PlayFab::CloudScriptModels::HttpFunctionModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr ::StringW const& __cordl_internal_get_FunctionUrl() const;

constexpr ::StringW& __cordl_internal_get_FunctionUrl() ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_FunctionUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842f5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpFunctionModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpFunctionModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpFunctionModel(HttpFunctionModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpFunctionModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpFunctionModel(HttpFunctionModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19883};

/// @brief Field FunctionName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field FunctionUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FunctionUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::HttpFunctionModel, ___FunctionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::HttpFunctionModel, ___FunctionUrl) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::HttpFunctionModel) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
