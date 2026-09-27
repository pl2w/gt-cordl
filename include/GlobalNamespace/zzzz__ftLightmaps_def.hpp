#pragma once
// IWYU pragma private; include "GlobalNamespace/ftLightmaps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ftLightmaps)
namespace GlobalNamespace {
class ftLightmapsStorage;
}
namespace GlobalNamespace {
struct ftLightmaps_LightmapAdditionalData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class ftLightmaps;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ftLightmaps*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ftLightmaps*, "", "ftLightmaps");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ftLightmaps
class CORDL_TYPE ftLightmaps : public ::System::Object {
public:
// Declarations
using LightmapAdditionalData = ::GlobalNamespace::ftLightmaps_LightmapAdditionalData;

/// @brief Field directionalMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_directionalMode, put=setStaticF_directionalMode)) int32_t  directionalMode;

/// @brief Field globalMapsAdditional, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_globalMapsAdditional, put=setStaticF_globalMapsAdditional)) ::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>*  globalMapsAdditional;

/// @brief Field lightmapRefCount, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lightmapRefCount, put=setStaticF_lightmapRefCount)) ::System::Collections::Generic::List_1<int32_t>*  lightmapRefCount;

/// @brief Method FindInScene, addr 0x5f28c68, size 0x13c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> FindInScene(::StringW  nm, ::UnityEngine::SceneManagement::Scene  scn) ;

/// @brief Method GetEmptyDirectionTex, addr 0x5f2ab00, size 0x14, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> GetEmptyDirectionTex(::GlobalNamespace::ftLightmapsStorage*  storage) ;

static inline ::GlobalNamespace::ftLightmaps* New_ctor() ;

/// @brief Method OnSceneChangedPlay, addr 0x5f289e4, size 0x4c, virtual false, abstract: false, final false
static inline void OnSceneChangedPlay(::UnityEngine::SceneManagement::Scene  prev, ::UnityEngine::SceneManagement::Scene  next) ;

/// @brief Method RefreshFull, addr 0x5f28a30, size 0x238, virtual false, abstract: false, final false
static inline void RefreshFull() ;

/// @brief Method RefreshScene, addr 0x5f28da4, size 0x1d5c, virtual false, abstract: false, final false
static inline void RefreshScene(::UnityEngine::SceneManagement::Scene  scene, ::GlobalNamespace::ftLightmapsStorage*  storage, bool  updateNonBaked, bool  incrementRefcount) ;

/// @brief Method RefreshScene2, addr 0x5f2ada4, size 0x25c, virtual false, abstract: false, final false
static inline void RefreshScene2(::UnityEngine::SceneManagement::Scene  scene, ::GlobalNamespace::ftLightmapsStorage*  storage) ;

/// @brief Method SetDirectionalMode, addr 0x5f28958, size 0x8c, virtual false, abstract: false, final false
static inline void SetDirectionalMode() ;

/// @brief Method UnloadScene, addr 0x5f2ab14, size 0x290, virtual false, abstract: false, final false
static inline void UnloadScene(::GlobalNamespace::ftLightmapsStorage*  storage) ;

/// @brief Method .ctor, addr 0x5f2b000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_directionalMode() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>* getStaticF_globalMapsAdditional() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_lightmapRefCount() ;

static inline void setStaticF_directionalMode(int32_t  value) ;

static inline void setStaticF_globalMapsAdditional(::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>*  value) ;

static inline void setStaticF_lightmapRefCount(::System::Collections::Generic::List_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ftLightmaps() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ftLightmaps", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ftLightmaps(ftLightmaps && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ftLightmaps", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ftLightmaps(ftLightmaps const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ftLightmaps) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
