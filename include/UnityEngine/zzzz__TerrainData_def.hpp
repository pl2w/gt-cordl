#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainData)
namespace GlobalNamespace {
struct TerrainData_BoundaryValueType;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
class TreePrototype;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class TerrainData;
}
// Write type traits
MARK_REF_T(::UnityEngine::TerrainData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainData*, "UnityEngine", "TerrainData");
// [NativeHeader("TerrainScriptingClasses.h")]
// [NativeHeader("Modules/Terrain/Public/TerrainDataScriptingInterface.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainData
class CORDL_TYPE TerrainData : public ::UnityEngine::Object {
public:
// Declarations
using BoundaryValueType = ::GlobalNamespace::TerrainData_BoundaryValueType;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_heightmapResolution)) int32_t  heightmapResolution;

 __declspec(property(get=get_heightmapScale)) ::UnityEngine::Vector3  heightmapScale;

 __declspec(property(get=get_heightmapTexture)) ::UnityW<::UnityEngine::RenderTexture>  heightmapTexture;

 __declspec(property(get=get_internalHeightmapResolution)) int32_t  internalHeightmapResolution;

/// @brief Field k_MaximumAlphamapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumAlphamapResolution, put=setStaticF_k_MaximumAlphamapResolution)) int32_t  k_MaximumAlphamapResolution;

/// @brief Field k_MaximumBaseMapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumBaseMapResolution, put=setStaticF_k_MaximumBaseMapResolution)) int32_t  k_MaximumBaseMapResolution;

/// @brief Field k_MaximumDetailPatchCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumDetailPatchCount, put=setStaticF_k_MaximumDetailPatchCount)) int32_t  k_MaximumDetailPatchCount;

/// @brief Field k_MaximumDetailResolutionPerPatch, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumDetailResolutionPerPatch, put=setStaticF_k_MaximumDetailResolutionPerPatch)) int32_t  k_MaximumDetailResolutionPerPatch;

/// @brief Field k_MaximumResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumResolution, put=setStaticF_k_MaximumResolution)) int32_t  k_MaximumResolution;

/// @brief Field k_MinimumAlphamapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinimumAlphamapResolution, put=setStaticF_k_MinimumAlphamapResolution)) int32_t  k_MinimumAlphamapResolution;

/// @brief Field k_MinimumBaseMapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinimumBaseMapResolution, put=setStaticF_k_MinimumBaseMapResolution)) int32_t  k_MinimumBaseMapResolution;

/// @brief Field k_MinimumDetailResolutionPerPatch, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinimumDetailResolutionPerPatch, put=setStaticF_k_MinimumDetailResolutionPerPatch)) int32_t  k_MinimumDetailResolutionPerPatch;

 __declspec(property(get=get_size)) ::UnityEngine::Vector3  size;

 __declspec(property(get=get_treeInstances)) ::ArrayW<::UnityEngine::TreeInstance>  treeInstances;

 __declspec(property(get=get_treePrototypes)) ::ArrayW<::UnityEngine::TreePrototype*>  treePrototypes;

 __declspec(property(get=get_users)) ::ArrayW<::UnityW<::UnityEngine::Terrain>>  users;

/// [RequiredByNativeCode]
/// [NativeName("GetSplatDatabase().GetAlphamapResolution")]
/// @brief Method GetAlphamapResolutionInternal, addr 0xb6b0f14, size 0x9c, virtual false, abstract: false, final false
inline float_t GetAlphamapResolutionInternal() ;

/// @brief Method GetAlphamapResolutionInternal_Injected, addr 0xb6b0fb0, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAlphamapResolutionInternal_Injected(::System::IntPtr  _unity_self) ;

/// [ThreadSafe]
/// [StaticAccessor("TerrainDataScriptingInterface", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetBoundaryValue, addr 0xb6b0560, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetBoundaryValue(::GlobalNamespace::TerrainData_BoundaryValueType  type) ;

