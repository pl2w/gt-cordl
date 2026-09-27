#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSubScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTScene_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTSubScene)
namespace GlobalNamespace {
class GTScene;
}
// Forward declare root types
namespace GlobalNamespace {
class GTSubScene;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTSubScene*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSubScene*, "", "GTSubScene");
// Dependencies GTScene, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTSubScene
class CORDL_TYPE GTSubScene : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field scenes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenes, put=__cordl_internal_set_scenes)) ::ArrayW<::GlobalNamespace::GTScene*>  scenes;

/// @brief Method LoadAll, addr 0x5b20e9c, size 0x5c, virtual false, abstract: false, final false
inline void LoadAll() ;

static inline ::GlobalNamespace::GTSubScene* New_ctor() ;

/// @brief Method SwitchToScene, addr 0x5b20de0, size 0x34, virtual false, abstract: false, final false
inline void SwitchToScene(int32_t  index) ;

/// @brief Method SwitchToScene, addr 0x5b20e14, size 0x88, virtual false, abstract: false, final false
inline void SwitchToScene(::GlobalNamespace::GTScene*  scene) ;

/// @brief Method UnloadAll, addr 0x5b20ef8, size 0x5c, virtual false, abstract: false, final false
inline void UnloadAll() ;

constexpr ::ArrayW<::GlobalNamespace::GTScene*> const& __cordl_internal_get_scenes() const;

constexpr ::ArrayW<::GlobalNamespace::GTScene*>& __cordl_internal_get_scenes() ;

constexpr void __cordl_internal_set_scenes(::ArrayW<::GlobalNamespace::GTScene*>  value) ;

/// @brief Method .ctor, addr 0x5b20f54, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSubScene() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSubScene", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSubScene(GTSubScene && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSubScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSubScene(GTSubScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3606};

/// [DragDropScenes]
/// @brief Field scenes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTScene*>  ___scenes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSubScene, ___scenes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSubScene) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
