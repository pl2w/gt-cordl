#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ScriptExecutionError.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ScriptExecutionError_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ScriptExecutionError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ScriptExecutionError::*)()>(&::PlayFab::ClientModels::ScriptExecutionError::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ScriptExecutionError*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr ::StringW& PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::StringW& PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_get_StackTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTrace;
}
constexpr ::StringW const& PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_get_StackTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTrace;
}
constexpr void PlayFab::ClientModels::ScriptExecutionError::__cordl_internal_set_StackTrace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StackTrace = value;
}
inline void PlayFab::ClientModels::ScriptExecutionError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ScriptExecutionError*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ScriptExecutionError* PlayFab::ClientModels::ScriptExecutionError::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ScriptExecutionError*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ScriptExecutionError::ScriptExecutionError()   {
}
