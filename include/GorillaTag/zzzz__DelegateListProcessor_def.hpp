#pragma once
// IWYU pragma private; include "GorillaTag/DelegateListProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__DelegateListProcessorPlusMinus_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegateListProcessor)
namespace System {
class Action;
}
// Forward declare root types
namespace GorillaTag {
class DelegateListProcessor;
}
// Write type traits
MARK_REF_T(::GorillaTag::DelegateListProcessor*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DelegateListProcessor*, "GorillaTag", "DelegateListProcessor");
// Dependencies GorillaTag.DelegateListProcessorPlusMinus`2<T1, T2>
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.DelegateListProcessor
class CORDL_TYPE DelegateListProcessor : public ::GorillaTag::DelegateListProcessorPlusMinus_2<::GorillaTag::DelegateListProcessor*,::System::Action*> {
public:
// Declarations
/// @brief Method Invoke, addr 0x5d368ec, size 0xc, virtual false, abstract: false, final false
inline void Invoke() ;

/// @brief Method InvokeSafe, addr 0x5d368f8, size 0xc, virtual false, abstract: false, final false
inline void InvokeSafe() ;

static inline ::GorillaTag::DelegateListProcessor* New_ctor() ;

static inline ::GorillaTag::DelegateListProcessor* New_ctor(int32_t  capacity) ;

/// @brief Method ProcessItem, addr 0x5d36904, size 0x20, virtual true, abstract: false, final false
inline void ProcessItem(/* [IsReadOnly] */ ::by_ref<::System::Action*>  del) ;

/// @brief Method .ctor, addr 0x5d3684c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5d36894, size 0x58, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegateListProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegateListProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateListProcessor(DelegateListProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateListProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateListProcessor(DelegateListProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4659};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::DelegateListProcessor) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag
