#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneConditionalComponentEnabling.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneConditionalComponentEnabling_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalComponentEnabling.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalComponentEnabling::*)()>(&::GlobalNamespace::ZoneConditionalComponentEnabling::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56bbd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalComponentEnabling.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalComponentEnabling::*)()>(&::GlobalNamespace::ZoneConditionalComponentEnabling::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56bbff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalComponentEnabling.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalComponentEnabling::*)()>(&::GlobalNamespace::ZoneConditionalComponentEnabling::OnZoneChanged)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x56bbe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalComponentEnabling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalComponentEnabling::*)()>(&::GlobalNamespace::ZoneConditionalComponentEnabling::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bc0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr bool& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_invisibleWhileLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invisibleWhileLoaded;
}
constexpr bool const& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_invisibleWhileLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invisibleWhileLoaded;
}
constexpr void GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_set_invisibleWhileLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invisibleWhileLoaded = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_components()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_components() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr void GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_set_components(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___components = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_m_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_m_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderers;
}
constexpr void GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_set_m_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_renderers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_m_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_get_m_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_colliders;
}
constexpr void GlobalNamespace::ZoneConditionalComponentEnabling::__cordl_internal_set_m_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_colliders = value;
}
inline void GlobalNamespace::ZoneConditionalComponentEnabling::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalComponentEnabling::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalComponentEnabling::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalComponentEnabling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalComponentEnabling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneConditionalComponentEnabling* GlobalNamespace::ZoneConditionalComponentEnabling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneConditionalComponentEnabling*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneConditionalComponentEnabling::ZoneConditionalComponentEnabling()   {
}
