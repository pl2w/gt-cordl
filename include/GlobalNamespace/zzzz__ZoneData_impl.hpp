#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneData.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneData::*)()>(&::GlobalNamespace::ZoneData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56b8f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::ZoneData::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::ZoneData::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::ZoneData::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::StringW& GlobalNamespace::ZoneData::__cordl_internal_get_sceneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneName;
}
constexpr ::StringW const& GlobalNamespace::ZoneData::__cordl_internal_get_sceneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneName;
}
constexpr void GlobalNamespace::ZoneData::__cordl_internal_set_sceneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneName = value;
}
constexpr float_t& GlobalNamespace::ZoneData::__cordl_internal_get_CameraFarClipPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraFarClipPlane;
}
constexpr float_t const& GlobalNamespace::ZoneData::__cordl_internal_get_CameraFarClipPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraFarClipPlane;
}
constexpr void GlobalNamespace::ZoneData::__cordl_internal_set_CameraFarClipPlane(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraFarClipPlane = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ZoneData::__cordl_internal_get_rootGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ZoneData::__cordl_internal_get_rootGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootGameObjects;
}
constexpr void GlobalNamespace::ZoneData::__cordl_internal_set_rootGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootGameObjects = value;
}
constexpr bool& GlobalNamespace::ZoneData::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& GlobalNamespace::ZoneData::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::ZoneData::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
inline void GlobalNamespace::ZoneData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneData* GlobalNamespace::ZoneData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneData::ZoneData()   {
}
