#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHullUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__QHullUtil_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHullUtil.FindConvexHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::StringW, ::UnityEngine::Mesh*, bool)>(&::Technie::PhysicsCreator::QHullUtil::FindConvexHull)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0xadcc5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHullUtil*>(),
                        {"FindConvexHull", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHullUtil.FindConvexHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<int32_t>>, bool)>(&::Technie::PhysicsCreator::QHullUtil::FindConvexHull)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0xadccce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHullUtil*>(),
                        {"FindConvexHull", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHullUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHullUtil::*)()>(&::Technie::PhysicsCreator::QHullUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcd414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHullUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Mesh> Technie::PhysicsCreator::QHullUtil::FindConvexHull(::StringW  debugName, ::UnityEngine::Mesh*  inputMesh, bool  showErrorInLog)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHullUtil*>(),
                        {"FindConvexHull", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, debugName, inputMesh, showErrorInLog);
}
inline void Technie::PhysicsCreator::QHullUtil::FindConvexHull(::StringW  debugName, ::ArrayW<int32_t>  selectedFaces, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  hullVertices, ::by_ref<::ArrayW<int32_t>>  hullIndices, bool  showErrorInLog)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHullUtil*>(),
                        {"FindConvexHull", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, debugName, selectedFaces, meshVertices, meshIndices, hullVertices, hullIndices, showErrorInLog);
}
inline void Technie::PhysicsCreator::QHullUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHullUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHullUtil* Technie::PhysicsCreator::QHullUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHullUtil*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHullUtil::QHullUtil()   {
}
