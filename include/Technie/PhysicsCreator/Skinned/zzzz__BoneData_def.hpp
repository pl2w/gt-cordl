#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/BoneData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneJointType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoneData)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator::Skinned {
class BoneData;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Skinned::BoneData*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Skinned::BoneData*, "Technie.PhysicsCreator.Skinned", "BoneData");
// Dependencies System.Object, Technie.PhysicsCreator.Skinned.BoneJointType, UnityEngine.Vector3
namespace Technie::PhysicsCreator::Skinned {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Skinned.BoneData
class CORDL_TYPE BoneData : public ::System::Object {
public:
// Declarations
/// @brief Field addJoint, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_addJoint, put=__cordl_internal_set_addJoint)) bool  addJoint;

/// @brief Field addRigidbody, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_addRigidbody, put=__cordl_internal_set_addRigidbody)) bool  addRigidbody;

/// @brief Field angularDamping, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularDamping, put=__cordl_internal_set_angularDamping)) float_t  angularDamping;

/// @brief Field angularDrag, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularDrag, put=__cordl_internal_set_angularDrag)) float_t  angularDrag;

/// @brief Field isKinematic, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isKinematic, put=__cordl_internal_set_isKinematic)) bool  isKinematic;

/// @brief Field jointType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_jointType, put=__cordl_internal_set_jointType)) ::Technie::PhysicsCreator::Skinned::BoneJointType  jointType;

/// @brief Field linearDamping, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_linearDamping, put=__cordl_internal_set_linearDamping)) float_t  linearDamping;

/// @brief Field linearDrag, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_linearDrag, put=__cordl_internal_set_linearDrag)) float_t  linearDrag;

/// @brief Field mass, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mass, put=__cordl_internal_set_mass)) float_t  mass;

/// @brief Field primaryAxis, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_primaryAxis, put=__cordl_internal_set_primaryAxis)) ::UnityEngine::Vector3  primaryAxis;

/// @brief Field primaryLowerAngularLimit, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_primaryLowerAngularLimit, put=__cordl_internal_set_primaryLowerAngularLimit)) float_t  primaryLowerAngularLimit;

/// @brief Field primaryUpperAngularLimit, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_primaryUpperAngularLimit, put=__cordl_internal_set_primaryUpperAngularLimit)) float_t  primaryUpperAngularLimit;

/// @brief Field secondaryAngularLimit, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondaryAngularLimit, put=__cordl_internal_set_secondaryAngularLimit)) float_t  secondaryAngularLimit;

/// @brief Field secondaryAxis, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_secondaryAxis, put=__cordl_internal_set_secondaryAxis)) ::UnityEngine::Vector3  secondaryAxis;

/// @brief Field targetBoneName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetBoneName, put=__cordl_internal_set_targetBoneName)) ::StringW  targetBoneName;

/// @brief Field tertiaryAngularLimit, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_tertiaryAngularLimit, put=__cordl_internal_set_tertiaryAngularLimit)) float_t  tertiaryAngularLimit;

/// @brief Field translationLimit, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_translationLimit, put=__cordl_internal_set_translationLimit)) float_t  translationLimit;

/// @brief Method GetThirdAxis, addr 0xadd8e20, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetThirdAxis() ;

static inline ::Technie::PhysicsCreator::Skinned::BoneData* New_ctor(::UnityEngine::Transform*  src) ;

constexpr bool const& __cordl_internal_get_addJoint() const;

constexpr bool& __cordl_internal_get_addJoint() ;

constexpr bool const& __cordl_internal_get_addRigidbody() const;

constexpr bool& __cordl_internal_get_addRigidbody() ;

constexpr float_t const& __cordl_internal_get_angularDamping() const;

constexpr float_t& __cordl_internal_get_angularDamping() ;

constexpr float_t const& __cordl_internal_get_angularDrag() const;

constexpr float_t& __cordl_internal_get_angularDrag() ;

constexpr bool const& __cordl_internal_get_isKinematic() const;

constexpr bool& __cordl_internal_get_isKinematic() ;

constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType const& __cordl_internal_get_jointType() const;

constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType& __cordl_internal_get_jointType() ;

constexpr float_t const& __cordl_internal_get_linearDamping() const;

constexpr float_t& __cordl_internal_get_linearDamping() ;

constexpr float_t const& __cordl_internal_get_linearDrag() const;

constexpr float_t& __cordl_internal_get_linearDrag() ;

constexpr float_t const& __cordl_internal_get_mass() const;

constexpr float_t& __cordl_internal_get_mass() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_primaryAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_primaryAxis() ;

constexpr float_t const& __cordl_internal_get_primaryLowerAngularLimit() const;

constexpr float_t& __cordl_internal_get_primaryLowerAngularLimit() ;

constexpr float_t const& __cordl_internal_get_primaryUpperAngularLimit() const;

constexpr float_t& __cordl_internal_get_primaryUpperAngularLimit() ;

constexpr float_t const& __cordl_internal_get_secondaryAngularLimit() const;

constexpr float_t& __cordl_internal_get_secondaryAngularLimit() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_secondaryAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_secondaryAxis() ;

constexpr ::StringW const& __cordl_internal_get_targetBoneName() const;

constexpr ::StringW& __cordl_internal_get_targetBoneName() ;

constexpr float_t const& __cordl_internal_get_tertiaryAngularLimit() const;

constexpr float_t& __cordl_internal_get_tertiaryAngularLimit() ;

constexpr float_t const& __cordl_internal_get_translationLimit() const;

constexpr float_t& __cordl_internal_get_translationLimit() ;

constexpr void __cordl_internal_set_addJoint(bool  value) ;

constexpr void __cordl_internal_set_addRigidbody(bool  value) ;

constexpr void __cordl_internal_set_angularDamping(float_t  value) ;

constexpr void __cordl_internal_set_angularDrag(float_t  value) ;

constexpr void __cordl_internal_set_isKinematic(bool  value) ;

constexpr void __cordl_internal_set_jointType(::Technie::PhysicsCreator::Skinned::BoneJointType  value) ;

constexpr void __cordl_internal_set_linearDamping(float_t  value) ;

constexpr void __cordl_internal_set_linearDrag(float_t  value) ;

constexpr void __cordl_internal_set_mass(float_t  value) ;

constexpr void __cordl_internal_set_primaryAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_primaryLowerAngularLimit(float_t  value) ;

constexpr void __cordl_internal_set_primaryUpperAngularLimit(float_t  value) ;

constexpr void __cordl_internal_set_secondaryAngularLimit(float_t  value) ;

constexpr void __cordl_internal_set_secondaryAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetBoneName(::StringW  value) ;

constexpr void __cordl_internal_set_tertiaryAngularLimit(float_t  value) ;

constexpr void __cordl_internal_set_translationLimit(float_t  value) ;

/// @brief Method .ctor, addr 0xadd8d48, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  src) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoneData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoneData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoneData(BoneData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoneData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoneData(BoneData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30530};

/// @brief Field targetBoneName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___targetBoneName;

/// @brief Field addRigidbody, offset: 0x18, size: 0x1, def value: None
 bool  ___addRigidbody;

/// @brief Field mass, offset: 0x1c, size: 0x4, def value: None
 float_t  ___mass;

/// @brief Field linearDrag, offset: 0x20, size: 0x4, def value: None
 float_t  ___linearDrag;

/// @brief Field angularDrag, offset: 0x24, size: 0x4, def value: None
 float_t  ___angularDrag;

/// @brief Field isKinematic, offset: 0x28, size: 0x1, def value: None
 bool  ___isKinematic;

/// @brief Field addJoint, offset: 0x29, size: 0x1, def value: None
 bool  ___addJoint;

/// @brief Field jointType, offset: 0x2c, size: 0x4, def value: None
 ::Technie::PhysicsCreator::Skinned::BoneJointType  ___jointType;

/// @brief Field primaryAxis, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___primaryAxis;

/// @brief Field secondaryAxis, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___secondaryAxis;

/// @brief Field primaryLowerAngularLimit, offset: 0x48, size: 0x4, def value: None
 float_t  ___primaryLowerAngularLimit;

/// @brief Field primaryUpperAngularLimit, offset: 0x4c, size: 0x4, def value: None
 float_t  ___primaryUpperAngularLimit;

/// @brief Field secondaryAngularLimit, offset: 0x50, size: 0x4, def value: None
 float_t  ___secondaryAngularLimit;

/// @brief Field tertiaryAngularLimit, offset: 0x54, size: 0x4, def value: None
 float_t  ___tertiaryAngularLimit;

/// @brief Field translationLimit, offset: 0x58, size: 0x4, def value: None
 float_t  ___translationLimit;

/// @brief Field linearDamping, offset: 0x5c, size: 0x4, def value: None
 float_t  ___linearDamping;

/// @brief Field angularDamping, offset: 0x60, size: 0x4, def value: None
 float_t  ___angularDamping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___targetBoneName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___addRigidbody) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___mass) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___linearDrag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___angularDrag) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___isKinematic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___addJoint) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___jointType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___primaryAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___secondaryAxis) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___primaryLowerAngularLimit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___primaryUpperAngularLimit) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___secondaryAngularLimit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___tertiaryAngularLimit) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___translationLimit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___linearDamping) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneData, ___angularDamping) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Skinned::BoneData) == 0x68, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Skinned
