#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPurchaseTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIPurchaseTerminal_PurchaseTerminalState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIPurchaseTerminal)
namespace GlobalNamespace {
class ITouchScreenStation;
}
namespace GlobalNamespace {
struct SIPurchaseTerminal_PurchaseTerminalState;
}
namespace GlobalNamespace {
class SIScreenRegion;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SIPurchaseTerminal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIPurchaseTerminal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIPurchaseTerminal*, "", "SIPurchaseTerminal");
// [DefaultExecutionOrder(500)]
// Dependencies SIPurchaseTerminal::PurchaseTerminalState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIPurchaseTerminal
class CORDL_TYPE SIPurchaseTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PurchaseTerminalState = ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState;

/// @brief Field ConfirmPurchasePopupScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConfirmPurchasePopupScreen, put=__cordl_internal_set_ConfirmPurchasePopupScreen)) ::UnityW<::UnityEngine::GameObject>  ConfirmPurchasePopupScreen;

/// @brief Field ConfirmPurchaseShinyRockCount, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConfirmPurchaseShinyRockCount, put=__cordl_internal_set_ConfirmPurchaseShinyRockCount)) ::UnityW<::TMPro::TextMeshProUGUI>  ConfirmPurchaseShinyRockCount;

/// @brief Field ConfirmPurchaseTechPointCount, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConfirmPurchaseTechPointCount, put=__cordl_internal_set_ConfirmPurchaseTechPointCount)) ::UnityW<::TMPro::TextMeshProUGUI>  ConfirmPurchaseTechPointCount;

/// @brief Field InsufficientFundsPopupScreen, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_InsufficientFundsPopupScreen, put=__cordl_internal_set_InsufficientFundsPopupScreen)) ::UnityW<::UnityEngine::GameObject>  InsufficientFundsPopupScreen;

/// @brief Field PendingPurchasePopupScreen, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PendingPurchasePopupScreen, put=__cordl_internal_set_PendingPurchasePopupScreen)) ::UnityW<::UnityEngine::GameObject>  PendingPurchasePopupScreen;

/// @brief Field PopupBackgroundScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PopupBackgroundScreen, put=__cordl_internal_set_PopupBackgroundScreen)) ::UnityW<::UnityEngine::GameObject>  PopupBackgroundScreen;

/// @brief Field PurchaseAmountCurrentShinyRockCount, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseAmountCurrentShinyRockCount, put=__cordl_internal_set_PurchaseAmountCurrentShinyRockCount)) ::UnityW<::TMPro::TextMeshProUGUI>  PurchaseAmountCurrentShinyRockCount;

/// @brief Field PurchaseAmountCurrentTechPointsCount, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseAmountCurrentTechPointsCount, put=__cordl_internal_set_PurchaseAmountCurrentTechPointsCount)) ::UnityW<::TMPro::TextMeshProUGUI>  PurchaseAmountCurrentTechPointsCount;

/// @brief Field PurchaseAmountShinyRockCount, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseAmountShinyRockCount, put=__cordl_internal_set_PurchaseAmountShinyRockCount)) ::UnityW<::TMPro::TextMeshProUGUI>  PurchaseAmountShinyRockCount;

/// @brief Field PurchaseAmountTechPointCount, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseAmountTechPointCount, put=__cordl_internal_set_PurchaseAmountTechPointCount)) ::UnityW<::TMPro::TextMeshProUGUI>  PurchaseAmountTechPointCount;

/// @brief Field PurchaseCompletePopupScreen, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseCompletePopupScreen, put=__cordl_internal_set_PurchaseCompletePopupScreen)) ::UnityW<::UnityEngine::GameObject>  PurchaseCompletePopupScreen;