/// @brief Method GetHeights, addr 0xb6b0a7c, size 0xc8, virtual false, abstract: false, final false
inline ::System::Object* GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// [FreeFunction("TerrainDataScriptingInterface::GetHeights", HasExplicitThis = true)]
/// @brief Method Internal_GetHeights, addr 0xb6b0b44, size 0xcc, virtual false, abstract: false, final false
inline ::System::Object* Internal_GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetHeights_Injected, addr 0xb6b0c10, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Object* Internal_GetHeights_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// [NativeName("GetTreeDatabase().GetInstances")]
/// @brief Method Internal_GetTreeInstances, addr 0xb6b0c80, size 0x178, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreeInstance> Internal_GetTreeInstances() ;

/// @brief Method Internal_GetTreeInstances_Injected, addr 0xb6b0df8, size 0x44, virtual false, abstract: false, final false
static inline void Internal_GetTreeInstances_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

static inline int32_t getStaticF_k_MaximumAlphamapResolution() ;

static inline int32_t getStaticF_k_MaximumBaseMapResolution() ;

static inline int32_t getStaticF_k_MaximumDetailPatchCount() ;

static inline int32_t getStaticF_k_MaximumDetailResolutionPerPatch() ;

static inline int32_t getStaticF_k_MaximumResolution() ;

static inline int32_t getStaticF_k_MinimumAlphamapResolution() ;

static inline int32_t getStaticF_k_MinimumBaseMapResolution() ;

static inline int32_t getStaticF_k_MinimumDetailResolutionPerPatch() ;

/// [NativeName("GetHeightmap().CalculateBounds")]
/// @brief Method get_bounds, addr 0xb6b096c, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0xb6b0a38, size 0x44, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_heightmapResolution, addr 0xb6b0690, size 0x4, virtual false, abstract: false, final false
inline int32_t get_heightmapResolution() ;

/// [NativeName("GetHeightmap().GetScale")]
/// @brief Method get_heightmapScale, addr 0xb6b076c, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_heightmapScale() ;

/// @brief Method get_heightmapScale_Injected, addr 0xb6b0828, size 0x44, virtual false, abstract: false, final false
static inline void get_heightmapScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// [NativeName("GetHeightmap().GetHeightmapTexture")]
/// @brief Method get_heightmapTexture, addr 0xb6b059c, size 0xb8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_heightmapTexture() ;

/// @brief Method get_heightmapTexture_Injected, addr 0xb6b0654, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_heightmapTexture_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetHeightmap().GetResolution")]
/// @brief Method get_internalHeightmapResolution, addr 0xb6b0694, size 0x9c, virtual false, abstract: false, final false
inline int32_t get_internalHeightmapResolution() ;

/// @brief Method get_internalHeightmapResolution_Injected, addr 0xb6b0730, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_internalHeightmapResolution_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetHeightmap().GetSize")]
/// @brief Method get_size, addr 0xb6b086c, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_size() ;

/// @brief Method get_size_Injected, addr 0xb6b0928, size 0x44, virtual false, abstract: false, final false
static inline void get_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_treeInstances, addr 0xb6b0c7c, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreeInstance> get_treeInstances() ;

/// [FreeFunction("TerrainDataScriptingInterface::GetTreePrototypes", HasExplicitThis = true)]
/// @brief Method get_treePrototypes, addr 0xb6b0e3c, size 0x9c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreePrototype*> get_treePrototypes() ;

/// @brief Method get_treePrototypes_Injected, addr 0xb6b0ed8, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::TreePrototype*> get_treePrototypes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_users, addr 0xb6b023c, size 0x9c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_users() ;

/// @brief Method get_users_Injected, addr 0xb6b0fec, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_users_Injected(::System::IntPtr  _unity_self) ;

static inline void setStaticF_k_MaximumAlphamapResolution(int32_t  value) ;

static inline void setStaticF_k_MaximumBaseMapResolution(int32_t  value) ;

static inline void setStaticF_k_MaximumDetailPatchCount(int32_t  value) ;

static inline void setStaticF_k_MaximumDetailResolutionPerPatch(int32_t  value) ;

static inline void setStaticF_k_MaximumResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumAlphamapResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumBaseMapResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumDetailResolutionPerPatch(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainData(TerrainData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainData(TerrainData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TerrainData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
