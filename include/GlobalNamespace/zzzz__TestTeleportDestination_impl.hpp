#pragma once
// IWYU pragma private; include "GlobalNamespace/TestTeleportDestination.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TestTeleportDestination_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestTeleportDestination.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestTeleportDestination::*)()>(&::GlobalNamespace::TestTeleportDestination::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x56bcf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestTeleportDestination*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestTeleportDestination._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestTeleportDestination::*)()>(&::GlobalNamespace::TestTeleportDestination::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestTeleportDestination*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GTZone>& GlobalNamespace::TestTeleportDestination::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone> const& GlobalNamespace::TestTeleportDestination::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::TestTeleportDestination::__cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TestTeleportDestination::__cordl_internal_get_teleportTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportTransform;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TestTeleportDestination::__cordl_internal_get_teleportTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportTransform;
}
constexpr void GlobalNamespace::TestTeleportDestination::__cordl_internal_set_teleportTransform(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportTransform = value;
}
inline void GlobalNamespace::TestTeleportDestination::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestTeleportDestination*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestTeleportDestination::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestTeleportDestination*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestTeleportDestination* GlobalNamespace::TestTeleportDestination::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestTeleportDestination*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestTeleportDestination::TestTeleportDestination()   {
}
