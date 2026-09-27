#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ExecuteEntityCloudScriptRequest.hpp"
#include "PlayFab/CloudScriptModels/zzzz__CloudScriptRevisionOption_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteEntityCloudScriptRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EntityKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::*)()>(&::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::CloudScriptModels::EntityKey*& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::CloudScriptModels::EntityKey* const& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_set_Entity(::PlayFab::CloudScriptModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::System::Object*& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_FunctionParameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionParameter;
}
constexpr ::System::Object* const& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_FunctionParameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionParameter;
}
constexpr void PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_set_FunctionParameter(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionParameter = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_GeneratePlayStreamEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GeneratePlayStreamEvent;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_GeneratePlayStreamEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GeneratePlayStreamEvent;
}
constexpr void PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_set_GeneratePlayStreamEvent(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GeneratePlayStreamEvent = value;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::CloudScriptRevisionOption>& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_RevisionSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RevisionSelection;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::CloudScriptRevisionOption> const& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_RevisionSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RevisionSelection;
}
constexpr void PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_set_RevisionSelection(::System::Nullable_1<::PlayFab::CloudScriptModels::CloudScriptRevisionOption>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RevisionSelection = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_SpecificRevision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpecificRevision;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_get_SpecificRevision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpecificRevision;
}
constexpr void PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::__cordl_internal_set_SpecificRevision(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpecificRevision = value;
}
inline void PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest* PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest()   {
}
