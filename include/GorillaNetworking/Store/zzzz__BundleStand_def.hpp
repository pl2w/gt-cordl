#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/BundleStand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BundleStand)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GorillaNetworking::Store {
class BundlePurchaseButton;
}
namespace GorillaNetworking::Store {
class GtfcPriceLabel;
}
namespace GorillaNetworking::Store {
class StoreBundleData;
}
namespace UnityEngine::Events {
class UnityEvent;
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
namespace GorillaNetworking::Store {
class BundleStand;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::BundleStand*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::BundleStand*, "GorillaNetworking.Store", "BundleStand");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.BundleStand
class CORDL_TYPE BundleStand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AlreadyOwnEvent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_AlreadyOwnEvent, put=__cordl_internal_set_AlreadyOwnEvent)) ::UnityEngine::Events::UnityEvent*  AlreadyOwnEvent;

/// @brief Field EditorOnlyObjects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_EditorOnlyObjects, put=__cordl_internal_set_EditorOnlyObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  EditorOnlyObjects;

/// @brief Field ErrorHappenedEvent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorHappenedEvent, put=__cordl_internal_set_ErrorHappenedEvent)) ::UnityEngine::Events::UnityEvent*  ErrorHappenedEvent;

 __declspec(property(get=get_GtfcObjects, put=set_GtfcObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  GtfcObjects;

 __declspec(property(get=get_GtfcPriceLabel, put=set_GtfcPriceLabel)) ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>  GtfcPriceLabel;

/// @brief Field <GtfcObjects>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__GtfcObjects_k__BackingField, put=__cordl_internal_set__GtfcObjects_k__BackingField)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _GtfcObjects_k__BackingField;

/// @brief Field <GtfcPriceLabel>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__GtfcPriceLabel_k__BackingField, put=__cordl_internal_set__GtfcPriceLabel_k__BackingField)) ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>  _GtfcPriceLabel_k__BackingField;

/// @brief Field _bundleDataReference, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bundleDataReference, put=__cordl_internal_set__bundleDataReference)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  _bundleDataReference;

/// @brief Field _bundleDescriptionText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__bundleDescriptionText, put=__cordl_internal_set__bundleDescriptionText)) ::UnityW<::UnityEngine::UI::Text>  _bundleDescriptionText;

/// @brief Field _bundleIcon, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__bundleIcon, put=__cordl_internal_set__bundleIcon)) ::UnityW<::UnityEngine::UI::Image>  _bundleIcon;

/// @brief Field _bundlePurchaseButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__bundlePurchaseButton, put=__cordl_internal_set__bundlePurchaseButton)) ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>  _bundlePurchaseButton;

/// @brief Field creatorCodeProvider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCodeProvider, put=__cordl_internal_set_creatorCodeProvider)) ::UnityW<::UnityEngine::GameObject>  creatorCodeProvider;

 __declspec(property(get=get_playfabBundleID)) ::StringW  playfabBundleID;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Awake, addr 0x5ca7fa0, size 0x134, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ErrorHappened, addr 0x5ca6374, size 0x18, virtual false, abstract: false, final false
inline void ErrorHappened() ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x5ca7e8c, size 0x114, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

/// @brief Method InitializeEventListeners, addr 0x5ca80d4, size 0xe0, virtual false, abstract: false, final false
inline void InitializeEventListeners() ;

static inline ::GorillaNetworking::Store::BundleStand* New_ctor() ;

/// @brief Method NotifyAlreadyOwn, addr 0x5ca66c8, size 0x18, virtual false, abstract: false, final false
inline void NotifyAlreadyOwn() ;

/// @brief Method UpdateDescriptionText, addr 0x5ca8268, size 0xa0, virtual false, abstract: false, final false
inline void UpdateDescriptionText(::StringW  descriptionText) ;

/// @brief Method UpdatePurchaseButtonText, addr 0x5ca81b4, size 0xb4, virtual false, abstract: false, final false
inline void UpdatePurchaseButtonText(::StringW  text) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_AlreadyOwnEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_AlreadyOwnEvent() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_EditorOnlyObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_EditorOnlyObjects() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ErrorHappenedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ErrorHappenedEvent() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__GtfcObjects_k__BackingField() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__GtfcObjects_k__BackingField() ;

constexpr ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel> const& __cordl_internal_get__GtfcPriceLabel_k__BackingField() const;

constexpr ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>& __cordl_internal_get__GtfcPriceLabel_k__BackingField() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get__bundleDataReference() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get__bundleDataReference() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__bundleDescriptionText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__bundleDescriptionText() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bundleIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bundleIcon() ;

constexpr ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton> const& __cordl_internal_get__bundlePurchaseButton() const;

constexpr ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>& __cordl_internal_get__bundlePurchaseButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_creatorCodeProvider() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_creatorCodeProvider() ;

constexpr void __cordl_internal_set_AlreadyOwnEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_EditorOnlyObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_ErrorHappenedEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__GtfcObjects_k__BackingField(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__GtfcPriceLabel_k__BackingField(::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>  value) ;

constexpr void __cordl_internal_set__bundleDataReference(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

constexpr void __cordl_internal_set__bundleDescriptionText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__bundleIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__bundlePurchaseButton(::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>  value) ;

constexpr void __cordl_internal_set_creatorCodeProvider(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5ca8308, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_GtfcObjects, addr 0x5ca7e7c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> get_GtfcObjects() ;

/// [CompilerGenerated]
/// @brief Method get_GtfcPriceLabel, addr 0x5ca7e6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel> get_GtfcPriceLabel() ;

/// @brief Method get_playfabBundleID, addr 0x5ca7e54, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_playfabBundleID() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// [CompilerGenerated]
/// @brief Method set_GtfcObjects, addr 0x5ca7e84, size 0x8, virtual false, abstract: false, final false
inline void set_GtfcObjects(::ArrayW<::UnityEngine::GameObject*>  value) ;

/// [CompilerGenerated]
/// @brief Method set_GtfcPriceLabel, addr 0x5ca7e74, size 0x8, virtual false, abstract: false, final false
inline void set_GtfcPriceLabel(::GorillaNetworking::Store::GtfcPriceLabel*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundleStand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundleStand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundleStand(BundleStand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundleStand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundleStand(BundleStand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4425};

/// @brief Field _bundlePurchaseButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>  ____bundlePurchaseButton;

/// [SerializeField]
/// @brief Field _bundleDataReference, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ____bundleDataReference;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <GtfcPriceLabel>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>  ____GtfcPriceLabel_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <GtfcObjects>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____GtfcObjects_k__BackingField;

/// [SerializeField]
/// @brief Field creatorCodeProvider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___creatorCodeProvider;

/// @brief Field EditorOnlyObjects, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___EditorOnlyObjects;

/// @brief Field _bundleDescriptionText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____bundleDescriptionText;

/// @brief Field _bundleIcon, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____bundleIcon;

/// @brief Field AlreadyOwnEvent, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___AlreadyOwnEvent;

/// @brief Field ErrorHappenedEvent, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ErrorHappenedEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ____bundlePurchaseButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ____bundleDataReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ____GtfcPriceLabel_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ____GtfcObjects_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ___creatorCodeProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ___EditorOnlyObjects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ____bundleDescriptionText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ____bundleIcon) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ___AlreadyOwnEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleStand, ___ErrorHappenedEvent) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::BundleStand) == 0x70, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
