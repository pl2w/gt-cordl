#pragma once
// IWYU pragma private; include "GlobalNamespace/GRGameEntityInteractionPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRGameEntityInteractionPoint)
namespace GlobalNamespace {
class GameEntity;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRGameEntityInteractionPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRGameEntityInteractionPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRGameEntityInteractionPoint*, "", "GRGameEntityInteractionPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRGameEntityInteractionPoint
class CORDL_TYPE GRGameEntityInteractionPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnGrabContinue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabContinue, put=__cordl_internal_set_OnGrabContinue)) ::System::Action*  OnGrabContinue;

/// @brief Field OnGrabEnd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabEnd, put=__cordl_internal_set_OnGrabEnd)) ::System::Action*  OnGrabEnd;

/// @brief Field OnGrabStart, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabStart, put=__cordl_internal_set_OnGrabStart)) ::System::Action*  OnGrabStart;

/// @brief Field autoReleaseDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoReleaseDistance, put=__cordl_internal_set_autoReleaseDistance)) float_t  autoReleaseDistance;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field targetParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetParent, put=__cordl_internal_set_targetParent)) ::UnityW<::UnityEngine::Transform>  targetParent;

static inline ::GlobalNamespace::GRGameEntityInteractionPoint* New_ctor() ;

/// @brief Method OnDisable, addr 0x589b938, size 0x15c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x589b7dc, size 0x15c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrabbed, addr 0x589ba94, size 0xfc, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x589bb90, size 0x1c4, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method Start, addr 0x589b7b4, size 0x28, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TickWhileHeld, addr 0x589bd54, size 0x2b4, virtual false, abstract: false, final false
inline void TickWhileHeld() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGrabContinue() const;

constexpr ::System::Action*& __cordl_internal_get_OnGrabContinue() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGrabEnd() const;

constexpr ::System::Action*& __cordl_internal_get_OnGrabEnd() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGrabStart() const;

constexpr ::System::Action*& __cordl_internal_get_OnGrabStart() ;

constexpr float_t const& __cordl_internal_get_autoReleaseDistance() const;

constexpr float_t& __cordl_internal_get_autoReleaseDistance() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetParent() ;

constexpr void __cordl_internal_set_OnGrabContinue(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGrabEnd(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGrabStart(::System::Action*  value) ;

constexpr void __cordl_internal_set_autoReleaseDistance(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_targetParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x589c008, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRGameEntityInteractionPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRGameEntityInteractionPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRGameEntityInteractionPoint(GRGameEntityInteractionPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRGameEntityInteractionPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRGameEntityInteractionPoint(GRGameEntityInteractionPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1978};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field autoReleaseDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___autoReleaseDistance;

/// @brief Field OnGrabStart, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnGrabStart;

/// @brief Field OnGrabContinue, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnGrabContinue;

/// @brief Field OnGrabEnd, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnGrabEnd;

/// @brief Field targetParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRGameEntityInteractionPoint, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGameEntityInteractionPoint, ___autoReleaseDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGameEntityInteractionPoint, ___OnGrabStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGameEntityInteractionPoint, ___OnGrabContinue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGameEntityInteractionPoint, ___OnGrabEnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGameEntityInteractionPoint, ___targetParent) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRGameEntityInteractionPoint) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
