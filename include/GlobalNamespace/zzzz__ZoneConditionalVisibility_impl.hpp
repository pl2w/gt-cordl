#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneConditionalVisibility.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneConditionalVisibility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalVisibility.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalVisibility::*)()>(&::GlobalNamespace::ZoneConditionalVisibility::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56bc3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalVisibility.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalVisibility::*)()>(&::GlobalNamespace::ZoneConditionalVisibility::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56bc478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalVisibility.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalVisibility::*)()>(&::GlobalNamespace::ZoneConditionalVisibility::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56bc780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalVisibility.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalVisibility::*)()>(&::GlobalNamespace::ZoneConditionalVisibility::OnZoneChanged)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x56bc570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalVisibility.InAnyZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneConditionalVisibility::*)()>(&::GlobalNamespace::ZoneConditionalVisibility::InAnyZone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56bc870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"InAnyZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneConditionalVisibility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneConditionalVisibility::*)()>(&::GlobalNamespace::ZoneConditionalVisibility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bc8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone>& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone> const& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
constexpr bool& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_invisibleWhileLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invisibleWhileLoaded;
}
constexpr bool const& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_invisibleWhileLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invisibleWhileLoaded;
}
constexpr void GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_set_invisibleWhileLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invisibleWhileLoaded = value;
}
constexpr bool& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_renderersOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderersOnly;
}
constexpr bool const& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_renderersOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderersOnly;
}
constexpr void GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_set_renderersOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderersOnly = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::ZoneConditionalVisibility::__cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
inline void GlobalNamespace::ZoneConditionalVisibility::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalVisibility::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalVisibility::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalVisibility::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ZoneConditionalVisibility::InAnyZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {"InAnyZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneConditionalVisibility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneConditionalVisibility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneConditionalVisibility* GlobalNamespace::ZoneConditionalVisibility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneConditionalVisibility*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneConditionalVisibility::ZoneConditionalVisibility()   {
}
