#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabStrengthIndicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabStrengthIndicator)
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractor;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class GrabStrengthIndicator;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabStrengthIndicator*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabStrengthIndicator*, "Oculus.Interaction", "GrabStrengthIndicator");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GrabStrengthIndicator
class CORDL_TYPE GrabStrengthIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_FingerGlowColorHover, put=set_FingerGlowColorHover)) ::UnityEngine::Color  FingerGlowColorHover;

 __declspec(property(get=get_FingerGlowColorWithInteractable, put=set_FingerGlowColorWithInteractable)) ::UnityEngine::Color  FingerGlowColorWithInteractable;

 __declspec(property(get=get_FingerGlowColorWithNoInteractable, put=set_FingerGlowColorWithNoInteractable)) ::UnityEngine::Color  FingerGlowColorWithNoInteractable;

 __declspec(property(get=get_GlowColorLerpSpeed, put=set_GlowColorLerpSpeed)) float_t  GlowColorLerpSpeed;

 __declspec(property(get=get_GlowLerpSpeed, put=set_GlowLerpSpeed)) float_t  GlowLerpSpeed;

 __declspec(property(get=get_HandGrab, put=set_HandGrab)) ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  HandGrab;

 __declspec(property(get=get_Interactor, put=set_Interactor)) ::Oculus::Interaction::IInteractor*  Interactor;

/// @brief Field <HandGrab>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandGrab_k__BackingField, put=__cordl_internal_set__HandGrab_k__BackingField)) ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  _HandGrab_k__BackingField;

/// @brief Field <Interactor>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Interactor_k__BackingField, put=__cordl_internal_set__Interactor_k__BackingField)) ::Oculus::Interaction::IInteractor*  _Interactor_k__BackingField;

/// @brief Field _currentGlowColor, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentGlowColor, put=__cordl_internal_set__currentGlowColor)) ::UnityEngine::Color  _currentGlowColor;

/// @brief Field _fingerGlowColorHover, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__fingerGlowColorHover, put=__cordl_internal_set__fingerGlowColorHover)) ::UnityEngine::Color  _fingerGlowColorHover;

/// @brief Field _fingerGlowColorPropertyId, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingerGlowColorPropertyId, put=__cordl_internal_set__fingerGlowColorPropertyId)) int32_t  _fingerGlowColorPropertyId;

/// @brief Field _fingerGlowColorWithInteractable, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__fingerGlowColorWithInteractable, put=__cordl_internal_set__fingerGlowColorWithInteractable)) ::UnityEngine::Color  _fingerGlowColorWithInteractable;

/// @brief Field _fingerGlowColorWithNoInteractable, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__fingerGlowColorWithNoInteractable, put=__cordl_internal_set__fingerGlowColorWithNoInteractable)) ::UnityEngine::Color  _fingerGlowColorWithNoInteractable;

/// @brief Field _glowColorLerpSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowColorLerpSpeed, put=__cordl_internal_set__glowColorLerpSpeed)) float_t  _glowColorLerpSpeed;

/// @brief Field _glowLerpSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowLerpSpeed, put=__cordl_internal_set__glowLerpSpeed)) float_t  _glowLerpSpeed;

/// @brief Field _handGrabInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractor, put=__cordl_internal_set__handGrabInteractor)) ::UnityW<::UnityEngine::Object>  _handGrabInteractor;

/// @brief Field _handMaterialPropertyBlockEditor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handMaterialPropertyBlockEditor, put=__cordl_internal_set__handMaterialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _handMaterialPropertyBlockEditor;

/// @brief Field _handShaderGlowPropertyIds, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__handShaderGlowPropertyIds, put=__cordl_internal_set__handShaderGlowPropertyIds)) ::ArrayW<int32_t>  _handShaderGlowPropertyIds;

/// @brief Field _started, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa4031e8, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllGrabStrengthIndicator, addr 0xa403ec4, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllGrabStrengthIndicator(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor) ;

/// @brief Method InjectHandGrab, addr 0xa403ef0, size 0x100, virtual false, abstract: false, final false
inline void InjectHandGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrab) ;

/// @brief Method InjectHandMaterialPropertyBlockEditor, addr 0xa403ff0, size 0x8, virtual false, abstract: false, final false
inline void InjectHandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor) ;

static inline ::Oculus::Interaction::GrabStrengthIndicator* New_ctor() ;

/// @brief Method OnDisable, addr 0xa40339c, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa40329c, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa403278, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateGlowValue, addr 0xa403de4, size 0xe0, virtual false, abstract: false, final false
inline void UpdateGlowValue(int32_t  fingerIndex, float_t  glowValue) ;

/// @brief Method UpdateVisual, addr 0xa40349c, size 0x948, virtual false, abstract: false, final false
inline void UpdateVisual() ;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& __cordl_internal_get__HandGrab_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& __cordl_internal_get__HandGrab_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get__Interactor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get__Interactor_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentGlowColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentGlowColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__fingerGlowColorHover() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__fingerGlowColorHover() ;

constexpr int32_t const& __cordl_internal_get__fingerGlowColorPropertyId() const;

constexpr int32_t& __cordl_internal_get__fingerGlowColorPropertyId() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__fingerGlowColorWithInteractable() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__fingerGlowColorWithInteractable() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__fingerGlowColorWithNoInteractable() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__fingerGlowColorWithNoInteractable() ;

