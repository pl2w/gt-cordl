#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SilhouettePlaneCache.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_Slot_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_Slot_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)()>(&::UnityEngine::Rendering::SilhouettePlaneCache::Init)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb20cd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)()>(&::UnityEngine::Rendering::SilhouettePlaneCache::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb20ce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)(int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, int32_t)>(&::UnityEngine::Rendering::SilhouettePlaneCache::Update)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xb20cf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.FreeUnusedSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SilhouettePlaneCache::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::SilhouettePlaneCache::FreeUnusedSlots)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb20d374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"FreeUnusedSlots", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SilhouettePlaneCache.GetSubArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::UnityEngine::Rendering::SilhouettePlaneCache::*)(int32_t)>(&::UnityEngine::Rendering::SilhouettePlaneCache::GetSubArray)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb20d504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"GetSubArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SilhouettePlaneCache::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SilhouettePlaneCache::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SilhouettePlaneCache::Update(int32_t  viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewInstanceID, planes, frameIndex);
}
inline void UnityEngine::Rendering::SilhouettePlaneCache::FreeUnusedSlots(int32_t  frameIndex, int32_t  maximumAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"FreeUnusedSlots", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frameIndex, maximumAge);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> UnityEngine::Rendering::SilhouettePlaneCache::GetSubArray(int32_t  viewInstanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SilhouettePlaneCache>(),
                        {"GetSubArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(*this, ___internal_method, viewInstanceID);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::SilhouettePlaneCache::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::SilhouettePlaneCache::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SubviewIDToIndexMap", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SlotFreeList", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Slots", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::SilhouettePlaneCache_Slot>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PlaneStorage", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache::SilhouettePlaneCache(::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>  m_SubviewIDToIndexMap, ::Unity::Collections::NativeList_1<int32_t>  m_SlotFreeList, ::Unity::Collections::NativeList_1<::GlobalNamespace::SilhouettePlaneCache_Slot>  m_Slots, ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  m_PlaneStorage) noexcept  {
this->m_SubviewIDToIndexMap = m_SubviewIDToIndexMap;
this->m_SlotFreeList = m_SlotFreeList;
this->m_Slots = m_Slots;
this->m_PlaneStorage = m_PlaneStorage;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SilhouettePlaneCache::SilhouettePlaneCache()   {
}
