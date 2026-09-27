#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventDebugArray.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Info_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Request_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Info_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Request_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.get_CounterBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)()>(&::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::get_CounterBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1f27e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"get_CounterBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)()>(&::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Init)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb1f27ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)()>(&::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Dispose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb1f28f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.TryAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)(int32_t, ::UnityEngine::Rendering::InstanceOcclusionEventType, int32_t, int32_t, ::UnityEngine::Rendering::OcclusionTest)>(&::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::TryAdd)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb1f2a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"TryAdd", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceOcclusionEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray.MoveToDebugStatsAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::*)(::UnityEngine::Rendering::DebugRendererBatcherStats*)>(&::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::MoveToDebugStatsAndClear)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xb1f2b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"MoveToDebugStatsAndClear", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugRendererBatcherStats*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::InstanceOcclusionEventDebugArray::get_CounterBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"get_CounterBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceOcclusionEventDebugArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::InstanceOcclusionEventDebugArray::TryAdd(int32_t  viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType  eventType, int32_t  occluderVersion, int32_t  subviewMask, ::UnityEngine::Rendering::OcclusionTest  occlusionTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"TryAdd", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceOcclusionEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, viewInstanceID, eventType, occluderVersion, subviewMask, occlusionTest);
}
inline void UnityEngine::Rendering::InstanceOcclusionEventDebugArray::MoveToDebugStatsAndClear(::UnityEngine::Rendering::DebugRendererBatcherStats*  debugStats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray>(),
                        {"MoveToDebugStatsAndClear", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugRendererBatcherStats*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, debugStats);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::InstanceOcclusionEventDebugArray::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::InstanceOcclusionEventDebugArray::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_CounterBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PendingInfo", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Requests", ty: "::Unity::Collections::NativeQueue_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Request>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LatestInfo", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LatestCounters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_HasLatest", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::InstanceOcclusionEventDebugArray(::UnityEngine::GraphicsBuffer*  m_CounterBuffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>  m_PendingInfo, ::Unity::Collections::NativeQueue_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Request>  m_Requests, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>  m_LatestInfo, ::Unity::Collections::NativeArray_1<int32_t>  m_LatestCounters, bool  m_HasLatest) noexcept  {
this->m_CounterBuffer = m_CounterBuffer;
this->m_PendingInfo = m_PendingInfo;
this->m_Requests = m_Requests;
this->m_LatestInfo = m_LatestInfo;
this->m_LatestCounters = m_LatestCounters;
this->m_HasLatest = m_HasLatest;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray::InstanceOcclusionEventDebugArray()   {
}
