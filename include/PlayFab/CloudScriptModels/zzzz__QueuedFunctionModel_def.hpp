#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/QueuedFunctionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(QueuedFunctionModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class QueuedFunctionModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::QueuedFunctionModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::QueuedFunctionModel*, "PlayFab.CloudScriptModels", "QueuedFunctionModel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.QueuedFunctionModel
class CORDL_TYPE QueuedFunctionModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ConnectionString, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionString, put=__cordl_internal_set_ConnectionString)) ::StringW  ConnectionString;

/// @brief Field FunctionName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field QueueName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

static inline ::PlayFab::CloudScriptModels::QueuedFunctionModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ConnectionString() const;

constexpr ::StringW& __cordl_internal_get_ConnectionString() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr void __cordl_internal_set_ConnectionString(::StringW  value) ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842fe4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueuedFunctionModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueuedFunctionModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QueuedFunctionModel(QueuedFunctionModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueuedFunctionModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueuedFunctionModel(QueuedFunctionModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19902};

/// @brief Field ConnectionString, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ConnectionString;

/// @brief Field FunctionName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field QueueName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___QueueName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::QueuedFunctionModel, ___ConnectionString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::QueuedFunctionModel, ___FunctionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::QueuedFunctionModel, ___QueueName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::QueuedFunctionModel) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
