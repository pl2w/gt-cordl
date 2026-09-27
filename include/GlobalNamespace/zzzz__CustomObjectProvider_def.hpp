#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomObjectProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectProviderDefault_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomObjectProvider)
namespace Fusion {
struct NetworkObjectAcquireResult;
}
namespace Fusion {
class NetworkObjectBaker;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkPrefabAcquireContext;
}
namespace Fusion {
struct NetworkPrefabId;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct NetworkSceneObjectId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomObjectProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomObjectProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomObjectProvider*, "", "CustomObjectProvider");
// Dependencies Fusion.NetworkObjectProviderDefault
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomObjectProvider
class CORDL_TYPE CustomObjectProvider : public ::Fusion::NetworkObjectProviderDefault {
public:
// Declarations
/// @brief Field SceneObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneObjects, put=__cordl_internal_set_SceneObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  SceneObjects;

/// @brief Field baker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_baker, put=setStaticF_baker)) ::Fusion::NetworkObjectBaker*  baker;

/// @brief Method AcquirePrefabInstance, addr 0x56d3cf0, size 0x48, virtual true, abstract: false, final false
inline ::Fusion::NetworkObjectAcquireResult AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  instance) ;

/// @brief Method DestroyPrefabInstance, addr 0x56d3f10, size 0xc, virtual true, abstract: false, final false
inline void DestroyPrefabInstance(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkPrefabId  prefabId, ::Fusion::NetworkObject*  instance) ;

/// @brief Method DestroySceneObject, addr 0x56d3e54, size 0xbc, virtual true, abstract: false, final false
inline void DestroySceneObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSceneObjectId  sceneObjectId, ::Fusion::NetworkObject*  instance) ;

/// @brief Method IsGameMode, addr 0x56d3d38, size 0x11c, virtual false, abstract: false, final false
inline void IsGameMode(::Fusion::NetworkObject*  instance) ;

static inline ::GlobalNamespace::CustomObjectProvider* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_SceneObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_SceneObjects() ;

constexpr void __cordl_internal_set_SceneObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x56d3f1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkObjectBaker* getStaticF_baker() ;

/// @brief Method get_Baker, addr 0x56d3c5c, size 0x94, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectBaker* get_Baker() ;

static inline void setStaticF_baker(::Fusion::NetworkObjectBaker*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomObjectProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomObjectProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomObjectProvider(CustomObjectProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomObjectProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomObjectProvider(CustomObjectProvider const& ) = delete;

/// @brief Field GameModeFlag offset 0xffffffff size 0x4
static constexpr int32_t  GameModeFlag{static_cast<int32_t>(0x1)};

/// @brief Field PlayerFlag offset 0xffffffff size 0x4
static constexpr int32_t  PlayerFlag{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1072};

/// @brief Field SceneObjects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___SceneObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomObjectProvider, ___SceneObjects) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomObjectProvider) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
