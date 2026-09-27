#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PoolManagerComponent)
namespace GlobalNamespace {
struct PoolManagerComponent_PoolDesc;
}
namespace GlobalNamespace {
template<typename T>
struct Pool_1_Callbacks;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent_CallbackProvider;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent_DefaultCallbacks;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent_PoolableData;
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
namespace System {
template<typename T>
struct Nullable_1;
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
class PoolManagerComponent;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent_CallbackProvider;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent_DefaultCallbacks;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class PoolManagerComponent_PoolableData;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*);
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*);
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*);
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManagerComponent");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManagerComponent/CallbackProvider");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManagerComponent/DefaultCallbacks");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData*, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManagerComponent/PoolableData");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent::PoolDesc, Meta.XR.MRUtilityKit.SceneDecorator.Pool`1::Callbacks<T>, UnityEngine.Component, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent
class CORDL_TYPE PoolManagerComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PoolDesc = ::GlobalNamespace::PoolManagerComponent_PoolDesc;

using CallbackProvider = ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider;

using DefaultCallbacks = ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks;

using PoolableData = ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData;

/// @brief Field DEFAULT_CALLBACKS, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_DEFAULT_CALLBACKS, put=setStaticF_DEFAULT_CALLBACKS)) ::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>  DEFAULT_CALLBACKS;

/// @brief Field defaultPools, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultPools, put=__cordl_internal_set_defaultPools)) ::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc>  defaultPools;

/// @brief Field poolManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolManager, put=__cordl_internal_set_poolManager)) ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*  poolManager;

/// @brief Method Create, addr 0x9f53a28, size 0x348, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Create(::UnityEngine::GameObject*  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Create, addr 0x9f53758, size 0x2d0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Create(::UnityEngine::GameObject*  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Create(T  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Create(T  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent) ;

/// @brief Method InitDefaultPools, addr 0x9f53450, size 0x308, virtual true, abstract: false, final false
inline void InitDefaultPools(::System::Nullable_1<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>>  defaultCallbacks) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent* New_ctor() ;

/// @brief Method Release, addr 0x9f53d70, size 0x100, virtual false, abstract: false, final false
inline void Release(::UnityEngine::GameObject*  go) ;

constexpr ::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc> const& __cordl_internal_get_defaultPools() const;

constexpr ::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc>& __cordl_internal_get_defaultPools() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>* const& __cordl_internal_get_poolManager() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*& __cordl_internal_get_poolManager() ;

constexpr void __cordl_internal_set_defaultPools(::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc>  value) ;

constexpr void __cordl_internal_set_poolManager(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

/// @brief Method .ctor, addr 0x9f53e70, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>> getStaticF_DEFAULT_CALLBACKS() ;

static inline void setStaticF_DEFAULT_CALLBACKS(::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolManagerComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolManagerComponent(PoolManagerComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolManagerComponent(PoolManagerComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25963};

/// [SerializeField]
/// @brief Field defaultPools, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc>  ___defaultPools;

/// @brief Field poolManager, offset: 0x28, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*  ___poolManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent, ___defaultPools) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent, ___poolManager) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent) == 0x30, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent/DefaultCallbacks
class CORDL_TYPE PoolManagerComponent_DefaultCallbacks : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x9f54078, size 0x164, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Create(::UnityEngine::GameObject*  primitive) ;

/// @brief Method OnGet, addr 0x9f541dc, size 0x18, virtual false, abstract: false, final false
static inline void OnGet(::UnityEngine::GameObject*  go) ;

/// @brief Method OnRelease, addr 0x9f541f4, size 0x18, virtual false, abstract: false, final false
static inline void OnRelease(::UnityEngine::GameObject*  go) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolManagerComponent_DefaultCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent_DefaultCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolManagerComponent_DefaultCallbacks(PoolManagerComponent_DefaultCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent_DefaultCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolManagerComponent_DefaultCallbacks(PoolManagerComponent_DefaultCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent/PoolableData
class CORDL_TYPE PoolManagerComponent_PoolableData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Anchor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Anchor, put=__cordl_internal_set_Anchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  Anchor;

/// @brief Field Pool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pool, put=__cordl_internal_set_Pool)) ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*  Pool;

/// @brief Field Scale, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::UnityEngine::Vector3  Scale;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData* New_ctor() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get_Anchor() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get_Anchor() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_Pool() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_Pool() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Scale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Scale() ;

constexpr void __cordl_internal_set_Anchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set_Pool(::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_Scale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9f54070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolManagerComponent_PoolableData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent_PoolableData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolManagerComponent_PoolableData(PoolManagerComponent_PoolableData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent_PoolableData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolManagerComponent_PoolableData(PoolManagerComponent_PoolableData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25959};

/// @brief Field Pool, offset: 0x20, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*  ___Pool;

/// @brief Field Scale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Scale;

/// @brief Field Anchor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ___Anchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData, ___Pool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData, ___Scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData, ___Anchor) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData) == 0x40, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent/CallbackProvider
class CORDL_TYPE PoolManagerComponent_CallbackProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method GetPoolCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>> GetPoolCallbacks() ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider* New_ctor() ;

/// @brief Method .ctor, addr 0x9f54068, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolManagerComponent_CallbackProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent_CallbackProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolManagerComponent_CallbackProvider(PoolManagerComponent_CallbackProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolManagerComponent_CallbackProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolManagerComponent_CallbackProvider(PoolManagerComponent_CallbackProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
