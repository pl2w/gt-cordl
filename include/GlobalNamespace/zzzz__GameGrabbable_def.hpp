#pragma once
// IWYU pragma private; include "GlobalNamespace/GameGrabbable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameGrabbable)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameGrab;
}
namespace GlobalNamespace {
class GameGrabbable_SnapGrabPoints;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace GlobalNamespace {
class GameGrabbable;
}
namespace GlobalNamespace {
class GameGrabbable_SnapGrabPoints;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameGrabbable*);
MARK_REF_T(::GlobalNamespace::GameGrabbable_SnapGrabPoints*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameGrabbable*, "", "GameGrabbable");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameGrabbable_SnapGrabPoints*, "", "GameGrabbable/SnapGrabPoints");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameGrabbable
class CORDL_TYPE GameGrabbable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SnapGrabPoints = ::GlobalNamespace::GameGrabbable_SnapGrabPoints;

/// @brief Field GRAB_PALM, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_GRAB_PALM, put=setStaticF_GRAB_PALM)) ::UnityEngine::Vector3  GRAB_PALM;

/// @brief Field GRAB_UP, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_GRAB_UP, put=setStaticF_GRAB_UP)) ::UnityEngine::Vector3  GRAB_UP;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field snapGrabPoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapGrabPoints, put=__cordl_internal_set_snapGrabPoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*  snapGrabPoints;

/// @brief Method Awake, addr 0x5833774, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetBestGrabPoint, addr 0x5833778, size 0x598, virtual false, abstract: false, final false
inline bool GetBestGrabPoint(::UnityEngine::Vector3  handPos, ::UnityEngine::Quaternion  handRot, int32_t  handIndex, ::by_ref<::GlobalNamespace::GameGrab>  grab) ;

static inline ::GlobalNamespace::GameGrabbable* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>* const& __cordl_internal_get_snapGrabPoints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*& __cordl_internal_get_snapGrabPoints() ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_snapGrabPoints(::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*  value) ;

/// @brief Method .ctor, addr 0x5833d10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_GRAB_PALM() ;

static inline ::UnityEngine::Vector3 getStaticF_GRAB_UP() ;

static inline void setStaticF_GRAB_PALM(::UnityEngine::Vector3  value) ;

static inline void setStaticF_GRAB_UP(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameGrabbable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameGrabbable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameGrabbable(GameGrabbable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameGrabbable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameGrabbable(GameGrabbable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1762};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field snapGrabPoints, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*  ___snapGrabPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameGrabbable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameGrabbable, ___snapGrabPoints) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameGrabbable) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameGrabbable/SnapGrabPoints
class CORDL_TYPE GameGrabbable_SnapGrabPoints : public ::System::Object {
public:
// Declarations
/// @brief Field handTransform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTransform, put=__cordl_internal_set_handTransform)) ::UnityW<::UnityEngine::Transform>  handTransform;

/// @brief Field isLeftHand, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

static inline ::GlobalNamespace::GameGrabbable_SnapGrabPoints* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handTransform() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr void __cordl_internal_set_handTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

/// @brief Method .ctor, addr 0x5833d80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameGrabbable_SnapGrabPoints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameGrabbable_SnapGrabPoints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameGrabbable_SnapGrabPoints(GameGrabbable_SnapGrabPoints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameGrabbable_SnapGrabPoints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameGrabbable_SnapGrabPoints(GameGrabbable_SnapGrabPoints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1761};

/// @brief Field isLeftHand, offset: 0x10, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field handTransform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameGrabbable_SnapGrabPoints, ___isLeftHand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameGrabbable_SnapGrabPoints, ___handTransform) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameGrabbable_SnapGrabPoints) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
