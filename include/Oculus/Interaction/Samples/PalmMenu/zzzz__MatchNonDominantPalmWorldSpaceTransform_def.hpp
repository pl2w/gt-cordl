#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PalmMenu/MatchNonDominantPalmWorldSpaceTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MatchNonDominantPalmWorldSpaceTransform)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Samples::PalmMenu {
class MatchNonDominantPalmWorldSpaceTransform;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform*, "Oculus.Interaction.Samples.PalmMenu", "MatchNonDominantPalmWorldSpaceTransform");
// [Obsolete("Use a combination of DominantHandRef and HandJoint instead")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples::PalmMenu {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PalmMenu.MatchNonDominantPalmWorldSpaceTransform
class CORDL_TYPE MatchNonDominantPalmWorldSpaceTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_LeftHand, put=set_LeftHand)) ::Oculus::Interaction::Input::IHand*  LeftHand;

 __declspec(property(get=get_RightHand, put=set_RightHand)) ::Oculus::Interaction::Input::IHand*  RightHand;

/// @brief Field <LeftHand>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__LeftHand_k__BackingField, put=__cordl_internal_set__LeftHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _LeftHand_k__BackingField;

/// @brief Field <RightHand>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__RightHand_k__BackingField, put=__cordl_internal_set__RightHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _RightHand_k__BackingField;

/// @brief Field _leftAimPoint, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__leftAimPoint, put=__cordl_internal_set__leftAimPoint)) ::UnityEngine::Vector3  _leftAimPoint;

/// @brief Field _leftAnchorPoint, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__leftAnchorPoint, put=__cordl_internal_set__leftAnchorPoint)) ::UnityEngine::Vector3  _leftAnchorPoint;

/// @brief Field _leftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::UnityEngine::Object>  _leftHand;

/// @brief Field _rightAimPoint, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__rightAimPoint, put=__cordl_internal_set__rightAimPoint)) ::UnityEngine::Vector3  _rightAimPoint;

/// @brief Field _rightAnchorPoint, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__rightAnchorPoint, put=__cordl_internal_set__rightAnchorPoint)) ::UnityEngine::Vector3  _rightAnchorPoint;

/// @brief Field _rightHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::UnityEngine::Object>  _rightHand;

/// @brief Method Awake, addr 0xa4410b4, size 0x74, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform* New_ctor() ;

/// @brief Method Update, addr 0xa441128, size 0x4fc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__LeftHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__LeftHand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__RightHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__RightHand_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__leftAimPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__leftAimPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__leftAnchorPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__leftAnchorPoint() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__leftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightAimPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightAimPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightAnchorPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightAnchorPoint() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__rightHand() ;

constexpr void __cordl_internal_set__LeftHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__RightHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__leftAimPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__leftAnchorPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rightAimPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rightAnchorPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa441624, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LeftHand, addr 0xa441094, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_LeftHand() ;

/// [CompilerGenerated]
/// @brief Method get_RightHand, addr 0xa4410a4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_RightHand() ;

/// [CompilerGenerated]
/// @brief Method set_LeftHand, addr 0xa44109c, size 0x8, virtual false, abstract: false, final false
inline void set_LeftHand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RightHand, addr 0xa4410ac, size 0x8, virtual false, abstract: false, final false
inline void set_RightHand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchNonDominantPalmWorldSpaceTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchNonDominantPalmWorldSpaceTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchNonDominantPalmWorldSpaceTransform(MatchNonDominantPalmWorldSpaceTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchNonDominantPalmWorldSpaceTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchNonDominantPalmWorldSpaceTransform(MatchNonDominantPalmWorldSpaceTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28352};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _leftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____leftHand;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _rightHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____rightHand;

/// [SerializeField]
/// @brief Field _leftAnchorPoint, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____leftAnchorPoint;

/// [SerializeField]
/// @brief Field _leftAimPoint, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____leftAimPoint;

/// [SerializeField]
/// @brief Field _rightAnchorPoint, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rightAnchorPoint;

/// [SerializeField]
/// @brief Field _rightAimPoint, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rightAimPoint;

/// [CompilerGenerated]
/// @brief Field <LeftHand>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____LeftHand_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RightHand>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____RightHand_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____rightHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____leftAnchorPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____leftAimPoint) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____rightAnchorPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____rightAimPoint) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____LeftHand_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform, ____RightHand_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PalmMenu::MatchNonDominantPalmWorldSpaceTransform) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples::PalmMenu
