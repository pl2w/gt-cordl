#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTeleporter.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTeleporter_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTeleporter.CopyTriggerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTeleporter::*)(::GT_CustomMapSupportRuntime::TriggerSettings*)>(&::GorillaTagScripts::CustomMapSupport::CMSTeleporter::CopyTriggerSettings)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5bdca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTeleporter.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTeleporter::*)(double_t, bool, bool)>(&::GorillaTagScripts::CustomMapSupport::CMSTeleporter::Trigger)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5bdcc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTeleporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTeleporter::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSTeleporter::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bdcddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_get_TeleportPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_get_TeleportPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_set_TeleportPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeleportPoints = value;
}
constexpr bool& GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_get_matchTeleportPointRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchTeleportPointRotation;
}
constexpr bool const& GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_get_matchTeleportPointRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchTeleportPointRotation;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_set_matchTeleportPointRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchTeleportPointRotation = value;
}
constexpr bool& GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_get_maintainVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintainVelocity;
}
constexpr bool const& GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_get_maintainVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintainVelocity;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTeleporter::__cordl_internal_set_maintainVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maintainVelocity = value;
}
inline void GorillaTagScripts::CustomMapSupport::CMSTeleporter::CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTeleporter::Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerTime, originatedLocally, ignoreTriggerCount);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTeleporter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSTeleporter* GorillaTagScripts::CustomMapSupport::CMSTeleporter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSTeleporter*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSTeleporter::CMSTeleporter()   {
}
