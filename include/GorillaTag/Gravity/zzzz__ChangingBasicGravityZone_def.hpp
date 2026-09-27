#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/ChangingBasicGravityZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ChangingBasicGravityZone)
namespace GlobalNamespace {
class ICallbackUnique;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class ChangingBasicGravityZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::ChangingBasicGravityZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::ChangingBasicGravityZone*, "GorillaTag.Gravity", "ChangingBasicGravityZone");
// Dependencies GorillaTag.Gravity.BasicGravityZone, UnityEngine.Vector3
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.ChangingBasicGravityZone
class CORDL_TYPE ChangingBasicGravityZone : public ::GorillaTag::Gravity::BasicGravityZone {
public:
// Declarations
/// @brief Field ExternalSetGravityStrength, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExternalSetGravityStrength, put=__cordl_internal_set_ExternalSetGravityStrength)) float_t  ExternalSetGravityStrength;

/// @brief Field ExternalTriggerSetGravityStrength, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExternalTriggerSetGravityStrength, put=__cordl_internal_set_ExternalTriggerSetGravityStrength)) bool  ExternalTriggerSetGravityStrength;

/// @brief Field lastExternalTriggerSetMatched, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastExternalTriggerSetMatched, put=__cordl_internal_set_lastExternalTriggerSetMatched)) bool  lastExternalTriggerSetMatched;

/// @brief Field lastValueWhenSet, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastValueWhenSet, put=__cordl_internal_set_lastValueWhenSet)) bool  lastValueWhenSet;

/// @brief Field m_changeDirectionTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_changeDirectionTime, put=__cordl_internal_set_m_changeDirectionTime)) float_t  m_changeDirectionTime;

/// @brief Field m_changeStrengthTime, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_changeStrengthTime, put=__cordl_internal_set_m_changeStrengthTime)) float_t  m_changeStrengthTime;

/// @brief Field m_directionDity, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_directionDity, put=__cordl_internal_set_m_directionDity)) bool  m_directionDity;

/// @brief Field m_lerpToDirectionSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_lerpToDirectionSpeed, put=__cordl_internal_set_m_lerpToDirectionSpeed)) float_t  m_lerpToDirectionSpeed;

/// @brief Field m_lerpToGravitySpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_lerpToGravitySpeed, put=__cordl_internal_set_m_lerpToGravitySpeed)) float_t  m_lerpToGravitySpeed;

/// @brief Field m_strengthDirty, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_strengthDirty, put=__cordl_internal_set_m_strengthDirty)) bool  m_strengthDirty;

/// @brief Field m_targetGravityDirection, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_targetGravityDirection, put=__cordl_internal_set_m_targetGravityDirection)) ::UnityEngine::Vector3  m_targetGravityDirection;

/// @brief Field m_targetGravityStrength, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_targetGravityStrength, put=__cordl_internal_set_m_targetGravityStrength)) float_t  m_targetGravityStrength;

/// @brief Field m_thisCallbackUnique, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_thisCallbackUnique, put=__cordl_internal_set_m_thisCallbackUnique)) ::GlobalNamespace::ICallbackUnique*  m_thisCallbackUnique;

/// @brief Method Awake, addr 0x5d380a8, size 0x2c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CallBack, addr 0x5d38524, size 0x18c, virtual true, abstract: false, final false
inline void CallBack() ;

static inline ::GorillaTag::Gravity::ChangingBasicGravityZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d380d4, size 0x44, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetGravityDirection, addr 0x5d38260, size 0x8, virtual false, abstract: false, final false
inline void SetGravityDirection(::UnityEngine::Vector3  dir) ;

/// @brief Method SetGravityDirection, addr 0x5d38268, size 0x2b4, virtual false, abstract: false, final false
inline void SetGravityDirection(::UnityEngine::Vector3  direction, float_t  time) ;

/// @brief Method SetGravityStrength, addr 0x5d3816c, size 0x8, virtual false, abstract: false, final false
inline void SetGravityStrength(float_t  strength) ;

/// @brief Method SetGravityStrength, addr 0x5d38174, size 0xec, virtual false, abstract: false, final false
inline void SetGravityStrength(float_t  strength, float_t  time) ;

/// @brief Method SetRotationIntent, addr 0x5d3851c, size 0x8, virtual false, abstract: false, final false
inline void SetRotationIntent(bool  rotate) ;

/// @brief Method Update, addr 0x5d38118, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_ExternalSetGravityStrength() const;

constexpr float_t& __cordl_internal_get_ExternalSetGravityStrength() ;

constexpr bool const& __cordl_internal_get_ExternalTriggerSetGravityStrength() const;

constexpr bool& __cordl_internal_get_ExternalTriggerSetGravityStrength() ;

constexpr bool const& __cordl_internal_get_lastExternalTriggerSetMatched() const;

constexpr bool& __cordl_internal_get_lastExternalTriggerSetMatched() ;

constexpr bool const& __cordl_internal_get_lastValueWhenSet() const;

constexpr bool& __cordl_internal_get_lastValueWhenSet() ;

constexpr float_t const& __cordl_internal_get_m_changeDirectionTime() const;

constexpr float_t& __cordl_internal_get_m_changeDirectionTime() ;

constexpr float_t const& __cordl_internal_get_m_changeStrengthTime() const;

constexpr float_t& __cordl_internal_get_m_changeStrengthTime() ;

constexpr bool const& __cordl_internal_get_m_directionDity() const;

constexpr bool& __cordl_internal_get_m_directionDity() ;

constexpr float_t const& __cordl_internal_get_m_lerpToDirectionSpeed() const;

constexpr float_t& __cordl_internal_get_m_lerpToDirectionSpeed() ;

constexpr float_t const& __cordl_internal_get_m_lerpToGravitySpeed() const;

constexpr float_t& __cordl_internal_get_m_lerpToGravitySpeed() ;

constexpr bool const& __cordl_internal_get_m_strengthDirty() const;

constexpr bool& __cordl_internal_get_m_strengthDirty() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_targetGravityDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_targetGravityDirection() ;

constexpr float_t const& __cordl_internal_get_m_targetGravityStrength() const;

constexpr float_t& __cordl_internal_get_m_targetGravityStrength() ;

constexpr ::GlobalNamespace::ICallbackUnique* const& __cordl_internal_get_m_thisCallbackUnique() const;

constexpr ::GlobalNamespace::ICallbackUnique*& __cordl_internal_get_m_thisCallbackUnique() ;

constexpr void __cordl_internal_set_ExternalSetGravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_ExternalTriggerSetGravityStrength(bool  value) ;

constexpr void __cordl_internal_set_lastExternalTriggerSetMatched(bool  value) ;

constexpr void __cordl_internal_set_lastValueWhenSet(bool  value) ;

constexpr void __cordl_internal_set_m_changeDirectionTime(float_t  value) ;

constexpr void __cordl_internal_set_m_changeStrengthTime(float_t  value) ;

constexpr void __cordl_internal_set_m_directionDity(bool  value) ;

constexpr void __cordl_internal_set_m_lerpToDirectionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_lerpToGravitySpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_strengthDirty(bool  value) ;

constexpr void __cordl_internal_set_m_targetGravityDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_targetGravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_m_thisCallbackUnique(::GlobalNamespace::ICallbackUnique*  value) ;

/// @brief Method .ctor, addr 0x5d386b0, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangingBasicGravityZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangingBasicGravityZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangingBasicGravityZone(ChangingBasicGravityZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangingBasicGravityZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangingBasicGravityZone(ChangingBasicGravityZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4677};

/// [Header("Change Value To Trigger Gravity Strength Change At Set Value (false to true and true to false both work, but value must change the frame you want it changed)")]
/// @brief Field ExternalTriggerSetGravityStrength, offset: 0x79, size: 0x1, def value: None
 bool  ___ExternalTriggerSetGravityStrength;

/// @brief Field ExternalSetGravityStrength, offset: 0x7c, size: 0x4, def value: None
 float_t  ___ExternalSetGravityStrength;

/// @brief Field lastExternalTriggerSetMatched, offset: 0x80, size: 0x1, def value: None
 bool  ___lastExternalTriggerSetMatched;

/// @brief Field lastValueWhenSet, offset: 0x81, size: 0x1, def value: None
 bool  ___lastValueWhenSet;

/// @brief Field m_strengthDirty, offset: 0x82, size: 0x1, def value: None
 bool  ___m_strengthDirty;

/// @brief Field m_targetGravityStrength, offset: 0x84, size: 0x4, def value: None
 float_t  ___m_targetGravityStrength;

/// @brief Field m_lerpToGravitySpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_lerpToGravitySpeed;

/// @brief Field m_directionDity, offset: 0x8c, size: 0x1, def value: None
 bool  ___m_directionDity;

/// @brief Field m_targetGravityDirection, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_targetGravityDirection;

/// @brief Field m_lerpToDirectionSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_lerpToDirectionSpeed;

/// [SerializeField]
/// @brief Field m_changeStrengthTime, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_changeStrengthTime;

/// [SerializeField]
/// @brief Field m_changeDirectionTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_changeDirectionTime;

/// @brief Field m_thisCallbackUnique, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::ICallbackUnique*  ___m_thisCallbackUnique;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___ExternalTriggerSetGravityStrength) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___ExternalSetGravityStrength) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___lastExternalTriggerSetMatched) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___lastValueWhenSet) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_strengthDirty) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_targetGravityStrength) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_lerpToGravitySpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_directionDity) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_targetGravityDirection) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_lerpToDirectionSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_changeStrengthTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_changeDirectionTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::ChangingBasicGravityZone, ___m_thisCallbackUnique) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::ChangingBasicGravityZone) == 0xb0, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
