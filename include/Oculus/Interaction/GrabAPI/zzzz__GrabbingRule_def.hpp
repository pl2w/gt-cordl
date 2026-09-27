#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/GrabbingRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/GrabAPI/zzzz__FingerRequirement_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerUnselectMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GrabbingRule)
namespace Oculus::Interaction::GrabAPI {
struct FingerRequirement;
}
namespace Oculus::Interaction::GrabAPI {
struct FingerUnselectMode;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
struct GrabbingRule;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::GrabAPI::GrabbingRule);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::GrabbingRule, "Oculus.Interaction.GrabAPI", "GrabbingRule");
// [DefaultMember("Item")]
// Dependencies Oculus.Interaction.GrabAPI.FingerRequirement, Oculus.Interaction.GrabAPI.FingerUnselectMode
namespace Oculus::Interaction::GrabAPI {
// Is value type: true
// CS Name: Oculus.Interaction.GrabAPI.GrabbingRule
struct CORDL_TYPE GrabbingRule {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::Oculus::Interaction::GrabAPI::FingerRequirement  Item[];

 __declspec(property(get=get_SelectsWithOptionals)) bool  SelectsWithOptionals;

 __declspec(property(get=get_UnselectMode)) ::Oculus::Interaction::GrabAPI::FingerUnselectMode  UnselectMode;

/// @brief Field <DefaultPalmRule>k__BackingField, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__DefaultPalmRule_k__BackingField, put=setStaticF__DefaultPalmRule_k__BackingField)) ::Oculus::Interaction::GrabAPI::GrabbingRule  _DefaultPalmRule_k__BackingField;

/// @brief Field <DefaultPinchRule>k__BackingField, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__DefaultPinchRule_k__BackingField, put=setStaticF__DefaultPinchRule_k__BackingField)) ::Oculus::Interaction::GrabAPI::GrabbingRule  _DefaultPinchRule_k__BackingField;

/// @brief Field <FullGrab>k__BackingField, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__FullGrab_k__BackingField, put=setStaticF__FullGrab_k__BackingField)) ::Oculus::Interaction::GrabAPI::GrabbingRule  _FullGrab_k__BackingField;

/// @brief Method StripIrrelevant, addr 0xa4fe4c0, size 0xf0, virtual false, abstract: false, final false
inline void StripIrrelevant(::by_ref<::Oculus::Interaction::Input::HandFingerFlags>  fingerFlags) ;

/// @brief Method .ctor, addr 0xa4fe5b0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::HandFingerFlags  mask, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  otherRule) ;

static inline ::Oculus::Interaction::GrabAPI::GrabbingRule getStaticF__DefaultPalmRule_k__BackingField() ;

static inline ::Oculus::Interaction::GrabAPI::GrabbingRule getStaticF__DefaultPinchRule_k__BackingField() ;

static inline ::Oculus::Interaction::GrabAPI::GrabbingRule getStaticF__FullGrab_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_DefaultPalmRule, addr 0xa4fe67c, size 0x68, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_DefaultPalmRule() ;

/// [CompilerGenerated]
/// @brief Method get_DefaultPinchRule, addr 0xa4fe6e4, size 0x68, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_DefaultPinchRule() ;

/// [CompilerGenerated]
/// @brief Method get_FullGrab, addr 0xa4fe74c, size 0x68, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_FullGrab() ;

/// @brief Method get_Item, addr 0xa4fe418, size 0x58, virtual false, abstract: false, final false
inline ::Oculus::Interaction::GrabAPI::FingerRequirement get_Item(::Oculus::Interaction::Input::HandFinger  fingerID) ;

/// @brief Method get_SelectsWithOptionals, addr 0xa4fe3d0, size 0x48, virtual false, abstract: false, final false
inline bool get_SelectsWithOptionals() ;

/// @brief Method get_UnselectMode, addr 0xa4fe3c8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::GrabAPI::FingerUnselectMode get_UnselectMode() ;

static inline void setStaticF__DefaultPalmRule_k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule  value) ;

static inline void setStaticF__DefaultPinchRule_k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule  value) ;

static inline void setStaticF__FullGrab_k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule  value) ;

/// @brief Method set_Item, addr 0xa4fe470, size 0x50, virtual false, abstract: false, final false
inline void set_Item(::Oculus::Interaction::Input::HandFinger  fingerID, ::Oculus::Interaction::GrabAPI::FingerRequirement  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GrabbingRule() ;

// Ctor Parameters [CppParam { name: "_thumbRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: None, comment: None }, CppParam { name: "_indexRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: None, comment: None }, CppParam { name: "_middleRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ringRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pinkyRequirement", ty: "::Oculus::Interaction::GrabAPI::FingerRequirement", modifiers: "", def_value: None, comment: None }, CppParam { name: "_unselectMode", ty: "::Oculus::Interaction::GrabAPI::FingerUnselectMode", modifiers: "", def_value: None, comment: None }]
constexpr GrabbingRule(::Oculus::Interaction::GrabAPI::FingerRequirement  _thumbRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _indexRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _middleRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _ringRequirement, ::Oculus::Interaction::GrabAPI::FingerRequirement  _pinkyRequirement, ::Oculus::Interaction::GrabAPI::FingerUnselectMode  _unselectMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16430};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field _thumbRequirement, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::GrabAPI::FingerRequirement  _thumbRequirement;

/// [SerializeField]
/// @brief Field _indexRequirement, offset: 0x4, size: 0x4, def value: None
 ::Oculus::Interaction::GrabAPI::FingerRequirement  _indexRequirement;

/// [SerializeField]
/// @brief Field _middleRequirement, offset: 0x8, size: 0x4, def value: None
 ::Oculus::Interaction::GrabAPI::FingerRequirement  _middleRequirement;

/// [SerializeField]
/// @brief Field _ringRequirement, offset: 0xc, size: 0x4, def value: None
 ::Oculus::Interaction::GrabAPI::FingerRequirement  _ringRequirement;

/// [SerializeField]
/// @brief Field _pinkyRequirement, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::GrabAPI::FingerRequirement  _pinkyRequirement;

/// [SerializeField]
/// @brief Field _unselectMode, offset: 0x14, size: 0x4, def value: None
 ::Oculus::Interaction::GrabAPI::FingerUnselectMode  _unselectMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::GrabbingRule, _thumbRequirement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::GrabbingRule, _indexRequirement) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::GrabbingRule, _middleRequirement) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::GrabbingRule, _ringRequirement) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::GrabbingRule, _pinkyRequirement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::GrabbingRule, _unselectMode) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::GrabbingRule) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
