#pragma once
// IWYU pragma private; include "GorillaTag/IDynamicFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IDynamicFloat)
// Forward declare root types
namespace GorillaTag {
class IDynamicFloat;
}
// Write type traits
MARK_REF_T(::GorillaTag::IDynamicFloat*);
DEFINE_IL2CPP_CLASS(::GorillaTag::IDynamicFloat*, "GorillaTag", "IDynamicFloat");
// Dependencies 
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.IDynamicFloat
class CORDL_TYPE IDynamicFloat {
public:
// Declarations
 __declspec(property(get=get_floatValue)) float_t  floatValue;

/// @brief Method get_floatValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_floatValue() ;

// Ctor Parameters [CppParam { name: "", ty: "IDynamicFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDynamicFloat(IDynamicFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
