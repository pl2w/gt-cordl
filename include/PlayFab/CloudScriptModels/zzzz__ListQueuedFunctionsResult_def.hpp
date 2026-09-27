#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ListQueuedFunctionsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListQueuedFunctionsResult)
namespace PlayFab::CloudScriptModels {
class QueuedFunctionModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class ListQueuedFunctionsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*, "PlayFab.CloudScriptModels", "ListQueuedFunctionsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.ListQueuedFunctionsResult
class CORDL_TYPE ListQueuedFunctionsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Functions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Functions, put=__cordl_internal_set_Functions)) ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>*  Functions;

static inline ::PlayFab::CloudScriptModels::ListQueuedFunctionsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>* const& __cordl_internal_get_Functions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>*& __cordl_internal_get_Functions() ;

constexpr void __cordl_internal_set_Functions(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>*  value) ;

/// @brief Method .ctor, addr 0xa842f84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListQueuedFunctionsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListQueuedFunctionsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListQueuedFunctionsResult(ListQueuedFunctionsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListQueuedFunctionsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListQueuedFunctionsResult(ListQueuedFunctionsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19888};

/// @brief Field Functions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>*  ___Functions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::ListQueuedFunctionsResult, ___Functions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::ListQueuedFunctionsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
