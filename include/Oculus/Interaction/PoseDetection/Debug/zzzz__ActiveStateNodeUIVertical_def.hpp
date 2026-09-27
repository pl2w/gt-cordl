#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateNodeUIVertical.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ActiveStateNodeUIVertical)
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class INodeUI_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class ITreeNode_1;
}
namespace Oculus::Interaction {
class IActiveState;
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
namespace Oculus::Interaction::PoseDetection::Debug {
class ActiveStateNodeUIVertical;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateNodeUIVertical");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.ActiveStateNodeUIVertical
class CORDL_TYPE ActiveStateNodeUIVertical : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ChildArea)) ::UnityW<::UnityEngine::RectTransform>  ChildArea;

/// @brief Field _activeColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _activeImage, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeImage, put=__cordl_internal_set__activeImage)) ::UnityW<::UnityEngine::UI::Image>  _activeImage;

/// @brief Field _boundNode, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__boundNode, put=__cordl_internal_set__boundNode)) ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*  _boundNode;

/// @brief Field _childArea, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__childArea, put=__cordl_internal_set__childArea)) ::UnityW<::UnityEngine::RectTransform>  _childArea;

/// @brief Field _connectingLine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectingLine, put=__cordl_internal_set__connectingLine)) ::UnityW<::UnityEngine::RectTransform>  _connectingLine;

/// @brief Field _inactiveColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__inactiveColor, put=__cordl_internal_set__inactiveColor)) ::UnityEngine::Color  _inactiveColor;

/// @brief Field _isDuplicate, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDuplicate, put=__cordl_internal_set__isDuplicate)) bool  _isDuplicate;

/// @brief Field _isRoot, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRoot, put=__cordl_internal_set__isRoot)) bool  _isRoot;

/// @brief Field _label, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshProUGUI>  _label;

/// @brief Convert operator to "::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>"
constexpr operator  ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>*() noexcept;

/// @brief Method Bind, addr 0xa4ab3c4, size 0x58, virtual true, abstract: false, final true
inline void Bind(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*  node, bool  isRoot, bool  isDuplicate) ;

/// @brief Method GetLabelText, addr 0xa4ab41c, size 0x204, virtual false, abstract: false, final false
inline ::StringW GetLabelText(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*  node) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical* New_ctor() ;

/// @brief Method Start, addr 0xa4ab620, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4ab624, size 0x1d0, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__activeImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__activeImage() ;

constexpr ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>* const& __cordl_internal_get__boundNode() const;

constexpr ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*& __cordl_internal_get__boundNode() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__childArea() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__childArea() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__connectingLine() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__connectingLine() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__inactiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__inactiveColor() ;

constexpr bool const& __cordl_internal_get__isDuplicate() const;

constexpr bool& __cordl_internal_get__isDuplicate() ;

constexpr bool const& __cordl_internal_get__isRoot() const;

constexpr bool& __cordl_internal_get__isRoot() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__label() ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__activeImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__boundNode(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*  value) ;

constexpr void __cordl_internal_set__childArea(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__connectingLine(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__inactiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__isDuplicate(bool  value) ;

constexpr void __cordl_internal_set__isRoot(bool  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0xa4ab7f4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ChildArea, addr 0xa4ab3bc, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RectTransform> get_ChildArea() ;

/// @brief Convert to "::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>"
constexpr ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>* i___Oculus__Interaction__DebugTree__INodeUI_1___Oculus__Interaction__IActiveState__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateNodeUIVertical() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateNodeUIVertical", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateNodeUIVertical(ActiveStateNodeUIVertical && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateNodeUIVertical", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateNodeUIVertical(ActiveStateNodeUIVertical const& ) = delete;

/// @brief Field OBJNAME_FORMAT offset 0xffffffff size 0x8
static constexpr ::ConstString  OBJNAME_FORMAT{u"<color=#dddddd><size=85%>{0}</size></color>"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16185};

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
/// @brief Field _activeColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// [SerializeField]
/// @brief Field _inactiveColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____inactiveColor;

/// @brief Field _boundNode, offset: 0x60, size: 0x8, def value: None
 ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*  ____boundNode;

/// @brief Field _isRoot, offset: 0x68, size: 0x1, def value: None
 bool  ____isRoot;

/// @brief Field _isDuplicate, offset: 0x69, size: 0x1, def value: None
 bool  ____isDuplicate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____childArea) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____connectingLine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____label) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____activeImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____activeColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____inactiveColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____boundNode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____isRoot) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical, ____isDuplicate) == 0x69, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
