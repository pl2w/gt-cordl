#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/FeatureToggleUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureToggleUI)
namespace GlobalNamespace {
class SITouchscreenButtonContainer;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GorillaTagScripts::Subscription {
class FeatureToggleUI___c__DisplayClass12_0;
}
namespace GorillaTagScripts::Subscription {
class FeatureTogglesScreen_Feature;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription {
class FeatureToggleUI;
}
namespace GorillaTagScripts::Subscription {
class FeatureToggleUI___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::FeatureToggleUI*);
MARK_REF_T(::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FeatureToggleUI*, "GorillaTagScripts.Subscription", "FeatureToggleUI");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*, "GorillaTagScripts.Subscription", "FeatureToggleUI/<>c__DisplayClass12_0");
// [RequireComponent(typeof(SITouchscreenButtonContainer))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FeatureToggleUI
class CORDL_TYPE FeatureToggleUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass12_0 = ::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0;

 __declspec(property(get=get_ButtonContainer, put=set_ButtonContainer)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ButtonContainer;

 __declspec(property(get=get_LabelText, put=set_LabelText)) ::StringW  LabelText;

/// @brief Field <ButtonContainer>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ButtonContainer_k__BackingField, put=__cordl_internal_set__ButtonContainer_k__BackingField)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  _ButtonContainer_k__BackingField;

/// @brief Field _disableUntil, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__disableUntil, put=__cordl_internal_set__disableUntil)) float_t  _disableUntil;

/// @brief Field _label, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _unavailable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__unavailable, put=__cordl_internal_set__unavailable)) ::UnityW<::TMPro::TextMeshPro>  _unavailable;

/// @brief Method AttachToFeature, addr 0x5bf5e8c, size 0x2f8, virtual false, abstract: false, final false
inline void AttachToFeature(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  feature) ;

/// @brief Method Awake, addr 0x5bf625c, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::Subscription::FeatureToggleUI* New_ctor() ;

/// @brief Method OnPressed, addr 0x5bf62cc, size 0xdc, virtual false, abstract: false, final false
inline void OnPressed(int32_t  actorNr, ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  feature) ;

/// @brief Method OnToggled, addr 0x5bf63a8, size 0x128, virtual false, abstract: false, final false
inline void OnToggled(int32_t  actorNr, ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  feature, bool  state) ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& __cordl_internal_get__ButtonContainer_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& __cordl_internal_get__ButtonContainer_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__disableUntil() const;

constexpr float_t& __cordl_internal_get__disableUntil() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__unavailable() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__unavailable() ;

constexpr void __cordl_internal_set__ButtonContainer_k__BackingField(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value) ;

constexpr void __cordl_internal_set__disableUntil(float_t  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__unavailable(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x5bf64d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ButtonContainer, addr 0x5bf620c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> get_ButtonContainer() ;

/// @brief Method get_LabelText, addr 0x5bf621c, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_LabelText() ;

/// [CompilerGenerated]
/// @brief Method set_ButtonContainer, addr 0x5bf6214, size 0x8, virtual false, abstract: false, final false
inline void set_ButtonContainer(::GlobalNamespace::SITouchscreenButtonContainer*  value) ;

/// @brief Method set_LabelText, addr 0x5bf623c, size 0x20, virtual false, abstract: false, final false
inline void set_LabelText(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureToggleUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureToggleUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureToggleUI(FeatureToggleUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureToggleUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureToggleUI(FeatureToggleUI const& ) = delete;

/// @brief Field DEBOUNCE_TIME offset 0xffffffff size 0x4
static constexpr float_t  DEBOUNCE_TIME{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4085};

/// [CompilerGenerated]
/// @brief Field <ButtonContainer>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ____ButtonContainer_k__BackingField;

/// [SerializeField]
/// @brief Field _label, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// [SerializeField]
/// @brief Field _unavailable, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____unavailable;

/// @brief Field _disableUntil, offset: 0x38, size: 0x4, def value: None
 float_t  ____disableUntil;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureToggleUI, ____ButtonContainer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureToggleUI, ____label) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureToggleUI, ____unavailable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureToggleUI, ____disableUntil) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::FeatureToggleUI) == 0x40, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FeatureToggleUI/<>c__DisplayClass12_0
class CORDL_TYPE FeatureToggleUI___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>  __4__this;

/// @brief Field feature, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_feature, put=__cordl_internal_set_feature)) ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  feature;

static inline ::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <AttachToFeature>b__0, addr 0x5bf64e0, size 0x20, virtual false, abstract: false, final false
inline void _AttachToFeature_b__0(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  nr) ;

/// @brief Method <AttachToFeature>b__1, addr 0x5bf6500, size 0x24, virtual false, abstract: false, final false
inline void _AttachToFeature_b__1(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  nr, bool  state) ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>& __cordl_internal_get___4__this() ;

constexpr ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature* const& __cordl_internal_get_feature() const;

constexpr ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*& __cordl_internal_get_feature() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>  value) ;

constexpr void __cordl_internal_set_feature(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  value) ;

/// @brief Method .ctor, addr 0x5bf62c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureToggleUI___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureToggleUI___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureToggleUI___c__DisplayClass12_0(FeatureToggleUI___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureToggleUI___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureToggleUI___c__DisplayClass12_0(FeatureToggleUI___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4084};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>  _____4__this;

/// @brief Field feature, offset: 0x18, size: 0x8, def value: None
 ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  ___feature;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0, ___feature) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
