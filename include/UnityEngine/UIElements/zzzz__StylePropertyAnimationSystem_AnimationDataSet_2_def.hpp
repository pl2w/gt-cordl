#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_AnimationDataSet_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem_AnimationDataSet_2)
namespace GlobalNamespace {
struct StylePropertyAnimationSystem_ElementPropertyPair;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TTimingData,typename TStyleData>
struct StylePropertyAnimationSystem_AnimationDataSet_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2, "UnityEngine.UIElements", "StylePropertyAnimationSystem/AnimationDataSet`2");
// Dependencies UnityEngine.UIElements.StyleSheets.StylePropertyId, UnityEngine.UIElements.VisualElement
namespace GlobalNamespace {
// cpp template
template<typename TTimingData,typename TStyleData>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<TTimingData,TStyleData>
struct CORDL_TYPE StylePropertyAnimationSystem_AnimationDataSet_2 {
public:
// Declarations
 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, TTimingData  timingData, TStyleData  styleData) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData> Create() ;

/// @brief Method GetActivePropertiesForElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::by_ref<int32_t>  index) ;

/// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LocalInit() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(int32_t  cancelledIndex) ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAll() ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAll(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method Replace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Replace(int32_t  index, TTimingData  timingData, TStyleData  styleData) ;

/// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// @brief Method set_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_capacity(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StylePropertyAnimationSystem_AnimationDataSet_2() ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None, comment: None }, CppParam { name: "timing", ty: "::ArrayW<TTimingData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,int32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr StylePropertyAnimationSystem_AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>  properties, ::ArrayW<TTimingData>  timing, ::ArrayW<TStyleData>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,int32_t>*  indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8227};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field elements, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::VisualElement*>  elements;

/// @brief Field properties, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>  properties;

/// @brief Field timing, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<TTimingData>  timing;

/// @brief Field style, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<TStyleData>  style;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  count;

/// @brief Field indices, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,int32_t>*  indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
