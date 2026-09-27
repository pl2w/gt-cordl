#pragma once
// IWYU pragma private; include "GorillaTag/DelegateListProcessorPlusMinus_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__ListProcessorAbstract_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegateListProcessorPlusMinus_2)
// Forward declare root types
namespace GorillaTag {
template<typename T1,typename T2>
class DelegateListProcessorPlusMinus_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::DelegateListProcessorPlusMinus_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::DelegateListProcessorPlusMinus_2, "GorillaTag", "DelegateListProcessorPlusMinus`2");
// Dependencies GorillaTag.ListProcessorAbstract`1<T>
namespace GorillaTag {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: GorillaTag.DelegateListProcessorPlusMinus`2<T1,T2>
class CORDL_TYPE DelegateListProcessorPlusMinus_2 : public ::GorillaTag::ListProcessorAbstract_1<T2> {
public:
// Declarations
static inline ::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>* New_ctor() ;

static inline ::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method op_Addition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T1 op_Addition(::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*  left, T2  right) ;

/// @brief Method op_Subtraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T1 op_Subtraction(::GorillaTag::DelegateListProcessorPlusMinus_2<T1,T2>*  left, T2  right) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegateListProcessorPlusMinus_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegateListProcessorPlusMinus_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateListProcessorPlusMinus_2(DelegateListProcessorPlusMinus_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateListProcessorPlusMinus_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateListProcessorPlusMinus_2(DelegateListProcessorPlusMinus_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
