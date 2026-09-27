#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyCollection`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_EnumeratorType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyCollection`1_Enumerator)
namespace GlobalNamespace {
template<typename T>
struct List_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Properties {
template<typename TContainer>
class IProperty_1;
}
namespace Unity::Properties {
template<typename TContainer>
struct IndexedCollectionPropertyBagEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TContainer>
struct PropertyCollection_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::PropertyCollection_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::PropertyCollection_1_Enumerator, "Unity.Properties", "PropertyCollection`1/Enumerator");
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, Unity.Properties.IndexedCollectionPropertyBagEnumerator`1<TContainer>, Unity.Properties.PropertyCollection`1::EnumeratorType<TContainer>
namespace GlobalNamespace {
// cpp template
template<typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.PropertyCollection`1/Enumerator<TContainer>
struct CORDL_TYPE PropertyCollection_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) ::Unity::Properties::IProperty_1<TContainer>*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*  enumerator) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>  enumerator) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>  properties) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Unity::Properties::IProperty_1<TContainer>* get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>* i___System__Collections__Generic__IEnumerator_1___Unity__Properties__IProperty_1_TContainer___() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(::Unity::Properties::IProperty_1<TContainer>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyCollection_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Type", ty: "::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Enumerator", ty: "::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Properties", ty: "::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndexedCollectionPropertyBag", ty: "::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Current_k__BackingField", ty: "::Unity::Properties::IProperty_1<TContainer>*", modifiers: "", def_value: None, comment: None }]
constexpr PropertyCollection_1_Enumerator(::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  m_Type, ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Enumerator, ::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>  m_Properties, ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>  m_IndexedCollectionPropertyBag, ::Unity::Properties::IProperty_1<TContainer>*  _Current_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29484};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  m_Type;

/// @brief Field m_Enumerator, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Unity::Properties::IProperty_1<TContainer>*>*  m_Enumerator;

/// @brief Field m_Properties, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::Unity::Properties::IProperty_1<TContainer>*>  m_Properties;

/// @brief Field m_IndexedCollectionPropertyBag, offset: 0x28, size: 0x20, def value: None
 ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer>  m_IndexedCollectionPropertyBag;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Current>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Unity::Properties::IProperty_1<TContainer>*  _Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
