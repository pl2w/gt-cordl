#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_Attribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnPlayChange_BaseAttribute_def.hpp"
CORDL_MODULE_EXPORT(OnEnterPlay_Attribute)
// Forward declare root types
namespace GlobalNamespace {
class OnEnterPlay_Attribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnEnterPlay_Attribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnEnterPlay_Attribute*, "", "OnEnterPlay_Attribute");
// Dependencies OnPlayChange_BaseAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnEnterPlay_Attribute
class CORDL_TYPE OnEnterPlay_Attribute : public ::GlobalNamespace::OnPlayChange_BaseAttribute {
public:
// Declarations
static inline ::GlobalNamespace::OnEnterPlay_Attribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5b0da44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnEnterPlay_Attribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_Attribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnEnterPlay_Attribute(OnEnterPlay_Attribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_Attribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnEnterPlay_Attribute(OnEnterPlay_Attribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3527};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnEnterPlay_Attribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
