#pragma once
// IWYU pragma private; include "GameObjectScheduling/MeshMaterialReplacement.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GameObjectScheduling/zzzz__MeshMaterialReplacement_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::MeshMaterialReplacement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::MeshMaterialReplacement::*)()>(&::GameObjectScheduling::MeshMaterialReplacement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de0d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::MeshMaterialReplacement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& GameObjectScheduling::MeshMaterialReplacement::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GameObjectScheduling::MeshMaterialReplacement::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void GameObjectScheduling::MeshMaterialReplacement::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GameObjectScheduling::MeshMaterialReplacement::__cordl_internal_get_materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GameObjectScheduling::MeshMaterialReplacement::__cordl_internal_get_materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr void GameObjectScheduling::MeshMaterialReplacement::__cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materials = value;
}
inline void GameObjectScheduling::MeshMaterialReplacement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::MeshMaterialReplacement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::MeshMaterialReplacement* GameObjectScheduling::MeshMaterialReplacement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::MeshMaterialReplacement*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::MeshMaterialReplacement::MeshMaterialReplacement()   {
}
