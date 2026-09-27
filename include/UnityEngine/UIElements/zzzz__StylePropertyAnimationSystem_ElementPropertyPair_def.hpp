#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_ElementPropertyPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem_ElementPropertyPair)
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct StylePropertyAnimationSystem_ElementPropertyPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ElementPropertyPair");
// Dependencies UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair
struct CORDL_TYPE StylePropertyAnimationSystem_ElementPropertyPair {
public:
// Declarations
using EqualityComparer = ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer;

/// @brief Field Comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Comparer, put=setStaticF_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*  Comparer;

/// @brief Method .ctor, addr 0xb789f3c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property) ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>* getStaticF_Comparer() ;

static inline void setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StylePropertyAnimationSystem_ElementPropertyPair() ;

// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "property", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None, comment: None }]
constexpr StylePropertyAnimationSystem_ElementPropertyPair(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8229};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field element, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  element;

/// @brief Field property, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair, property) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
