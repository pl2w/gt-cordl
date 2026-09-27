#pragma once
// IWYU pragma private; include "UnityEngine/Terrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Terrain)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Terrain;
}
// Write type traits
MARK_REF_T(::UnityEngine::Terrain*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Terrain*, "UnityEngine", "Terrain");
// [UsedByNativeCode]
// [NativeHeader("Modules/Terrain/Public/Terrain.h")]
// [NativeHeader("Runtime/Interfaces/ITerrainManager.h")]
// [NativeHeader("TerrainScriptingClasses.h")]
// [StaticAccessor("GetITerrainManager()", (UnityEngine.Bindings.StaticAccessorType)1)]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Terrain
class CORDL_TYPE Terrain : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_allowAutoConnect)) bool  allowAutoConnect;

 __declspec(property(get=get_groupingID)) int32_t  groupingID;

/// @brief [NativeProperty("StaticLightmapIndexInt")]
 __declspec(property(get=get_lightmapIndex, put=set_lightmapIndex)) int32_t  lightmapIndex;

/// @brief [NativeProperty("StaticLightmapST")]
 __declspec(property(put=set_lightmapScaleOffset)) ::UnityEngine::Vector4  lightmapScaleOffset;

 __declspec(property(get=get_terrainData)) ::UnityW<::UnityEngine::TerrainData>  terrainData;

/// @brief Method GetPosition, addr 0xb6aff7c, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition() ;

/// @brief Method GetPosition_Injected, addr 0xb6b0014, size 0x44, virtual false, abstract: false, final false
static inline void GetPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

static inline ::UnityEngine::Terrain* New_ctor() ;

/// @brief Method SetNeighbors, addr 0xb6afdf4, size 0x11c, virtual false, abstract: false, final false
inline void SetNeighbors(::UnityEngine::Terrain*  left, ::UnityEngine::Terrain*  top, ::UnityEngine::Terrain*  right, ::UnityEngine::Terrain*  bottom) ;

/// @brief Method SetNeighbors_Injected, addr 0xb6aff10, size 0x6c, virtual false, abstract: false, final false
static inline void SetNeighbors_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  left, ::System::IntPtr  top, ::System::IntPtr  right, ::System::IntPtr  bottom) ;

/// [NativeMethod("CopySplatMaterialCustomProps")]
/// @brief Method SetSplatMaterialPropertyBlock, addr 0xb6b0058, size 0x88, virtual false, abstract: false, final false
inline void SetSplatMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method SetSplatMaterialPropertyBlock_Injected, addr 0xb6b00e0, size 0x44, virtual false, abstract: false, final false
static inline void SetSplatMaterialPropertyBlock_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  properties) ;

/// @brief Method .ctor, addr 0xb6b014c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activeTerrains, addr 0xb6b0124, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_activeTerrains() ;

/// @brief Method get_allowAutoConnect, addr 0xb6afc8c, size 0x78, virtual false, abstract: false, final false
inline bool get_allowAutoConnect() ;

/// @brief Method get_allowAutoConnect_Injected, addr 0xb6afd04, size 0x3c, virtual false, abstract: false, final false
static inline bool get_allowAutoConnect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_groupingID, addr 0xb6afd40, size 0x78, virtual false, abstract: false, final false
inline int32_t get_groupingID() ;

/// @brief Method get_groupingID_Injected, addr 0xb6afdb8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_groupingID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lightmapIndex, addr 0xb6afa40, size 0x78, virtual false, abstract: false, final false
inline int32_t get_lightmapIndex() ;

/// @brief Method get_lightmapIndex_Injected, addr 0xb6afab8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_lightmapIndex_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_terrainData, addr 0xb6af970, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TerrainData> get_terrainData() ;

/// @brief Method get_terrainData_Injected, addr 0xb6afa04, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_terrainData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_lightmapIndex, addr 0xb6afaf4, size 0x80, virtual false, abstract: false, final false
inline void set_lightmapIndex(int32_t  value) ;

/// @brief Method set_lightmapIndex_Injected, addr 0xb6afb74, size 0x44, virtual false, abstract: false, final false
static inline void set_lightmapIndex_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_lightmapScaleOffset, addr 0xb6afbb8, size 0x90, virtual false, abstract: false, final false
inline void set_lightmapScaleOffset(::UnityEngine::Vector4  value) ;

/// @brief Method set_lightmapScaleOffset_Injected, addr 0xb6afc48, size 0x44, virtual false, abstract: false, final false
static inline void set_lightmapScaleOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Terrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Terrain(Terrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Terrain(Terrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Terrain) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
