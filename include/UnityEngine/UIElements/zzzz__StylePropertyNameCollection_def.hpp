#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyNameCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyNameCollection)
namespace GlobalNamespace {
struct StylePropertyNameCollection_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyNameCollection);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StylePropertyNameCollection, "UnityEngine.UIElements", "StylePropertyNameCollection");
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyNameCollection
struct CORDL_TYPE StylePropertyNameCollection {
public:
// Declarations
using Enumerator = ::GlobalNamespace::StylePropertyNameCollection_Enumerator;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0xb89e2cc, size 0x8c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StylePropertyNameCollection_Enumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StylePropertyName>.GetEnumerator, addr 0xb89e36c, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StylePropertyName__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb89e3cc, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0xb89e2c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  list) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StylePropertyName>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__StylePropertyName_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr StylePropertyNameCollection() ;

// Ctor Parameters [CppParam { name: "propertiesList", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: None, comment: None }]
constexpr StylePropertyNameCollection(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  propertiesList) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field propertiesList, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  propertiesList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyNameCollection, propertiesList) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StylePropertyNameCollection) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
