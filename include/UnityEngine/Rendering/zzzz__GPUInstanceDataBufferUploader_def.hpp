#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferUploader)
namespace GlobalNamespace {
struct GPUInstanceDataBufferUploader_GPUResources;
}
namespace GlobalNamespace {
struct GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct GPUInstanceComponentDesc;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferUploader_UploadKernelIDs;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferUploader_UploadKernelIDs;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferUploader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferUploader);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs*, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader/UploadKernelIDs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader
struct CORDL_TYPE GPUInstanceDataBufferUploader {
public:
// Declarations
using GPUResources = ::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources;

using WriteInstanceDataParameterJob = ::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob;

using UploadKernelIDs = ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AllocateUploadHandles, addr 0xb1fc878, size 0x8, virtual false, abstract: false, final false
inline void AllocateUploadHandles(int32_t  handlesLength) ;

/// @brief Method Dispose, addr 0xb1fd00c, size 0x12c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetParamUIntOffset, addr 0xb1fc86c, size 0xc, virtual false, abstract: false, final false
inline int32_t GetParamUIntOffset(int32_t  parameterIndex) ;

/// @brief Method GetUIntPerInstance, addr 0xb1fc864, size 0x8, virtual false, abstract: false, final false
inline int32_t GetUIntPerInstance() ;

/// @brief Method GetUploadBufferPtr, addr 0xb1fc81c, size 0x48, virtual false, abstract: false, final false
inline ::System::IntPtr GetUploadBufferPtr() ;

/// @brief Method PrepareParamWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t PrepareParamWrite(int32_t  parameterIndex) ;

/// @brief Method SubmitToGpu, addr 0xb1fc880, size 0x4cc, virtual false, abstract: false, final false
inline void SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer*  instanceDataBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices, ::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>  gpuResources, bool  submitOnlyWrittenParams) ;

/// @brief Method SubmitToGpu, addr 0xb1fcf28, size 0xe4, virtual false, abstract: false, final false
inline void SubmitToGpu(::UnityEngine::Rendering::GPUInstanceDataBuffer*  instanceDataBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::by_ref<::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources>  gpuResources, bool  submitOnlyWrittenParams) ;

/// @brief Method WriteInstanceDataJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Jobs::JobHandle WriteInstanceDataJob(int32_t  parameterIndex, ::Unity::Collections::NativeArray_1<T>  instanceData, ::Unity::Collections::NativeArray_1<int32_t>  gatherIndices) ;

/// @brief Method .ctor, addr 0xb1fc5bc, size 0x260, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>>  descriptions, int32_t  capacity, ::UnityEngine::Rendering::InstanceType  instanceType) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBufferUploader() ;

// Ctor Parameters [CppParam { name: "m_UintPerInstance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ComponentIsInstanced", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ComponentDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DescriptionsUintSize", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TmpDataBuffer", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WritenComponentIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DummyArray", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceDataBufferUploader(int32_t  m_UintPerInstance, int32_t  m_Capacity, int32_t  m_InstanceCount, ::Unity::Collections::NativeArray_1<bool>  m_ComponentIsInstanced, ::Unity::Collections::NativeArray_1<int32_t>  m_ComponentDataIndex, ::Unity::Collections::NativeArray_1<int32_t>  m_DescriptionsUintSize, ::Unity::Collections::NativeArray_1<uint32_t>  m_TmpDataBuffer, ::Unity::Collections::NativeList_1<int32_t>  m_WritenComponentIndices, ::Unity::Collections::NativeArray_1<int32_t>  m_DummyArray) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26613};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field m_UintPerInstance, offset: 0x0, size: 0x4, def value: None
 int32_t  m_UintPerInstance;

/// @brief Field m_Capacity, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Capacity;

/// @brief Field m_InstanceCount, offset: 0x8, size: 0x4, def value: None
 int32_t  m_InstanceCount;

/// @brief Field m_ComponentIsInstanced, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<bool>  m_ComponentIsInstanced;

/// @brief Field m_ComponentDataIndex, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_ComponentDataIndex;

/// @brief Field m_DescriptionsUintSize, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_DescriptionsUintSize;

/// @brief Field m_TmpDataBuffer, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  m_TmpDataBuffer;

