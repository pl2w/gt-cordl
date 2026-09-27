#pragma once
// IWYU pragma private; include "GlobalNamespace/UberCombinerPerMaterialMeshes.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MeshFilter_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UberCombinerPerMaterialMeshes_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UberCombinerPerMaterialMeshes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberCombinerPerMaterialMeshes::*)()>(&::GlobalNamespace::UberCombinerPerMaterialMeshes::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b3d7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerPerMaterialMeshes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_rootObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_rootObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootObject;
}
constexpr void GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_set_rootObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootObject = value;
}
constexpr bool& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_deleteSelfOnPrefabBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deleteSelfOnPrefabBake;
}
constexpr bool const& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_deleteSelfOnPrefabBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deleteSelfOnPrefabBake;
}
constexpr void GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_set_deleteSelfOnPrefabBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deleteSelfOnPrefabBake = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr void GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_set_objects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_filters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filters;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>> const& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_filters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filters;
}
constexpr void GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_set_filters(::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filters = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_get_materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr void GlobalNamespace::UberCombinerPerMaterialMeshes::__cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materials = value;
}
inline void GlobalNamespace::UberCombinerPerMaterialMeshes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerPerMaterialMeshes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UberCombinerPerMaterialMeshes* GlobalNamespace::UberCombinerPerMaterialMeshes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UberCombinerPerMaterialMeshes*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UberCombinerPerMaterialMeshes::UberCombinerPerMaterialMeshes()   {
}
