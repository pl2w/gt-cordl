#pragma once
// IWYU pragma private; include "GlobalNamespace/TryOnBundlesStand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TryOnBundleButton_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TryOnBundlesStand)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class TryOnBundleButton;
}
namespace GlobalNamespace {
struct TryOnBundlesStand__LoadBundle_d__35;
}
namespace GlobalNamespace {
class TryOnPurchaseButton;
}
namespace GorillaNetworking::Store {
class StoreBundleData;
}
namespace GorillaNetworking::Store {
class StoreBundle;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TryOnBundlesStand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TryOnBundlesStand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TryOnBundlesStand*, "", "TryOnBundlesStand");
// Dependencies TryOnBundleButton, UnityEngine.MonoBehaviour, UnityEngine.UI.Image
namespace GlobalNamespace {
// Is value type: false
// CS Name: TryOnBundlesStand
class CORDL_TYPE TryOnBundlesStand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadBundle_d__35 = ::GlobalNamespace::TryOnBundlesStand__LoadBundle_d__35;

/// @brief Field BundleIcons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundleIcons, put=__cordl_internal_set_BundleIcons)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  BundleIcons;

/// @brief Field ComputerAlreadyOwnTextTitleDataKey, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComputerAlreadyOwnTextTitleDataKey, put=__cordl_internal_set_ComputerAlreadyOwnTextTitleDataKey)) ::StringW  ComputerAlreadyOwnTextTitleDataKey;

/// @brief Field ComputerAlreadyOwnTextTitleDataValue, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComputerAlreadyOwnTextTitleDataValue, put=__cordl_internal_set_ComputerAlreadyOwnTextTitleDataValue)) ::StringW  ComputerAlreadyOwnTextTitleDataValue;

/// @brief Field ComputerDefaultTextTitleDataKey, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComputerDefaultTextTitleDataKey, put=__cordl_internal_set_ComputerDefaultTextTitleDataKey)) ::StringW  ComputerDefaultTextTitleDataKey;

/// @brief Field ComputerDefaultTextTitleDataValue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComputerDefaultTextTitleDataValue, put=__cordl_internal_set_ComputerDefaultTextTitleDataValue)) ::StringW  ComputerDefaultTextTitleDataValue;

/// @brief Field PurchaseButtonAlreadyOwnTextTitleDataKey, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataKey, put=__cordl_internal_set_PurchaseButtonAlreadyOwnTextTitleDataKey)) ::StringW  PurchaseButtonAlreadyOwnTextTitleDataKey;

/// @brief Field PurchaseButtonAlreadyOwnTextTitleDataValue, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataValue, put=__cordl_internal_set_PurchaseButtonAlreadyOwnTextTitleDataValue)) ::StringW  PurchaseButtonAlreadyOwnTextTitleDataValue;

/// @brief Field PurchaseButtonDefaultTextTitleDataKey, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseButtonDefaultTextTitleDataKey, put=__cordl_internal_set_PurchaseButtonDefaultTextTitleDataKey)) ::StringW  PurchaseButtonDefaultTextTitleDataKey;

/// @brief Field PurchaseButtonDefaultTextTitleDataValue, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseButtonDefaultTextTitleDataValue, put=__cordl_internal_set_PurchaseButtonDefaultTextTitleDataValue)) ::StringW  PurchaseButtonDefaultTextTitleDataValue;