/// @brief Field m_WritenComponentIndices, offset: 0x50, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_WritenComponentIndices;

/// @brief Field m_DummyArray, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_DummyArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_UintPerInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_Capacity) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_InstanceCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_ComponentIsInstanced) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_ComponentDataIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_DescriptionsUintSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_TmpDataBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_WritenComponentIndices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader, m_DummyArray) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader/UploadKernelIDs
class CORDL_TYPE GPUInstanceDataBufferUploader_UploadKernelIDs : public ::System::Object {
public:
// Declarations
/// @brief Field _InputComponentAddresses, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputComponentAddresses, put=setStaticF__InputComponentAddresses)) int32_t  _InputComponentAddresses;

/// @brief Field _InputComponentByteCounts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputComponentByteCounts, put=setStaticF__InputComponentByteCounts)) int32_t  _InputComponentByteCounts;

/// @brief Field _InputComponentInstanceIndexRanges, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputComponentInstanceIndexRanges, put=setStaticF__InputComponentInstanceIndexRanges)) int32_t  _InputComponentInstanceIndexRanges;

/// @brief Field _InputComponentOffsets, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputComponentOffsets, put=setStaticF__InputComponentOffsets)) int32_t  _InputComponentOffsets;

/// @brief Field _InputInstanceByteSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputInstanceByteSize, put=setStaticF__InputInstanceByteSize)) int32_t  _InputInstanceByteSize;

/// @brief Field _InputInstanceCounts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputInstanceCounts, put=setStaticF__InputInstanceCounts)) int32_t  _InputInstanceCounts;

/// @brief Field _InputInstanceData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputInstanceData, put=setStaticF__InputInstanceData)) int32_t  _InputInstanceData;

/// @brief Field _InputInstanceIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputInstanceIndices, put=setStaticF__InputInstanceIndices)) int32_t  _InputInstanceIndices;

/// @brief Field _InputValidComponentCounts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputValidComponentCounts, put=setStaticF__InputValidComponentCounts)) int32_t  _InputValidComponentCounts;

/// @brief Field _InputValidComponentIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputValidComponentIndices, put=setStaticF__InputValidComponentIndices)) int32_t  _InputValidComponentIndices;

/// @brief Field _OutputBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputBuffer, put=setStaticF__OutputBuffer)) int32_t  _OutputBuffer;

static inline int32_t getStaticF__InputComponentAddresses() ;

static inline int32_t getStaticF__InputComponentByteCounts() ;

static inline int32_t getStaticF__InputComponentInstanceIndexRanges() ;

static inline int32_t getStaticF__InputComponentOffsets() ;

static inline int32_t getStaticF__InputInstanceByteSize() ;

static inline int32_t getStaticF__InputInstanceCounts() ;

static inline int32_t getStaticF__InputInstanceData() ;

static inline int32_t getStaticF__InputInstanceIndices() ;

static inline int32_t getStaticF__InputValidComponentCounts() ;

static inline int32_t getStaticF__InputValidComponentIndices() ;

static inline int32_t getStaticF__OutputBuffer() ;

static inline void setStaticF__InputComponentAddresses(int32_t  value) ;

static inline void setStaticF__InputComponentByteCounts(int32_t  value) ;

static inline void setStaticF__InputComponentInstanceIndexRanges(int32_t  value) ;

static inline void setStaticF__InputComponentOffsets(int32_t  value) ;

static inline void setStaticF__InputInstanceByteSize(int32_t  value) ;

static inline void setStaticF__InputInstanceCounts(int32_t  value) ;

static inline void setStaticF__InputInstanceData(int32_t  value) ;

static inline void setStaticF__InputInstanceIndices(int32_t  value) ;

static inline void setStaticF__InputValidComponentCounts(int32_t  value) ;

static inline void setStaticF__InputValidComponentIndices(int32_t  value) ;

static inline void setStaticF__OutputBuffer(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBufferUploader_UploadKernelIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferUploader_UploadKernelIDs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUInstanceDataBufferUploader_UploadKernelIDs(GPUInstanceDataBufferUploader_UploadKernelIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferUploader_UploadKernelIDs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUInstanceDataBufferUploader_UploadKernelIDs(GPUInstanceDataBufferUploader_UploadKernelIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_UploadKernelIDs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
