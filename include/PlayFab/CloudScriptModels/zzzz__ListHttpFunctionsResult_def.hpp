#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ListHttpFunctionsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListHttpFunctionsResult)
namespace PlayFab::CloudScriptModels {
class HttpFunctionModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class ListHttpFunctionsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::ListHttpFunctionsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ListHttpFunctionsResult*, "PlayFab.CloudScriptModels", "ListHttpFunctionsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.ListHttpFunctionsResult
class CORDL_TYPE ListHttpFunctionsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Functions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Functions, put=__cordl_internal_set_Functions)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::HttpFunctionModel*>*  Functions;

static inline ::PlayFab::CloudScriptModels::ListHttpFunctionsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::HttpFunctionModel*>* const& __cordl_internal_get_Functions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::HttpFunctionModel*>*& __cordl_internal_get_Functions() ;

constexpr void __cordl_internal_set_Functions(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::HttpFunctionModel*>*  value) ;

/// @brief Method .ctor, addr 0xa842f7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListHttpFunctionsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListHttpFunctionsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListHttpFunctionsResult(ListHttpFunctionsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListHttpFunctionsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListHttpFunctionsResult(ListHttpFunctionsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19887};

/// @brief Field Functions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::HttpFunctionModel*>*  ___Functions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::ListHttpFunctionsResult, ___Functions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::ListHttpFunctionsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