/// @brief Field PurchasedTechPointCount, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchasedTechPointCount, put=__cordl_internal_set_PurchasedTechPointCount)) ::UnityW<::TMPro::TextMeshProUGUI>  PurchasedTechPointCount;

 __declspec(property(get=get_ScreenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  ScreenRegion;

/// @brief Field UnableToCompletePurchasePopupScreen, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnableToCompletePurchasePopupScreen, put=__cordl_internal_set_UnableToCompletePurchasePopupScreen)) ::UnityW<::UnityEngine::GameObject>  UnableToCompletePurchasePopupScreen;

/// @brief Field costPerTechPoint, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_costPerTechPoint, put=__cordl_internal_set_costPerTechPoint)) int32_t  costPerTechPoint;

/// @brief Field currentState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  currentState;

/// @brief Field maxPurchaseSize, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPurchaseSize, put=__cordl_internal_set_maxPurchaseSize)) int32_t  maxPurchaseSize;

/// @brief Field minPurchaseSize, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minPurchaseSize, put=__cordl_internal_set_minPurchaseSize)) int32_t  minPurchaseSize;

/// @brief Field purchaseSize, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_purchaseSize, put=__cordl_internal_set_purchaseSize)) int32_t  purchaseSize;

/// @brief Field screenRegion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenRegion, put=__cordl_internal_set_screenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  screenRegion;

/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr operator  ::GlobalNamespace::ITouchScreenStation*() noexcept;

/// @brief Method AddButton, addr 0x59ea8c4, size 0x4, virtual true, abstract: false, final true
inline void AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton) ;

/// @brief Method ConfirmPurchase, addr 0x59eaa44, size 0x188, virtual false, abstract: false, final false
inline void ConfirmPurchase() ;

/// @brief Method DecreasePurcahse, addr 0x59ea9d0, size 0x74, virtual false, abstract: false, final false
inline void DecreasePurcahse() ;

/// @brief Method DelayedOnEnable, addr 0x59ea278, size 0x260, virtual false, abstract: false, final false
inline void DelayedOnEnable() ;

/// @brief Method ITouchScreenStation.get_gameObject, addr 0x59eacf0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> ITouchScreenStation_get_gameObject() ;

/// @brief Method IncreasePurchase, addr 0x59ea95c, size 0x74, virtual false, abstract: false, final false
inline void IncreasePurchase() ;

static inline ::GlobalNamespace::SIPurchaseTerminal* New_ctor() ;

/// @brief Method OnDisable, addr 0x59ea728, size 0x104, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59ea100, size 0x178, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateCurrencyBalance, addr 0x59ea4d8, size 0x9c, virtual false, abstract: false, final false
inline void OnUpdateCurrencyBalance() ;

/// @brief Method ReturnToBaseScreen, addr 0x59eabcc, size 0xc, virtual false, abstract: false, final false
inline void ReturnToBaseScreen() ;

/// @brief Method SelectPurchase, addr 0x59ea950, size 0xc, virtual false, abstract: false, final false
inline void SelectPurchase() ;

/// @brief Method SetScreenVisibility, addr 0x59eabdc, size 0x100, virtual false, abstract: false, final false
inline void SetScreenVisibility(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  screenState, bool  isEnabled) ;

/// @brief Method TouchscreenButtonPressed, addr 0x59ea8c8, size 0x88, virtual true, abstract: false, final true
inline void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr) ;

/// @brief Method TouchscreenToggleButtonPressed, addr 0x59eabd8, size 0x4, virtual true, abstract: false, final true
inline void TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn) ;

/// @brief Method UpdateCurrentTechPoints, addr 0x59ea82c, size 0x98, virtual false, abstract: false, final false
inline void UpdateCurrentTechPoints() ;

/// @brief Method UpdatePurchaseAmount, addr 0x59ea5cc, size 0x15c, virtual false, abstract: false, final false
inline void UpdatePurchaseAmount() ;

/// @brief Method UpdateState, addr 0x59ea574, size 0x58, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  newState, bool  forceUpdate) ;

/// [CompilerGenerated]
/// @brief Method <ConfirmPurchase>b__34_0, addr 0x59eacf8, size 0xa8, virtual false, abstract: false, final false
inline void _ConfirmPurchase_b__34_0() ;

/// [CompilerGenerated]
/// @brief Method <ConfirmPurchase>b__34_1, addr 0x59eada0, size 0xa0, virtual false, abstract: false, final false
inline void _ConfirmPurchase_b__34_1(::StringW  error) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ConfirmPurchasePopupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ConfirmPurchasePopupScreen() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_ConfirmPurchaseShinyRockCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_ConfirmPurchaseShinyRockCount() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_ConfirmPurchaseTechPointCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_ConfirmPurchaseTechPointCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_InsufficientFundsPopupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_InsufficientFundsPopupScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_PendingPurchasePopupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_PendingPurchasePopupScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_PopupBackgroundScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_PopupBackgroundScreen() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_PurchaseAmountCurrentShinyRockCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_PurchaseAmountCurrentShinyRockCount() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_PurchaseAmountCurrentTechPointsCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_PurchaseAmountCurrentTechPointsCount() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_PurchaseAmountShinyRockCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_PurchaseAmountShinyRockCount() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_PurchaseAmountTechPointCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_PurchaseAmountTechPointCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_PurchaseCompletePopupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_PurchaseCompletePopupScreen() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_PurchasedTechPointCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_PurchasedTechPointCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_UnableToCompletePurchasePopupScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_UnableToCompletePurchasePopupScreen() ;

constexpr int32_t const& __cordl_internal_get_costPerTechPoint() const;

constexpr int32_t& __cordl_internal_get_costPerTechPoint() ;

constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState& __cordl_internal_get_currentState() ;

constexpr int32_t const& __cordl_internal_get_maxPurchaseSize() const;

