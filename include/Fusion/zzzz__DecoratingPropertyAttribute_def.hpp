#pragma once
// IWYU pragma private; include "Fusion/DecoratingPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoratingPropertyAttribute)
// Forward declare root types
namespace Fusion {
class DecoratingPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::DecoratingPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::DecoratingPropertyAttribute*, "Fusion", "DecoratingPropertyAttribute");
// Dependencies Fusion.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DecoratingPropertyAttribute
class CORDL_TYPE DecoratingPropertyAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
static inline ::Fusion::DecoratingPropertyAttribute* New_ctor() ;

static inline ::Fusion::DecoratingPropertyAttribute* New_ctor(int32_t  order) ;

/// @brief Method .ctor, addr 0x5f3d3c8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f3d3e8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  order) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoratingPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoratingPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoratingPropertyAttribute(DecoratingPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoratingPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoratingPropertyAttribute(DecoratingPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31265};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DecoratingPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
