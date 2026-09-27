#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ExecuteCloudScriptResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExecuteCloudScriptResult)
namespace PlayFab::ClientModels {
class LogStatement;
}
namespace PlayFab::ClientModels {
class ScriptExecutionError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class ExecuteCloudScriptResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ExecuteCloudScriptResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ExecuteCloudScriptResult*, "PlayFab.ClientModels", "ExecuteCloudScriptResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ExecuteCloudScriptResult
class CORDL_TYPE ExecuteCloudScriptResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field APIRequestsIssued, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_APIRequestsIssued, put=__cordl_internal_set_APIRequestsIssued)) int32_t  APIRequestsIssued;

/// @brief Field Error, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::PlayFab::ClientModels::ScriptExecutionError*  Error;

/// @brief Field ExecutionTimeSeconds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExecutionTimeSeconds, put=__cordl_internal_set_ExecutionTimeSeconds)) double_t  ExecutionTimeSeconds;

/// @brief Field FunctionName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field FunctionResult, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionResult, put=__cordl_internal_set_FunctionResult)) ::System::Object*  FunctionResult;

/// @brief Field FunctionResultTooLarge, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_FunctionResultTooLarge, put=__cordl_internal_set_FunctionResultTooLarge)) ::System::Nullable_1<bool>  FunctionResultTooLarge;

/// @brief Field HttpRequestsIssued, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_HttpRequestsIssued, put=__cordl_internal_set_HttpRequestsIssued)) int32_t  HttpRequestsIssued;

/// @brief Field Logs, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Logs, put=__cordl_internal_set_Logs)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*  Logs;

/// @brief Field LogsTooLarge, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_LogsTooLarge, put=__cordl_internal_set_LogsTooLarge)) ::System::Nullable_1<bool>  LogsTooLarge;

/// @brief Field MemoryConsumedBytes, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_MemoryConsumedBytes, put=__cordl_internal_set_MemoryConsumedBytes)) uint32_t  MemoryConsumedBytes;

/// @brief Field ProcessorTimeSeconds, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProcessorTimeSeconds, put=__cordl_internal_set_ProcessorTimeSeconds)) double_t  ProcessorTimeSeconds;

/// @brief Field Revision, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_Revision, put=__cordl_internal_set_Revision)) int32_t  Revision;

static inline ::PlayFab::ClientModels::ExecuteCloudScriptResult* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_APIRequestsIssued() const;

constexpr int32_t& __cordl_internal_get_APIRequestsIssued() ;

constexpr ::PlayFab::ClientModels::ScriptExecutionError* const& __cordl_internal_get_Error() const;

constexpr ::PlayFab::ClientModels::ScriptExecutionError*& __cordl_internal_get_Error() ;

constexpr double_t const& __cordl_internal_get_ExecutionTimeSeconds() const;

constexpr double_t& __cordl_internal_get_ExecutionTimeSeconds() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr ::System::Object* const& __cordl_internal_get_FunctionResult() const;

constexpr ::System::Object*& __cordl_internal_get_FunctionResult() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_FunctionResultTooLarge() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_FunctionResultTooLarge() ;

constexpr int32_t const& __cordl_internal_get_HttpRequestsIssued() const;

constexpr int32_t& __cordl_internal_get_HttpRequestsIssued() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>* const& __cordl_internal_get_Logs() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*& __cordl_internal_get_Logs() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_LogsTooLarge() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_LogsTooLarge() ;

constexpr uint32_t const& __cordl_internal_get_MemoryConsumedBytes() const;

constexpr uint32_t& __cordl_internal_get_MemoryConsumedBytes() ;

constexpr double_t const& __cordl_internal_get_ProcessorTimeSeconds() const;

constexpr double_t& __cordl_internal_get_ProcessorTimeSeconds() ;

constexpr int32_t const& __cordl_internal_get_Revision() const;

constexpr int32_t& __cordl_internal_get_Revision() ;

constexpr void __cordl_internal_set_APIRequestsIssued(int32_t  value) ;

constexpr void __cordl_internal_set_Error(::PlayFab::ClientModels::ScriptExecutionError*  value) ;

constexpr void __cordl_internal_set_ExecutionTimeSeconds(double_t  value) ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_FunctionResult(::System::Object*  value) ;

constexpr void __cordl_internal_set_FunctionResultTooLarge(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_HttpRequestsIssued(int32_t  value) ;

constexpr void __cordl_internal_set_Logs(::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*  value) ;

constexpr void __cordl_internal_set_LogsTooLarge(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_MemoryConsumedBytes(uint32_t  value) ;

constexpr void __cordl_internal_set_ProcessorTimeSeconds(double_t  value) ;

constexpr void __cordl_internal_set_Revision(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84db68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExecuteCloudScriptResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCloudScriptResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecuteCloudScriptResult(ExecuteCloudScriptResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCloudScriptResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecuteCloudScriptResult(ExecuteCloudScriptResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19995};

/// @brief Field APIRequestsIssued, offset: 0x20, size: 0x4, def value: None
 int32_t  ___APIRequestsIssued;

/// @brief Field Error, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::ScriptExecutionError*  ___Error;

/// @brief Field ExecutionTimeSeconds, offset: 0x30, size: 0x8, def value: None
 double_t  ___ExecutionTimeSeconds;

/// @brief Field FunctionName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field FunctionResult, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ___FunctionResult;

/// @brief Field FunctionResultTooLarge, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___FunctionResultTooLarge;

/// @brief Field HttpRequestsIssued, offset: 0x58, size: 0x4, def value: None
 int32_t  ___HttpRequestsIssued;

/// @brief Field Logs, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*  ___Logs;

/// @brief Field LogsTooLarge, offset: 0x68, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___LogsTooLarge;

/// @brief Size padding 0x70 - 0x90 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

/// @brief Field MemoryConsumedBytes, offset: 0x78, size: 0x4, def value: None
 uint32_t  ___MemoryConsumedBytes;

/// @brief Field ProcessorTimeSeconds, offset: 0x80, size: 0x8, def value: None
 double_t  ___ProcessorTimeSeconds;

/// @brief Field Revision, offset: 0x88, size: 0x4, def value: None
 int32_t  ___Revision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___APIRequestsIssued) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___Error) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___ExecutionTimeSeconds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___FunctionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___FunctionResult) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___FunctionResultTooLarge) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___HttpRequestsIssued) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___Logs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___LogsTooLarge) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___MemoryConsumedBytes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___ProcessorTimeSeconds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptResult, ___Revision) == 0x88, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ExecuteCloudScriptResult) == 0x70, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
