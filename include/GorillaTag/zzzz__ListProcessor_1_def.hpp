#pragma once
// IWYU pragma private; include "GorillaTag/ListProcessor_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListProcessor_1)
namespace GorillaTag {
template<typename T>
class InAction_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTag {
template<typename T>
class ListProcessor_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::ListProcessor_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::ListProcessor_1, "GorillaTag", "ListProcessor`1");
// Dependencies System.Object
namespace GorillaTag {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaTag.ListProcessor`1<T>
class CORDL_TYPE ListProcessor_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_ItemProcessor, put=set_ItemProcessor)) ::GorillaTag::InAction_1<T>*  ItemProcessor;

/// @brief Field m_currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_currentIndex, put=__cordl_internal_set_m_currentIndex)) int32_t  m_currentIndex;

/// @brief Field m_itemProcessorDelegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_itemProcessorDelegate, put=__cordl_internal_set_m_itemProcessorDelegate)) ::GorillaTag::InAction_1<T>*  m_itemProcessorDelegate;

/// @brief Field m_list, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_list, put=__cordl_internal_set_m_list)) ::System::Collections::Generic::List_1<T>*  m_list;

/// @brief Field m_listCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_listCount, put=__cordl_internal_set_m_listCount)) int32_t  m_listCount;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Add(/* [IsReadOnly] */ ::by_ref<T>  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(/* [IsReadOnly] */ ::by_ref<T>  item) ;

/// @brief Method GetReadonlyList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<T>* GetReadonlyList() ;

static inline ::GorillaTag::ListProcessor_1<T>* New_ctor() ;

static inline ::GorillaTag::ListProcessor_1<T>* New_ctor(int32_t  capacity, ::GorillaTag::InAction_1<T>*  itemProcessorDelegate) ;

/// @brief Method ProcessList, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessList() ;

/// @brief Method ProcessList, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessList(::GorillaTag::InAction_1<T>*  customDelegate) ;

/// @brief Method ProcessListSafe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessListSafe() ;

/// @brief Method ProcessListSafe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessListSafe(::GorillaTag::InAction_1<T>*  customDelegate) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Remove(/* [IsReadOnly] */ ::by_ref<T>  item) ;

constexpr int32_t const& __cordl_internal_get_m_currentIndex() const;

constexpr int32_t& __cordl_internal_get_m_currentIndex() ;

constexpr ::GorillaTag::InAction_1<T>* const& __cordl_internal_get_m_itemProcessorDelegate() const;

constexpr ::GorillaTag::InAction_1<T>*& __cordl_internal_get_m_itemProcessorDelegate() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_list() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_list() ;

constexpr int32_t const& __cordl_internal_get_m_listCount() const;

constexpr int32_t& __cordl_internal_get_m_listCount() ;

constexpr void __cordl_internal_set_m_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_itemProcessorDelegate(::GorillaTag::InAction_1<T>*  value) ;

constexpr void __cordl_internal_set_m_list(::System::Collections::Generic::List_1<T>*  value) ;

constexpr void __cordl_internal_set_m_listCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::GorillaTag::InAction_1<T>*  itemProcessorDelegate) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_ItemProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GorillaTag::InAction_1<T>* get_ItemProcessor() ;

/// @brief Method set_ItemProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_ItemProcessor(::GorillaTag::InAction_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListProcessor_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListProcessor_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListProcessor_1(ListProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListProcessor_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListProcessor_1(ListProcessor_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4664};

/// @brief Field m_list, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___m_list;

/// @brief Field m_currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_currentIndex;

/// @brief Field m_listCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_listCount;

/// @brief Field m_itemProcessorDelegate, offset: 0x20, size: 0x8, def value: None
 ::GorillaTag::InAction_1<T>*  ___m_itemProcessorDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
