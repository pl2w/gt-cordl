#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scene)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::Scene);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
// [NativeHeader("Runtime/Export/SceneManager/Scene.bindings.h")]
// Dependencies 
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.Scene
struct CORDL_TYPE Scene {
public:
// Declarations
 __declspec(property(get=get_buildIndex)) int32_t  buildIndex;

 __declspec(property(get=get_guid)) ::StringW  guid;

 __declspec(property(get=get_handle)) int32_t  handle;

 __declspec(property(get=get_isDirty)) bool  isDirty;

 __declspec(property(get=get_isLoaded)) bool  isLoaded;

 __declspec(property(get=get_isSubScene)) bool  isSubScene;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_path)) ::StringW  path;

 __declspec(property(get=get_rootCount)) int32_t  rootCount;

/// @brief Method Equals, addr 0xb5fc3c4, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetBuildIndexInternal, addr 0xb5fbe14, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetBuildIndexInternal(int32_t  sceneHandle) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetGUIDInternal, addr 0xb5fbc54, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW GetGUIDInternal(int32_t  sceneHandle) ;

/// @brief Method GetGUIDInternal_Injected, addr 0xb5fbd1c, size 0x44, virtual false, abstract: false, final false
static inline void GetGUIDInternal_Injected(int32_t  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetHashCode, addr 0xb5fc3bc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetIsDirtyInternal, addr 0xb5fbdd8, size 0x3c, virtual false, abstract: false, final false
static inline bool GetIsDirtyInternal(int32_t  sceneHandle) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetIsLoadedInternal, addr 0xb5fbd9c, size 0x3c, virtual false, abstract: false, final false
static inline bool GetIsLoadedInternal(int32_t  sceneHandle) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetNameInternal, addr 0xb5fbb48, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW GetNameInternal(int32_t  sceneHandle) ;

/// @brief Method GetNameInternal_Injected, addr 0xb5fbc10, size 0x44, virtual false, abstract: false, final false
static inline void GetNameInternal_Injected(int32_t  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetPathInternal, addr 0xb5fba3c, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW GetPathInternal(int32_t  sceneHandle) ;

/// @brief Method GetPathInternal_Injected, addr 0xb5fbb04, size 0x44, virtual false, abstract: false, final false
static inline void GetPathInternal_Injected(int32_t  sceneHandle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetRootCountInternal, addr 0xb5fbe50, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetRootCountInternal(int32_t  sceneHandle) ;

/// @brief Method GetRootGameObjects, addr 0xb5fc058, size 0xd8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> GetRootGameObjects() ;

/// @brief Method GetRootGameObjects, addr 0xb5fc130, size 0x274, virtual false, abstract: false, final false
inline void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  rootGameObjects) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetRootGameObjectsInternal, addr 0xb5fbe8c, size 0x44, virtual false, abstract: false, final false
static inline void GetRootGameObjectsInternal(int32_t  sceneHandle, ::System::Object*  resultRootList) ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method IsSubScene, addr 0xb5fbd60, size 0x3c, virtual false, abstract: false, final false
static inline bool IsSubScene(int32_t  sceneHandle) ;

/// @brief Method IsValid, addr 0xb5fbee0, size 0x3c, virtual false, abstract: false, final false
inline bool IsValid() ;

/// [StaticAccessor("SceneBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method IsValidInternal, addr 0xb5fba00, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValidInternal(int32_t  sceneHandle) ;

/// @brief Method get_buildIndex, addr 0xb5fbf68, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_buildIndex() ;

/// @brief Method get_guid, addr 0xb5fbed8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_guid() ;

/// @brief Method get_handle, addr 0xb5fbed0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_handle() ;

/// @brief Method get_isDirty, addr 0xb5fbfa4, size 0x3c, virtual false, abstract: false, final false
inline bool get_isDirty() ;

/// @brief Method get_isLoaded, addr 0xb5fbf2c, size 0x3c, virtual false, abstract: false, final false
inline bool get_isLoaded() ;

/// @brief Method get_isSubScene, addr 0xb5fc01c, size 0x3c, virtual false, abstract: false, final false
inline bool get_isSubScene() ;

/// @brief Method get_name, addr 0xb5fbf24, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_path, addr 0xb5fbf1c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_path() ;

/// @brief Method get_rootCount, addr 0xb5fbfe0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_rootCount() ;

/// @brief Method op_Equality, addr 0xb5fc3a4, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::SceneManagement::Scene  lhs, ::UnityEngine::SceneManagement::Scene  rhs) ;

/// @brief Method op_Inequality, addr 0xb5fc3b0, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::SceneManagement::Scene  lhs, ::UnityEngine::SceneManagement::Scene  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr Scene() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Scene(int32_t  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::Scene, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
