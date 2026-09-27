#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneIndex_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XSceneRef)
namespace GlobalNamespace {
class XSceneRefTarget;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct XSceneRef;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XSceneRef);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XSceneRef, "", "XSceneRef");
// Dependencies SceneIndex, UnityEngine.Component
namespace GlobalNamespace {
// Is value type: true
// CS Name: XSceneRef
struct CORDL_TYPE XSceneRef {
public:
// Declarations
/// @brief Method AddCallbackOnLoad, addr 0x56ba79c, size 0x8, virtual false, abstract: false, final false
inline void AddCallbackOnLoad(::System::Action*  callback) ;

/// @brief Method AddCallbackOnUnload, addr 0x56ba7ac, size 0x8, virtual false, abstract: false, final false
inline void AddCallbackOnUnload(::System::Action*  callback) ;

/// @brief Method RemoveCallbackOnLoad, addr 0x56ba7a4, size 0x8, virtual false, abstract: false, final false
inline void RemoveCallbackOnLoad(::System::Action*  callback) ;

/// @brief Method RemoveCallbackOnUnload, addr 0x56ba7b4, size 0x8, virtual false, abstract: false, final false
inline void RemoveCallbackOnUnload(::System::Action*  callback) ;

/// @brief Method TryResolve, addr 0x56ba4f4, size 0x134, virtual false, abstract: false, final false
inline bool TryResolve(::by_ref<::GlobalNamespace::XSceneRefTarget*>  result) ;

/// @brief Method TryResolve, addr 0x56ba6e0, size 0xbc, virtual false, abstract: false, final false
inline bool TryResolve(::by_ref<::UnityEngine::GameObject*>  result) ;

/// @brief Method TryResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool TryResolve(::by_ref<T>  result) ;

// Ctor Parameters []
// @brief default ctor
constexpr XSceneRef() ;

// Ctor Parameters [CppParam { name: "TargetScene", ty: "::GlobalNamespace::SceneIndex", modifiers: "", def_value: None, comment: None }, CppParam { name: "TargetID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cached", ty: "::UnityW<::GlobalNamespace::XSceneRefTarget>", modifiers: "", def_value: None, comment: None }, CppParam { name: "didCache", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr XSceneRef(::GlobalNamespace::SceneIndex  TargetScene, int32_t  TargetID, ::UnityW<::GlobalNamespace::XSceneRefTarget>  cached, bool  didCache) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field TargetScene, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SceneIndex  TargetScene;

/// @brief Field TargetID, offset: 0x4, size: 0x4, def value: None
 int32_t  TargetID;

/// @brief Field cached, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::XSceneRefTarget>  cached;

/// @brief Field didCache, offset: 0x10, size: 0x1, def value: None
 bool  didCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XSceneRef, TargetScene) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XSceneRef, TargetID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XSceneRef, cached) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XSceneRef, didCache) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XSceneRef) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
