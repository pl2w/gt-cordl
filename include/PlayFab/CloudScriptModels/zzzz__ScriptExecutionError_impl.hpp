#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ScriptExecutionError.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ScriptExecutionError_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ScriptExecutionError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ScriptExecutionError::*)()>(&::PlayFab::CloudScriptModels::ScriptExecutionError::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ScriptExecutionError*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_get_StackTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTrace;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_get_StackTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTrace;
}
constexpr void PlayFab::CloudScriptModels::ScriptExecutionError::__cordl_internal_set_StackTrace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StackTrace = value;
}
inline void PlayFab::CloudScriptModels::ScriptExecutionError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ScriptExecutionError*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ScriptExecutionError* PlayFab::CloudScriptModels::ScriptExecutionError::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ScriptExecutionError*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ScriptExecutionError::ScriptExecutionError()   {
}
