#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSPlayAnimationTrigger.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSPlayAnimationTrigger_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger.CopyTriggerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::*)(::GT_CustomMapSupportRuntime::TriggerSettings*)>(&::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::CopyTriggerSettings)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5bd96ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::*)(double_t, bool, bool)>(&::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::Trigger)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5bd9880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bd9a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::__cordl_internal_get_animatedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatedObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::__cordl_internal_get_animatedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatedObjects;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::__cordl_internal_set_animatedObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatedObjects = value;
}
constexpr ::StringW& GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::__cordl_internal_get_animationName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationName;
}
constexpr ::StringW const& GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::__cordl_internal_get_animationName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationName;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::__cordl_internal_set_animationName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationName = value;
}
inline void GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerTime, originatedLocally, ignoreTriggerCount);
}
inline void GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger* GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger::CMSPlayAnimationTrigger()   {
}
