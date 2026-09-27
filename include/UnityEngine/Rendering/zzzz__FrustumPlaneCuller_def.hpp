#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrustumPlaneCuller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_PlanePacket4_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_SplitInfo_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumPlaneCuller)
namespace GlobalNamespace {
struct FrustumPlaneCuller_PlanePacket4;
}
namespace GlobalNamespace {
struct FrustumPlaneCuller_SplitInfo;
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
struct AABB;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FrustumPlaneCuller);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::FrustumPlaneCuller, "UnityEngine.Rendering", "FrustumPlaneCuller");
// Dependencies Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.FrustumPlaneCuller::PlanePacket4, UnityEngine.Rendering.FrustumPlaneCuller::SplitInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FrustumPlaneCuller
struct CORDL_TYPE FrustumPlaneCuller {
public:
// Declarations
using PlanePacket4 = ::GlobalNamespace::FrustumPlaneCuller_PlanePacket4;

using SplitInfo = ::GlobalNamespace::FrustumPlaneCuller_SplitInfo;

/// @brief Method ComputeSplitVisibilityMask, addr 0xb1e9510, size 0x170, virtual false, abstract: false, final false
static inline uint32_t ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>  planePackets, ::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>  splitInfos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB>  bounds) ;

/// @brief Method Create, addr 0xb1e8fb4, size 0x42c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::FrustumPlaneCuller Create(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  receiverPlanes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ReceiverSphereCuller>  receiverSphereCuller, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Dispose, addr 0xb1e8f24, size 0x90, virtual false, abstract: false, final false
inline void Dispose(::Unity::Jobs::JobHandle  job) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrustumPlaneCuller() ;

// Ctor Parameters [CppParam { name: "planePackets", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: None, comment: None }]
constexpr FrustumPlaneCuller(::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>  planePackets, ::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>  splitInfos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26528};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field planePackets, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>  planePackets;

/// @brief Field splitInfos, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>  splitInfos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller, planePackets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrustumPlaneCuller, splitInfos) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::FrustumPlaneCuller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
