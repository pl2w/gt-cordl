#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshBuilder)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AI {
struct NavMeshBuildMarkup;
}
namespace UnityEngine::AI {
struct NavMeshBuildSettings;
}
namespace UnityEngine::AI {
struct NavMeshBuildSource;
}
namespace UnityEngine::AI {
struct NavMeshCollectGeometry;
}
namespace UnityEngine::AI {
class NavMeshData;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshBuilder;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshBuilder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshBuilder*, "UnityEngine.AI", "NavMeshBuilder");
// [NativeHeader("Modules/AI/Builder/NavMeshBuilder.bindings.h")]
// [StaticAccessor("NavMeshBuilderBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.Object
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshBuilder
class CORDL_TYPE NavMeshBuilder : public ::System::Object {
public:
// Declarations
/// @brief Method BuildNavMeshData, addr 0xb51ddf4, size 0x164, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AI::NavMeshData> BuildNavMeshData(::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  sources, ::UnityEngine::Bounds  localBounds, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method CollectSources, addr 0xb51d75c, size 0x1f4, virtual false, abstract: false, final false
static inline void CollectSources(::UnityEngine::Bounds  includedWorldBounds, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results) ;

/// @brief Method CollectSources, addr 0xb51db80, size 0x3c, virtual false, abstract: false, final false
static inline void CollectSources(::UnityEngine::Bounds  includedWorldBounds, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results) ;

/// @brief Method CollectSources, addr 0xb51dbbc, size 0x168, virtual false, abstract: false, final false
static inline void CollectSources(::UnityEngine::Transform*  root, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results) ;

/// @brief Method CollectSources, addr 0xb51dd24, size 0x28, virtual false, abstract: false, final false
static inline void CollectSources(::UnityEngine::Transform*  root, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results) ;

/// @brief Method CollectSourcesInternal, addr 0xb51d950, size 0x230, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::AI::NavMeshBuildSource> CollectSourcesInternal(int32_t  includedLayerMask, ::UnityEngine::Bounds  includedWorldBounds, ::UnityEngine::Transform*  root, bool  useBounds, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::ArrayW<::UnityEngine::AI::NavMeshBuildMarkup>  markups, bool  includeOnlyMarkedObjects) ;

/// @brief Method CollectSourcesInternal_Injected, addr 0xb51dd4c, size 0xa8, virtual false, abstract: false, final false
static inline void CollectSourcesInternal_Injected(int32_t  includedLayerMask, ::by_ref<::UnityEngine::Bounds>  includedWorldBounds, ::System::IntPtr  root, bool  useBounds, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  markups, bool  includeOnlyMarkedObjects, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method UpdateNavMeshDataAsync, addr 0xb51e210, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsync(::UnityEngine::AI::NavMeshData*  data, ::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  sources, ::UnityEngine::Bounds  localBounds) ;

/// @brief Method UpdateNavMeshDataAsyncListInternal, addr 0xb51e338, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal(::UnityEngine::AI::NavMeshData*  data, ::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Object*  sources, ::UnityEngine::Bounds  localBounds) ;

/// @brief Method UpdateNavMeshDataAsyncListInternal_Injected, addr 0xb51e3fc, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr UpdateNavMeshDataAsyncListInternal_Injected(::System::IntPtr  data, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  buildSettings, ::System::Object*  sources, ::by_ref<::UnityEngine::Bounds>  localBounds) ;

/// @brief Method UpdateNavMeshDataListInternal, addr 0xb51e110, size 0xa4, virtual false, abstract: false, final false
static inline bool UpdateNavMeshDataListInternal(::UnityEngine::AI::NavMeshData*  data, ::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Object*  sources, ::UnityEngine::Bounds  localBounds) ;

/// @brief Method UpdateNavMeshDataListInternal_Injected, addr 0xb51e1b4, size 0x5c, virtual false, abstract: false, final false
static inline bool UpdateNavMeshDataListInternal_Injected(::System::IntPtr  data, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  buildSettings, ::System::Object*  sources, ::by_ref<::UnityEngine::Bounds>  localBounds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshBuilder(NavMeshBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshBuilder(NavMeshBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32094};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMeshBuilder) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AI
