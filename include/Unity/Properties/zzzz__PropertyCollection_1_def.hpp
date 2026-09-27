#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyCollection_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerable_1_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_EnumeratorType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyCollection_1)
namespace GlobalNamespace {
template<typename TContainer>
struct PropertyCollection_1_EnumeratorType;
}
namespace GlobalNamespace {
template<typename TContainer>
struct PropertyCollection_1_Enumerator;
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
namespace Unity::Properties {
template<typename TContainer>
class IProperty_1;
}
namespace Unity::Properties {
template<typename TContainer>
struct IndexedCollectionPropertyBagEnumerable_1;
}
// Forward declare root types
namespace Unity::Properties {
template<typename TContainer>
struct PropertyCollection_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Properties::PropertyCollection_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Properties::PropertyCollection_1, "Unity.Properties", "PropertyCollection`1");
// [IsReadOnly]
// Dependencies Unity.Properties.IndexedCollectionPropertyBagEnumerable`1<TContainer>, Unity.Properties.PropertyCollection`1::EnumeratorType<TContainer>
namespace Unity::Properties {
// cpp template
template<typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.PropertyCollection`1<TContainer>
struct CORDL_TYPE PropertyCollection_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer>;

using EnumeratorType = ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>;

/// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF__Empty_k__BackingField, put=setStaticF__Empty_k__BackingField)) ::Unity::Properties::PropertyCollection_1<TContainer>  _Empty_k__BackingField;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::PropertyCollection_1_Enumerator<TContainer> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<Unity.Properties.IProperty<TContainer>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* System_Collections_Generic_IEnumerable_Unity_Properties_IProperty_TContainer___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*  enumerable) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>  enumerable) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*  properties) ;

static inline ::Unity::Properties::PropertyCollection_1<TContainer> getStaticF__Empty_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Unity::Properties::PropertyCollection_1<TContainer> get_Empty() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>* i___System__Collections__Generic__IEnumerable_1___Unity__Properties__IProperty_1_TContainer___() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

static inline void setStaticF__Empty_k__BackingField(::Unity::Properties::PropertyCollection_1<TContainer>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyCollection_1() ;

// Ctor Parameters [CppParam { name: "m_Type", ty: "::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Enumerable", ty: "::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Properties", ty: "::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndexedCollectionPropertyBag", ty: "::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>", modifiers: "", def_value: None, comment: None }]
constexpr PropertyCollection_1(::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  m_Type, ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Enumerable, ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Properties, ::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>  m_IndexedCollectionPropertyBag) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29485};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  m_Type;

/// @brief Field m_Enumerable, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Enumerable;

/// @brief Field m_Properties, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Properties;

/// @brief Field m_IndexedCollectionPropertyBag, offset: 0x18, size: 0x10, def value: None
 ::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1<TContainer>  m_IndexedCollectionPropertyBag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Properties
