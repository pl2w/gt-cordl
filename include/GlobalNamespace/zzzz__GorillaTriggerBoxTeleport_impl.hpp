#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxTeleport.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBoxTeleport_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxTeleport.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxTeleport::*)()>(&::GlobalNamespace::GorillaTriggerBoxTeleport::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x579e168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxTeleport*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxTeleport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxTeleport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxTeleport::*)()>(&::GlobalNamespace::GorillaTriggerBoxTeleport::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579e1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxTeleport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTriggerBoxTeleport::__cordl_internal_get_teleportLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTriggerBoxTeleport::__cordl_internal_get_teleportLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportLocation;
}
constexpr void GlobalNamespace::GorillaTriggerBoxTeleport::__cordl_internal_set_teleportLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportLocation = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaTriggerBoxTeleport::__cordl_internal_get_cameraOffest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffest;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaTriggerBoxTeleport::__cordl_internal_get_cameraOffest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffest;
}
constexpr void GlobalNamespace::GorillaTriggerBoxTeleport::__cordl_internal_set_cameraOffest(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraOffest = value;
}
inline void GlobalNamespace::GorillaTriggerBoxTeleport::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxTeleport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTriggerBoxTeleport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxTeleport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTriggerBoxTeleport* GlobalNamespace::GorillaTriggerBoxTeleport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTriggerBoxTeleport*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTriggerBoxTeleport::GorillaTriggerBoxTeleport()   {
}
