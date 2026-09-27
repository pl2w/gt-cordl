#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSObjectActivationTrigger.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSObjectActivationTrigger_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger.CopyTriggerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::*)(::GT_CustomMapSupportRuntime::TriggerSettings*)>(&::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::CopyTriggerSettings)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5bd8e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::*)(double_t, bool, bool)>(&::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::Trigger)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5bd90e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bd95bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_objectsToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToActivate;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_objectsToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToActivate;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_set_objectsToActivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToActivate = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_objectsToDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDeactivate;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_objectsToDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDeactivate;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_set_objectsToDeactivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToDeactivate = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_triggersToReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggersToReset;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_triggersToReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggersToReset;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_set_triggersToReset(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggersToReset = value;
}
constexpr bool& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_onlyResetTriggerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyResetTriggerCount;
}
constexpr bool const& GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_get_onlyResetTriggerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyResetTriggerCount;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::__cordl_internal_set_onlyResetTriggerCount(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyResetTriggerCount = value;
}
inline void GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerTime, originatedLocally, ignoreTriggerCount);
}
inline void GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger* GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger::CMSObjectActivationTrigger()   {
}
