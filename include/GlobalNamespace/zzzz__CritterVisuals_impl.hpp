#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterVisuals.hpp"
#include "GlobalNamespace/zzzz__CritterAppearance_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CritterVisuals_def.hpp"
#include "GlobalNamespace/zzzz__CritterAppearance_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterVisuals.get_Appearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CritterAppearance (::GlobalNamespace::CritterVisuals::*)()>(&::GlobalNamespace::CritterVisuals::get_Appearance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56f8a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"get_Appearance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterVisuals.SetAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterVisuals::*)(::GlobalNamespace::CritterAppearance)>(&::GlobalNamespace::CritterVisuals::SetAppearance)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x56f8a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"SetAppearance", {}, {::i2c::type_of<::GlobalNamespace::CritterAppearance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterVisuals.ApplyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterVisuals::*)(::UnityEngine::Mesh*)>(&::GlobalNamespace::CritterVisuals::ApplyMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56f8bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"ApplyMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterVisuals.ApplyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterVisuals::*)(::UnityEngine::Material*)>(&::GlobalNamespace::CritterVisuals::ApplyMaterial)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56f8bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"ApplyMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterVisuals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterVisuals::*)()>(&::GlobalNamespace::CritterVisuals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f8bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CritterVisuals::__cordl_internal_get_critterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterType;
}
constexpr int32_t const& GlobalNamespace::CritterVisuals::__cordl_internal_get_critterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterType;
}
constexpr void GlobalNamespace::CritterVisuals::__cordl_internal_set_critterType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CritterVisuals::__cordl_internal_get_bodyRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CritterVisuals::__cordl_internal_get_bodyRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRoot;
}
constexpr void GlobalNamespace::CritterVisuals::__cordl_internal_set_bodyRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyRoot = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::CritterVisuals::__cordl_internal_get_myRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::CritterVisuals::__cordl_internal_get_myRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRenderer;
}
constexpr void GlobalNamespace::CritterVisuals::__cordl_internal_set_myRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::CritterVisuals::__cordl_internal_get_myMeshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::CritterVisuals::__cordl_internal_get_myMeshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myMeshFilter;
}
constexpr void GlobalNamespace::CritterVisuals::__cordl_internal_set_myMeshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CritterVisuals::__cordl_internal_get_hatRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CritterVisuals::__cordl_internal_get_hatRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatRoot;
}
constexpr void GlobalNamespace::CritterVisuals::__cordl_internal_set_hatRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatRoot = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::CritterVisuals::__cordl_internal_get_hats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hats;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::CritterVisuals::__cordl_internal_get_hats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hats;
}
constexpr void GlobalNamespace::CritterVisuals::__cordl_internal_set_hats(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hats = value;
}
constexpr ::GlobalNamespace::CritterAppearance& GlobalNamespace::CritterVisuals::__cordl_internal_get__appearance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appearance;
}
constexpr ::GlobalNamespace::CritterAppearance const& GlobalNamespace::CritterVisuals::__cordl_internal_get__appearance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appearance;
}
constexpr void GlobalNamespace::CritterVisuals::__cordl_internal_set__appearance(::GlobalNamespace::CritterAppearance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appearance = value;
}
inline ::GlobalNamespace::CritterAppearance GlobalNamespace::CritterVisuals::get_Appearance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"get_Appearance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CritterAppearance>(this, ___internal_method);
}
inline void GlobalNamespace::CritterVisuals::SetAppearance(::GlobalNamespace::CritterAppearance  appearance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"SetAppearance", {}, {::i2c::type_of<::GlobalNamespace::CritterAppearance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, appearance);
}
inline void GlobalNamespace::CritterVisuals::ApplyMesh(::UnityEngine::Mesh*  newMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"ApplyMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMesh);
}
inline void GlobalNamespace::CritterVisuals::ApplyMaterial(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {"ApplyMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline void GlobalNamespace::CritterVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterVisuals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterVisuals* GlobalNamespace::CritterVisuals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterVisuals*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterVisuals::CritterVisuals()   {
}
