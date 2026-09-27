#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MeshUtils_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshUtils.CreateReadableMeshCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Mesh*)>(&::GlobalNamespace::MeshUtils::CreateReadableMeshCopy)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5b0ac74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtils*>(),
                        {"CreateReadableMeshCopy", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::MeshUtils::CreateReadableMeshCopy(::UnityEngine::Mesh*  sourceMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtils*>(),
                        {"CreateReadableMeshCopy", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, sourceMesh);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshUtils::MeshUtils()   {
}
