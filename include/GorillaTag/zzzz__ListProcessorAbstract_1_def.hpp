#pragma once
// IWYU pragma private; include "GorillaTag/ListProcessorAbstract_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__ListProcessor_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListProcessorAbstract_1)
// Forward declare root types
namespace GorillaTag {
template<typename T>
class ListProcessorAbstract_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::ListProcessorAbstract_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::ListProcessorAbstract_1, "GorillaTag", "ListProcessorAbstract`1");
// Dependencies GorillaTag.ListProcessor`1<T>
namespace GorillaTag {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaTag.ListProcessorAbstract`1<T>
class CORDL_TYPE ListProcessorAbstract_1 : public ::GorillaTag::ListProcessor_1<T> {
public:
// Declarations
static inline ::GorillaTag::ListProcessorAbstract_1<T>* New_ctor() ;

static inline ::GorillaTag::ListProcessorAbstract_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method ProcessItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ProcessItem(/* [IsReadOnly] */ ::by_ref<T>  item) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListProcessorAbstract_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListProcessorAbstract_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListProcessorAbstract_1(ListProcessorAbstract_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListProcessorAbstract_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListProcessorAbstract_1(ListProcessorAbstract_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
