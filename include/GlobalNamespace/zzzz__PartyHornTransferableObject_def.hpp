#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyHornTransferableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PartyHornTransferableObject_PartyHornState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PartyHornTransferableObject)
namespace GlobalNamespace {
struct PartyHornTransferableObject_PartyHornState;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PartyHornTransferableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PartyHornTransferableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PartyHornTransferableObject*, "", "PartyHornTransferableObject");
// Dependencies PartyHornTransferableObject::PartyHornState, TransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PartyHornTransferableObject
class CORDL_TYPE PartyHornTransferableObject : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using PartyHornState = ::GlobalNamespace::PartyHornTransferableObject_PartyHornState;

/// @brief Field OnCooldownReset, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCooldownReset, put=__cordl_internal_set_OnCooldownReset)) ::UnityEngine::Events::UnityEvent*  OnCooldownReset;

/// @brief Field OnCooldownStart, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCooldownStart, put=__cordl_internal_set_OnCooldownStart)) ::UnityEngine::Events::UnityEvent*  OnCooldownStart;

/// @brief Field cooldown, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field cooldownRemaining, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownRemaining, put=__cordl_internal_set_cooldownRemaining)) float_t  cooldownRemaining;

/// @brief Field effectsGameObject, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectsGameObject, put=__cordl_internal_set_effectsGameObject)) ::UnityW<::UnityEngine::GameObject>  effectsGameObject;

/// @brief Field localWasActivated, offset 0x378, size 0x1 
 __declspec(property(get=__cordl_internal_get_localWasActivated, put=__cordl_internal_set_localWasActivated)) bool  localWasActivated;

/// @brief Field mouthPiece, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_mouthPiece, put=__cordl_internal_set_mouthPiece)) ::UnityW<::UnityEngine::Transform>  mouthPiece;

/// @brief Field mouthPieceRadius, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_mouthPieceRadius, put=__cordl_internal_set_mouthPieceRadius)) float_t  mouthPieceRadius;

/// @brief Field mouthPieceZOffset, offset 0x344, size 0x4 
 __declspec(property(get=__cordl_internal_get_mouthPieceZOffset, put=__cordl_internal_set_mouthPieceZOffset)) float_t  mouthPieceZOffset;

/// @brief Field partyHornStateLastFrame, offset 0x374, size 0x4 
 __declspec(property(get=__cordl_internal_get_partyHornStateLastFrame, put=__cordl_internal_set_partyHornStateLastFrame)) ::GlobalNamespace::PartyHornTransferableObject_PartyHornState  partyHornStateLastFrame;

/// @brief Field soundActivated, offset 0x358, size 0x1 
 __declspec(property(get=__cordl_internal_get_soundActivated, put=__cordl_internal_set_soundActivated)) bool  soundActivated;

/// @brief Method CalcMouthPiecePos, addr 0x5e05820, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalcMouthPiecePos() ;

/// @brief Method InitToDefault, addr 0x5e05754, size 0xa8, virtual false, abstract: false, final false
inline void InitToDefault() ;

/// @brief Method LateUpdateLocal, addr 0x5e05910, size 0x5a4, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x5e05eb4, size 0xf4, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::PartyHornTransferableObject* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e057fc, size 0x8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e05738, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetToDefaultState, addr 0x5e05804, size 0x1c, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnCooldownReset() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnCooldownReset() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnCooldownStart() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnCooldownStart() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr float_t const& __cordl_internal_get_cooldownRemaining() const;

constexpr float_t& __cordl_internal_get_cooldownRemaining() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effectsGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effectsGameObject() ;

constexpr bool const& __cordl_internal_get_localWasActivated() const;

constexpr bool& __cordl_internal_get_localWasActivated() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mouthPiece() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mouthPiece() ;

constexpr float_t const& __cordl_internal_get_mouthPieceRadius() const;

constexpr float_t& __cordl_internal_get_mouthPieceRadius() ;

constexpr float_t const& __cordl_internal_get_mouthPieceZOffset() const;

constexpr float_t& __cordl_internal_get_mouthPieceZOffset() ;

constexpr ::GlobalNamespace::PartyHornTransferableObject_PartyHornState const& __cordl_internal_get_partyHornStateLastFrame() const;

constexpr ::GlobalNamespace::PartyHornTransferableObject_PartyHornState& __cordl_internal_get_partyHornStateLastFrame() ;

constexpr bool const& __cordl_internal_get_soundActivated() const;

constexpr bool& __cordl_internal_get_soundActivated() ;

constexpr void __cordl_internal_set_OnCooldownReset(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnCooldownStart(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_cooldownRemaining(float_t  value) ;

constexpr void __cordl_internal_set_effectsGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_localWasActivated(bool  value) ;

constexpr void __cordl_internal_set_mouthPiece(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_mouthPieceRadius(float_t  value) ;

constexpr void __cordl_internal_set_mouthPieceZOffset(float_t  value) ;

constexpr void __cordl_internal_set_partyHornStateLastFrame(::GlobalNamespace::PartyHornTransferableObject_PartyHornState  value) ;

constexpr void __cordl_internal_set_soundActivated(bool  value) ;

/// @brief Method .ctor, addr 0x5e05fa8, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PartyHornTransferableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PartyHornTransferableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyHornTransferableObject(PartyHornTransferableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyHornTransferableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyHornTransferableObject(PartyHornTransferableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{525};

/// [Tooltip("This GameObject will activate when held to any gorilla\'s mouth.")]
/// @brief Field effectsGameObject, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effectsGameObject;

/// @brief Field cooldown, offset: 0x340, size: 0x4, def value: None
 float_t  ___cooldown;

/// @brief Field mouthPieceZOffset, offset: 0x344, size: 0x4, def value: None
 float_t  ___mouthPieceZOffset;

/// @brief Field mouthPieceRadius, offset: 0x348, size: 0x4, def value: None
 float_t  ___mouthPieceRadius;

/// @brief Field mouthPiece, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mouthPiece;

/// @brief Field soundActivated, offset: 0x358, size: 0x1, def value: None
 bool  ___soundActivated;

/// @brief Field OnCooldownStart, offset: 0x360, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnCooldownStart;

/// @brief Field OnCooldownReset, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnCooldownReset;

/// @brief Field cooldownRemaining, offset: 0x370, size: 0x4, def value: None
 float_t  ___cooldownRemaining;

/// @brief Field partyHornStateLastFrame, offset: 0x374, size: 0x4, def value: None
 ::GlobalNamespace::PartyHornTransferableObject_PartyHornState  ___partyHornStateLastFrame;

/// @brief Field localWasActivated, offset: 0x378, size: 0x1, def value: None
 bool  ___localWasActivated;

/// @brief Size padding 0x3b0 - 0x380 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___effectsGameObject) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___cooldown) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___mouthPieceZOffset) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___mouthPieceRadius) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___mouthPiece) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___soundActivated) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___OnCooldownStart) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___OnCooldownReset) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___cooldownRemaining) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___partyHornStateLastFrame) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyHornTransferableObject, ___localWasActivated) == 0x378, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PartyHornTransferableObject) == 0x3b0, "Size mismatch!");

} // namespace end def GlobalNamespace
