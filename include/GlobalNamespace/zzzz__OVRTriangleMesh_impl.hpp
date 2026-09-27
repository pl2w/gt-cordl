#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_FlipTriangleWindingJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_GetMeshJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_NegateXJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_Triangle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa57b898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Handle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa57b8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__FromAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTriangleMesh (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa57b94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_IsNull)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa57b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa57ba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRTriangleMesh::*)(bool, double_t)>(&::GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa57bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRTriangleMesh)>(&::GlobalNamespace::OVRTriangleMesh::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa57bb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRTriangleMesh, ::GlobalNamespace::OVRTriangleMesh)>(&::GlobalNamespace::OVRTriangleMesh::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa57bbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>(), ::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRTriangleMesh, ::GlobalNamespace::OVRTriangleMesh)>(&::GlobalNamespace::OVRTriangleMesh::op_Inequality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa57bc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>(), ::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::System::Object*)>(&::GlobalNamespace::OVRTriangleMesh::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa57bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                    {::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa57bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                    {::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa57bddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                    {::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa57b8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRTriangleMesh::*)()>(&::GlobalNamespace::OVRTriangleMesh::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa57be78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTriangleMesh::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRTriangleMesh::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa57b97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetCounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::OVRTriangleMesh::TryGetCounts)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa57be80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"TryGetCounts", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetMeshRawUntransformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::GlobalNamespace::OVRTriangleMesh::TryGetMeshRawUntransformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa57bf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"TryGetMeshRawUntransformed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.TryGetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTriangleMesh::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::GlobalNamespace::OVRTriangleMesh::TryGetMesh)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa57bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"TryGetMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh.ScheduleGetMeshJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::GlobalNamespace::OVRTriangleMesh::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Jobs::JobHandle)>(&::GlobalNamespace::OVRTriangleMesh::ScheduleGetMeshJob)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa57c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"ScheduleGetMeshJob", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTriangleMesh::setStaticF_Null(::GlobalNamespace::OVRTriangleMesh  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTriangleMesh, "Null", ::GlobalNamespace::OVRTriangleMesh>(std::forward<::GlobalNamespace::OVRTriangleMesh>(value));
}
inline ::GlobalNamespace::OVRTriangleMesh GlobalNamespace::OVRTriangleMesh::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTriangleMesh, "Null", ::GlobalNamespace::OVRTriangleMesh>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTriangleMesh GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTriangleMesh>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRTriangleMesh::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRTriangleMesh::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRTriangleMesh::IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool  enabled, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRTriangleMesh::Equals(::GlobalNamespace::OVRTriangleMesh  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRTriangleMesh::op_Equality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>(), ::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRTriangleMesh::op_Inequality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>(), ::i2c::type_of<::GlobalNamespace::OVRTriangleMesh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRTriangleMesh::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRTriangleMesh::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRTriangleMesh::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRTriangleMesh::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRTriangleMesh::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTriangleMesh::_ctor(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetCounts(::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  triangleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"TryGetCounts", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, vertexCount, triangleCount);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"TryGetMeshRawUntransformed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, positions, indices);
}
inline bool GlobalNamespace::OVRTriangleMesh::TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"TryGetMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, positions, indices);
}
inline ::Unity::Jobs::JobHandle GlobalNamespace::OVRTriangleMesh::ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Jobs::JobHandle  dependencies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh>(),
                        {"ScheduleGetMeshJob", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, positions, indices, dependencies);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr  GlobalNamespace::OVRTriangleMesh::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*()  {
return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>* GlobalNamespace::OVRTriangleMesh::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRTriangleMesh_()  {
return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr  GlobalNamespace::OVRTriangleMesh::operator ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>* GlobalNamespace::OVRTriangleMesh::i___System__IEquatable_1___GlobalNamespace__OVRTriangleMesh_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTriangleMesh::OVRTriangleMesh(uint64_t  _Handle_k__BackingField) noexcept  {
this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTriangleMesh::OVRTriangleMesh()   {
}
