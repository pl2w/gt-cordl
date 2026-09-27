#pragma once
// IWYU pragma private; include "GorillaTag/InDelegateListProcessor_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__DelegateListProcessorPlusMinus_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InDelegateListProcessor_2)
namespace GorillaTag {
template<typename T1,typename T2>
class InAction_2;
}
// Forward declare root types
namespace GorillaTag {
template<typename T1,typename T2>
class InDelegateListProcessor_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::InDelegateListProcessor_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::InDelegateListProcessor_2, "GorillaTag", "InDelegateListProcessor`2");
// Dependencies GorillaTag.DelegateListProcessorPlusMinus`2<T1, T2>
namespace GorillaTag {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: GorillaTag.InDelegateListProcessor`2<T1,T2>
class CORDL_TYPE InDelegateListProcessor_2 : public ::GorillaTag::DelegateListProcessorPlusMinus_2<::GorillaTag::InDelegateListProcessor_2<T1,T2>*,::GorillaTag::InAction_2<T1,T2>*> {
public:
// Declarations
/// @brief Field m_data1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_data1, put=__cordl_internal_set_m_data1)) T1  m_data1;

/// @brief Field m_data2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_data2, put=__cordl_internal_set_m_data2)) T2  m_data2;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<T1>  data1, /* [IsReadOnly] */ ::by_ref<T2>  data2) ;

/// @brief Method InvokeSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeSafe(/* [IsReadOnly] */ ::by_ref<T1>  data1, /* [IsReadOnly] */ ::by_ref<T2>  data2) ;

static inline ::GorillaTag::InDelegateListProcessor_2<T1,T2>* New_ctor() ;

static inline ::GorillaTag::InDelegateListProcessor_2<T1,T2>* New_ctor(int32_t  capacity) ;

/// @brief Method ProcessItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessItem(/* [IsReadOnly] */ ::by_ref<::GorillaTag::InAction_2<T1,T2>*>  item) ;

/// @brief Method ResetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResetData() ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetData(/* [IsReadOnly] */ ::by_ref<T1>  data1, /* [IsReadOnly] */ ::by_ref<T2>  data2) ;

constexpr T1 const& __cordl_internal_get_m_data1() const;

constexpr T1& __cordl_internal_get_m_data1() ;

constexpr T2 const& __cordl_internal_get_m_data2() const;

constexpr T2& __cordl_internal_get_m_data2() ;

constexpr void __cordl_internal_set_m_data1(T1  value) ;

constexpr void __cordl_internal_set_m_data2(T2  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InDelegateListProcessor_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InDelegateListProcessor_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InDelegateListProcessor_2(InDelegateListProcessor_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InDelegateListProcessor_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InDelegateListProcessor_2(InDelegateListProcessor_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4663};

/// @brief Field m_data1, offset: 0x28, size: 0x8, def value: None
 T1  ___m_data1;

/// @brief Field m_data2, offset: 0x30, size: 0x8, def value: None
 T2  ___m_data2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
