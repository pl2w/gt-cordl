#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_GPUResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>, int32_t, ::UnityEngine::Rendering::InstanceType)>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb1fc5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.GetUploadBufferPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUploadBufferPtr)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb1fc81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"GetUploadBufferPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.GetUIntPerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUIntPerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1fc864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"GetUIntPerInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.GetParamUIntOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(int32_t)>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetParamUIntOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb1fc86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"GetParamUIntOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.AllocateUploadHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(int32_t)>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::AllocateUploadHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1fc878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"AllocateUploadHandles", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.SubmitToGpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(::UnityEngine::Rendering::GPUInstanceDataBuffer*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>, ::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>, bool)>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0xb1fc880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"SubmitToGpu", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.SubmitToGpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)(::UnityEngine::Rendering::GPUInstanceDataBuffer*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>, bool)>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb1fcf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"SubmitToGpu", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceDataBufferUploader.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceDataBufferUploader::*)()>(&::UnityEngine::Rendering::GPUInstanceDataBufferUploader::Dispose)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb1fd00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::_ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>  descriptions, int32_t  capacity, ::UnityEngine::Rendering::InstanceType  instanceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, descriptions, capacity, instanceType);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUploadBufferPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"GetUploadBufferPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetUIntPerInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"GetUIntPerInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader::GetParamUIntOffset(int32_t  parameterIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"GetParamUIntOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, parameterIndex);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader::PrepareParamWrite(int32_t  parameterIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                    {"PrepareParamWrite", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, parameterIndex);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::AllocateUploadHandles(int32_t  handlesLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"AllocateUploadHandles", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handlesLength);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::GPUInstanceDataBufferUploader::WriteInstanceDataJob(int32_t  parameterIndex, ::Unity::Collections::NativeArray_1<T>  instanceData, ::Unity::Collections::NativeArray_1<int32_t>  gatherIndices)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                    {"WriteInstanceDataJob", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, parameterIndex, instanceData, gatherIndices);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer*  instanceDataBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices, ::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>  gpuResources, bool  submitOnlyWrittenParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"SubmitToGpu", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceDataBuffer, gpuInstanceIndices, gpuResources, submitOnlyWrittenParams);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer*  instanceDataBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>  gpuResources, bool  submitOnlyWrittenParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"SubmitToGpu", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceDataBuffer, instances, gpuResources, submitOnlyWrittenParams);
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::GPUInstanceDataBufferUploader::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::GPUInstanceDataBufferUploader::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_UintPerInstance", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ComponentIsInstanced", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ComponentDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DescriptionsUintSize", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TmpDataBuffer", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WritenComponentIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DummyArray", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GPUInstanceDataBufferUploader(int32_t  m_UintPerInstance, int32_t  m_Capacity, int32_t  m_InstanceCount, ::Unity::Collections::NativeArray_1<bool>  m_ComponentIsInstanced, ::Unity::Collections::NativeArray_1<int32_t>  m_ComponentDataIndex, ::Unity::Collections::NativeArray_1<int32_t>  m_DescriptionsUintSize, ::Unity::Collections::NativeArray_1<uint32_t>  m_TmpDataBuffer, ::Unity::Collections::NativeList_1<int32_t>  m_WritenComponentIndices, ::Unity::Collections::NativeArray_1<int32_t>  m_DummyArray) noexcept  {
this->m_UintPerInstance = m_UintPerInstance;
this->m_Capacity = m_Capacity;
this->m_InstanceCount = m_InstanceCount;
this->m_ComponentIsInstanced = m_ComponentIsInstanced;
this->m_ComponentDataIndex = m_ComponentDataIndex;
this->m_DescriptionsUintSize = m_DescriptionsUintSize;
this->m_TmpDataBuffer = m_TmpDataBuffer;
this->m_WritenComponentIndices = m_WritenComponentIndices;
this->m_DummyArray = m_DummyArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader::GPUInstanceDataBufferUploader()   {
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputValidComponentCounts(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputValidComponentCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputValidComponentCounts()  {
return ::cordl_internals::getStaticField<int32_t, "_InputValidComponentCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceCounts(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputInstanceCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceCounts()  {
return ::cordl_internals::getStaticField<int32_t, "_InputInstanceCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceByteSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputInstanceByteSize", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceByteSize()  {
return ::cordl_internals::getStaticField<int32_t, "_InputInstanceByteSize", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentOffsets(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputComponentOffsets", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentOffsets()  {
return ::cordl_internals::getStaticField<int32_t, "_InputComponentOffsets", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputInstanceData", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceData()  {
return ::cordl_internals::getStaticField<int32_t, "_InputInstanceData", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputInstanceIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputInstanceIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputInstanceIndices()  {
return ::cordl_internals::getStaticField<int32_t, "_InputInstanceIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputValidComponentIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputValidComponentIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputValidComponentIndices()  {
return ::cordl_internals::getStaticField<int32_t, "_InputValidComponentIndices", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentAddresses(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputComponentAddresses", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentAddresses()  {
return ::cordl_internals::getStaticField<int32_t, "_InputComponentAddresses", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentByteCounts(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputComponentByteCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentByteCounts()  {
return ::cordl_internals::getStaticField<int32_t, "_InputComponentByteCounts", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__InputComponentInstanceIndexRanges(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputComponentInstanceIndexRanges", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__InputComponentInstanceIndexRanges()  {
return ::cordl_internals::getStaticField<int32_t, "_InputComponentInstanceIndexRanges", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
inline void UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::setStaticF__OutputBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_OutputBuffer", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::getStaticF__OutputBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_OutputBuffer", ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs::GPUInstanceDataBufferUploader_UploadKernelIDs()   {
}
