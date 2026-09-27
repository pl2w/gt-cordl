#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/WeightedTransformArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/Rigging/zzzz__WeightedTransform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WeightedTransformArray)
namespace GlobalNamespace {
struct WeightedTransformArray_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
class IList_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace UnityEngine::Animations::Rigging {
struct WeightedTransform;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct WeightedTransformArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::WeightedTransformArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::WeightedTransformArray, "UnityEngine.Animations.Rigging", "WeightedTransformArray");
// [DefaultMember("Item")]
// Dependencies UnityEngine.Animations.Rigging.WeightedTransform
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.WeightedTransformArray
struct CORDL_TYPE WeightedTransformArray {
public:
// Declarations
using Enumerator = ::GlobalNamespace::WeightedTransformArray_Enumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Animations::Rigging::WeightedTransform  Item[];

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

/// @brief Field k_MaxLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaxLength, put=setStaticF_k_MaxLength)) int32_t  k_MaxLength;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::UnityEngine::Animations::Rigging::WeightedTransform>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Animations::Rigging::WeightedTransform>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr operator  ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::WeightedTransform>*() ;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() ;

/// @brief Method Add, addr 0xae7e524, size 0x144, virtual true, abstract: false, final true
inline void Add(::UnityEngine::Animations::Rigging::WeightedTransform  value) ;

/// @brief Method CheckOutOfRangeIndex, addr 0xae7f17c, size 0x100, virtual false, abstract: false, final false
inline void CheckOutOfRangeIndex(int32_t  index) ;

/// @brief Method Clear, addr 0xae7e794, size 0x8, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xae7eac4, size 0xbc, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::Animations::Rigging::WeightedTransform  value) ;

/// @brief Method CopyTo, addr 0xae7ed40, size 0x1b8, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::UnityEngine::Animations::Rigging::WeightedTransform>  array, int32_t  arrayIndex) ;

/// @brief Method Get, addr 0xae7e8fc, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Animations::Rigging::WeightedTransform Get(int32_t  index) ;

/// @brief Method GetEnumerator, addr 0xae7e318, size 0x98, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Animations::Rigging::WeightedTransform>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0xae7e844, size 0xb8, virtual true, abstract: false, final true
inline int32_t IndexOf(::UnityEngine::Animations::Rigging::WeightedTransform  value) ;

/// @brief Method Insert, addr 0xae7f328, size 0x1e8, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::UnityEngine::Animations::Rigging::WeightedTransform  value) ;

/// @brief Method Remove, addr 0xae7efa0, size 0x118, virtual true, abstract: false, final true
inline bool Remove(::UnityEngine::Animations::Rigging::WeightedTransform  value) ;

/// @brief Method RemoveAt, addr 0xae7f0b8, size 0xc4, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method Set, addr 0xae7e668, size 0x12c, virtual false, abstract: false, final false
inline void Set(int32_t  index, ::UnityEngine::Animations::Rigging::WeightedTransform  value) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0xae7eb80, size 0x1c0, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0xae7f74c, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0xae7f754, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xae7e3dc, size 0x98, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.Add, addr 0xae7e474, size 0xb0, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Contains, addr 0xae7ea1c, size 0xa8, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0xae7e79c, size 0xa8, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0xae7f27c, size 0xac, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0xae7eef8, size 0xa8, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.get_Item, addr 0xae7f510, size 0x98, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0xae7f5a8, size 0xac, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

static inline int32_t getStaticF_k_MaxLength() ;

/// @brief Method get_Count, addr 0xae7f734, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsFixedSize, addr 0xae7f744, size 0x8, virtual true, abstract: false, final true
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0xae7f73c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0xae7f654, size 0x64, virtual true, abstract: false, final true
inline ::UnityEngine::Animations::Rigging::WeightedTransform get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::Animations::Rigging::WeightedTransform>* i___System__Collections__Generic__ICollection_1___UnityEngine__Animations__Rigging__WeightedTransform_() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Animations::Rigging::WeightedTransform>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Animations__Rigging__WeightedTransform_() ;

/// @brief Convert to "::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::WeightedTransform>* i___System__Collections__Generic__IList_1___UnityEngine__Animations__Rigging__WeightedTransform_() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() ;

static inline void setStaticF_k_MaxLength(int32_t  value) ;

/// @brief Method set_Item, addr 0xae7f6b8, size 0x7c, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::UnityEngine::Animations::Rigging::WeightedTransform  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WeightedTransformArray() ;

// Ctor Parameters [CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item0", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item1", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item2", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item3", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item4", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item5", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item6", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Item7", ty: "::UnityEngine::Animations::Rigging::WeightedTransform", modifiers: "", def_value: None, comment: None }]
constexpr WeightedTransformArray(int32_t  m_Length, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item0, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item1, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item2, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item3, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item4, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item5, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item6, ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item7) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// [SerializeField]
/// [NotKeyable]
/// @brief Field m_Length, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Length;

/// [SerializeField]
/// @brief Field m_Item0, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item0;

/// [SerializeField]
/// @brief Field m_Item1, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item1;

/// [SerializeField]
/// @brief Field m_Item2, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item2;

/// [SerializeField]
/// @brief Field m_Item3, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item3;

/// [SerializeField]
/// @brief Field m_Item4, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item4;

/// [SerializeField]
/// @brief Field m_Item5, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item5;

/// [SerializeField]
/// @brief Field m_Item6, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item6;

/// [SerializeField]
/// @brief Field m_Item7, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransform  m_Item7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransformArray, m_Item7) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::WeightedTransformArray) == 0x88, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
