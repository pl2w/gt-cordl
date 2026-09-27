#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RigidColliderCreator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RigidColliderCreator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace Technie::PhysicsCreator {
class HullData;
}
namespace Technie::PhysicsCreator {
class HullMapping;
}
namespace Technie::PhysicsCreator {
struct HullType;
}
namespace Technie::PhysicsCreator {
class ICreatorComponent;
}
namespace Technie::PhysicsCreator {
class IEditorData;
}
namespace Technie::PhysicsCreator {
class PaintingData;
}
namespace Technie::PhysicsCreator {
class RigidColliderCreatorChild;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class RigidColliderCreator;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::RigidColliderCreator*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::RigidColliderCreator*, "Technie.PhysicsCreator", "RigidColliderCreator");
// Dependencies UnityEngine.Collider, UnityEngine.Component, UnityEngine.MonoBehaviour
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.RigidColliderCreator
class CORDL_TYPE RigidColliderCreator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field debugMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugMesh, put=__cordl_internal_set_debugMesh)) ::UnityW<::UnityEngine::Mesh>  debugMesh;

/// @brief Field hullData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hullData, put=__cordl_internal_set_hullData)) ::UnityW<::Technie::PhysicsCreator::HullData>  hullData;

/// @brief Field hullMapping, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hullMapping, put=__cordl_internal_set_hullMapping)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*  hullMapping;

/// @brief Field paintingData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintingData, put=__cordl_internal_set_paintingData)) ::UnityW<::Technie::PhysicsCreator::PaintingData>  paintingData;

/// @brief Convert operator to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr operator  ::Technie::PhysicsCreator::ICreatorComponent*() noexcept;

/// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T AddComponent(::UnityEngine::GameObject*  targetObj) ;

/// @brief Method AddMapping, addr 0xadd2ac4, size 0x128, virtual false, abstract: false, final false
inline void AddMapping(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::UnityEngine::Collider*  col, ::Technie::PhysicsCreator::RigidColliderCreatorChild*  painterChild) ;

/// @brief Method Approximately, addr 0xadd293c, size 0x100, virtual false, abstract: false, final false
static inline bool Approximately(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs) ;

/// @brief Method Approximately, addr 0xadd2a3c, size 0x88, virtual false, abstract: false, final false
static inline bool Approximately(float_t  lhs, float_t  rhs) ;

/// @brief Method CreateAutoHulls, addr 0xadd1088, size 0x8e0, virtual false, abstract: false, final false
inline void CreateAutoHulls(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Mesh*>  autoHulls) ;

/// @brief Method CreateCollider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void CreateCollider(::Technie::PhysicsCreator::Rigid::Hull*  sourceHull) ;

/// @brief Method CreateColliderComponents, addr 0xadce4d8, size 0x1f8, virtual false, abstract: false, final false
inline void CreateColliderComponents(::ArrayW<::UnityEngine::Mesh*>  autoHulls) ;

/// @brief Method CreateGameObject, addr 0xadd3540, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(::StringW  goName) ;

/// @brief Method CreateHullMapping, addr 0xadce6d0, size 0x238c, virtual false, abstract: false, final false
inline void CreateHullMapping() ;

/// @brief Method DestroyImmediateWithUndo, addr 0xadd1bc4, size 0x88, virtual false, abstract: false, final false
static inline void DestroyImmediateWithUndo(::UnityEngine::Object*  obj) ;

/// @brief Method FindExistingCollider, addr 0xadd2210, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> FindExistingCollider(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*  mappings, ::Technie::PhysicsCreator::Rigid::Hull*  hull) ;

/// @brief Method FindLocal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* FindLocal() ;

/// @brief Method FindMapping, addr 0xadd2bec, size 0x188, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::HullMapping* FindMapping(::Technie::PhysicsCreator::RigidColliderCreatorChild*  child) ;

/// @brief Method FindMapping, addr 0xadd27f4, size 0x148, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::HullMapping* FindMapping(::Technie::PhysicsCreator::Rigid::Hull*  hull) ;

/// @brief Method FindSourceHull, addr 0xadd3328, size 0x218, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Rigid::Hull* FindSourceHull(::Technie::PhysicsCreator::RigidColliderCreatorChild*  child) ;

/// @brief Method GetEditorData, addr 0xadce4d0, size 0x8, virtual true, abstract: false, final true
inline ::Technie::PhysicsCreator::IEditorData* GetEditorData() ;

/// @brief Method GetGameObject, addr 0xadce468, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> GetGameObject() ;

/// @brief Method HasEditorData, addr 0xadce470, size 0x60, virtual true, abstract: false, final true
inline bool HasEditorData() ;

