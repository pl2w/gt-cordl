#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SystemResources_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum)
namespace GlobalNamespace {
struct GPUPrefixSum_DirectArgs;
}
namespace GlobalNamespace {
struct GPUPrefixSum_IndirectDirectArgs;
}
namespace GlobalNamespace {
struct GPUPrefixSum_LevelOffsets;
}
namespace GlobalNamespace {
struct GPUPrefixSum_RenderGraphResources;
}
namespace GlobalNamespace {
struct GPUPrefixSum_SupportResources;
}
namespace GlobalNamespace {
struct GPUPrefixSum_SystemResources;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderDefs;
}
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderIDs;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderDefs;
}
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderIDs;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*);
MARK_REF_T(::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*, "UnityEngine.Rendering", "GPUPrefixSum/ShaderDefs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*, "UnityEngine.Rendering", "GPUPrefixSum/ShaderIDs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUPrefixSum, "UnityEngine.Rendering", "GPUPrefixSum");
// Dependencies UnityEngine.Rendering.GPUPrefixSum::SystemResources
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum
struct CORDL_TYPE GPUPrefixSum {
public:
// Declarations
using DirectArgs = ::GlobalNamespace::GPUPrefixSum_DirectArgs;

using IndirectDirectArgs = ::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs;

using LevelOffsets = ::GlobalNamespace::GPUPrefixSum_LevelOffsets;

using RenderGraphResources = ::GlobalNamespace::GPUPrefixSum_RenderGraphResources;

using SupportResources = ::GlobalNamespace::GPUPrefixSum_SupportResources;

using SystemResources = ::GlobalNamespace::GPUPrefixSum_SystemResources;

using ShaderDefs = ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs;

using ShaderIDs = ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs;

/// @brief Method DispatchDirect, addr 0xb194340, size 0x1fc, virtual false, abstract: false, final false
inline void DispatchDirect(::UnityEngine::Rendering::CommandBuffer*  cmdBuffer, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GPUPrefixSum_DirectArgs>  arguments) ;

/// @brief Method DispatchIndirect, addr 0xb19453c, size 0x1f4, virtual false, abstract: false, final false
inline void DispatchIndirect(::UnityEngine::Rendering::CommandBuffer*  cmdBuffer, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs>  arguments) ;

/// @brief Method ExecuteCommonIndirect, addr 0xb193fa0, size 0x3a0, virtual false, abstract: false, final false
inline void ExecuteCommonIndirect(::UnityEngine::Rendering::CommandBuffer*  cmdBuffer, ::UnityEngine::GraphicsBuffer*  inputBuffer, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GPUPrefixSum_SupportResources>  supportResources, bool  isExclusive) ;

/// @brief Method PackPrefixSumArgs, addr 0xb193f8c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 PackPrefixSumArgs(int32_t  a, int32_t  b, int32_t  c, int32_t  d) ;

/// @brief Method .ctor, addr 0xb193da8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GPUPrefixSum_SystemResources  resources) ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum() ;

// Ctor Parameters [CppParam { name: "resources", ty: "::GlobalNamespace::GPUPrefixSum_SystemResources", modifiers: "", def_value: None, comment: None }]
constexpr GPUPrefixSum(::GlobalNamespace::GPUPrefixSum_SystemResources  resources) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17016};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field resources, offset: 0x0, size: 0x28, def value: None
 ::GlobalNamespace::GPUPrefixSum_SystemResources  resources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum, resources) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUPrefixSum) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUPrefixSum/ShaderIDs
class CORDL_TYPE GPUPrefixSum_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field _InputBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputBuffer, put=setStaticF__InputBuffer)) int32_t  _InputBuffer;

/// @brief Field _InputCountBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputCountBuffer, put=setStaticF__InputCountBuffer)) int32_t  _InputCountBuffer;

/// @brief Field _LevelsOffsetsBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LevelsOffsetsBuffer, put=setStaticF__LevelsOffsetsBuffer)) int32_t  _LevelsOffsetsBuffer;

/// @brief Field _OutputBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputBuffer, put=setStaticF__OutputBuffer)) int32_t  _OutputBuffer;

/// @brief Field _OutputDispatchLevelArgsBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputDispatchLevelArgsBuffer, put=setStaticF__OutputDispatchLevelArgsBuffer)) int32_t  _OutputDispatchLevelArgsBuffer;

/// @brief Field _OutputLevelsOffsetsBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputLevelsOffsetsBuffer, put=setStaticF__OutputLevelsOffsetsBuffer)) int32_t  _OutputLevelsOffsetsBuffer;

/// @brief Field _OutputTotalLevelsBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutputTotalLevelsBuffer, put=setStaticF__OutputTotalLevelsBuffer)) int32_t  _OutputTotalLevelsBuffer;

/// @brief Field _PrefixSumIntArgs, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PrefixSumIntArgs, put=setStaticF__PrefixSumIntArgs)) int32_t  _PrefixSumIntArgs;

/// @brief Field _TotalLevelsBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TotalLevelsBuffer, put=setStaticF__TotalLevelsBuffer)) int32_t  _TotalLevelsBuffer;

static inline int32_t getStaticF__InputBuffer() ;

static inline int32_t getStaticF__InputCountBuffer() ;

static inline int32_t getStaticF__LevelsOffsetsBuffer() ;

static inline int32_t getStaticF__OutputBuffer() ;

static inline int32_t getStaticF__OutputDispatchLevelArgsBuffer() ;

static inline int32_t getStaticF__OutputLevelsOffsetsBuffer() ;

static inline int32_t getStaticF__OutputTotalLevelsBuffer() ;

static inline int32_t getStaticF__PrefixSumIntArgs() ;

static inline int32_t getStaticF__TotalLevelsBuffer() ;

static inline void setStaticF__InputBuffer(int32_t  value) ;

static inline void setStaticF__InputCountBuffer(int32_t  value) ;

static inline void setStaticF__LevelsOffsetsBuffer(int32_t  value) ;

static inline void setStaticF__OutputBuffer(int32_t  value) ;

static inline void setStaticF__OutputDispatchLevelArgsBuffer(int32_t  value) ;

static inline void setStaticF__OutputLevelsOffsetsBuffer(int32_t  value) ;

static inline void setStaticF__OutputTotalLevelsBuffer(int32_t  value) ;

static inline void setStaticF__PrefixSumIntArgs(int32_t  value) ;

static inline void setStaticF__TotalLevelsBuffer(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderIDs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUPrefixSum_ShaderIDs(GPUPrefixSum_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderIDs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUPrefixSum_ShaderIDs(GPUPrefixSum_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [GenerateHLSL((UnityEngine.Rendering.PackingRules)0, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@04755ad51d99\\Runtime\\Utilities\\GPUPrefixSum\\GPUPrefixSum.Data.cs")]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUPrefixSum/ShaderDefs
class CORDL_TYPE GPUPrefixSum_ShaderDefs : public ::System::Object {
public:
// Declarations
/// @brief Method AlignUpGroup, addr 0xb194748, size 0x18, virtual false, abstract: false, final false
static inline int32_t AlignUpGroup(int32_t  value) ;

/// @brief Method CalculateTotalBufferSize, addr 0xb194760, size 0x58, virtual false, abstract: false, final false
static inline void CalculateTotalBufferSize(int32_t  maxElementCount, ::by_ref<int32_t>  totalSize, ::by_ref<int32_t>  levelCounts) ;

/// @brief Method DivUpGroup, addr 0xb194730, size 0x18, virtual false, abstract: false, final false
static inline int32_t DivUpGroup(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_ShaderDefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderDefs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUPrefixSum_ShaderDefs(GPUPrefixSum_ShaderDefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderDefs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUPrefixSum_ShaderDefs(GPUPrefixSum_ShaderDefs const& ) = delete;

/// @brief Field ArgsBufferLower offset 0xffffffff size 0x4
static constexpr int32_t  ArgsBufferLower{static_cast<int32_t>(0x8)};

/// @brief Field ArgsBufferStride offset 0xffffffff size 0x4
static constexpr int32_t  ArgsBufferStride{static_cast<int32_t>(0x10)};

/// @brief Field ArgsBufferUpper offset 0xffffffff size 0x4
static constexpr int32_t  ArgsBufferUpper{static_cast<int32_t>(0x0)};

/// @brief Field GroupSize offset 0xffffffff size 0x4
static constexpr int32_t  GroupSize{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
