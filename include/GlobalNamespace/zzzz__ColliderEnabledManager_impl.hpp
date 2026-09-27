#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderEnabledManager.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderEnabledManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColliderEnabledManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderEnabledManager::*)()>(&::GlobalNamespace::ColliderEnabledManager::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55ee090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderEnabledManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderEnabledManager::*)()>(&::GlobalNamespace::ColliderEnabledManager::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55ee0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderEnabledManager.DisableFloorForFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderEnabledManager::*)()>(&::GlobalNamespace::ColliderEnabledManager::DisableFloorForFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ee148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"DisableFloorForFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderEnabledManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderEnabledManager::*)()>(&::GlobalNamespace::ColliderEnabledManager::LateUpdate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55ee150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderEnabledManager.DisableFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderEnabledManager::*)()>(&::GlobalNamespace::ColliderEnabledManager::DisableFloor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55ee2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"DisableFloor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderEnabledManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderEnabledManager::*)()>(&::GlobalNamespace::ColliderEnabledManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ee2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_floorCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorCollider;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_floorCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorCollider;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_floorCollider(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorCollider = value;
}
constexpr bool& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_floorEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorEnabled;
}
constexpr bool const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_floorEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorEnabled;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_floorEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorEnabled = value;
}
constexpr bool& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_wasFloorEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasFloorEnabled;
}
constexpr bool const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_wasFloorEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasFloorEnabled;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_wasFloorEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasFloorEnabled = value;
}
constexpr bool& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_floorCollidersEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorCollidersEnabled;
}
constexpr bool const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_floorCollidersEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorCollidersEnabled;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_floorCollidersEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorCollidersEnabled = value;
}
constexpr int32_t& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_wallsBeforeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallsBeforeMaterial;
}
constexpr int32_t const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_wallsBeforeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallsBeforeMaterial;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_wallsBeforeMaterial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallsBeforeMaterial = value;
}
constexpr int32_t& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_wallsAfterMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallsAfterMaterial;
}
constexpr int32_t const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_wallsAfterMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallsAfterMaterial;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_wallsAfterMaterial(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallsAfterMaterial = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_walls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walls;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>> const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_walls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walls;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_walls(::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___walls = value;
}
constexpr float_t& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_timeDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeDisabled;
}
constexpr float_t const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_timeDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeDisabled;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_timeDisabled(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeDisabled = value;
}
constexpr float_t& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_disableLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableLength;
}
constexpr float_t const& GlobalNamespace::ColliderEnabledManager::__cordl_internal_get_disableLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableLength;
}
constexpr void GlobalNamespace::ColliderEnabledManager::__cordl_internal_set_disableLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableLength = value;
}
inline void GlobalNamespace::ColliderEnabledManager::setStaticF_instance(::UnityW<::GlobalNamespace::ColliderEnabledManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ColliderEnabledManager>, "instance", ::GlobalNamespace::ColliderEnabledManager*>(std::forward<::UnityW<::GlobalNamespace::ColliderEnabledManager>>(value));
}
inline ::UnityW<::GlobalNamespace::ColliderEnabledManager> GlobalNamespace::ColliderEnabledManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ColliderEnabledManager>, "instance", ::GlobalNamespace::ColliderEnabledManager*>();
}
inline void GlobalNamespace::ColliderEnabledManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderEnabledManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderEnabledManager::DisableFloorForFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"DisableFloorForFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderEnabledManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderEnabledManager::DisableFloor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {"DisableFloor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderEnabledManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderEnabledManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColliderEnabledManager* GlobalNamespace::ColliderEnabledManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColliderEnabledManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderEnabledManager::ColliderEnabledManager()   {
}
