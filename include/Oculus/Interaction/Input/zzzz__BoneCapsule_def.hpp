#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/BoneCapsule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoneCapsule)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class BoneCapsule;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::BoneCapsule*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::BoneCapsule*, "Oculus.Interaction.Input", "BoneCapsule");
// Dependencies Oculus.Interaction.Input.HandJointId, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.BoneCapsule
class CORDL_TYPE BoneCapsule : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CapsuleCollider, put=set_CapsuleCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  CapsuleCollider;

 __declspec(property(get=get_CapsuleRigidbody, put=set_CapsuleRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  CapsuleRigidbody;

 __declspec(property(get=get_EndJoint, put=set_EndJoint)) ::Oculus::Interaction::Input::HandJointId  EndJoint;

 __declspec(property(get=get_StartJoint, put=set_StartJoint)) ::Oculus::Interaction::Input::HandJointId  StartJoint;

/// @brief Field <CapsuleCollider>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__CapsuleCollider_k__BackingField, put=__cordl_internal_set__CapsuleCollider_k__BackingField)) ::UnityW<::UnityEngine::CapsuleCollider>  _CapsuleCollider_k__BackingField;

/// @brief Field <CapsuleRigidbody>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CapsuleRigidbody_k__BackingField, put=__cordl_internal_set__CapsuleRigidbody_k__BackingField)) ::UnityW<::UnityEngine::Rigidbody>  _CapsuleRigidbody_k__BackingField;

/// @brief Field <EndJoint>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__EndJoint_k__BackingField, put=__cordl_internal_set__EndJoint_k__BackingField)) ::Oculus::Interaction::Input::HandJointId  _EndJoint_k__BackingField;

/// @brief Field <StartJoint>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__StartJoint_k__BackingField, put=__cordl_internal_set__StartJoint_k__BackingField)) ::Oculus::Interaction::Input::HandJointId  _StartJoint_k__BackingField;

static inline ::Oculus::Interaction::Input::BoneCapsule* New_ctor(::Oculus::Interaction::Input::HandJointId  fromJoint, ::Oculus::Interaction::Input::HandJointId  toJoint, ::UnityEngine::Rigidbody*  body, ::UnityEngine::CapsuleCollider*  collider) ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get__CapsuleCollider_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get__CapsuleCollider_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__CapsuleRigidbody_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__CapsuleRigidbody_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__EndJoint_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__EndJoint_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__StartJoint_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__StartJoint_k__BackingField() ;

constexpr void __cordl_internal_set__CapsuleCollider_k__BackingField(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set__CapsuleRigidbody_k__BackingField(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__EndJoint_k__BackingField(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set__StartJoint_k__BackingField(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method .ctor, addr 0xa510b84, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::HandJointId  fromJoint, ::Oculus::Interaction::Input::HandJointId  toJoint, ::UnityEngine::Rigidbody*  body, ::UnityEngine::CapsuleCollider*  collider) ;

/// [CompilerGenerated]
/// @brief Method get_CapsuleCollider, addr 0xa5113b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::CapsuleCollider> get_CapsuleCollider() ;

/// [CompilerGenerated]
/// @brief Method get_CapsuleRigidbody, addr 0xa5113a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_CapsuleRigidbody() ;

/// [CompilerGenerated]
/// @brief Method get_EndJoint, addr 0xa511394, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandJointId get_EndJoint() ;

/// [CompilerGenerated]
/// @brief Method get_StartJoint, addr 0xa511384, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandJointId get_StartJoint() ;

/// [CompilerGenerated]
/// @brief Method set_CapsuleCollider, addr 0xa5113bc, size 0x8, virtual false, abstract: false, final false
inline void set_CapsuleCollider(::UnityEngine::CapsuleCollider*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CapsuleRigidbody, addr 0xa5113ac, size 0x8, virtual false, abstract: false, final false
inline void set_CapsuleRigidbody(::UnityEngine::Rigidbody*  value) ;

/// [CompilerGenerated]
/// @brief Method set_EndJoint, addr 0xa51139c, size 0x8, virtual false, abstract: false, final false
inline void set_EndJoint(::Oculus::Interaction::Input::HandJointId  value) ;

/// [CompilerGenerated]
/// @brief Method set_StartJoint, addr 0xa51138c, size 0x8, virtual false, abstract: false, final false
inline void set_StartJoint(::Oculus::Interaction::Input::HandJointId  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoneCapsule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoneCapsule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoneCapsule(BoneCapsule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoneCapsule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoneCapsule(BoneCapsule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16496};

/// [CompilerGenerated]
/// @brief Field <StartJoint>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____StartJoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EndJoint>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____EndJoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CapsuleRigidbody>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____CapsuleRigidbody_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CapsuleCollider>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ____CapsuleCollider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::BoneCapsule, ____StartJoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::BoneCapsule, ____EndJoint_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::BoneCapsule, ____CapsuleRigidbody_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::BoneCapsule, ____CapsuleCollider_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::BoneCapsule) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
