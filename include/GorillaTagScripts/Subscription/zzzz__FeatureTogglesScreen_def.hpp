#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/FeatureTogglesScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Subscription/zzzz__FeatureToggleUI_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionFeatures_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureTogglesScreen)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class SITouchscreenButtonContainer;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GorillaTagScripts::Subscription {
class FeatureTogglesScreen_Feature;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription {
class FeatureTogglesScreen;
}
namespace GorillaTagScripts::Subscription {
class FeatureTogglesScreen_Feature;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::FeatureTogglesScreen*);
MARK_REF_T(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FeatureTogglesScreen*, "GorillaTagScripts.Subscription", "FeatureTogglesScreen");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*, "GorillaTagScripts.Subscription", "FeatureTogglesScreen/Feature");
// Dependencies GorillaTagScripts.Subscription.FeatureToggleUI, GorillaTagScripts.Subscription.FeatureTogglesScreen::Feature, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FeatureTogglesScreen
class CORDL_TYPE FeatureTogglesScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Feature = ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature;

 __declspec(property(get=get_LastPageIndex)) int32_t  LastPageIndex;

 __declspec(property(get=get_NumPages)) int32_t  NumPages;

/// @brief Field _backButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__backButton, put=__cordl_internal_set__backButton)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  _backButton;

/// @brief Field _currentPage, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPage, put=__cordl_internal_set__currentPage)) int32_t  _currentPage;

/// @brief Field _dirty, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__dirty, put=__cordl_internal_set__dirty)) bool  _dirty;

/// @brief Field _exitButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__exitButton, put=__cordl_internal_set__exitButton)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  _exitButton;

/// @brief Field _featureToggleUi, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureToggleUi, put=__cordl_internal_set__featureToggleUi)) ::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>>  _featureToggleUi;

/// @brief Field _features, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__features, put=__cordl_internal_set__features)) ::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>  _features;

/// @brief Field _nextButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextButton, put=__cordl_internal_set__nextButton)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  _nextButton;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5bf5b2c, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MarkDirty, addr 0x5bf5c9c, size 0xc, virtual false, abstract: false, final false
inline void MarkDirty() ;

static inline ::GorillaTagScripts::Subscription::FeatureTogglesScreen* New_ctor() ;

/// @brief Method OnBackButtonPressed, addr 0x5bf5cec, size 0x1c, virtual false, abstract: false, final false
inline void OnBackButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr) ;

/// @brief Method OnDisable, addr 0x5bf5e80, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bf5e5c, size 0x24, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnExitButtonPressed, addr 0x5bf5d08, size 0x4, virtual false, abstract: false, final false
inline void OnExitButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr) ;

/// @brief Method OnNextButtonPressed, addr 0x5bf5ca8, size 0x44, virtual false, abstract: false, final false
inline void OnNextButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr) ;

/// @brief Method SliceUpdate, addr 0x5bf5d0c, size 0x90, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateFeatureToggleUI, addr 0x5bf5d9c, size 0xc0, virtual false, abstract: false, final false
inline void UpdateFeatureToggleUI() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& __cordl_internal_get__backButton() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& __cordl_internal_get__backButton() ;

constexpr int32_t const& __cordl_internal_get__currentPage() const;

constexpr int32_t& __cordl_internal_get__currentPage() ;

constexpr bool const& __cordl_internal_get__dirty() const;

constexpr bool& __cordl_internal_get__dirty() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& __cordl_internal_get__exitButton() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& __cordl_internal_get__exitButton() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>> const& __cordl_internal_get__featureToggleUi() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>>& __cordl_internal_get__featureToggleUi() ;

constexpr ::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*> const& __cordl_internal_get__features() const;

constexpr ::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>& __cordl_internal_get__features() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& __cordl_internal_get__nextButton() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& __cordl_internal_get__nextButton() ;

constexpr void __cordl_internal_set__backButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value) ;

constexpr void __cordl_internal_set__currentPage(int32_t  value) ;

constexpr void __cordl_internal_set__dirty(bool  value) ;

constexpr void __cordl_internal_set__exitButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value) ;

constexpr void __cordl_internal_set__featureToggleUi(::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>>  value) ;

constexpr void __cordl_internal_set__features(::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>  value) ;

constexpr void __cordl_internal_set__nextButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value) ;

/// @brief Method .ctor, addr 0x5bf6184, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LastPageIndex, addr 0x5bf5a9c, size 0x90, virtual false, abstract: false, final false
inline int32_t get_LastPageIndex() ;

/// @brief Method get_NumPages, addr 0x5bf5a60, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_NumPages() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureTogglesScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureTogglesScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureTogglesScreen(FeatureTogglesScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureTogglesScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureTogglesScreen(FeatureTogglesScreen const& ) = delete;

/// @brief Field TogglesPerPage offset 0xffffffff size 0x4
static constexpr int32_t  TogglesPerPage{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4083};

/// [SerializeField]
/// @brief Field _features, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>  ____features;

/// [SerializeField]
/// @brief Field _nextButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ____nextButton;

/// [SerializeField]
/// @brief Field _backButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ____backButton;

/// [SerializeField]
/// @brief Field _exitButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ____exitButton;

/// [SerializeField]
/// @brief Field _featureToggleUi, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>>  ____featureToggleUi;

/// @brief Field _currentPage, offset: 0x48, size: 0x4, def value: None
 int32_t  ____currentPage;

/// @brief Field _dirty, offset: 0x4c, size: 0x1, def value: None
 bool  ____dirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen, ____features) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen, ____nextButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen, ____backButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen, ____exitButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen, ____featureToggleUi) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen, ____currentPage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen, ____dirty) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::FeatureTogglesScreen) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
// Dependencies GorillaTagScripts.SubscriptionManager::SubscriptionFeatures, System.Object
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FeatureTogglesScreen/Feature
class CORDL_TYPE FeatureTogglesScreen_Feature : public ::System::Object {
public:
// Declarations
/// @brief Field DisplayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field OnPressed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPressed, put=__cordl_internal_set_OnPressed)) ::UnityEngine::Events::UnityEvent*  OnPressed;

/// @brief Field OnToggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnToggle, put=__cordl_internal_set_OnToggle)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnToggle;

/// @brief Field UnavailableMessage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnavailableMessage, put=__cordl_internal_set_UnavailableMessage)) ::StringW  UnavailableMessage;

/// @brief Field Value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  Value;

static inline ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnPressed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnPressed() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnToggle() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnToggle() ;

constexpr ::StringW const& __cordl_internal_get_UnavailableMessage() const;

constexpr ::StringW& __cordl_internal_get_UnavailableMessage() ;

constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures const& __cordl_internal_get_Value() const;

constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_OnPressed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnToggle(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_UnavailableMessage(::StringW  value) ;

constexpr void __cordl_internal_set_Value(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  value) ;

/// @brief Method .ctor, addr 0x5bf6194, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureTogglesScreen_Feature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureTogglesScreen_Feature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureTogglesScreen_Feature(FeatureTogglesScreen_Feature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureTogglesScreen_Feature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureTogglesScreen_Feature(FeatureTogglesScreen_Feature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4082};

/// @brief Field DisplayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field Value, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  ___Value;

/// @brief Field OnPressed, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnPressed;

/// @brief Field OnToggle, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnToggle;

/// @brief Field UnavailableMessage, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___UnavailableMessage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature, ___DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature, ___Value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature, ___OnPressed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature, ___OnToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature, ___UnavailableMessage) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
