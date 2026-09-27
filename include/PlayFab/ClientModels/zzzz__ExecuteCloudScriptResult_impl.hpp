#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ExecuteCloudScriptResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ExecuteCloudScriptResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__LogStatement_def.hpp"
#include "PlayFab/ClientModels/zzzz__ScriptExecutionError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ExecuteCloudScriptResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ExecuteCloudScriptResult::*)()>(&::PlayFab::ClientModels::ExecuteCloudScriptResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ExecuteCloudScriptResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_APIRequestsIssued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___APIRequestsIssued;
}
constexpr int32_t const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_APIRequestsIssued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___APIRequestsIssued;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_APIRequestsIssued(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___APIRequestsIssued = value;
}
constexpr ::PlayFab::ClientModels::ScriptExecutionError*& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::PlayFab::ClientModels::ScriptExecutionError* const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_Error(::PlayFab::ClientModels::ScriptExecutionError*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr double_t& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_ExecutionTimeSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionTimeSeconds;
}
constexpr double_t const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_ExecutionTimeSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionTimeSeconds;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_ExecutionTimeSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExecutionTimeSeconds = value;
}
constexpr ::StringW& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::System::Object*& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_FunctionResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr ::System::Object* const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_FunctionResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_FunctionResult(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionResult = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_FunctionResultTooLarge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResultTooLarge;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_FunctionResultTooLarge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResultTooLarge;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_FunctionResultTooLarge(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionResultTooLarge = value;
}
constexpr int32_t& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_HttpRequestsIssued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpRequestsIssued;
}
constexpr int32_t const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_HttpRequestsIssued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpRequestsIssued;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_HttpRequestsIssued(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpRequestsIssued = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_Logs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Logs;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>* const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_Logs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Logs;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_Logs(::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Logs = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_LogsTooLarge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogsTooLarge;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_LogsTooLarge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogsTooLarge;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_LogsTooLarge(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogsTooLarge = value;
}
constexpr uint32_t& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_MemoryConsumedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemoryConsumedBytes;
}
constexpr uint32_t const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_MemoryConsumedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemoryConsumedBytes;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_MemoryConsumedBytes(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MemoryConsumedBytes = value;
}
constexpr double_t& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_ProcessorTimeSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorTimeSeconds;
}
constexpr double_t const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_ProcessorTimeSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessorTimeSeconds;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_ProcessorTimeSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessorTimeSeconds = value;
}
constexpr int32_t& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_Revision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Revision;
}
constexpr int32_t const& PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_get_Revision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Revision;
}
constexpr void PlayFab::ClientModels::ExecuteCloudScriptResult::__cordl_internal_set_Revision(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Revision = value;
}
inline void PlayFab::ClientModels::ExecuteCloudScriptResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ExecuteCloudScriptResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ExecuteCloudScriptResult* PlayFab::ClientModels::ExecuteCloudScriptResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ExecuteCloudScriptResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ExecuteCloudScriptResult::ExecuteCloudScriptResult()   {
}
