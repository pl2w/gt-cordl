#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ExecuteFunctionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EntityKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ExecuteFunctionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ExecuteFunctionRequest::*)()>(&::PlayFab::CloudScriptModels::ExecuteFunctionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ExecuteFunctionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::CloudScriptModels::EntityKey*& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::CloudScriptModels::EntityKey* const& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_set_Entity(::PlayFab::CloudScriptModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::System::Object*& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_FunctionParameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionParameter;
}
constexpr ::System::Object* const& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_FunctionParameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionParameter;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_set_FunctionParameter(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionParameter = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_GeneratePlayStreamEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GeneratePlayStreamEvent;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_get_GeneratePlayStreamEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GeneratePlayStreamEvent;
}
constexpr void PlayFab::CloudScriptModels::ExecuteFunctionRequest::__cordl_internal_set_GeneratePlayStreamEvent(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GeneratePlayStreamEvent = value;
}
inline void PlayFab::CloudScriptModels::ExecuteFunctionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ExecuteFunctionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ExecuteFunctionRequest* PlayFab::CloudScriptModels::ExecuteFunctionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ExecuteFunctionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionRequest::ExecuteFunctionRequest()   {
}
