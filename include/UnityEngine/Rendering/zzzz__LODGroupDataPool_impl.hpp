#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupDataPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupDataPool_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.get_lodGroupDataHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex> (::UnityEngine::Rendering::LODGroupDataPool::*)()>(&::UnityEngine::Rendering::LODGroupDataPool::get_lodGroupDataHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb20bb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"get_lodGroupDataHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.get_lodGroupCullingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> (::UnityEngine::Rendering::LODGroupDataPool::*)()>(&::UnityEngine::Rendering::LODGroupDataPool::get_lodGroupCullingData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb20bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"get_lodGroupCullingData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::UnityEngine::Rendering::GPUResidentDrawerResources*, int32_t, bool)>(&::UnityEngine::Rendering::LODGroupDataPool::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb20bb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)()>(&::UnityEngine::Rendering::LODGroupDataPool::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb20bce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.UpdateLODGroupTransformData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>)>(&::UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupTransformData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb20bda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"UpdateLODGroupTransformData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.UpdateLODGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>)>(&::UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupData)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb20bf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"UpdateLODGroupData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupDataPool.FreeLODGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODGroupDataPool::*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::LODGroupDataPool::FreeLODGroupData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb20c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"FreeLODGroupData", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LODGroupData;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LODGroupData;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_LODGroupData(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LODGroupData = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupDataHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LODGroupDataHash;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex> const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupDataHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LODGroupDataHash;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_LODGroupDataHash(::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LODGroupDataHash = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupCullingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LODGroupCullingData;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_LODGroupCullingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LODGroupCullingData;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_LODGroupCullingData(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LODGroupCullingData = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_FreeLODGroupDataHandles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreeLODGroupDataHandles;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_FreeLODGroupDataHandles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreeLODGroupDataHandles;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_FreeLODGroupDataHandles(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FreeLODGroupDataHandles = value;
}
constexpr int32_t& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_CrossfadedRendererCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CrossfadedRendererCount;
}
constexpr int32_t const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_CrossfadedRendererCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CrossfadedRendererCount;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_CrossfadedRendererCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CrossfadedRendererCount = value;
}
constexpr bool& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_SupportDitheringCrossFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SupportDitheringCrossFade;
}
constexpr bool const& UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_get_m_SupportDitheringCrossFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SupportDitheringCrossFade;
}
constexpr void UnityEngine::Rendering::LODGroupDataPool::__cordl_internal_set_m_SupportDitheringCrossFade(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SupportDitheringCrossFade = value;
}
inline ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex> UnityEngine::Rendering::LODGroupDataPool::get_lodGroupDataHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"get_lodGroupDataHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>(this, ___internal_method);
}
inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> UnityEngine::Rendering::LODGroupDataPool::get_lodGroupCullingData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"get_lodGroupCullingData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LODGroupDataPool::_ctor(::UnityEngine::Rendering::GPUResidentDrawerResources*  resources, int32_t  initialInstanceCount, bool  supportDitheringCrossFade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUResidentDrawerResources*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources, initialInstanceCount, supportDitheringCrossFade);
}
inline void UnityEngine::Rendering::LODGroupDataPool::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupTransformData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>  inputData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"UpdateLODGroupTransformData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputData);
}
inline void UnityEngine::Rendering::LODGroupDataPool::UpdateLODGroupData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>  inputData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"UpdateLODGroupData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputData);
}
inline void UnityEngine::Rendering::LODGroupDataPool::FreeLODGroupData(::Unity::Collections::NativeArray_1<int32_t>  destroyedLODGroupsID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODGroupDataPool*>(),
                        {"FreeLODGroupData", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyedLODGroupsID);
}
inline ::UnityEngine::Rendering::LODGroupDataPool* UnityEngine::Rendering::LODGroupDataPool::New_ctor(::UnityEngine::Rendering::GPUResidentDrawerResources*  resources, int32_t  initialInstanceCount, bool  supportDitheringCrossFade)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LODGroupDataPool*>(resources, initialInstanceCount, supportDitheringCrossFade));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::LODGroupDataPool::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::LODGroupDataPool::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupDataPool::LODGroupDataPool()   {
}