/// @brief Method IsDeletable, addr 0xadd1f3c, size 0x190, virtual false, abstract: false, final false
static inline bool IsDeletable(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsMapped, addr 0xadd25ac, size 0x184, virtual false, abstract: false, final false
inline bool IsMapped(::Technie::PhysicsCreator::RigidColliderCreatorChild*  child) ;

/// @brief Method IsMapped, addr 0xadd2428, size 0x184, virtual false, abstract: false, final false
inline bool IsMapped(::UnityEngine::Collider*  col) ;

/// @brief Method IsMapped, addr 0xadd20cc, size 0x144, virtual false, abstract: false, final false
inline bool IsMapped(::Technie::PhysicsCreator::Rigid::Hull*  hull) ;

static inline ::Technie::PhysicsCreator::RigidColliderCreator* New_ctor() ;

/// @brief Method OnDestroy, addr 0xadce464, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0xadd359c, size 0x4, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method RecreateChildCollider, addr 0xadd2d74, size 0xb0, virtual false, abstract: false, final false
inline void RecreateChildCollider(::Technie::PhysicsCreator::HullMapping*  mapping) ;

/// @brief Method RecreateChildCollider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void RecreateChildCollider(::Technie::PhysicsCreator::HullMapping*  mapping) ;

/// @brief Method RemoveAllColliders, addr 0xadd1968, size 0x25c, virtual false, abstract: false, final false
inline void RemoveAllColliders() ;

/// @brief Method RemoveAllGenerated, addr 0xadd1c4c, size 0x2f0, virtual false, abstract: false, final false
inline void RemoveAllGenerated() ;

/// @brief Method RemoveMapping, addr 0xadd2358, size 0xd0, virtual false, abstract: false, final false
inline void RemoveMapping(::Technie::PhysicsCreator::Rigid::Hull*  hull) ;

/// @brief Method SetAllAsChild, addr 0xadd30a8, size 0x140, virtual false, abstract: false, final false
inline void SetAllAsChild(bool  isChild) ;

/// @brief Method SetAllAsTrigger, addr 0xadd31e8, size 0x140, virtual false, abstract: false, final false
inline void SetAllAsTrigger(bool  isTrigger) ;

/// @brief Method SetAllMaterials, addr 0xadd2f60, size 0x148, virtual false, abstract: false, final false
inline void SetAllMaterials(::UnityEngine::PhysicsMaterial*  newMaterial) ;

/// @brief Method SetAllTypes, addr 0xadd2e24, size 0x13c, virtual false, abstract: false, final false
inline void SetAllTypes(::Technie::PhysicsCreator::HullType  newType) ;

/// @brief Method UpdateCollider, addr 0xadd0a5c, size 0x62c, virtual false, abstract: false, final false
inline void UpdateCollider(::Technie::PhysicsCreator::Rigid::Hull*  hull) ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_debugMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_debugMesh() ;

constexpr ::UnityW<::Technie::PhysicsCreator::HullData> const& __cordl_internal_get_hullData() const;

constexpr ::UnityW<::Technie::PhysicsCreator::HullData>& __cordl_internal_get_hullData() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>* const& __cordl_internal_get_hullMapping() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*& __cordl_internal_get_hullMapping() ;

constexpr ::UnityW<::Technie::PhysicsCreator::PaintingData> const& __cordl_internal_get_paintingData() const;

constexpr ::UnityW<::Technie::PhysicsCreator::PaintingData>& __cordl_internal_get_paintingData() ;

constexpr void __cordl_internal_set_debugMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_hullData(::UnityW<::Technie::PhysicsCreator::HullData>  value) ;

constexpr void __cordl_internal_set_hullMapping(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*  value) ;

constexpr void __cordl_internal_set_paintingData(::UnityW<::Technie::PhysicsCreator::PaintingData>  value) ;

/// @brief Method .ctor, addr 0xadd35a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr ::Technie::PhysicsCreator::ICreatorComponent* i___Technie__PhysicsCreator__ICreatorComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidColliderCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidColliderCreator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidColliderCreator(RigidColliderCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidColliderCreator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidColliderCreator(RigidColliderCreator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30517};

/// @brief Field paintingData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Technie::PhysicsCreator::PaintingData>  ___paintingData;

/// @brief Field hullData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Technie::PhysicsCreator::HullData>  ___hullData;

/// @brief Field hullMapping, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*  ___hullMapping;

/// @brief Field debugMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___debugMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::RigidColliderCreator, ___paintingData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RigidColliderCreator, ___hullData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RigidColliderCreator, ___hullMapping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RigidColliderCreator, ___debugMesh) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::RigidColliderCreator) == 0x40, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
