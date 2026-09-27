#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReadOnlyHierarchyViewModelList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyHierarchyViewModelList)
namespace GlobalNamespace {
struct ReadOnlyHierarchyViewModelList_Enumerator;
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
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReadOnlyHierarchyViewModelList;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*, "UnityEngine.UIElements", "ReadOnlyHierarchyViewModelList");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ReadOnlyHierarchyViewModelList
class CORDL_TYPE ReadOnlyHierarchyViewModelList : public ::System::Object {
public:
// Declarations
using Enumerator = ::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Field m_HierarchyViewModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HierarchyViewModel, put=__cordl_internal_set_m_HierarchyViewModel)) ::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Method Add, addr 0xb734478, size 0x38, virtual true, abstract: false, final true
inline int32_t Add(::System::Object*  value) ;

/// @brief Method Clear, addr 0xb7344b0, size 0x38, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xb73402c, size 0x9c, virtual true, abstract: false, final true
inline bool Contains(::System::Object*  value) ;

/// @brief Method CopyTo, addr 0xb73426c, size 0xb8, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0xb734324, size 0x7c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method IndexOf, addr 0xb7340c8, size 0xc4, virtual true, abstract: false, final true
inline int32_t IndexOf(::System::Object*  value) ;

/// @brief Method Insert, addr 0xb7344e8, size 0x38, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::System::Object*  value) ;

static inline ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList* New_ctor(::Unity::Hierarchy::HierarchyViewModel*  viewModel) ;

/// @brief Method Remove, addr 0xb734520, size 0x38, virtual true, abstract: false, final true
inline void Remove(::System::Object*  value) ;

/// @brief Method RemoveAt, addr 0xb734558, size 0x38, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

constexpr ::Unity::Hierarchy::HierarchyViewModel* const& __cordl_internal_get_m_HierarchyViewModel() const;

constexpr ::Unity::Hierarchy::HierarchyViewModel*& __cordl_internal_get_m_HierarchyViewModel() ;

constexpr void __cordl_internal_set_m_HierarchyViewModel(::Unity::Hierarchy::HierarchyViewModel*  value) ;

/// @brief Method .ctor, addr 0xb73418c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyViewModel*  viewModel) ;

/// @brief Method get_Count, addr 0xb734014, size 0x18, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsFixedSize, addr 0xb734004, size 0x8, virtual true, abstract: false, final true
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0xb73400c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0xb734408, size 0x38, virtual true, abstract: false, final true
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0xb7341bc, size 0x78, virtual true, abstract: false, final true
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Method get_SyncRoot, addr 0xb734440, size 0x38, virtual true, abstract: false, final true
inline ::System::Object* get_SyncRoot() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

/// @brief Method set_Item, addr 0xb734234, size 0x38, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyHierarchyViewModelList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHierarchyViewModelList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyHierarchyViewModelList(ReadOnlyHierarchyViewModelList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHierarchyViewModelList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyHierarchyViewModelList(ReadOnlyHierarchyViewModelList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7234};

/// @brief Field m_HierarchyViewModel, offset: 0x10, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewModel*  ___m_HierarchyViewModel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList, ___m_HierarchyViewModel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
