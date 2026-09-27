#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapBoundarySettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapBoundarySettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapBoundarySettings.PropagateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapBoundarySettings::*)()>(&::GT_CustomMapSupportRuntime::MapBoundarySettings::PropagateProperties)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cb71fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::MapBoundarySettings*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::MapBoundarySettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapBoundarySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapBoundarySettings::*)()>(&::GT_CustomMapSupportRuntime::MapBoundarySettings::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9cb7208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapBoundarySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_get_syncedToAllPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_get_syncedToAllPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr void GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_set_syncedToAllPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedToAllPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_get_TeleportPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_get_TeleportPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportPoints;
}
constexpr void GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_set_TeleportPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeleportPoints = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_get_ShouldTagPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldTagPlayer;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_get_ShouldTagPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldTagPlayer;
}
constexpr void GT_CustomMapSupportRuntime::MapBoundarySettings::__cordl_internal_set_ShouldTagPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShouldTagPlayer = value;
}
inline void GT_CustomMapSupportRuntime::MapBoundarySettings::PropagateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::MapBoundarySettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MapBoundarySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapBoundarySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MapBoundarySettings* GT_CustomMapSupportRuntime::MapBoundarySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MapBoundarySettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MapBoundarySettings::MapBoundarySettings()   {
}
