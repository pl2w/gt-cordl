#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/InteractorGroupNodeUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InteractorGroupNodeUI)
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class INodeUI_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class ITreeNode_1;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Oculus::Interaction::DebugTree {
class InteractorGroupNodeUI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI*, "Oculus.Interaction.DebugTree", "InteractorGroupNodeUI");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::DebugTree {
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.InteractorGroupNodeUI
class CORDL_TYPE InteractorGroupNodeUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ChildArea)) ::UnityW<::UnityEngine::RectTransform>  ChildArea;

/// @brief Field _activeImage, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeImage, put=__cordl_internal_set__activeImage)) ::UnityW<::UnityEngine::UI::Image>  _activeImage;

/// @brief Field _boundNode, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__boundNode, put=__cordl_internal_set__boundNode)) ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IInteractor*>*  _boundNode;

/// @brief Field _childArea, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__childArea, put=__cordl_internal_set__childArea)) ::UnityW<::UnityEngine::RectTransform>  _childArea;

/// @brief Field _connectingLine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectingLine, put=__cordl_internal_set__connectingLine)) ::UnityW<::UnityEngine::RectTransform>  _connectingLine;

/// @brief Field _disabledColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledColor, put=__cordl_internal_set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _hoverColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _isDuplicate, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDuplicate, put=__cordl_internal_set__isDuplicate)) bool  _isDuplicate;

/// @brief Field _isRoot, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRoot, put=__cordl_internal_set__isRoot)) bool  _isRoot;

/// @brief Field _label, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshProUGUI>  _label;

/// @brief Field _normalColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _selectColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor, put=__cordl_internal_set__selectColor)) ::UnityEngine::Color  _selectColor;

/// @brief Convert operator to "::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>"
constexpr operator  ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>*() noexcept;

/// @brief Method Bind, addr 0xa4b2090, size 0x58, virtual true, abstract: false, final true
inline void Bind(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IInteractor*>*  node, bool  isRoot, bool  isDuplicate) ;

/// @brief Method GetLabelText, addr 0xa4b20e8, size 0x204, virtual false, abstract: false, final false
inline ::StringW GetLabelText(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IInteractor*>*  node) ;

static inline ::Oculus::Interaction::DebugTree::InteractorGroupNodeUI* New_ctor() ;

/// @brief Method Start, addr 0xa4b22ec, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4b22f0, size 0x20c, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__activeImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__activeImage() ;

constexpr ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IInteractor*>* const& __cordl_internal_get__boundNode() const;

constexpr ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IInteractor*>*& __cordl_internal_get__boundNode() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__childArea() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__childArea() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__connectingLine() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__connectingLine() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr bool const& __cordl_internal_get__isDuplicate() const;

constexpr bool& __cordl_internal_get__isDuplicate() ;

constexpr bool const& __cordl_internal_get__isRoot() const;

constexpr bool& __cordl_internal_get__isRoot() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__label() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor() ;

constexpr void __cordl_internal_set__activeImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__boundNode(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IInteractor*>*  value) ;

constexpr void __cordl_internal_set__childArea(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__connectingLine(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__isDuplicate(bool  value) ;

constexpr void __cordl_internal_set__isRoot(bool  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0xa4b24fc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ChildArea, addr 0xa4b2088, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RectTransform> get_ChildArea() ;

/// @brief Convert to "::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>"
constexpr ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>* i___Oculus__Interaction__DebugTree__INodeUI_1___Oculus__Interaction__IInteractor__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorGroupNodeUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroupNodeUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorGroupNodeUI(InteractorGroupNodeUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroupNodeUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorGroupNodeUI(InteractorGroupNodeUI const& ) = delete;

/// @brief Field OBJNAME_FORMAT offset 0xffffffff size 0x8
static constexpr ::ConstString  OBJNAME_FORMAT{u"<color=#dddddd><size=85%>{0}</size></color>"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16212};

/// [SerializeField]
/// @brief Field _childArea, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____childArea;

/// [SerializeField]
/// @brief Field _connectingLine, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____connectingLine;

/// [SerializeField]
/// @brief Field _label, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____label;

/// [SerializeField]
/// @brief Field _activeImage, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____activeImage;

/// [SerializeField]
/// @brief Field _selectColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor;

/// [SerializeField]
/// @brief Field _hoverColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _disabledColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledColor;

/// @brief Field _boundNode, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IInteractor*>*  ____boundNode;

/// @brief Field _isRoot, offset: 0x88, size: 0x1, def value: None
 bool  ____isRoot;

/// @brief Field _isDuplicate, offset: 0x89, size: 0x1, def value: None
 bool  ____isDuplicate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____childArea) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____connectingLine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____label) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____activeImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____selectColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____hoverColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____normalColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____disabledColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____boundNode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____isRoot) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI, ____isDuplicate) == 0x89, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DebugTree::InteractorGroupNodeUI) == 0x90, "Size mismatch!");

} // namespace end def Oculus::Interaction::DebugTree
