#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCHelicopter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RCHelicopter)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RCHelicopter;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RCHelicopter*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RCHelicopter*, "GorillaTag.Cosmetics", "RCHelicopter");
// Dependencies GorillaTag.Cosmetics.RCVehicle, UnityEngine.Quaternion, UnityEngine.Vector2
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RCHelicopter
class CORDL_TYPE RCHelicopter : public ::GorillaTag::Cosmetics::RCVehicle {
public:
// Declarations
/// @brief Field ascendAccel, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendAccel, put=__cordl_internal_set_ascendAccel)) float_t  ascendAccel;

/// @brief Field ascendAccelTime, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendAccelTime, put=__cordl_internal_set_ascendAccelTime)) float_t  ascendAccelTime;

/// @brief Field backPropellerSpinRate, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_backPropellerSpinRate, put=__cordl_internal_set_backPropellerSpinRate)) float_t  backPropellerSpinRate;

/// @brief Field gravityCompensation, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityCompensation, put=__cordl_internal_set_gravityCompensation)) float_t  gravityCompensation;

/// @brief Field horizontalAccel, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalAccel, put=__cordl_internal_set_horizontalAccel)) float_t  horizontalAccel;

/// @brief Field horizontalAccelTime, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalAccelTime, put=__cordl_internal_set_horizontalAccelTime)) float_t  horizontalAccelTime;

/// @brief Field mainPropellerSpinRateRange, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainPropellerSpinRateRange, put=__cordl_internal_set_mainPropellerSpinRateRange)) ::UnityEngine::Vector2  mainPropellerSpinRateRange;

/// @brief Field maxAscendSpeed, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAscendSpeed, put=__cordl_internal_set_maxAscendSpeed)) float_t  maxAscendSpeed;

/// @brief Field maxHorizontalSpeed, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHorizontalSpeed, put=__cordl_internal_set_maxHorizontalSpeed)) float_t  maxHorizontalSpeed;

/// @brief Field maxHorizontalTiltAngle, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHorizontalTiltAngle, put=__cordl_internal_set_maxHorizontalTiltAngle)) float_t  maxHorizontalTiltAngle;

/// @brief Field maxTurnRate, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnRate, put=__cordl_internal_set_maxTurnRate)) float_t  maxTurnRate;

/// @brief Field turnAccel, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAccel, put=__cordl_internal_set_turnAccel)) float_t  turnAccel;

/// @brief Field turnAccelTime, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAccelTime, put=__cordl_internal_set_turnAccelTime)) float_t  turnAccelTime;

/// @brief Field turnPropeller, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnPropeller, put=__cordl_internal_set_turnPropeller)) ::UnityW<::UnityEngine::Transform>  turnPropeller;

/// @brief Field turnPropellerBaseRotation, offset 0x1a8, size 0x10 
 __declspec(property(get=__cordl_internal_get_turnPropellerBaseRotation, put=__cordl_internal_set_turnPropellerBaseRotation)) ::UnityEngine::Quaternion  turnPropellerBaseRotation;

/// @brief Field turnRate, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnRate, put=__cordl_internal_set_turnRate)) float_t  turnRate;

/// @brief Field verticalPropeller, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalPropeller, put=__cordl_internal_set_verticalPropeller)) ::UnityW<::UnityEngine::Transform>  verticalPropeller;

/// @brief Field verticalPropellerBaseRotation, offset 0x198, size 0x10 
 __declspec(property(get=__cordl_internal_get_verticalPropellerBaseRotation, put=__cordl_internal_set_verticalPropellerBaseRotation)) ::UnityEngine::Quaternion  verticalPropellerBaseRotation;

/// @brief Method AuthorityBeginDocked, addr 0x5d69448, size 0xdc, virtual true, abstract: false, final false
inline void AuthorityBeginDocked() ;

/// @brief Method Awake, addr 0x5d69524, size 0x88, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5d69658, size 0x524, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GorillaTag::Cosmetics::RCHelicopter* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5d69b7c, size 0x58, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method SharedUpdate, addr 0x5d695ac, size 0xac, virtual true, abstract: false, final false
inline void SharedUpdate(float_t  dt) ;

constexpr float_t const& __cordl_internal_get_ascendAccel() const;

constexpr float_t& __cordl_internal_get_ascendAccel() ;

constexpr float_t const& __cordl_internal_get_ascendAccelTime() const;

constexpr float_t& __cordl_internal_get_ascendAccelTime() ;

constexpr float_t const& __cordl_internal_get_backPropellerSpinRate() const;

constexpr float_t& __cordl_internal_get_backPropellerSpinRate() ;

constexpr float_t const& __cordl_internal_get_gravityCompensation() const;

constexpr float_t& __cordl_internal_get_gravityCompensation() ;

constexpr float_t const& __cordl_internal_get_horizontalAccel() const;

constexpr float_t& __cordl_internal_get_horizontalAccel() ;

constexpr float_t const& __cordl_internal_get_horizontalAccelTime() const;

constexpr float_t& __cordl_internal_get_horizontalAccelTime() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_mainPropellerSpinRateRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_mainPropellerSpinRateRange() ;

constexpr float_t const& __cordl_internal_get_maxAscendSpeed() const;

constexpr float_t& __cordl_internal_get_maxAscendSpeed() ;

constexpr float_t const& __cordl_internal_get_maxHorizontalSpeed() const;

constexpr float_t& __cordl_internal_get_maxHorizontalSpeed() ;

constexpr float_t const& __cordl_internal_get_maxHorizontalTiltAngle() const;

constexpr float_t& __cordl_internal_get_maxHorizontalTiltAngle() ;

constexpr float_t const& __cordl_internal_get_maxTurnRate() const;

constexpr float_t& __cordl_internal_get_maxTurnRate() ;

constexpr float_t const& __cordl_internal_get_turnAccel() const;

constexpr float_t& __cordl_internal_get_turnAccel() ;

constexpr float_t const& __cordl_internal_get_turnAccelTime() const;

constexpr float_t& __cordl_internal_get_turnAccelTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_turnPropeller() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_turnPropeller() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_turnPropellerBaseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_turnPropellerBaseRotation() ;

constexpr float_t const& __cordl_internal_get_turnRate() const;

constexpr float_t& __cordl_internal_get_turnRate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_verticalPropeller() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_verticalPropeller() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_verticalPropellerBaseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_verticalPropellerBaseRotation() ;

constexpr void __cordl_internal_set_ascendAccel(float_t  value) ;

constexpr void __cordl_internal_set_ascendAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_backPropellerSpinRate(float_t  value) ;

constexpr void __cordl_internal_set_gravityCompensation(float_t  value) ;

constexpr void __cordl_internal_set_horizontalAccel(float_t  value) ;

constexpr void __cordl_internal_set_horizontalAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_mainPropellerSpinRateRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_maxAscendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxHorizontalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxHorizontalTiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnRate(float_t  value) ;

constexpr void __cordl_internal_set_turnAccel(float_t  value) ;

constexpr void __cordl_internal_set_turnAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_turnPropeller(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_turnPropellerBaseRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_turnRate(float_t  value) ;

constexpr void __cordl_internal_set_verticalPropeller(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_verticalPropellerBaseRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x5d69bd4, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCHelicopter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCHelicopter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCHelicopter(RCHelicopter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCHelicopter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCHelicopter(RCHelicopter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4836};

/// [SerializeField]
/// @brief Field maxAscendSpeed, offset: 0x158, size: 0x4, def value: None
 float_t  ___maxAscendSpeed;

/// [SerializeField]
/// @brief Field ascendAccelTime, offset: 0x15c, size: 0x4, def value: None
 float_t  ___ascendAccelTime;

/// [SerializeField]
/// @brief Field gravityCompensation, offset: 0x160, size: 0x4, def value: None
 float_t  ___gravityCompensation;

/// [SerializeField]
/// @brief Field maxTurnRate, offset: 0x164, size: 0x4, def value: None
 float_t  ___maxTurnRate;

/// [SerializeField]
/// @brief Field turnAccelTime, offset: 0x168, size: 0x4, def value: None
 float_t  ___turnAccelTime;

/// [SerializeField]
/// @brief Field maxHorizontalSpeed, offset: 0x16c, size: 0x4, def value: None
 float_t  ___maxHorizontalSpeed;

/// [SerializeField]
/// @brief Field horizontalAccelTime, offset: 0x170, size: 0x4, def value: None
 float_t  ___horizontalAccelTime;

/// [SerializeField]
/// @brief Field maxHorizontalTiltAngle, offset: 0x174, size: 0x4, def value: None
 float_t  ___maxHorizontalTiltAngle;

/// [SerializeField]
/// @brief Field mainPropellerSpinRateRange, offset: 0x178, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___mainPropellerSpinRateRange;

/// [SerializeField]
/// @brief Field backPropellerSpinRate, offset: 0x180, size: 0x4, def value: None
 float_t  ___backPropellerSpinRate;

/// [SerializeField]
/// @brief Field verticalPropeller, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___verticalPropeller;

/// [SerializeField]
/// @brief Field turnPropeller, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___turnPropeller;

/// @brief Field verticalPropellerBaseRotation, offset: 0x198, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___verticalPropellerBaseRotation;

/// @brief Field turnPropellerBaseRotation, offset: 0x1a8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___turnPropellerBaseRotation;

/// @brief Field turnRate, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___turnRate;

/// @brief Field ascendAccel, offset: 0x1bc, size: 0x4, def value: None
 float_t  ___ascendAccel;

/// @brief Field turnAccel, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___turnAccel;

/// @brief Field horizontalAccel, offset: 0x1c4, size: 0x4, def value: None
 float_t  ___horizontalAccel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___maxAscendSpeed) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___ascendAccelTime) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___gravityCompensation) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___maxTurnRate) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___turnAccelTime) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___maxHorizontalSpeed) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___horizontalAccelTime) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___maxHorizontalTiltAngle) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___mainPropellerSpinRateRange) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___backPropellerSpinRate) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___verticalPropeller) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___turnPropeller) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___verticalPropellerBaseRotation) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___turnPropellerBaseRotation) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___turnRate) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___ascendAccel) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___turnAccel) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCHelicopter, ___horizontalAccel) == 0x1c4, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RCHelicopter) == 0x1c8, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
