#pragma once
// IWYU pragma private; include "GlobalNamespace/MessageBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MessageBoxResult_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MessageBox)
namespace GlobalNamespace {
struct MessageBoxResult;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MessageBox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MessageBox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MessageBox*, "", "MessageBox");
// Dependencies MessageBoxResult, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MessageBox
class CORDL_TYPE MessageBox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Body, put=set_Body)) ::StringW  Body;

 __declspec(property(get=get_Header, put=set_Header)) ::StringW  Header;

 __declspec(property(get=get_LeftButton, put=set_LeftButton)) ::StringW  LeftButton;

 __declspec(property(get=get_LeftButtonCallback)) ::UnityEngine::Events::UnityEvent*  LeftButtonCallback;

 __declspec(property(get=get_Result, put=set_Result)) ::GlobalNamespace::MessageBoxResult  Result;

 __declspec(property(get=get_RightButton, put=set_RightButton)) ::StringW  RightButton;

 __declspec(property(get=get_RightButtonCallback)) ::UnityEngine::Events::UnityEvent*  RightButtonCallback;

/// @brief Field <Result>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) ::GlobalNamespace::MessageBoxResult  _Result_k__BackingField;

/// @brief Field _bodyText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyText, put=__cordl_internal_set__bodyText)) ::UnityW<::TMPro::TMP_Text>  _bodyText;

/// @brief Field _headerText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerText, put=__cordl_internal_set__headerText)) ::UnityW<::TMPro::TMP_Text>  _headerText;

/// @brief Field _leftButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftButton, put=__cordl_internal_set__leftButton)) ::UnityW<::UnityEngine::GameObject>  _leftButton;

/// @brief Field _leftButtonCallback, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftButtonCallback, put=__cordl_internal_set__leftButtonCallback)) ::UnityEngine::Events::UnityEvent*  _leftButtonCallback;

/// @brief Field _leftButtonText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftButtonText, put=__cordl_internal_set__leftButtonText)) ::UnityW<::TMPro::TMP_Text>  _leftButtonText;

/// @brief Field _rightButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightButton, put=__cordl_internal_set__rightButton)) ::UnityW<::UnityEngine::GameObject>  _rightButton;

/// @brief Field _rightButtonCallback, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightButtonCallback, put=__cordl_internal_set__rightButtonCallback)) ::UnityEngine::Events::UnityEvent*  _rightButtonCallback;

/// @brief Field _rightButtonText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightButtonText, put=__cordl_internal_set__rightButtonText)) ::UnityW<::TMPro::TMP_Text>  _rightButtonText;

/// @brief Method GetCanvas, addr 0x5a3ebb4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetCanvas() ;

static inline ::GlobalNamespace::MessageBox* New_ctor() ;

/// @brief Method OnClickLeftButton, addr 0x5a3eb6c, size 0x24, virtual false, abstract: false, final false
inline void OnClickLeftButton() ;

/// @brief Method OnClickRightButton, addr 0x5a3eb90, size 0x24, virtual false, abstract: false, final false
inline void OnClickRightButton() ;

/// @brief Method OnDisable, addr 0x5a3ec10, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ShowQuitButtonAsPrimary, addr 0x5a3ea88, size 0xe4, virtual false, abstract: false, final false
inline void ShowQuitButtonAsPrimary() ;

/// @brief Method Start, addr 0x5a3ea7c, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5a3ea84, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::MessageBoxResult const& __cordl_internal_get__Result_k__BackingField() const;

constexpr ::GlobalNamespace::MessageBoxResult& __cordl_internal_get__Result_k__BackingField() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__bodyText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__bodyText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__headerText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__headerText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__leftButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__leftButton() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__leftButtonCallback() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__leftButtonCallback() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__leftButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__leftButtonText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__rightButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__rightButton() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__rightButtonCallback() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__rightButtonCallback() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__rightButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__rightButtonText() ;

constexpr void __cordl_internal_set__Result_k__BackingField(::GlobalNamespace::MessageBoxResult  value) ;

constexpr void __cordl_internal_set__bodyText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__headerText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__leftButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__leftButtonCallback(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__leftButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__rightButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__rightButtonCallback(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__rightButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5a3ec38, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Body, addr 0x5a3e6f8, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Body() ;

/// @brief Method get_Header, addr 0x5a3e66c, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Header() ;

/// @brief Method get_LeftButton, addr 0x5a3e738, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_LeftButton() ;

/// @brief Method get_LeftButtonCallback, addr 0x5a3ea6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_LeftButtonCallback() ;

/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x5a3e65c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MessageBoxResult get_Result() ;

/// @brief Method get_RightButton, addr 0x5a3e8d0, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_RightButton() ;

/// @brief Method get_RightButtonCallback, addr 0x5a3ea74, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_RightButtonCallback() ;

/// @brief Method set_Body, addr 0x5a3e718, size 0x20, virtual false, abstract: false, final false
inline void set_Body(::StringW  value) ;

/// @brief Method set_Header, addr 0x5a3e68c, size 0x6c, virtual false, abstract: false, final false
inline void set_Header(::StringW  value) ;

/// @brief Method set_LeftButton, addr 0x5a3e758, size 0x178, virtual false, abstract: false, final false
inline void set_LeftButton(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Result, addr 0x5a3e664, size 0x8, virtual false, abstract: false, final false
inline void set_Result(::GlobalNamespace::MessageBoxResult  value) ;

/// @brief Method set_RightButton, addr 0x5a3e8f0, size 0x17c, virtual false, abstract: false, final false
inline void set_RightButton(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageBox(MessageBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageBox(MessageBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2961};

/// [SerializeField]
/// @brief Field _headerText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____headerText;

/// [SerializeField]
/// @brief Field _bodyText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____bodyText;

/// [SerializeField]
/// @brief Field _leftButtonText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____leftButtonText;

/// [SerializeField]
/// @brief Field _rightButtonText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____rightButtonText;

/// [SerializeField]
/// @brief Field _leftButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____leftButton;

/// [SerializeField]
/// @brief Field _rightButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____rightButton;

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::MessageBoxResult  ____Result_k__BackingField;

/// [SerializeField]
/// @brief Field _leftButtonCallback, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____leftButtonCallback;

/// [SerializeField]
/// @brief Field _rightButtonCallback, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____rightButtonCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MessageBox, ____headerText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____bodyText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____leftButtonText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____rightButtonText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____leftButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____rightButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____Result_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____leftButtonCallback) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessageBox, ____rightButtonCallback) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MessageBox) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
