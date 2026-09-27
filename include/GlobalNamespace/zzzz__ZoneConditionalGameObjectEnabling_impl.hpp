#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneConditionalGameObjectEnabling.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneConditionalGameObjectEnabling_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalGameObjectEnabling.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalGameObjectEnabling::*)()>(&::GlobalNamespace::ZoneConditionalGameObjectEnabling::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56bc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalGameObjectEnabling.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalGameObjectEnabling::*)()>(&::GlobalNamespace::ZoneConditionalGameObjectEnabling::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56bc2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalGameObjectEnabling.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalGameObjectEnabling::*)()>(&::GlobalNamespace::ZoneConditionalGameObjectEnabling::OnZoneChanged)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56bc1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalGameObjectEnabling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalGameObjectEnabling::*)()>(&::GlobalNamespace::ZoneConditionalGameObjectEnabling::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bc3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr bool& GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_get_invisibleWhileLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invisibleWhileLoaded;
}
constexpr bool const& GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_get_invisibleWhileLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invisibleWhileLoaded;
}
constexpr void GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_set_invisibleWhileLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invisibleWhileLoaded = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void GlobalNamespace::ZoneConditionalGameObjectEnabling::__cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
inline void GlobalNamespace::ZoneConditionalGameObjectEnabling::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalGameObjectEnabling::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalGameObjectEnabling::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalGameObjectEnabling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneConditionalGameObjectEnabling* GlobalNamespace::ZoneConditionalGameObjectEnabling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneConditionalGameObjectEnabling*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneConditionalGameObjectEnabling::ZoneConditionalGameObjectEnabling()   {
}
