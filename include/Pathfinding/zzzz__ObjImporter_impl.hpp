#pragma once
// IWYU pragma private; include "Pathfinding/ObjImporter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__ObjImporter_def.hpp"
#include "Pathfinding/zzzz__ObjImporter_meshStruct_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::Pathfinding::ObjImporter.ImportFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::StringW)>(&::Pathfinding::ObjImporter::ImportFile)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5e98704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {"ImportFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ObjImporter.createMeshStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ObjImporter_meshStruct (*)(::StringW)>(&::Pathfinding::ObjImporter::createMeshStruct)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x5e98a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {"createMeshStruct", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ObjImporter.populateMeshStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::ObjImporter_meshStruct>)>(&::Pathfinding::ObjImporter::populateMeshStruct)> {
  constexpr static std::size_t size = 0xf8c;
  constexpr static std::size_t addrs = 0x5e99034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {"populateMeshStruct", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ObjImporter_meshStruct>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ObjImporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ObjImporter::*)()>(&::Pathfinding::ObjImporter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e99fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Mesh> Pathfinding::ObjImporter::ImportFile(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {"ImportFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, filePath);
}
inline ::GlobalNamespace::ObjImporter_meshStruct Pathfinding::ObjImporter::createMeshStruct(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {"createMeshStruct", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObjImporter_meshStruct>(nullptr, ___internal_method, filename);
}
inline void Pathfinding::ObjImporter::populateMeshStruct(::by_ref<::GlobalNamespace::ObjImporter_meshStruct>  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {"populateMeshStruct", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ObjImporter_meshStruct>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline void Pathfinding::ObjImporter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ObjImporter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ObjImporter* Pathfinding::ObjImporter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ObjImporter*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ObjImporter::ObjImporter()   {
}
