#pragma once
// IWYU pragma private; include "GorillaTag/ObjectPoolEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ObjectPoolEvents)
// Forward declare root types
namespace GorillaTag {
class ObjectPoolEvents;
}
// Write type traits
MARK_REF_T(::GorillaTag::ObjectPoolEvents*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ObjectPoolEvents*, "GorillaTag", "ObjectPoolEvents");
// Dependencies 
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ObjectPoolEvents
class CORDL_TYPE ObjectPoolEvents {
public:
// Declarations
/// @brief Method OnReturned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReturned() ;

/// @brief Method OnTaken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTaken() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPoolEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPoolEvents(ObjectPoolEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4666};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
