#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdateFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_instancesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::get_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb200a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"get_instancesLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.set_instancesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::set_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb200aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"set_instancesLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.get_instancesCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::get_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb200ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"get_instancesCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.set_instancesCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::set_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb200abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"set_instancesCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Initialize)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xb200ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::Dispose)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xb200e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Grow)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xb2011c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AddUnsafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::AddUnsafe)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb201448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"AddUnsafe", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.SharedInstanceToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::SharedInstanceToIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb201628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"SharedInstanceToIndex", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.InstanceToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::UnityEngine::Rendering::InstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::InstanceToIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb2016c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"InstanceToIndex", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.GetFreeInstancesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::GetFreeInstancesCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb201714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"GetFreeInstancesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.EnsureFreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::EnsureFreeInstances)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb201724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"EnsureFreeInstances", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AddNoGrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::AddNoGrow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb20174c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"AddNoGrow", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Remove)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xb2017f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_RendererGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_RendererGroupID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb201a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Get_RendererGroupID", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_MeshID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_MeshID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb201a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Get_MeshID", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Get_RefCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Get_RefCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb201a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Get_RefCount", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set_RefCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set_RefCount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb201a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Set_RefCount", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle, int32_t, ::by_ref<::UnityEngine::Rendering::SmallIntegerArray>, int32_t, ::by_ref<::UnityEngine::Rendering::AABB>, ::UnityEngine::Rendering::TransformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags, uint32_t, ::UnityEngine::Rendering::GPUDrivenMeshLodInfo, int32_t, int32_t)>(&::UnityEngine::Rendering::CPUSharedInstanceData::Set)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb201abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Set", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SmallIntegerArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>(), ::i2c::type_of<::UnityEngine::Rendering::TransformUpdateFlags>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceFlags>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.SetDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUSharedInstanceData::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::UnityEngine::Rendering::CPUSharedInstanceData::SetDefault)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb201778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"SetDefault", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUSharedInstanceData.AsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CPUSharedInstanceData_ReadOnly (::UnityEngine::Rendering::CPUSharedInstanceData::*)()>(&::UnityEngine::Rendering::CPUSharedInstanceData::AsReadOnly)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb201c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"AsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_instancesLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"get_instancesLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::set_instancesLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"set_instancesLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::get_instancesCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"get_instancesCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::set_instancesCapacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"set_instancesCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Initialize(int32_t  initCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Grow(int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::AddUnsafe(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"AddUnsafe", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"SharedInstanceToIndex", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::InstanceToIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::UnityEngine::Rendering::InstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"InstanceToIndex", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instanceData, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::GetFreeInstancesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"GetFreeInstancesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::EnsureFreeInstances(int32_t  instancesCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"EnsureFreeInstances", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instancesCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::AddNoGrow(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"AddNoGrow", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Remove(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Get_RendererGroupID", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_MeshID(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Get_MeshID", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline int32_t UnityEngine::Rendering::CPUSharedInstanceData::Get_RefCount(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Get_RefCount", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set_RefCount(::UnityEngine::Rendering::SharedInstanceHandle  instance, int32_t  refCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Set_RefCount", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, refCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::Set(::UnityEngine::Rendering::SharedInstanceHandle  instance, int32_t  rendererGroupID, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::SmallIntegerArray>  materialIDs, int32_t  meshID, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB>  localAABB, ::UnityEngine::Rendering::TransformUpdateFlags  transformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags  instanceFlags, uint32_t  lodGroupAndMask, ::UnityEngine::Rendering::GPUDrivenMeshLodInfo  meshLodInfo, int32_t  gameObjectLayer, int32_t  refCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"Set", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SmallIntegerArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>(), ::i2c::type_of<::UnityEngine::Rendering::TransformUpdateFlags>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceFlags>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, rendererGroupID, materialIDs, meshID, localAABB, transformUpdateFlags, instanceFlags, lodGroupAndMask, meshLodInfo, gameObjectLayer, refCount);
}
inline void UnityEngine::Rendering::CPUSharedInstanceData::SetDefault(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"SetDefault", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
inline ::GlobalNamespace::CPUSharedInstanceData_ReadOnly UnityEngine::Rendering::CPUSharedInstanceData::AsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUSharedInstanceData>(),
                        {"AsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CPUSharedInstanceData_ReadOnly>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::CPUSharedInstanceData::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::CPUSharedInstanceData::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIDArrays", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localAABBs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshLodInfos", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameObjectLayers", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData::CPUSharedInstanceData(::Unity::Collections::NativeArray_1<int32_t>  m_StructData, ::Unity::Collections::NativeList_1<int32_t>  m_InstanceIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays, ::Unity::Collections::NativeArray_1<int32_t>  meshIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>  localAABBs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>  flags, ::Unity::Collections::NativeArray_1<uint32_t>  lodGroupAndMasks, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>  meshLodInfos, ::Unity::Collections::NativeArray_1<int32_t>  gameObjectLayers, ::Unity::Collections::NativeArray_1<int32_t>  refCounts) noexcept  {
this->m_StructData = m_StructData;
this->m_InstanceIndices = m_InstanceIndices;
this->instances = instances;
this->rendererGroupIDs = rendererGroupIDs;
this->materialIDArrays = materialIDArrays;
this->meshIDs = meshIDs;
this->localAABBs = localAABBs;
this->flags = flags;
this->lodGroupAndMasks = lodGroupAndMasks;
this->meshLodInfos = meshLodInfos;
this->gameObjectLayers = gameObjectLayers;
this->refCounts = refCounts;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUSharedInstanceData::CPUSharedInstanceData()   {
}
