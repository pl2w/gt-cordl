#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ExecuteFunctionResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExecuteFunctionResult)
namespace PlayFab::CloudScriptModels {
class FunctionExecutionError;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::ExecuteFunctionResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ExecuteFunctionResult*, "PlayFab.CloudScriptModels", "ExecuteFunctionResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.ExecuteFunctionResult
class CORDL_TYPE ExecuteFunctionResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::PlayFab::CloudScriptModels::FunctionExecutionError*  Error;

/// @brief Field ExecutionTimeMilliseconds, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExecutionTimeMilliseconds, put=__cordl_internal_set_ExecutionTimeMilliseconds)) int32_t  ExecutionTimeMilliseconds;

/// @brief Field FunctionName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field FunctionResult, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionResult, put=__cordl_internal_set_FunctionResult)) ::System::Object*  FunctionResult;

/// @brief Field FunctionResultTooLarge, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_FunctionResultTooLarge, put=__cordl_internal_set_FunctionResultTooLarge)) ::System::Nullable_1<bool>  FunctionResultTooLarge;

static inline ::PlayFab::CloudScriptModels::ExecuteFunctionResult* New_ctor() ;

constexpr ::PlayFab::CloudScriptModels::FunctionExecutionError* const& __cordl_internal_get_Error() const;

constexpr ::PlayFab::CloudScriptModels::FunctionExecutionError*& __cordl_internal_get_Error() ;

constexpr int32_t const& __cordl_internal_get_ExecutionTimeMilliseconds() const;

constexpr int32_t& __cordl_internal_get_ExecutionTimeMilliseconds() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr ::System::Object* const& __cordl_internal_get_FunctionResult() const;

constexpr ::System::Object*& __cordl_internal_get_FunctionResult() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_FunctionResultTooLarge() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_FunctionResultTooLarge() ;

constexpr void __cordl_internal_set_Error(::PlayFab::CloudScriptModels::FunctionExecutionError*  value) ;

constexpr void __cordl_internal_set_ExecutionTimeMilliseconds(int32_t  value) ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_FunctionResult(::System::Object*  value) ;

constexpr void __cordl_internal_set_FunctionResultTooLarge(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa842f44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExecuteFunctionResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExecuteFunctionResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecuteFunctionResult(ExecuteFunctionResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteFunctionResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecuteFunctionResult(ExecuteFunctionResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19880};

/// @brief Field Error, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::FunctionExecutionError*  ___Error;

/// @brief Field ExecutionTimeMilliseconds, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ExecutionTimeMilliseconds;

/// @brief Field FunctionName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field FunctionResult, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___FunctionResult;

/// @brief Field FunctionResultTooLarge, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___FunctionResultTooLarge;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionResult, ___Error) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionResult, ___ExecutionTimeMilliseconds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionResult, ___FunctionName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionResult, ___FunctionResult) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionResult, ___FunctionResultTooLarge) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::ExecuteFunctionResult) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
