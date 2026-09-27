#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionSnapPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SuperInfectionSnapPoint)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GamePlayer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SuperInfectionSnapPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperInfectionSnapPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionSnapPoint*, "", "SuperInfectionSnapPoint");
// Dependencies GorillaTag.CosmeticSystem.GTHardCodedBones::SturdyEBone, SnapJointType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfectionSnapPoint
class CORDL_TYPE SuperInfectionSnapPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field canSnapOverride, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSnapOverride, put=__cordl_internal_set_canSnapOverride)) bool  canSnapOverride;

/// @brief Field jointType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_jointType, put=__cordl_internal_set_jointType)) ::GlobalNamespace::SnapJointType  jointType;

/// @brief Field overrideParentTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideParentTransform, put=__cordl_internal_set_overrideParentTransform)) ::UnityW<::UnityEngine::Transform>  overrideParentTransform;

/// @brief Field parentBone, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_parentBone, put=__cordl_internal_set_parentBone)) ::GlobalNamespace::GTHardCodedBones_SturdyEBone  parentBone;

/// @brief Field parentTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransform, put=__cordl_internal_set_parentTransform)) ::UnityW<::UnityEngine::Transform>  parentTransform;

/// @brief Field playerForPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerForPoint, put=__cordl_internal_set_playerForPoint)) ::UnityW<::GlobalNamespace::GamePlayer>  playerForPoint;

/// @brief Field snapPointRadius, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapPointRadius, put=__cordl_internal_set_snapPointRadius)) float_t  snapPointRadius;

/// @brief Field snappedEntity, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_snappedEntity, put=__cordl_internal_set_snappedEntity)) ::UnityW<::GlobalNamespace::GameEntity>  snappedEntity;

/// @brief Method Clear, addr 0x584272c, size 0x4, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetSnappedEntity, addr 0x5842948, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> GetSnappedEntity() ;

/// @brief Method HasSnapped, addr 0x58418a0, size 0x60, virtual false, abstract: false, final false
inline bool HasSnapped() ;

/// @brief Method Initialize, addr 0x58423e4, size 0x348, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::SuperInfectionSnapPoint* New_ctor() ;

/// @brief Method Snapped, addr 0x5842854, size 0xf4, virtual false, abstract: false, final false
inline void Snapped(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method Unsnapped, addr 0x5842730, size 0x124, virtual false, abstract: false, final false
inline void Unsnapped() ;

constexpr bool const& __cordl_internal_get_canSnapOverride() const;

constexpr bool& __cordl_internal_get_canSnapOverride() ;

constexpr ::GlobalNamespace::SnapJointType const& __cordl_internal_get_jointType() const;

constexpr ::GlobalNamespace::SnapJointType& __cordl_internal_get_jointType() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_overrideParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_overrideParentTransform() ;

constexpr ::GlobalNamespace::GTHardCodedBones_SturdyEBone const& __cordl_internal_get_parentBone() const;

constexpr ::GlobalNamespace::GTHardCodedBones_SturdyEBone& __cordl_internal_get_parentBone() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentTransform() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get_playerForPoint() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get_playerForPoint() ;

constexpr float_t const& __cordl_internal_get_snapPointRadius() const;

constexpr float_t& __cordl_internal_get_snapPointRadius() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_snappedEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_snappedEntity() ;

constexpr void __cordl_internal_set_canSnapOverride(bool  value) ;

constexpr void __cordl_internal_set_jointType(::GlobalNamespace::SnapJointType  value) ;

constexpr void __cordl_internal_set_overrideParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentBone(::GlobalNamespace::GTHardCodedBones_SturdyEBone  value) ;

constexpr void __cordl_internal_set_parentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playerForPoint(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set_snapPointRadius(float_t  value) ;

constexpr void __cordl_internal_set_snappedEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

/// @brief Method .ctor, addr 0x5842950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionSnapPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionSnapPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfectionSnapPoint(SuperInfectionSnapPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionSnapPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfectionSnapPoint(SuperInfectionSnapPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1797};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SuperInfectionSnapPoint]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SuperInfectionSnapPoint]  "};

/// @brief Field playerForPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  ___playerForPoint;

/// @brief Field jointType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SnapJointType  ___jointType;

/// @brief Field parentBone, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::GTHardCodedBones_SturdyEBone  ___parentBone;

/// @brief Field overrideParentTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___overrideParentTransform;

/// @brief Field parentTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentTransform;

/// @brief Field canSnapOverride, offset: 0x50, size: 0x1, def value: None
 bool  ___canSnapOverride;

/// @brief Field snapPointRadius, offset: 0x54, size: 0x4, def value: None
 float_t  ___snapPointRadius;

/// @brief Field snappedEntity, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___snappedEntity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___playerForPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___jointType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___parentBone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___overrideParentTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___parentTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___canSnapOverride) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___snapPointRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPoint, ___snappedEntity) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionSnapPoint) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
