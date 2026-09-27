#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValueCollectionPropertyBag`3_Enumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(KeyValueCollectionPropertyBag`3_Enumerable)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Unity::Properties {
template<typename TDictionary,typename TKey,typename TValue>
class Enumerable_KeyValueCollectionPropertyBag_3_Enumerator;
}
namespace Unity::Properties {
template<typename TContainer>
class IProperty_1;
}
namespace Unity::Properties {
template<typename TDictionary,typename TKey,typename TValue>
class KeyValueCollectionPropertyBag_3_KeyValuePairProperty;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TDictionary,typename TKey,typename TValue>
struct KeyValueCollectionPropertyBag_3_Enumerable;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::KeyValueCollectionPropertyBag_3_Enumerable, "Unity.Properties", "KeyValueCollectionPropertyBag`3/Enumerable");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TDictionary,typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Properties.KeyValueCollectionPropertyBag`3/Enumerable<TDictionary,TKey,TValue>
struct CORDL_TYPE KeyValueCollectionPropertyBag_3_Enumerable {
public:
// Declarations
using Enumerator = ::Unity::Properties::Enumerable_KeyValueCollectionPropertyBag_3_Enumerator<TDictionary, TKey, TValue>;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TDictionary>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TDictionary>*>* System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TDictionary___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TDictionary  dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*  property) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TDictionary>*>* i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TDictionary___() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyValueCollectionPropertyBag_3_Enumerable() ;

// Ctor Parameters [CppParam { name: "m_Dictionary", ty: "TDictionary", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Property", ty: "::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*", modifiers: "", def_value: None, comment: None }]
constexpr KeyValueCollectionPropertyBag_3_Enumerable(TDictionary  m_Dictionary, ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*  m_Property) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29475};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Dictionary, offset: 0x0, size: 0x8, def value: None
 TDictionary  m_Dictionary;

/// @brief Field m_Property, offset: 0x8, size: 0x8, def value: None
 ::Unity::Properties::KeyValueCollectionPropertyBag_3_KeyValuePairProperty<TDictionary,TKey,TValue>*  m_Property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
