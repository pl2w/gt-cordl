#pragma once
// IWYU pragma private; include "GlobalNamespace/TasselPhysics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TasselPhysics)
// Forward declare root types
namespace GlobalNamespace {
class TasselPhysics;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TasselPhysics*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TasselPhysics*, "", "TasselPhysics");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TasselPhysics
class CORDL_TYPE TasselPhysics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field LockXAxis, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_LockXAxis, put=__cordl_internal_set_LockXAxis)) bool  LockXAxis;

/// @brief Field centerOfMassLength, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_centerOfMassLength, put=__cordl_internal_set_centerOfMassLength)) float_t  centerOfMassLength;

/// @brief Field drag, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field gravityStrength, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityStrength, put=__cordl_internal_set_gravityStrength)) float_t  gravityStrength;

/// @brief Field lastCenterPos, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastCenterPos, put=__cordl_internal_set_lastCenterPos)) ::UnityEngine::Vector3  lastCenterPos;

/// @brief Field localCenterOfMass, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_localCenterOfMass, put=__cordl_internal_set_localCenterOfMass)) ::UnityEngine::Vector3  localCenterOfMass;

/// @brief Field rotCorrection, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotCorrection, put=__cordl_internal_set_rotCorrection)) ::UnityEngine::Quaternion  rotCorrection;

/// @brief Field tasselInstances, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tasselInstances, put=__cordl_internal_set_tasselInstances)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  tasselInstances;

/// @brief Field velocity, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method Awake, addr 0x565cdd4, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TasselPhysics* New_ctor() ;

/// @brief Method Update, addr 0x565cec4, size 0x458, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_LockXAxis() const;

constexpr bool& __cordl_internal_get_LockXAxis() ;

constexpr float_t const& __cordl_internal_get_centerOfMassLength() const;

constexpr float_t& __cordl_internal_get_centerOfMassLength() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_gravityStrength() const;

constexpr float_t& __cordl_internal_get_gravityStrength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastCenterPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastCenterPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localCenterOfMass() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localCenterOfMass() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotCorrection() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotCorrection() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_tasselInstances() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_tasselInstances() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_LockXAxis(bool  value) ;

constexpr void __cordl_internal_set_centerOfMassLength(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_gravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_lastCenterPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localCenterOfMass(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotCorrection(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tasselInstances(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x565d31c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TasselPhysics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TasselPhysics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TasselPhysics(TasselPhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TasselPhysics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TasselPhysics(TasselPhysics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{770};

/// [SerializeField]
/// @brief Field tasselInstances, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___tasselInstances;

/// [SerializeField]
/// @brief Field localCenterOfMass, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localCenterOfMass;

/// [SerializeField]
/// @brief Field gravityStrength, offset: 0x34, size: 0x4, def value: None
 float_t  ___gravityStrength;

/// [SerializeField]
/// @brief Field drag, offset: 0x38, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field LockXAxis, offset: 0x3c, size: 0x1, def value: None
 bool  ___LockXAxis;

/// @brief Field lastCenterPos, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastCenterPos;

/// @brief Field velocity, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field centerOfMassLength, offset: 0x58, size: 0x4, def value: None
 float_t  ___centerOfMassLength;

/// @brief Field rotCorrection, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotCorrection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___tasselInstances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___localCenterOfMass) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___gravityStrength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___drag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___LockXAxis) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___lastCenterPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___velocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___centerOfMassLength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TasselPhysics, ___rotCorrection) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TasselPhysics) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
