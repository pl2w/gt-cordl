#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ExecuteFunctionResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__FunctionExecutionError_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ExecuteFunctionResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ExecuteFunctionResult::*)()>(&::PlayFab::CloudScriptModels::ExecuteFunctionResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::CloudScriptModels::FunctionExecutionError*& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::PlayFab::CloudScriptModels::FunctionExecutionError* const& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_set_Error(::PlayFab::CloudScriptModels::FunctionExecutionError*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr int32_t& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_ExecutionTimeMilliseconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionTimeMilliseconds;
}
constexpr int32_t const& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_ExecutionTimeMilliseconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionTimeMilliseconds;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_set_ExecutionTimeMilliseconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExecutionTimeMilliseconds = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::System::Object*& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_FunctionResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr ::System::Object* const& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_FunctionResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_set_FunctionResult(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionResult = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_FunctionResultTooLarge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResultTooLarge;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_get_FunctionResultTooLarge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResultTooLarge;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionResult::__cordl_internal_set_FunctionResultTooLarge(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionResultTooLarge = value;
}
inline void PlayFab::CloudScriptModels::ExecuteFunctionResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ExecuteFunctionResult* PlayFab::CloudScriptModels::ExecuteFunctionResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult::ExecuteFunctionResult()   {
}
