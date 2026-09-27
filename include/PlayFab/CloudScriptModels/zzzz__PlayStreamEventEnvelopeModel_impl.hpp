#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PlayStreamEventEnvelopeModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PlayStreamEventEnvelopeModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::*)()>(&::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EntityId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityId;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EntityId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityId;
}
constexpr void PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_set_EntityId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityId = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EntityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityType;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EntityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityType;
}
constexpr void PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_set_EntityType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityType = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventData;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventData;
}
constexpr void PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_set_EventData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventData = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventName;
}
constexpr void PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_set_EventName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventName = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventNamespace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventNamespace;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventNamespace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventNamespace;
}
constexpr void PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_set_EventNamespace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventNamespace = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventSettings;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_get_EventSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventSettings;
}
constexpr void PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::__cordl_internal_set_EventSettings(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventSettings = value;
}
inline void PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel* PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel()   {
}
