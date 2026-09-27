#pragma once
// IWYU pragma private; include "Fusion/FusionUnitySceneManagerUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionUnitySceneManagerUtils)
namespace Fusion {
class FusionUnitySceneManagerUtils_SceneEqualityComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Fusion {
class FusionUnitySceneManagerUtils;
}
namespace Fusion {
class FusionUnitySceneManagerUtils_SceneEqualityComparer;
}
// Write type traits
MARK_REF_T(::Fusion::FusionUnitySceneManagerUtils*);
MARK_REF_T(::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionUnitySceneManagerUtils*, "Fusion", "FusionUnitySceneManagerUtils");
DEFINE_IL2CPP_CLASS(::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*, "Fusion", "FusionUnitySceneManagerUtils/SceneEqualityComparer");
// [Extension]
// Dependencies System.Object, UnityEngine.Component
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionUnitySceneManagerUtils
class CORDL_TYPE FusionUnitySceneManagerUtils : public ::System::Object {
public:
// Declarations
using SceneEqualityComparer = ::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer;

/// @brief Field _reusableGameObjectList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__reusableGameObjectList, put=setStaticF__reusableGameObjectList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _reusableGameObjectList;

/// [Extension]
/// @brief Method CanBeUnloaded, addr 0x60e668c, size 0xd8, virtual false, abstract: false, final false
static inline bool CanBeUnloaded(::UnityEngine::SceneManagement::Scene  scene) ;

/// [Extension]
/// @brief Method Dump, addr 0x60e6a6c, size 0xd4, virtual false, abstract: false, final false
static inline ::StringW Dump(::UnityEngine::SceneManagement::LoadSceneParameters  loadSceneParameters) ;

/// [Extension]
/// @brief Method Dump, addr 0x60e6764, size 0x308, virtual false, abstract: false, final false
static inline ::StringW Dump(::UnityEngine::SceneManagement::Scene  scene) ;

/// [Extension]
/// @brief Method FindComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T FindComponent(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> GetComponents(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline ::ArrayW<T> GetComponents(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, ::by_ref<::ArrayW<::UnityEngine::GameObject*>>  rootObjects) ;

/// [Extension]
/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponents(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<T>*  results, bool  includeInactive) ;

/// @brief Method GetFileNameWithoutExtensionPosition, addr 0x60e6c78, size 0x68, virtual false, abstract: false, final false
static inline void GetFileNameWithoutExtensionPosition(::StringW  nameOrPath, ::by_ref<int32_t>  index, ::by_ref<int32_t>  length) ;

/// [Extension]
/// @brief Method GetLocalPhysicsMode, addr 0x60e65a4, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::LocalPhysicsMode GetLocalPhysicsMode(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method GetSceneBuildIndex, addr 0x60e6b40, size 0x138, virtual false, abstract: false, final false
static inline int32_t GetSceneBuildIndex(::StringW  nameOrPath) ;

/// @brief Method GetSceneIndex, addr 0x60e6ce0, size 0x248, virtual false, abstract: false, final false
static inline int32_t GetSceneIndex(::System::Collections::Generic::IList_1<::StringW>*  scenePathsOrNames, ::StringW  nameOrPath) ;

/// [Extension]
/// @brief Method IsAddedToBuildSettings, addr 0x60e6518, size 0x8c, virtual false, abstract: false, final false
static inline bool IsAddedToBuildSettings(::UnityEngine::SceneManagement::Scene  scene) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF__reusableGameObjectList() ;

static inline void setStaticF__reusableGameObjectList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionUnitySceneManagerUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionUnitySceneManagerUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionUnitySceneManagerUtils(FusionUnitySceneManagerUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionUnitySceneManagerUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionUnitySceneManagerUtils(FusionUnitySceneManagerUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23452};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionUnitySceneManagerUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionUnitySceneManagerUtils/SceneEqualityComparer
class CORDL_TYPE FusionUnitySceneManagerUtils_SceneEqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*() noexcept;

/// @brief Method Equals, addr 0x60e6fc0, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::SceneManagement::Scene  x, ::UnityEngine::SceneManagement::Scene  y) ;

/// @brief Method GetHashCode, addr 0x60e6ffc, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetHashCode(::UnityEngine::SceneManagement::Scene  obj) ;

static inline ::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x60e7018, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>* i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__SceneManagement__Scene_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionUnitySceneManagerUtils_SceneEqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionUnitySceneManagerUtils_SceneEqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionUnitySceneManagerUtils_SceneEqualityComparer(FusionUnitySceneManagerUtils_SceneEqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionUnitySceneManagerUtils_SceneEqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionUnitySceneManagerUtils_SceneEqualityComparer(FusionUnitySceneManagerUtils_SceneEqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23451};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
