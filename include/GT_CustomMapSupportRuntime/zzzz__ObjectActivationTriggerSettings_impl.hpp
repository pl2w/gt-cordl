#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ObjectActivationTriggerSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ObjectActivationTriggerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings.PropagateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::PropagateProperties)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cb80ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cb80b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_syncedToAllPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr bool const& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_syncedToAllPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr void GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_set_syncedToAllPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedToAllPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_objectsToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToActivate;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_objectsToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToActivate;
}
constexpr void GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_set_objectsToActivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToActivate = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_objectsToDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDeactivate;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_objectsToDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDeactivate;
}
constexpr void GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_set_objectsToDeactivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToDeactivate = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_triggersToReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggersToReset;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_triggersToReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggersToReset;
}
constexpr void GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_set_triggersToReset(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggersToReset = value;
}
constexpr bool& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_onlyResetTriggerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyResetTriggerCount;
}
constexpr bool const& GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_get_onlyResetTriggerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyResetTriggerCount;
}
constexpr void GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::__cordl_internal_set_onlyResetTriggerCount(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyResetTriggerCount = value;
}
inline void GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::PropagateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings* GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings::ObjectActivationTriggerSettings()   {
}
