#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBuffer)
namespace GlobalNamespace {
struct GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob;
}
namespace GlobalNamespace {
struct GPUInstanceDataBuffer_ReadOnly;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUInstanceDataBuffer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUInstanceDataBuffer*, "UnityEngine.Rendering", "GPUInstanceDataBuffer");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.GPUInstanceComponentDesc, UnityEngine.Rendering.InstanceNumInfo, UnityEngine.Rendering.MetadataValue
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUInstanceDataBuffer
class CORDL_TYPE GPUInstanceDataBuffer : public ::System::Object {
public:
// Declarations
using ConvertCPUInstancesToGPUInstancesJob = ::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob;

using ReadOnly = ::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly;

/// @brief Field byteSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_byteSize, put=__cordl_internal_set_byteSize)) int32_t  byteSize;

/// @brief Field componentAddressesGpuBuffer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentAddressesGpuBuffer, put=__cordl_internal_set_componentAddressesGpuBuffer)) ::UnityEngine::GraphicsBuffer*  componentAddressesGpuBuffer;

/// @brief Field componentByteCountsGpuBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentByteCountsGpuBuffer, put=__cordl_internal_set_componentByteCountsGpuBuffer)) ::UnityEngine::GraphicsBuffer*  componentByteCountsGpuBuffer;

/// @brief Field componentInstanceIndexRangesGpuBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentInstanceIndexRangesGpuBuffer, put=__cordl_internal_set_componentInstanceIndexRangesGpuBuffer)) ::UnityEngine::GraphicsBuffer*  componentInstanceIndexRangesGpuBuffer;

/// @brief Field defaultMetadata, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultMetadata, put=__cordl_internal_set_defaultMetadata)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>  defaultMetadata;

/// @brief Field descriptions, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_descriptions, put=__cordl_internal_set_descriptions)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>  descriptions;

/// @brief Field gpuBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gpuBuffer, put=__cordl_internal_set_gpuBuffer)) ::UnityEngine::GraphicsBuffer*  gpuBuffer;

/// @brief Field gpuBufferComponentAddress, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_gpuBufferComponentAddress, put=__cordl_internal_set_gpuBufferComponentAddress)) ::Unity::Collections::NativeArray_1<int32_t>  gpuBufferComponentAddress;

/// @brief Field instanceNumInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceNumInfo, put=__cordl_internal_set_instanceNumInfo)) ::UnityEngine::Rendering::InstanceNumInfo  instanceNumInfo;

/// @brief Field instancesNumPrefixSum, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_instancesNumPrefixSum, put=__cordl_internal_set_instancesNumPrefixSum)) ::Unity::Collections::NativeArray_1<int32_t>  instancesNumPrefixSum;

/// @brief Field instancesSpan, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_instancesSpan, put=__cordl_internal_set_instancesSpan)) ::Unity::Collections::NativeArray_1<int32_t>  instancesSpan;

/// @brief Field layoutVersion, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_layoutVersion, put=__cordl_internal_set_layoutVersion)) int32_t  layoutVersion;

/// @brief Field nameToMetadataMap, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_nameToMetadataMap, put=__cordl_internal_set_nameToMetadataMap)) ::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>  nameToMetadataMap;

/// @brief Field perInstanceComponentCount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_perInstanceComponentCount, put=__cordl_internal_set_perInstanceComponentCount)) int32_t  perInstanceComponentCount;

/// @brief Field s_NextLayoutVersion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_NextLayoutVersion, put=setStaticF_s_NextLayoutVersion)) int32_t  s_NextLayoutVersion;

/// @brief Field validComponentsIndicesGpuBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_validComponentsIndicesGpuBuffer, put=__cordl_internal_set_validComponentsIndicesGpuBuffer)) ::UnityEngine::GraphicsBuffer*  validComponentsIndicesGpuBuffer;

/// @brief Field version, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AsReadOnly, addr 0xb1fba24, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly AsReadOnly() ;

/// @brief Method CPUInstanceArrayToGPUInstanceArray, addr 0xb1fb7f0, size 0xa8, virtual false, abstract: false, final false
inline void CPUInstanceArrayToGPUInstanceArray(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices) ;

/// @brief Method CPUInstanceToGPUInstance, addr 0xb1fb550, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GPUInstanceIndex CPUInstanceToGPUInstance(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instancesNumPrefixSum, ::UnityEngine::Rendering::InstanceHandle  instance) ;

/// @brief Method Dispose, addr 0xb1fb898, size 0x18c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetGpuAddress, addr 0xb1fb7c8, size 0x28, virtual false, abstract: false, final false
inline int32_t GetGpuAddress(int32_t  propertyID, bool  assertOnFail) ;

/// @brief Method GetPropertyIndex, addr 0xb1fb758, size 0x70, virtual false, abstract: false, final false
inline int32_t GetPropertyIndex(int32_t  propertyID, bool  assertOnFail) ;

static inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* New_ctor() ;

/// @brief Method NextVersion, addr 0xb1fb500, size 0x50, virtual false, abstract: false, final false
static inline int32_t NextVersion() ;

constexpr int32_t const& __cordl_internal_get_byteSize() const;

constexpr int32_t& __cordl_internal_get_byteSize() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_componentAddressesGpuBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_componentAddressesGpuBuffer() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_componentByteCountsGpuBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_componentByteCountsGpuBuffer() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_componentInstanceIndexRangesGpuBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_componentInstanceIndexRangesGpuBuffer() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> const& __cordl_internal_get_defaultMetadata() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>& __cordl_internal_get_defaultMetadata() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> const& __cordl_internal_get_descriptions() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>& __cordl_internal_get_descriptions() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_gpuBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_gpuBuffer() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_gpuBufferComponentAddress() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_gpuBufferComponentAddress() ;

constexpr ::UnityEngine::Rendering::InstanceNumInfo const& __cordl_internal_get_instanceNumInfo() const;

constexpr ::UnityEngine::Rendering::InstanceNumInfo& __cordl_internal_get_instanceNumInfo() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instancesNumPrefixSum() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instancesNumPrefixSum() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instancesSpan() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instancesSpan() ;

constexpr int32_t const& __cordl_internal_get_layoutVersion() const;

constexpr int32_t& __cordl_internal_get_layoutVersion() ;

constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t> const& __cordl_internal_get_nameToMetadataMap() const;

constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>& __cordl_internal_get_nameToMetadataMap() ;

constexpr int32_t const& __cordl_internal_get_perInstanceComponentCount() const;

constexpr int32_t& __cordl_internal_get_perInstanceComponentCount() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_validComponentsIndicesGpuBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_validComponentsIndicesGpuBuffer() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_byteSize(int32_t  value) ;

constexpr void __cordl_internal_set_componentAddressesGpuBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_componentByteCountsGpuBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_componentInstanceIndexRangesGpuBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_defaultMetadata(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>  value) ;

constexpr void __cordl_internal_set_descriptions(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>  value) ;

constexpr void __cordl_internal_set_gpuBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_gpuBufferComponentAddress(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_instanceNumInfo(::UnityEngine::Rendering::InstanceNumInfo  value) ;

constexpr void __cordl_internal_set_instancesNumPrefixSum(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_instancesSpan(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_layoutVersion(int32_t  value) ;

constexpr void __cordl_internal_set_nameToMetadataMap(::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>  value) ;

constexpr void __cordl_internal_set_perInstanceComponentCount(int32_t  value) ;

constexpr void __cordl_internal_set_validComponentsIndicesGpuBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0xb1fba54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_NextLayoutVersion() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_s_NextLayoutVersion(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUInstanceDataBuffer(GPUInstanceDataBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUInstanceDataBuffer(GPUInstanceDataBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26608};

/// @brief Field instanceNumInfo, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::InstanceNumInfo  ___instanceNumInfo;

/// @brief Field instancesNumPrefixSum, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___instancesNumPrefixSum;

/// @brief Field instancesSpan, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___instancesSpan;

/// @brief Field byteSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ___byteSize;

/// @brief Field perInstanceComponentCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___perInstanceComponentCount;

/// @brief Field version, offset: 0x40, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field layoutVersion, offset: 0x44, size: 0x4, def value: None
 int32_t  ___layoutVersion;

/// @brief Field gpuBuffer, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___gpuBuffer;

/// @brief Field validComponentsIndicesGpuBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___validComponentsIndicesGpuBuffer;

/// @brief Field componentAddressesGpuBuffer, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___componentAddressesGpuBuffer;

/// @brief Field componentInstanceIndexRangesGpuBuffer, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___componentInstanceIndexRangesGpuBuffer;

/// @brief Field componentByteCountsGpuBuffer, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___componentByteCountsGpuBuffer;

/// @brief Field descriptions, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>  ___descriptions;

/// @brief Field defaultMetadata, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>  ___defaultMetadata;

/// @brief Field gpuBufferComponentAddress, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___gpuBufferComponentAddress;

/// @brief Field nameToMetadataMap, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>  ___nameToMetadataMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___instanceNumInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___instancesNumPrefixSum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___instancesSpan) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___byteSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___perInstanceComponentCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___layoutVersion) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___gpuBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___validComponentsIndicesGpuBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___componentAddressesGpuBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___componentInstanceIndexRangesGpuBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___componentByteCountsGpuBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___descriptions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___defaultMetadata) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___gpuBufferComponentAddress) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBuffer, ___nameToMetadataMap) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUInstanceDataBuffer) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
