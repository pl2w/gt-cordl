#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TeleporterSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TeleporterSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::TeleporterSettings.PropagateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::TeleporterSettings::*)()>(&::GT_CustomMapSupportRuntime::TeleporterSettings::PropagateProperties)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cb8c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::TeleporterSettings*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::TeleporterSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::TeleporterSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::TeleporterSettings::*)()>(&::GT_CustomMapSupportRuntime::TeleporterSettings::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9cb8ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::TeleporterSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_syncedToAllPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr bool const& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_syncedToAllPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr void GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_set_syncedToAllPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedToAllPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_TeleportPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_TeleportPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr void GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_set_TeleportPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeleportPoints = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_matchTeleportPointRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchTeleportPointRotation;
}
constexpr bool const& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_matchTeleportPointRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchTeleportPointRotation;
}
constexpr void GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_set_matchTeleportPointRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchTeleportPointRotation = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_maintainVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintainVelocity;
}
constexpr bool const& GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_get_maintainVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintainVelocity;
}
constexpr void GT_CustomMapSupportRuntime::TeleporterSettings::__cordl_internal_set_maintainVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maintainVelocity = value;
}
inline void GT_CustomMapSupportRuntime::TeleporterSettings::PropagateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::TeleporterSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::TeleporterSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::TeleporterSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::TeleporterSettings* GT_CustomMapSupportRuntime::TeleporterSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::TeleporterSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::TeleporterSettings::TeleporterSettings()   {
}
