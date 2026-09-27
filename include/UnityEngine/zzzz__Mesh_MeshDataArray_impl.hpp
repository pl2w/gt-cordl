#pragma once
// IWYU pragma private; include "UnityEngine/Mesh_MeshDataArray.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireReadOnlyMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr*)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb5b1130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireReadOnlyMeshDatas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5b1224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireMeshDataCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr*)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDataCopy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb5b1308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireMeshDatasCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDatasCopy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5b13fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.ReleaseMeshDatas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr*, int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::ReleaseMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b14e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ReleaseMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.CreateNewMeshDatas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr*, int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::CreateNewMeshDatas)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b1524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"CreateNewMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.ApplyToMeshesImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshesImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb5b1568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshesImpl", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.ApplyToMeshImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5b165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Mesh_MeshDataArray::*)()>(&::GlobalNamespace::Mesh_MeshDataArray::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5b1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Mesh_MeshData (::GlobalNamespace::Mesh_MeshDataArray::*)(int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::get_Item)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5b1778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshDataArray::*)()>(&::GlobalNamespace::Mesh_MeshDataArray::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb5b1784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.ApplyToMeshAndDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshDataArray::*)(::UnityEngine::Mesh*, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshAndDispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb5aaa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshAndDispose", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.ApplyToMeshesAndDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshDataArray::*)(::ArrayW<::UnityEngine::Mesh*>, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshesAndDispose)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb5aac70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshesAndDispose", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshDataArray::*)(::UnityEngine::Mesh*, bool, bool)>(&::GlobalNamespace::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb5a9f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshDataArray::*)(::ArrayW<::UnityEngine::Mesh*>, int32_t, bool, bool)>(&::GlobalNamespace::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb5aa208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshDataArray::*)(int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb5aa5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireReadOnlyMeshData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr*)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshData_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b11e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireReadOnlyMeshDatas_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b12b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireMeshDataCopy_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr*)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDataCopy_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b13b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.AcquireMeshDatasCopy_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDatasCopy_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b148c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.ApplyToMeshesImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshesImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5b1600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshesImpl_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshDataArray.ApplyToMeshImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b171c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshData(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDataCopy(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDatasCopy(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void GlobalNamespace::Mesh_MeshDataArray::ReleaseMeshDatas(::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ReleaseMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, datas, count);
}
inline void GlobalNamespace::Mesh_MeshDataArray::CreateNewMeshDatas(::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"CreateNewMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, datas, count);
}
inline void GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshesImpl(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshesImpl", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count, flags);
}
inline void GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshImpl(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, data, flags);
}
inline int32_t GlobalNamespace::Mesh_MeshDataArray::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::Mesh_MeshData GlobalNamespace::Mesh_MeshDataArray::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Mesh_MeshData>(*this, ___internal_method, index);
}
inline void GlobalNamespace::Mesh_MeshDataArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshAndDispose(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshAndDispose", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, flags);
}
inline void GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*>  meshes, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshesAndDispose", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshes, flags);
}
inline void GlobalNamespace::Mesh_MeshDataArray::_ctor(::UnityEngine::Mesh*  mesh, bool  checkReadWrite, bool  createAsCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, checkReadWrite, createAsCopy);
}
inline void GlobalNamespace::Mesh_MeshDataArray::_ctor(::ArrayW<::UnityEngine::Mesh*>  meshes, int32_t  meshesCount, bool  checkReadWrite, bool  createAsCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshes, meshesCount, checkReadWrite, createAsCopy);
}
inline void GlobalNamespace::Mesh_MeshDataArray::_ctor(int32_t  meshesCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshesCount);
}
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshData_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDataCopy_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void GlobalNamespace::Mesh_MeshDataArray::AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshesImpl_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshesImpl_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count, flags);
}
inline void GlobalNamespace::Mesh_MeshDataArray::ApplyToMeshImpl_Injected(::System::IntPtr  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, data, flags);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::Mesh_MeshDataArray::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::Mesh_MeshDataArray::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Mesh_MeshDataArray::Mesh_MeshDataArray(::System::IntPtr*  m_Ptrs, int32_t  m_Length) noexcept  {
this->m_Ptrs = m_Ptrs;
this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Mesh_MeshDataArray::Mesh_MeshDataArray()   {
}
