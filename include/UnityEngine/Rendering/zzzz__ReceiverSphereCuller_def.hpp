#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverSphereCuller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_SplitInfo_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiverSphereCuller)
namespace GlobalNamespace {
struct ReceiverSphereCuller_SplitInfo;
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
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace UnityEngine::Rendering {
struct AABB;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReceiverSphereCuller);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ReceiverSphereCuller, "UnityEngine.Rendering", "ReceiverSphereCuller");
// Dependencies Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3x3, UnityEngine.Rendering.ReceiverSphereCuller::SplitInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReceiverSphereCuller
struct CORDL_TYPE ReceiverSphereCuller {
public:
// Declarations
using SplitInfo = ::GlobalNamespace::ReceiverSphereCuller_SplitInfo;

/// @brief Method ComputeSplitVisibilityMask, addr 0xb1e9ab0, size 0x28c, virtual false, abstract: false, final false
static inline uint32_t ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>  splitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB>  bounds) ;

/// @brief Method Create, addr 0xb1e96e0, size 0x298, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReceiverSphereCuller Create(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Dispose, addr 0xb1e9680, size 0x60, virtual false, abstract: false, final false
inline void Dispose(::Unity::Jobs::JobHandle  job) ;

/// @brief Method DistanceUntilCylinderFullyCrossesPlane, addr 0xb1e9978, size 0x138, virtual false, abstract: false, final false
static inline float_t DistanceUntilCylinderFullyCrossesPlane(::Unity::Mathematics::float3  cylinderCenter, ::Unity::Mathematics::float3  cylinderDirection, float_t  cylinderRadius, ::UnityEngine::Plane  plane) ;

/// @brief Method UseReceiverPlanes, addr 0xb1e93e0, size 0x68, virtual false, abstract: false, final false
inline bool UseReceiverPlanes() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReceiverSphereCuller() ;

// Ctor Parameters [CppParam { name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: None, comment: None }]
constexpr ReceiverSphereCuller(::Unity::Collections::NativeList_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>  splitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field splitInfos, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>  splitInfos;

/// @brief Field worldToLightSpaceRotation, offset: 0x8, size: 0x24, def value: None
 ::Unity::Mathematics::float3x3  worldToLightSpaceRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ReceiverSphereCuller, splitInfos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ReceiverSphereCuller, worldToLightSpaceRotation) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ReceiverSphereCuller) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
