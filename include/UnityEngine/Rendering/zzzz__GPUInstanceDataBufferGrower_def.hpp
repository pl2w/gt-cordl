#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferGrower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferGrower)
namespace GlobalNamespace {
struct GPUInstanceDataBufferGrower_GPUResources;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferGrower_CopyInstancesKernelIDs;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUInstanceDataBufferGrower_CopyInstancesKernelIDs;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferGrower;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs*);
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferGrower);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs*, "UnityEngine.Rendering", "GPUInstanceDataBufferGrower/CopyInstancesKernelIDs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUInstanceDataBufferGrower, "UnityEngine.Rendering", "GPUInstanceDataBufferGrower");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferGrower
struct CORDL_TYPE GPUInstanceDataBufferGrower {
public:
// Declarations
using GPUResources = ::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources;

using CopyInstancesKernelIDs = ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb1fda88, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method SubmitToGpu, addr 0xb1fd788, size 0x2fc, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* SubmitToGpu(::by_ref<::GlobalNamespace::GPUInstanceDataBufferGrower_GPUResources>  gpuResources) ;

/// @brief Method .ctor, addr 0xb1fd57c, size 0x20c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::GPUInstanceDataBuffer*  sourceBuffer, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceNumInfo>  instanceNumInfo) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBufferGrower() ;

// Ctor Parameters [CppParam { name: "m_SrcBuffer", ty: "::UnityEngine::Rendering::GPUInstanceDataBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DstBuffer", ty: "::UnityEngine::Rendering::GPUInstanceDataBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceDataBufferGrower(::UnityEngine::Rendering::GPUInstanceDataBuffer*  m_SrcBuffer, ::UnityEngine::Rendering::GPUInstanceDataBuffer*  m_DstBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_SrcBuffer, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::GPUInstanceDataBuffer*  m_SrcBuffer;

/// @brief Field m_DstBuffer, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::GPUInstanceDataBuffer*  m_DstBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower, m_SrcBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower, m_DstBuffer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferGrower/CopyInstancesKernelIDs
class CORDL_TYPE GPUInstanceDataBufferGrower_CopyInstancesKernelIDs : public ::System::Object {
public:
// Declarations
/// @brief Field _ComponentByteCounts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ComponentByteCounts, put=setStaticF__ComponentByteCounts)) int32_t  _ComponentByteCounts;

/// @brief Field _InputBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputBuffer, put=setStaticF__InputBuffer)) int32_t  _InputBuffer;

/// @brief Field _InputComponentAddresses, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputComponentAddresses, put=setStaticF__InputComponentAddresses)) int32_t  _InputComponentAddresses;

/// @brief Field _InputComponentInstanceIndexRanges, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputComponentInstanceIndexRanges, put=setStaticF__InputComponentInstanceIndexRanges)) int32_t  _InputComponentInstanceIndexRanges;

/// @brief Field _InputValidComponentCounts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputValidComponentCounts, put=setStaticF__InputValidComponentCounts)) int32_t  _InputValidComponentCounts;

/// @brief Field _InstanceCounts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InstanceCounts, put=setStaticF__InstanceCounts)) int32_t  _InstanceCounts;

/// @brief Field _InstanceOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InstanceOffset, put=setStaticF__InstanceOffset)) int32_t  _InstanceOffset;

/// @brief Field _OutputBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputBuffer, put=setStaticF__OutputBuffer)) int32_t  _OutputBuffer;

/// @brief Field _OutputComponentAddresses, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputComponentAddresses, put=setStaticF__OutputComponentAddresses)) int32_t  _OutputComponentAddresses;

/// @brief Field _OutputInstanceOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputInstanceOffset, put=setStaticF__OutputInstanceOffset)) int32_t  _OutputInstanceOffset;

/// @brief Field _ValidComponentIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ValidComponentIndices, put=setStaticF__ValidComponentIndices)) int32_t  _ValidComponentIndices;

static inline int32_t getStaticF__ComponentByteCounts() ;

static inline int32_t getStaticF__InputBuffer() ;

static inline int32_t getStaticF__InputComponentAddresses() ;

static inline int32_t getStaticF__InputComponentInstanceIndexRanges() ;

static inline int32_t getStaticF__InputValidComponentCounts() ;

static inline int32_t getStaticF__InstanceCounts() ;

static inline int32_t getStaticF__InstanceOffset() ;

static inline int32_t getStaticF__OutputBuffer() ;

static inline int32_t getStaticF__OutputComponentAddresses() ;

static inline int32_t getStaticF__OutputInstanceOffset() ;

static inline int32_t getStaticF__ValidComponentIndices() ;

static inline void setStaticF__ComponentByteCounts(int32_t  value) ;

static inline void setStaticF__InputBuffer(int32_t  value) ;

static inline void setStaticF__InputComponentAddresses(int32_t  value) ;

static inline void setStaticF__InputComponentInstanceIndexRanges(int32_t  value) ;

static inline void setStaticF__InputValidComponentCounts(int32_t  value) ;

static inline void setStaticF__InstanceCounts(int32_t  value) ;

static inline void setStaticF__InstanceOffset(int32_t  value) ;

static inline void setStaticF__OutputBuffer(int32_t  value) ;

static inline void setStaticF__OutputComponentAddresses(int32_t  value) ;

static inline void setStaticF__OutputInstanceOffset(int32_t  value) ;

static inline void setStaticF__ValidComponentIndices(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBufferGrower_CopyInstancesKernelIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferGrower_CopyInstancesKernelIDs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUInstanceDataBufferGrower_CopyInstancesKernelIDs(GPUInstanceDataBufferGrower_CopyInstancesKernelIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUInstanceDataBufferGrower_CopyInstancesKernelIDs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUInstanceDataBufferGrower_CopyInstancesKernelIDs(GPUInstanceDataBufferGrower_CopyInstancesKernelIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_CopyInstancesKernelIDs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
