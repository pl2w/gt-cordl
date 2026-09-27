#pragma once
// IWYU pragma private; include "PlayFab/EventsModels/EventContents.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/EventsModels/zzzz__EventContents_def.hpp"
#include "PlayFab/EventsModels/zzzz__EntityKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::EventsModels::EventContents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::EventsModels::EventContents::*)()>(&::PlayFab::EventsModels::EventContents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::EventsModels::EventContents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::EventsModels::EntityKey*& PlayFab::EventsModels::EventContents::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::EventsModels::EntityKey* const& PlayFab::EventsModels::EventContents::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::EventsModels::EventContents::__cordl_internal_set_Entity(::PlayFab::EventsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::EventsModels::EventContents::__cordl_internal_get_EventNamespace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventNamespace;
}
constexpr ::StringW const& PlayFab::EventsModels::EventContents::__cordl_internal_get_EventNamespace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventNamespace;
}
constexpr void PlayFab::EventsModels::EventContents::__cordl_internal_set_EventNamespace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventNamespace = value;
}
constexpr ::StringW& PlayFab::EventsModels::EventContents::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::EventsModels::EventContents::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::EventsModels::EventContents::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::EventsModels::EventContents::__cordl_internal_get_OriginalId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalId;
}
constexpr ::StringW const& PlayFab::EventsModels::EventContents::__cordl_internal_get_OriginalId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalId;
}
constexpr void PlayFab::EventsModels::EventContents::__cordl_internal_set_OriginalId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OriginalId = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::EventsModels::EventContents::__cordl_internal_get_OriginalTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalTimestamp;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::EventsModels::EventContents::__cordl_internal_get_OriginalTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalTimestamp;
}
constexpr void PlayFab::EventsModels::EventContents::__cordl_internal_set_OriginalTimestamp(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OriginalTimestamp = value;
}
constexpr ::System::Object*& PlayFab::EventsModels::EventContents::__cordl_internal_get_Payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Payload;
}
constexpr ::System::Object* const& PlayFab::EventsModels::EventContents::__cordl_internal_get_Payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Payload;
}
constexpr void PlayFab::EventsModels::EventContents::__cordl_internal_set_Payload(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Payload = value;
}
constexpr ::StringW& PlayFab::EventsModels::EventContents::__cordl_internal_get_PayloadJSON()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PayloadJSON;
}
constexpr ::StringW const& PlayFab::EventsModels::EventContents::__cordl_internal_get_PayloadJSON() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PayloadJSON;
}
constexpr void PlayFab::EventsModels::EventContents::__cordl_internal_set_PayloadJSON(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PayloadJSON = value;
}
inline void PlayFab::EventsModels::EventContents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::EventsModels::EventContents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::EventsModels::EventContents* PlayFab::EventsModels::EventContents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::EventsModels::EventContents*>());
}
// Ctor Parameters []
constexpr ::PlayFab::EventsModels::EventContents::EventContents()   {
}