constexpr float_t const& __cordl_internal_get__glowColorLerpSpeed() const;

constexpr float_t& __cordl_internal_get__glowColorLerpSpeed() ;

constexpr float_t const& __cordl_internal_get__glowLerpSpeed() const;

constexpr float_t& __cordl_internal_get__glowLerpSpeed() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handGrabInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handGrabInteractor() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__handMaterialPropertyBlockEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__handMaterialPropertyBlockEditor() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__handShaderGlowPropertyIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__handShaderGlowPropertyIds() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__HandGrab_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value) ;

constexpr void __cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set__currentGlowColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fingerGlowColorHover(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fingerGlowColorPropertyId(int32_t  value) ;

constexpr void __cordl_internal_set__fingerGlowColorWithInteractable(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fingerGlowColorWithNoInteractable(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__glowColorLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__glowLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__handShaderGlowPropertyIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa403ff8, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FingerGlowColorHover, addr 0xa4031d0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_FingerGlowColorHover() ;

/// @brief Method get_FingerGlowColorWithInteractable, addr 0xa4031a0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_FingerGlowColorWithInteractable() ;

/// @brief Method get_FingerGlowColorWithNoInteractable, addr 0xa4031b8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_FingerGlowColorWithNoInteractable() ;

/// @brief Method get_GlowColorLerpSpeed, addr 0xa403190, size 0x8, virtual false, abstract: false, final false
inline float_t get_GlowColorLerpSpeed() ;

/// @brief Method get_GlowLerpSpeed, addr 0xa403180, size 0x8, virtual false, abstract: false, final false
inline float_t get_GlowLerpSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_HandGrab, addr 0xa403160, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractor* get_HandGrab() ;

/// [CompilerGenerated]
/// @brief Method get_Interactor, addr 0xa403170, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractor* get_Interactor() ;

/// @brief Method set_FingerGlowColorHover, addr 0xa4031dc, size 0xc, virtual false, abstract: false, final false
inline void set_FingerGlowColorHover(::UnityEngine::Color  value) ;

/// @brief Method set_FingerGlowColorWithInteractable, addr 0xa4031ac, size 0xc, virtual false, abstract: false, final false
inline void set_FingerGlowColorWithInteractable(::UnityEngine::Color  value) ;

/// @brief Method set_FingerGlowColorWithNoInteractable, addr 0xa4031c4, size 0xc, virtual false, abstract: false, final false
inline void set_FingerGlowColorWithNoInteractable(::UnityEngine::Color  value) ;

/// @brief Method set_GlowColorLerpSpeed, addr 0xa403198, size 0x8, virtual false, abstract: false, final false
inline void set_GlowColorLerpSpeed(float_t  value) ;

/// @brief Method set_GlowLerpSpeed, addr 0xa403188, size 0x8, virtual false, abstract: false, final false
inline void set_GlowLerpSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_HandGrab, addr 0xa403168, size 0x8, virtual false, abstract: false, final false
inline void set_HandGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Interactor, addr 0xa403178, size 0x8, virtual false, abstract: false, final false
inline void set_Interactor(::Oculus::Interaction::IInteractor*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabStrengthIndicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabStrengthIndicator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabStrengthIndicator(GrabStrengthIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabStrengthIndicator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabStrengthIndicator(GrabStrengthIndicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15710};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.HandGrab.IHandGrabInteractor), new[] { typeof(Oculus.Interaction.IInteractor) })]
/// @brief Field _handGrabInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handGrabInteractor;

/// [CompilerGenerated]
/// @brief Field <HandGrab>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  ____HandGrab_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Interactor>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ____Interactor_k__BackingField;

/// [SerializeField]
/// @brief Field _handMaterialPropertyBlockEditor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____handMaterialPropertyBlockEditor;

/// [SerializeField]
/// @brief Field _glowLerpSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____glowLerpSpeed;

/// [SerializeField]
/// @brief Field _glowColorLerpSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ____glowColorLerpSpeed;

/// [SerializeField]
/// @brief Field _fingerGlowColorWithInteractable, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____fingerGlowColorWithInteractable;

/// [SerializeField]
/// @brief Field _fingerGlowColorWithNoInteractable, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____fingerGlowColorWithNoInteractable;

/// [SerializeField]
/// @brief Field _fingerGlowColorHover, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ____fingerGlowColorHover;

/// @brief Field _handShaderGlowPropertyIds, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____handShaderGlowPropertyIds;

/// @brief Field _fingerGlowColorPropertyId, offset: 0x80, size: 0x4, def value: None
 int32_t  ____fingerGlowColorPropertyId;

/// @brief Field _currentGlowColor, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentGlowColor;

/// @brief Field _started, offset: 0x94, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____handGrabInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____HandGrab_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____Interactor_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____handMaterialPropertyBlockEditor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____glowLerpSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____glowColorLerpSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____fingerGlowColorWithInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____fingerGlowColorWithNoInteractable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____fingerGlowColorHover) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____handShaderGlowPropertyIds) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____fingerGlowColorPropertyId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____currentGlowColor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabStrengthIndicator, ____started) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabStrengthIndicator) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction
