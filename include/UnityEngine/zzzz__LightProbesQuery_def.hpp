#pragma once
// IWYU pragma private; include "UnityEngine/LightProbesQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbesQuery)
namespace GlobalNamespace {
struct LightProbesQuery_LightProbesQueryDisposeJob;
}
namespace GlobalNamespace {
struct LightProbesQuery_LightProbesQueryDispose;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct LightProbesQuery;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightProbesQuery);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbesQuery, "UnityEngine", "LightProbesQuery");
// [StaticAccessor("LightProbeContextWrapper", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeContainer]
// [NativeHeader("Runtime/Camera/RenderLoops/LightProbeContext.h")]
// Dependencies System.IntPtr, Unity.Collections.Allocator
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbesQuery
struct CORDL_TYPE LightProbesQuery {
public:
// Declarations
using LightProbesQueryDispose = ::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose;

using LightProbesQueryDisposeJob = ::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// [ThreadSafe]
/// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0xb57b950, size 0x74, virtual false, abstract: false, final false
static inline void CalculateInterpolatedLightAndOcclusionProbes(::System::IntPtr  lightProbeContextWrapper, ::System::IntPtr  positions, ::System::IntPtr  tetrahedronIndices, ::System::IntPtr  lightProbes, ::System::IntPtr  occlusionProbes, int32_t  count) ;

/// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0xb57b718, size 0x238, virtual false, abstract: false, final false
inline void CalculateInterpolatedLightAndOcclusionProbes(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  tetrahedronIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  lightProbes, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  occlusionProbes) ;

/// @brief Method Create, addr 0xb57b4d0, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr Create() ;

/// [ThreadSafe]
/// @brief Method Destroy, addr 0xb57b5e4, size 0x3c, virtual false, abstract: false, final false
static inline void Destroy(::System::IntPtr  lightProbeContextWrapper) ;

/// @brief Method Dispose, addr 0xb57b620, size 0xf8, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method Dispose, addr 0xb57b4f8, size 0xec, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb57b47c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::Allocator  allocator) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LightProbesQuery() ;

// Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }]
constexpr LightProbesQuery(::System::IntPtr  m_LightProbeContextWrapper, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14856};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_LightProbeContextWrapper, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_LightProbeContextWrapper;

/// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
 ::Unity::Collections::Allocator  m_AllocatorLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbesQuery, m_LightProbeContextWrapper) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightProbesQuery, m_AllocatorLabel) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LightProbesQuery) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