constexpr int32_t& __cordl_internal_get_maxPurchaseSize() ;

constexpr int32_t const& __cordl_internal_get_minPurchaseSize() const;

constexpr int32_t& __cordl_internal_get_minPurchaseSize() ;

constexpr int32_t const& __cordl_internal_get_purchaseSize() const;

constexpr int32_t& __cordl_internal_get_purchaseSize() ;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& __cordl_internal_get_screenRegion() const;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& __cordl_internal_get_screenRegion() ;

constexpr void __cordl_internal_set_ConfirmPurchasePopupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ConfirmPurchaseShinyRockCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_ConfirmPurchaseTechPointCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_InsufficientFundsPopupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PendingPurchasePopupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PopupBackgroundScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PurchaseAmountCurrentShinyRockCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_PurchaseAmountCurrentTechPointsCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_PurchaseAmountShinyRockCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_PurchaseAmountTechPointCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_PurchaseCompletePopupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PurchasedTechPointCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_UnableToCompletePurchasePopupScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_costPerTechPoint(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  value) ;

constexpr void __cordl_internal_set_maxPurchaseSize(int32_t  value) ;

constexpr void __cordl_internal_set_minPurchaseSize(int32_t  value) ;

constexpr void __cordl_internal_set_purchaseSize(int32_t  value) ;

constexpr void __cordl_internal_set_screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value) ;

/// @brief Method .ctor, addr 0x59eacdc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ScreenRegion, addr 0x59ea0f8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SIScreenRegion> get_ScreenRegion() ;

/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* i___GlobalNamespace__ITouchScreenStation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIPurchaseTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIPurchaseTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIPurchaseTerminal(SIPurchaseTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIPurchaseTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIPurchaseTerminal(SIPurchaseTerminal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{335};

/// @brief Field currentState, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  ___currentState;

/// [SerializeField]
/// @brief Field screenRegion, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIScreenRegion>  ___screenRegion;

/// [SerializeField]
/// @brief Field PopupBackgroundScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___PopupBackgroundScreen;

/// [SerializeField]
/// @brief Field ConfirmPurchasePopupScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ConfirmPurchasePopupScreen;

/// [SerializeField]
/// @brief Field PurchaseCompletePopupScreen, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___PurchaseCompletePopupScreen;

/// [SerializeField]
/// @brief Field PendingPurchasePopupScreen, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___PendingPurchasePopupScreen;

/// [SerializeField]
/// @brief Field InsufficientFundsPopupScreen, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___InsufficientFundsPopupScreen;

/// [SerializeField]
/// @brief Field UnableToCompletePurchasePopupScreen, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___UnableToCompletePurchasePopupScreen;

/// [SerializeField]
/// @brief Field PurchaseAmountShinyRockCount, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___PurchaseAmountShinyRockCount;

/// [SerializeField]
/// @brief Field PurchaseAmountTechPointCount, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___PurchaseAmountTechPointCount;

/// [SerializeField]
/// @brief Field PurchaseAmountCurrentShinyRockCount, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___PurchaseAmountCurrentShinyRockCount;

/// [SerializeField]
/// @brief Field PurchaseAmountCurrentTechPointsCount, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___PurchaseAmountCurrentTechPointsCount;

/// [SerializeField]
/// @brief Field ConfirmPurchaseShinyRockCount, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___ConfirmPurchaseShinyRockCount;

/// [SerializeField]
/// @brief Field ConfirmPurchaseTechPointCount, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___ConfirmPurchaseTechPointCount;

/// [SerializeField]
/// @brief Field PurchasedTechPointCount, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___PurchasedTechPointCount;

/// [SerializeField]
/// @brief Field maxPurchaseSize, offset: 0x98, size: 0x4, def value: None
 int32_t  ___maxPurchaseSize;

/// [SerializeField]
/// @brief Field minPurchaseSize, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___minPurchaseSize;

/// [SerializeField]
/// @brief Field costPerTechPoint, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___costPerTechPoint;

/// @brief Field purchaseSize, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___purchaseSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___currentState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___screenRegion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PopupBackgroundScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___ConfirmPurchasePopupScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PurchaseCompletePopupScreen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PendingPurchasePopupScreen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___InsufficientFundsPopupScreen) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___UnableToCompletePurchasePopupScreen) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PurchaseAmountShinyRockCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PurchaseAmountTechPointCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PurchaseAmountCurrentShinyRockCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PurchaseAmountCurrentTechPointsCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___ConfirmPurchaseShinyRockCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___ConfirmPurchaseTechPointCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___PurchasedTechPointCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___maxPurchaseSize) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___minPurchaseSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___costPerTechPoint) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPurchaseTerminal, ___purchaseSize) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIPurchaseTerminal) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
