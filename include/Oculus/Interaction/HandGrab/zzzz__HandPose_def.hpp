#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandPose)
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
struct JointFreedom;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandPose*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandPose*, "Oculus.Interaction.HandGrab", "HandPose");
// Dependencies Oculus.Interaction.Input.Handedness, Oculus.Interaction.Input.JointFreedom, System.Object, UnityEngine.Quaternion
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandPose
class CORDL_TYPE HandPose : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FingersFreedom)) ::ArrayW<::Oculus::Interaction::Input::JointFreedom>  FingersFreedom;

 __declspec(property(get=get_Handedness, put=set_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_JointRotations, put=set_JointRotations)) ::ArrayW<::UnityEngine::Quaternion>  JointRotations;

/// @brief Field _fingersFreedom, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingersFreedom, put=__cordl_internal_set__fingersFreedom)) ::ArrayW<::Oculus::Interaction::Input::JointFreedom>  _fingersFreedom;

/// @brief Field _handedness, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__handedness, put=__cordl_internal_set__handedness)) ::Oculus::Interaction::Input::Handedness  _handedness;

/// @brief Field _jointRotations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointRotations, put=__cordl_internal_set__jointRotations)) ::ArrayW<::UnityEngine::Quaternion>  _jointRotations;

/// @brief Method CopyFrom, addr 0xa4dd640, size 0xe0, virtual false, abstract: false, final false
inline void CopyFrom(::Oculus::Interaction::HandGrab::HandPose*  from, bool  mirrorHandedness) ;

/// @brief Method Lerp, addr 0xa4dd720, size 0x1d8, virtual false, abstract: false, final false
static inline void Lerp(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  from, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  to, float_t  t, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  result) ;

static inline ::Oculus::Interaction::HandGrab::HandPose* New_ctor() ;

static inline ::Oculus::Interaction::HandGrab::HandPose* New_ctor(::Oculus::Interaction::Input::Handedness  handedness) ;

static inline ::Oculus::Interaction::HandGrab::HandPose* New_ctor(::Oculus::Interaction::HandGrab::HandPose*  other) ;

constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom> const& __cordl_internal_get__fingersFreedom() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom>& __cordl_internal_get__fingersFreedom() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__handedness() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__handedness() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get__jointRotations() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get__jointRotations() ;

constexpr void __cordl_internal_set__fingersFreedom(::ArrayW<::Oculus::Interaction::Input::JointFreedom>  value) ;

constexpr void __cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__jointRotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

/// @brief Method .ctor, addr 0xa4e1f04, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa4e338c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method .ctor, addr 0xa4e2bdc, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::HandGrab::HandPose*  other) ;

/// @brief Method get_FingersFreedom, addr 0xa4e3310, size 0x7c, virtual false, abstract: false, final false
inline ::ArrayW<::Oculus::Interaction::Input::JointFreedom> get_FingersFreedom() ;

/// @brief Method get_Handedness, addr 0xa4e32f8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_JointRotations, addr 0xa4e29cc, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Quaternion> get_JointRotations() ;

/// @brief Method set_Handedness, addr 0xa4e3300, size 0x8, virtual false, abstract: false, final false
inline void set_Handedness(::Oculus::Interaction::Input::Handedness  value) ;

/// @brief Method set_JointRotations, addr 0xa4e3308, size 0x8, virtual false, abstract: false, final false
inline void set_JointRotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPose", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPose(HandPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPose(HandPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16332};

/// [SerializeField]
/// @brief Field _handedness, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____handedness;

/// [SerializeField]
/// @brief Field _fingersFreedom, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::JointFreedom>  ____fingersFreedom;

/// [SerializeField]
/// @brief Field _jointRotations, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ____jointRotations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandPose, ____handedness) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandPose, ____fingersFreedom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandPose, ____jointRotations) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandPose) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
