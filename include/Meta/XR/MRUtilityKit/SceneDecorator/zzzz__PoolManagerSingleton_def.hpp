#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerSingleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SingletonMonoBehaviour_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(PoolManagerSingleton)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
template<typename K,typename P>
class PoolManager_2;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
template<typename T>
class Pool_1;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
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
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerSingleton;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManagerSingleton");
// [Feature((Meta.XR.Util.Feature)8)]
// [SingletonMonoBehaviour::InstantiationSettings(dontDestroyOnLoad = false)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.SingletonMonoBehaviour`1<T>, UnityEngine.Component
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerSingleton
class CORDL_TYPE PoolManagerSingleton : public ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton>> {
public:
// Declarations
 __declspec(property(get=get_poolManager)) ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*  poolManager;

/// @brief Field poolManagerComponent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolManagerComponent, put=__cordl_internal_set_poolManagerComponent)) ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  poolManagerComponent;

/// @brief Method Create, addr 0x9f5434c, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Create(::UnityEngine::GameObject*  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Create, addr 0x9f54224, size 0x128, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Create(::UnityEngine::GameObject*  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Create(T  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Create(T  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton* New_ctor() ;

/// @brief Method Release, addr 0x9f54364, size 0x104, virtual false, abstract: false, final false
inline void Release(::UnityEngine::GameObject*  go) ;

/// @brief Method Start, addr 0x9f54468, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent> const& __cordl_internal_get_poolManagerComponent() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>& __cordl_internal_get_poolManagerComponent() ;

constexpr void __cordl_internal_set_poolManagerComponent(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  value) ;

/// @brief Method .ctor, addr 0x9f544c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_poolManager, addr 0x9f5420c, size 0x18, virtual false, abstract: false, final false
inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>* get_poolManager() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolManagerSingleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerSingleton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolManagerSingleton(PoolManagerSingleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerSingleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolManagerSingleton(PoolManagerSingleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25964};

/// @brief Field poolManagerComponent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  ___poolManagerComponent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton, ___poolManagerComponent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
