#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GameObjectUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameObjectUtils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Unity::XR::CoreUtils {
class GameObjectUtils___c__DisplayClass20_0;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
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
namespace Unity::XR::CoreUtils {
class GameObjectUtils;
}
namespace Unity::XR::CoreUtils {
class GameObjectUtils___c__DisplayClass20_0;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::GameObjectUtils*);
MARK_REF_T(::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GameObjectUtils*, "Unity.XR.CoreUtils", "GameObjectUtils");
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0*, "Unity.XR.CoreUtils", "GameObjectUtils/<>c__DisplayClass20_0");
// [Extension]
// Dependencies System.Object, UnityEngine.Component
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GameObjectUtils
class CORDL_TYPE GameObjectUtils : public ::System::Object {
public:
// Declarations
using __c__DisplayClass20_0 = ::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0;

/// @brief Field GameObjectInstantiated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GameObjectInstantiated, put=setStaticF_GameObjectInstantiated)) ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  GameObjectInstantiated;

/// @brief Field k_GameObjects, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_GameObjects, put=setStaticF_k_GameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  k_GameObjects;

/// @brief Field k_Transforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Transforms, put=setStaticF_k_Transforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  k_Transforms;

/// @brief Method CloneWithHideFlags, addr 0xb3f32cc, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CloneWithHideFlags(::UnityEngine::GameObject*  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method CopyHideFlagsRecursively, addr 0xb3f3388, size 0x134, virtual false, abstract: false, final false
static inline void CopyHideFlagsRecursively(::UnityEngine::GameObject*  copyFrom, ::UnityEngine::GameObject*  copyTo) ;

/// @brief Method Create, addr 0xb3f2e74, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Create() ;

/// @brief Method Create, addr 0xb3f2f10, size 0xac, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Create(::StringW  name) ;

/// @brief Method ExhaustiveComponentSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T ExhaustiveComponentSearch(::UnityEngine::GameObject*  desiredSource) ;

/// @brief Method ExhaustiveTaggedComponentSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T ExhaustiveTaggedComponentSearch(::UnityEngine::GameObject*  desiredSource, ::StringW  tag) ;

/// [Extension]
/// @brief Method GetChildGameObjects, addr 0xb3f34bc, size 0x12c, virtual false, abstract: false, final false
static inline void GetChildGameObjects(::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  childGameObjects) ;

/// @brief Method GetComponentInActiveScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetComponentInActiveScene() ;

/// @brief Method GetComponentInScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetComponentInScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method GetComponentsInActiveScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponentsInActiveScene(::System::Collections::Generic::List_1<T>*  components, bool  includeInactive) ;

/// @brief Method GetComponentsInAllScenes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponentsInAllScenes(::System::Collections::Generic::List_1<T>*  components, bool  includeInactive) ;

/// @brief Method GetComponentsInScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetComponentsInScene(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<T>*  components, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetNamedChild, addr 0xb3f35e8, size 0x214, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetNamedChild(::UnityEngine::GameObject*  go, ::StringW  name) ;

/// @brief Method Instantiate, addr 0xb3f3174, size 0x158, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  original, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0xb3f2fbc, size 0x108, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  original, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Instantiate, addr 0xb3f30c4, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [CompilerGenerated]
/// @brief Method add_GameObjectInstantiated, addr 0xb3f2c8c, size 0xf4, virtual false, abstract: false, final false
static inline void add_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_GameObjectInstantiated() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_k_GameObjects() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF_k_Transforms() ;

/// [CompilerGenerated]
/// @brief Method remove_GameObjectInstantiated, addr 0xb3f2d80, size 0xf4, virtual false, abstract: false, final false
static inline void remove_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_k_GameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_k_Transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectUtils(GameObjectUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectUtils(GameObjectUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30416};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::GameObjectUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GameObjectUtils/<>c__DisplayClass20_0
class CORDL_TYPE GameObjectUtils___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <GetNamedChild>b__0, addr 0xb3f38f4, size 0x2c, virtual false, abstract: false, final false
inline bool _GetNamedChild_b__0(::UnityEngine::Transform*  currentTransform) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xb3f37fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectUtils___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectUtils___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectUtils___c__DisplayClass20_0(GameObjectUtils___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectUtils___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectUtils___c__DisplayClass20_0(GameObjectUtils___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30415};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0, ___name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
