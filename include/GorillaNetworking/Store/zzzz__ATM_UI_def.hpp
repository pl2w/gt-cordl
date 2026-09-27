#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/ATM_UI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ATM_UI)
namespace GlobalNamespace {
struct ATM_UI__loadMemberCodeFromTitleDate_d__14;
}
namespace GlobalNamespace {
class NexusGroupId;
}
namespace PlayFab {
class PlayFabError;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class ATM_UI;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::ATM_UI*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::ATM_UI*, "GorillaNetworking.Store", "ATM_UI");
// Dependencies TMPro.TMP_Text, UnityEngine.MonoBehaviour, UnityEngine.SceneManagement.Scene
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.ATM_UI
class CORDL_TYPE ATM_UI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _loadMemberCodeFromTitleDate_d__14 = ::GlobalNamespace::ATM_UI__loadMemberCodeFromTitleDate_d__14;

/// @brief Field ATM_RightColumnArrowText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ATM_RightColumnArrowText, put=__cordl_internal_set_ATM_RightColumnArrowText)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ATM_RightColumnArrowText;

/// @brief Field ATM_RightColumnButtonText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ATM_RightColumnButtonText, put=__cordl_internal_set_ATM_RightColumnButtonText)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ATM_RightColumnButtonText;

 __declspec(property(get=get_PurchaseLocation)) ::StringW  PurchaseLocation;

/// @brief Field atmText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_atmText, put=__cordl_internal_set_atmText)) ::UnityW<::TMPro::TMP_Text>  atmText;

/// @brief Field creatorCodeField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCodeField, put=__cordl_internal_set_creatorCodeField)) ::UnityW<::TMPro::TMP_Text>  creatorCodeField;

/// @brief Field creatorCodeObject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCodeObject, put=__cordl_internal_set_creatorCodeObject)) ::UnityW<::UnityEngine::GameObject>  creatorCodeObject;

/// @brief Field creatorCodeTitle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCodeTitle, put=__cordl_internal_set_creatorCodeTitle)) ::UnityW<::TMPro::TMP_Text>  creatorCodeTitle;

/// @brief Field customMapScene, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_customMapScene, put=__cordl_internal_set_customMapScene)) ::UnityEngine::SceneManagement::Scene  customMapScene;

/// @brief Field groupId, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupId, put=__cordl_internal_set_groupId)) ::UnityW<::GlobalNamespace::NexusGroupId>  groupId;

/// @brief Field memberCode, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_memberCode, put=__cordl_internal_set_memberCode)) ::StringW  memberCode;

/// @brief Field memberCodeTitleDataKey, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_memberCodeTitleDataKey, put=__cordl_internal_set_memberCodeTitleDataKey)) ::StringW  memberCodeTitleDataKey;

/// @brief Field purchaseLocation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseLocation, put=__cordl_internal_set_purchaseLocation)) ::StringW  purchaseLocation;

/// @brief Method HideCreatorCode, addr 0x5ca37a4, size 0x88, virtual false, abstract: false, final false
inline void HideCreatorCode() ;

/// @brief Method IsFromCustomMapScene, addr 0x5ca3654, size 0x10, virtual false, abstract: false, final false
inline bool IsFromCustomMapScene(::UnityEngine::SceneManagement::Scene  scene) ;

static inline ::GorillaNetworking::Store::ATM_UI* New_ctor() ;

/// @brief Method SetCreatorCodeField, addr 0x5ca3704, size 0xa0, virtual false, abstract: false, final false
inline void SetCreatorCodeField(::StringW  v) ;

/// @brief Method SetCreatorCodeTitle, addr 0x5ca3664, size 0xa0, virtual false, abstract: false, final false
inline void SetCreatorCodeTitle(::StringW  result) ;

/// @brief Method SetCustomMapScene, addr 0x5ca364c, size 0x8, virtual false, abstract: false, final false
inline void SetCustomMapScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method ShowCreatorCode, addr 0x5ca382c, size 0x88, virtual false, abstract: false, final false
inline void ShowCreatorCode() ;

/// @brief Method Start, addr 0x5ca2dd4, size 0x1e0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_ATM_RightColumnArrowText() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_ATM_RightColumnArrowText() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_ATM_RightColumnButtonText() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_ATM_RightColumnButtonText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_atmText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_atmText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_creatorCodeField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_creatorCodeField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_creatorCodeObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_creatorCodeObject() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_creatorCodeTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_creatorCodeTitle() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_customMapScene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_customMapScene() ;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& __cordl_internal_get_groupId() const;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& __cordl_internal_get_groupId() ;

constexpr ::StringW const& __cordl_internal_get_memberCode() const;

constexpr ::StringW& __cordl_internal_get_memberCode() ;

constexpr ::StringW const& __cordl_internal_get_memberCodeTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_memberCodeTitleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_purchaseLocation() const;

constexpr ::StringW& __cordl_internal_get_purchaseLocation() ;

constexpr void __cordl_internal_set_ATM_RightColumnArrowText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set_ATM_RightColumnButtonText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set_atmText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_creatorCodeField(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_creatorCodeObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_creatorCodeTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_customMapScene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set_groupId(::UnityW<::GlobalNamespace::NexusGroupId>  value) ;

constexpr void __cordl_internal_set_memberCode(::StringW  value) ;

constexpr void __cordl_internal_set_memberCodeTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_purchaseLocation(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ca38b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PurchaseLocation, addr 0x5ca2dcc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PurchaseLocation() ;

/// [AsyncStateMachine(typeof(GorillaNetworking.Store.ATM_UI::<loadMemberCodeFromTitleDate>d__14))]
/// @brief Method loadMemberCodeFromTitleDate, addr 0x5ca2fb4, size 0xc0, virtual false, abstract: false, final false
inline void loadMemberCodeFromTitleDate(::StringW  memberCodeTitleDataKey) ;

/// @brief Method onTD, addr 0x5ca3074, size 0x4ec, virtual false, abstract: false, final false
inline void onTD(::StringW  result) ;

/// @brief Method onTDError, addr 0x5ca3560, size 0xec, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ATM_UI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ATM_UI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ATM_UI(ATM_UI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ATM_UI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ATM_UI(ATM_UI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4417};

/// @brief Field atmText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___atmText;

/// @brief Field ATM_RightColumnButtonText, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___ATM_RightColumnButtonText;

/// @brief Field ATM_RightColumnArrowText, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___ATM_RightColumnArrowText;

/// [SerializeField]
/// @brief Field purchaseLocation, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___purchaseLocation;

/// [SerializeField]
/// @brief Field creatorCodeObject, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___creatorCodeObject;

/// [SerializeField]
/// @brief Field creatorCodeTitle, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___creatorCodeTitle;

/// [SerializeField]
/// @brief Field creatorCodeField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___creatorCodeField;

/// [SerializeField]
/// @brief Field memberCode, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___memberCode;

/// [SerializeField]
/// @brief Field groupId, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NexusGroupId>  ___groupId;

/// [SerializeField]
/// @brief Field memberCodeTitleDataKey, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___memberCodeTitleDataKey;

/// @brief Field customMapScene, offset: 0x70, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ___customMapScene;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___atmText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___ATM_RightColumnButtonText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___ATM_RightColumnArrowText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___purchaseLocation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___creatorCodeObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___creatorCodeTitle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___creatorCodeField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___memberCode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___groupId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___memberCodeTitleDataKey) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::ATM_UI, ___customMapScene) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::ATM_UI) == 0x78, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
