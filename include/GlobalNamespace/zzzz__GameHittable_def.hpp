#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHittable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameHittable)
namespace GlobalNamespace {
class GRDamageFlash;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class GameHittable_HittablePoint;
}
namespace GlobalNamespace {
class IGameHittable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GameHittable;
}
namespace GlobalNamespace {
class GameHittable_HittablePoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameHittable*);
MARK_REF_T(::GlobalNamespace::GameHittable_HittablePoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameHittable*, "", "GameHittable");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameHittable_HittablePoint*, "", "GameHittable/HittablePoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameHittable
class CORDL_TYPE GameHittable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HittablePoint = ::GlobalNamespace::GameHittable_HittablePoint;

/// @brief Field components, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_components, put=__cordl_internal_set_components)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>*  components;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field hittablePoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hittablePoints, put=__cordl_internal_set_hittablePoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>*  hittablePoints;

/// @brief Method ApplyHit, addr 0x58341d0, size 0x218, virtual false, abstract: false, final false
inline void ApplyHit(::GlobalNamespace::GameHitData  hitData) ;

/// @brief Method Awake, addr 0x5833d8c, size 0x114, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindHittablePoint, addr 0x5834988, size 0xcc, virtual false, abstract: false, final false
inline int32_t FindHittablePoint(::UnityEngine::Collider*  collider) ;

/// @brief Method GetHittablePoint, addr 0x5834780, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameHittable_HittablePoint* GetHittablePoint(int32_t  hittablePoint) ;

/// @brief Method IsColliderValid, addr 0x5834a54, size 0xd8, virtual false, abstract: false, final false
inline bool IsColliderValid(::UnityEngine::Collider*  collider) ;

/// @brief Method IsHitValid, addr 0x5834804, size 0x184, virtual false, abstract: false, final false
inline bool IsHitValid(::GlobalNamespace::GameHitData  hitData) ;

static inline ::GlobalNamespace::GameHittable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5833fc0, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5833ea0, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdate, addr 0x58340e0, size 0x94, virtual false, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method RequestHit, addr 0x5834174, size 0x5c, virtual false, abstract: false, final false
inline void RequestHit(::GlobalNamespace::GameHitData  hitData) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>* const& __cordl_internal_get_components() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>*& __cordl_internal_get_components() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>* const& __cordl_internal_get_hittablePoints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>*& __cordl_internal_get_hittablePoints() ;

constexpr void __cordl_internal_set_components(::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>*  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_hittablePoints(::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>*  value) ;

/// @brief Method .ctor, addr 0x5834b2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameHittable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameHittable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameHittable(GameHittable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameHittable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameHittable(GameHittable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1768};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field hittablePoints, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>*  ___hittablePoints;

/// @brief Field components, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>*  ___components;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameHittable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHittable, ___hittablePoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHittable, ___components) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameHittable) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameHittable/HittablePoint
class CORDL_TYPE GameHittable_HittablePoint : public ::System::Object {
public:
// Declarations
/// @brief Field colliders, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field damageFlash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageFlash, put=__cordl_internal_set_damageFlash)) ::GlobalNamespace::GRDamageFlash*  damageFlash;

static inline ::GlobalNamespace::GameHittable_HittablePoint* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::GlobalNamespace::GRDamageFlash* const& __cordl_internal_get_damageFlash() const;

constexpr ::GlobalNamespace::GRDamageFlash*& __cordl_internal_get_damageFlash() ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_damageFlash(::GlobalNamespace::GRDamageFlash*  value) ;

/// @brief Method .ctor, addr 0x5834b34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameHittable_HittablePoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameHittable_HittablePoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameHittable_HittablePoint(GameHittable_HittablePoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameHittable_HittablePoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameHittable_HittablePoint(GameHittable_HittablePoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1767};

/// @brief Field colliders, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field damageFlash, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GRDamageFlash*  ___damageFlash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameHittable_HittablePoint, ___colliders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHittable_HittablePoint, ___damageFlash) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameHittable_HittablePoint) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
