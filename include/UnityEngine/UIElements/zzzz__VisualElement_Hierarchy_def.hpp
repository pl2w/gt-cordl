#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElement_Hierarchy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElement_Hierarchy)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualElement_Hierarchy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualElement_Hierarchy);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualElement_Hierarchy, "UnityEngine.UIElements", "VisualElement/Hierarchy");
// [DefaultMember("Item")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElement/Hierarchy
struct CORDL_TYPE VisualElement_Hierarchy {
public:
// Declarations
 __declspec(property(get=get_Item)) ::UnityEngine::UIElements::VisualElement*  Item[];

 __declspec(property(get=get_childCount)) int32_t  childCount;

 __declspec(property(get=get_children)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  children;

 __declspec(property(get=get_parent)) ::UnityEngine::UIElements::VisualElement*  parent;

/// @brief Method Add, addr 0xb774a04, size 0x78, virtual false, abstract: false, final false
inline void Add(::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method BringToFront, addr 0xb775a4c, size 0xb4, virtual false, abstract: false, final false
inline void BringToFront(::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method Children, addr 0xb775e14, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* Children() ;

/// @brief Method Clear, addr 0xb7755ec, size 0x460, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ElementAt, addr 0xb775e10, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* ElementAt(int32_t  index) ;

/// @brief Method Equals, addr 0xb775e48, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb775e2c, size 0x10, virtual false, abstract: false, final false
inline bool Equals(::GlobalNamespace::VisualElement_Hierarchy  other) ;

/// @brief Method GetHashCode, addr 0xb775ec0, size 0x18, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IndexOf, addr 0xb775db0, size 0x60, virtual false, abstract: false, final false
inline int32_t IndexOf(::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method Insert, addr 0xb774acc, size 0x350, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method MoveChildElement, addr 0xb775b00, size 0xe8, virtual false, abstract: false, final false
inline void MoveChildElement(::UnityEngine::UIElements::VisualElement*  child, int32_t  currentIndex, int32_t  nextIndex) ;

/// @brief Method PlaceBehind, addr 0xb775c80, size 0xd0, virtual false, abstract: false, final false
inline void PlaceBehind(::UnityEngine::UIElements::VisualElement*  child, ::UnityEngine::UIElements::VisualElement*  over) ;

/// @brief Method PutChildAtIndex, addr 0xb774e1c, size 0x1ac, virtual false, abstract: false, final false
inline void PutChildAtIndex(::UnityEngine::UIElements::VisualElement*  child, int32_t  index) ;

/// @brief Method ReleaseChildList, addr 0xb775500, size 0xec, virtual false, abstract: false, final false
inline void ReleaseChildList() ;

/// @brief Method Remove, addr 0xb7750c0, size 0xec, virtual false, abstract: false, final false
inline void Remove(::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method RemoveAt, addr 0xb7751ac, size 0x2d8, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveChildAtIndex, addr 0xb775484, size 0x7c, virtual false, abstract: false, final false
inline void RemoveChildAtIndex(int32_t  index) ;

/// @brief Method SendToBack, addr 0xb775be8, size 0x98, virtual false, abstract: false, final false
inline void SendToBack(::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method SetParent, addr 0xb774fc8, size 0xf8, virtual false, abstract: false, final false
inline void SetParent(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method .ctor, addr 0xb7749fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method get_Item, addr 0xb775d50, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_Item(int32_t  key) ;

/// @brief Method get_childCount, addr 0xb774a7c, size 0x50, virtual false, abstract: false, final false
inline int32_t get_childCount() ;

/// @brief Method get_children, addr 0xb7749e4, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* get_children() ;

/// @brief Method get_parent, addr 0xb7749cc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_parent() ;

/// @brief Method op_Equality, addr 0xb775e3c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::VisualElement_Hierarchy  x, ::GlobalNamespace::VisualElement_Hierarchy  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr VisualElement_Hierarchy() ;

// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }]
constexpr VisualElement_Hierarchy(::UnityEngine::UIElements::VisualElement*  m_Owner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_InvalidHierarchyChangeMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InvalidHierarchyChangeMsg{u"Cannot modify VisualElement hierarchy during layout calculation"};

/// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  m_Owner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualElement_Hierarchy, m_Owner) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualElement_Hierarchy) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
