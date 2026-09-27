#pragma once
// IWYU pragma private; include "GorillaTag/InDelegateListProcessor_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__DelegateListProcessorPlusMinus_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InDelegateListProcessor_1)
namespace GorillaTag {
template<typename T>
class InAction_1;
}
// Forward declare root types
namespace GorillaTag {
template<typename T>
class InDelegateListProcessor_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::InDelegateListProcessor_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::InDelegateListProcessor_1, "GorillaTag", "InDelegateListProcessor`1");
// Dependencies GorillaTag.DelegateListProcessorPlusMinus`2<T1, T2>
namespace GorillaTag {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaTag.InDelegateListProcessor`1<T>
class CORDL_TYPE InDelegateListProcessor_1 : public ::GorillaTag::DelegateListProcessorPlusMinus_2<::GorillaTag::InDelegateListProcessor_1<T>*,::GorillaTag::InAction_1<T>*> {
public:
// Declarations
/// @brief Field m_data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_data, put=__cordl_internal_set_m_data)) T  m_data;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<T>  data) ;

/// @brief Method InvokeSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeSafe(/* [IsReadOnly] */ ::by_ref<T>  data) ;

static inline ::GorillaTag::InDelegateListProcessor_1<T>* New_ctor() ;

static inline ::GorillaTag::InDelegateListProcessor_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method ProcessItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessItem(/* [IsReadOnly] */ ::by_ref<::GorillaTag::InAction_1<T>*>  item) ;

constexpr T const& __cordl_internal_get_m_data() const;

constexpr T& __cordl_internal_get_m_data() ;

constexpr void __cordl_internal_set_m_data(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InDelegateListProcessor_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InDelegateListProcessor_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InDelegateListProcessor_1(InDelegateListProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InDelegateListProcessor_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InDelegateListProcessor_1(InDelegateListProcessor_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4662};

/// @brief Field m_data, offset: 0x28, size: 0x8, def value: None
 T  ___m_data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
