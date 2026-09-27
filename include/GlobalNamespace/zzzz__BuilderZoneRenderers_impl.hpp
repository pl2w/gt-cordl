#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderZoneRenderers.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderZoneRenderers_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderZoneRenderers.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderZoneRenderers::*)()>(&::GlobalNamespace::BuilderZoneRenderers::Start)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x57b4a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderZoneRenderers.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderZoneRenderers::*)()>(&::GlobalNamespace::BuilderZoneRenderers::OnDestroy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x57b5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderZoneRenderers.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderZoneRenderers::*)()>(&::GlobalNamespace::BuilderZoneRenderers::OnZoneChanged)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x57b4d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderZoneRenderers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderZoneRenderers::*)()>(&::GlobalNamespace::BuilderZoneRenderers::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57b5264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::BuilderZoneRenderers::__cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>*& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_canvases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvases;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>* const& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_canvases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvases;
}
constexpr void GlobalNamespace::BuilderZoneRenderers::__cordl_internal_set_canvases(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canvases = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_rootObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_rootObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootObjects;
}
constexpr void GlobalNamespace::BuilderZoneRenderers::__cordl_internal_set_rootObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootObjects = value;
}
constexpr bool& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_inBuilderZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBuilderZone;
}
constexpr bool const& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_inBuilderZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inBuilderZone;
}
constexpr void GlobalNamespace::BuilderZoneRenderers::__cordl_internal_set_inBuilderZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inBuilderZone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_allRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::BuilderZoneRenderers::__cordl_internal_get_allRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRenderers;
}
constexpr void GlobalNamespace::BuilderZoneRenderers::__cordl_internal_set_allRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allRenderers = value;
}
inline void GlobalNamespace::BuilderZoneRenderers::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderZoneRenderers::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderZoneRenderers::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderZoneRenderers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderZoneRenderers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderZoneRenderers* GlobalNamespace::BuilderZoneRenderers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderZoneRenderers*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderZoneRenderers::BuilderZoneRenderers()   {
}