 __declspec(property(get=get_SelectedBundlePlayFabID)) ::StringW  SelectedBundlePlayFabID;

/// @brief Field SelectedButtonIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedButtonIndex, put=__cordl_internal_set_SelectedButtonIndex)) int32_t  SelectedButtonIndex;

/// @brief Field TryOnBundleButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TryOnBundleButtons, put=__cordl_internal_set_TryOnBundleButtons)) ::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>>  TryOnBundleButtons;

/// @brief Field bError, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_bError, put=__cordl_internal_set_bError)) bool  bError;

/// @brief Field computerScreeErrorText, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_computerScreeErrorText, put=__cordl_internal_set_computerScreeErrorText)) ::StringW  computerScreeErrorText;

/// @brief Field computerScreenText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_computerScreenText, put=__cordl_internal_set_computerScreenText)) ::UnityW<::UnityEngine::UI::Text>  computerScreenText;

/// @brief Field creatorCodeProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCodeProvider, put=__cordl_internal_set_creatorCodeProvider)) ::UnityW<::UnityEngine::GameObject>  creatorCodeProvider;

/// @brief Field purchaseButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseButton, put=__cordl_internal_set_purchaseButton)) ::UnityW<::GlobalNamespace::TryOnPurchaseButton>  purchaseButton;

/// @brief Field selectedBundleImage, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedBundleImage, put=__cordl_internal_set_selectedBundleImage)) ::UnityW<::UnityEngine::UI::Image>  selectedBundleImage;

/// @brief Field storeBundles, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeBundles, put=__cordl_internal_set_storeBundles)) ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  storeBundles;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method AlreadyOwnCheck, addr 0x5781e70, size 0x130, virtual false, abstract: false, final false
inline void AlreadyOwnCheck() ;

/// @brief Method CleanUpTitleDataValues, addr 0x57804ac, size 0x110, virtual false, abstract: false, final false
static inline ::StringW CleanUpTitleDataValues(::StringW  titleDataResult) ;

/// @brief Method ClearSelectedBundle, addr 0x5781164, size 0x180, virtual false, abstract: false, final false
inline void ClearSelectedBundle() ;

/// @brief Method ErrorCompleting, addr 0x5782290, size 0x40, virtual false, abstract: false, final false
inline void ErrorCompleting() ;

/// @brief Method GetBundleComputerText, addr 0x5782168, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetBundleComputerText(::StringW  PlayFabID) ;

/// @brief Method GetComputerScreenText, addr 0x5781de8, size 0x88, virtual false, abstract: false, final false
inline ::StringW GetComputerScreenText(::StringW  playfabBundleID) ;

/// @brief Method GetPurchaseButtonText, addr 0x5781d60, size 0x88, virtual false, abstract: false, final false
inline ::StringW GetPurchaseButtonText(::StringW  playfabBundleID) ;

/// @brief Method GetTryOnButtons, addr 0x57806d0, size 0x278, virtual false, abstract: false, final false
inline void GetTryOnButtons() ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x5782330, size 0x114, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

/// @brief Method InitalizeButtons, addr 0x57805bc, size 0x114, virtual false, abstract: false, final false
inline void InitalizeButtons() ;

/// [AsyncStateMachine(typeof(TryOnBundlesStand::<LoadBundle>d__35))]
/// @brief Method LoadBundle, addr 0x578175c, size 0xd8, virtual false, abstract: false, final false
inline void LoadBundle(::GlobalNamespace::TryOnBundleButton*  pressedTryOnBundleButton, bool  isLeftHand) ;

static inline ::GlobalNamespace::TryOnBundlesStand* New_ctor() ;

/// @brief Method OnComputerAlreadyOwnTextTitleDataFailure, addr 0x5780e30, size 0xcc, virtual false, abstract: false, final false
inline void OnComputerAlreadyOwnTextTitleDataFailure(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnComputerAlreadyOwnTextTitleDataSuccess, addr 0x5780e0c, size 0x24, virtual false, abstract: false, final false
inline void OnComputerAlreadyOwnTextTitleDataSuccess(::StringW  data) ;

/// @brief Method OnComputerDefaultTextTitleDataFailure, addr 0x5780d28, size 0xe4, virtual false, abstract: false, final false
inline void OnComputerDefaultTextTitleDataFailure(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnComputerDefaultTextTitleDataSuccess, addr 0x5780ce4, size 0x44, virtual false, abstract: false, final false
inline void OnComputerDefaultTextTitleDataSuccess(::StringW  data) ;

/// @brief Method OnEnable, addr 0x5780948, size 0x64, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPurchaseButtonAlreadyOwnTextTitleDataFailure, addr 0x5781088, size 0xdc, virtual false, abstract: false, final false
inline void OnPurchaseButtonAlreadyOwnTextTitleDataFailure(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnPurchaseButtonAlreadyOwnTextTitleDataSuccess, addr 0x578104c, size 0x3c, virtual false, abstract: false, final false
inline void OnPurchaseButtonAlreadyOwnTextTitleDataSuccess(::StringW  data) ;

/// @brief Method OnPurchaseButtonDefaultTextTitleDataFailure, addr 0x5780f58, size 0xf4, virtual false, abstract: false, final false
inline void OnPurchaseButtonDefaultTextTitleDataFailure(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnPurchaseButtonDefaultTextTitleDataSuccess, addr 0x5780efc, size 0x5c, virtual false, abstract: false, final false
inline void OnPurchaseButtonDefaultTextTitleDataSuccess(::StringW  data) ;

/// @brief Method PressTryOnBundleButton, addr 0x5781834, size 0x52c, virtual false, abstract: false, final false
inline void PressTryOnBundleButton(::GlobalNamespace::TryOnBundleButton*  pressedTryOnBundleButton, bool  isLeftHand) ;

/// @brief Method PurchaseButtonPressed, addr 0x5781fa0, size 0x118, virtual false, abstract: false, final false
inline void PurchaseButtonPressed() ;

/// @brief Method RemoveBundle, addr 0x57812e4, size 0x12c, virtual false, abstract: false, final false
inline void RemoveBundle(::StringW  BundleID) ;

/// @brief Method Start, addr 0x57809ac, size 0x338, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryOnBundle, addr 0x57814c0, size 0x29c, virtual false, abstract: false, final false
inline void TryOnBundle(::StringW  BundleID) ;

/// @brief Method UpdateBundles, addr 0x5782228, size 0x68, virtual false, abstract: false, final false
inline void UpdateBundles(::ArrayW<::GorillaNetworking::Store::StoreBundleData*>  Bundles) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& __cordl_internal_get_BundleIcons() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& __cordl_internal_get_BundleIcons() ;

constexpr ::StringW const& __cordl_internal_get_ComputerAlreadyOwnTextTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_ComputerAlreadyOwnTextTitleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_ComputerAlreadyOwnTextTitleDataValue() const;

constexpr ::StringW& __cordl_internal_get_ComputerAlreadyOwnTextTitleDataValue() ;

constexpr ::StringW const& __cordl_internal_get_ComputerDefaultTextTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_ComputerDefaultTextTitleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_ComputerDefaultTextTitleDataValue() const;

constexpr ::StringW& __cordl_internal_get_ComputerDefaultTextTitleDataValue() ;

constexpr ::StringW const& __cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataValue() const;

constexpr ::StringW& __cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataValue() ;

constexpr ::StringW const& __cordl_internal_get_PurchaseButtonDefaultTextTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_PurchaseButtonDefaultTextTitleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_PurchaseButtonDefaultTextTitleDataValue() const;

constexpr ::StringW& __cordl_internal_get_PurchaseButtonDefaultTextTitleDataValue() ;

constexpr int32_t const& __cordl_internal_get_SelectedButtonIndex() const;

constexpr int32_t& __cordl_internal_get_SelectedButtonIndex() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>> const& __cordl_internal_get_TryOnBundleButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>>& __cordl_internal_get_TryOnBundleButtons() ;

constexpr bool const& __cordl_internal_get_bError() const;

constexpr bool& __cordl_internal_get_bError() ;

constexpr ::StringW const& __cordl_internal_get_computerScreeErrorText() const;

constexpr ::StringW& __cordl_internal_get_computerScreeErrorText() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_computerScreenText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_computerScreenText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_creatorCodeProvider() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_creatorCodeProvider() ;

constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton> const& __cordl_internal_get_purchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton>& __cordl_internal_get_purchaseButton() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_selectedBundleImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_selectedBundleImage() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>* const& __cordl_internal_get_storeBundles() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*& __cordl_internal_get_storeBundles() ;

constexpr void __cordl_internal_set_BundleIcons(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value) ;

constexpr void __cordl_internal_set_ComputerAlreadyOwnTextTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_ComputerAlreadyOwnTextTitleDataValue(::StringW  value) ;

constexpr void __cordl_internal_set_ComputerDefaultTextTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_ComputerDefaultTextTitleDataValue(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseButtonAlreadyOwnTextTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseButtonAlreadyOwnTextTitleDataValue(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseButtonDefaultTextTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseButtonDefaultTextTitleDataValue(::StringW  value) ;

constexpr void __cordl_internal_set_SelectedButtonIndex(int32_t  value) ;

constexpr void __cordl_internal_set_TryOnBundleButtons(::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>>  value) ;

constexpr void __cordl_internal_set_bError(bool  value) ;

constexpr void __cordl_internal_set_computerScreeErrorText(::StringW  value) ;

constexpr void __cordl_internal_set_computerScreenText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_creatorCodeProvider(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchaseButton(::UnityW<::GlobalNamespace::TryOnPurchaseButton>  value) ;

constexpr void __cordl_internal_set_selectedBundleImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_storeBundles(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  value) ;

/// @brief Method .ctor, addr 0x5782444, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SelectedBundlePlayFabID, addr 0x5780470, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_SelectedBundlePlayFabID() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TryOnBundlesStand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TryOnBundlesStand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TryOnBundlesStand(TryOnBundlesStand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryOnBundlesStand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryOnBundlesStand(TryOnBundlesStand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1403};

/// [SerializeField]
/// @brief Field TryOnBundleButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>>  ___TryOnBundleButtons;

/// [SerializeField]
/// @brief Field BundleIcons, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  ___BundleIcons;

/// [SerializeField]
/// @brief Field creatorCodeProvider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___creatorCodeProvider;

/// [Header("The Index of the Selected Bundle from CosmeticsBundle Array in CosmeticsController")]
/// @brief Field SelectedButtonIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___SelectedButtonIndex;

/// @brief Field purchaseButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TryOnPurchaseButton>  ___purchaseButton;

/// @brief Field selectedBundleImage, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___selectedBundleImage;

/// @brief Field computerScreenText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___computerScreenText;

/// @brief Field ComputerDefaultTextTitleDataKey, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ComputerDefaultTextTitleDataKey;

/// [SerializeField]
/// @brief Field ComputerDefaultTextTitleDataValue, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___ComputerDefaultTextTitleDataValue;

/// @brief Field ComputerAlreadyOwnTextTitleDataKey, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___ComputerAlreadyOwnTextTitleDataKey;

/// [SerializeField]
/// @brief Field ComputerAlreadyOwnTextTitleDataValue, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___ComputerAlreadyOwnTextTitleDataValue;

/// @brief Field PurchaseButtonDefaultTextTitleDataKey, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___PurchaseButtonDefaultTextTitleDataKey;

/// [SerializeField]
/// @brief Field PurchaseButtonDefaultTextTitleDataValue, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___PurchaseButtonDefaultTextTitleDataValue;

/// @brief Field PurchaseButtonAlreadyOwnTextTitleDataKey, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___PurchaseButtonAlreadyOwnTextTitleDataKey;

/// [SerializeField]
/// @brief Field PurchaseButtonAlreadyOwnTextTitleDataValue, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___PurchaseButtonAlreadyOwnTextTitleDataValue;

/// @brief Field bError, offset: 0x98, size: 0x1, def value: None
 bool  ___bError;

/// [Header("Error Text for Computer Screen")]
/// @brief Field computerScreeErrorText, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___computerScreeErrorText;

/// @brief Field storeBundles, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  ___storeBundles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___TryOnBundleButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___BundleIcons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___creatorCodeProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___SelectedButtonIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___purchaseButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___selectedBundleImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___computerScreenText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___ComputerDefaultTextTitleDataKey) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___ComputerDefaultTextTitleDataValue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___ComputerAlreadyOwnTextTitleDataKey) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___ComputerAlreadyOwnTextTitleDataValue) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___PurchaseButtonDefaultTextTitleDataKey) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___PurchaseButtonDefaultTextTitleDataValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___PurchaseButtonAlreadyOwnTextTitleDataKey) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___PurchaseButtonAlreadyOwnTextTitleDataValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___bError) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___computerScreeErrorText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnBundlesStand, ___storeBundles) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TryOnBundlesStand) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
