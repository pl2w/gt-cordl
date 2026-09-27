#pragma once
// IWYU pragma private; include "Drawing/IDrawGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDrawGizmos)
// Forward declare root types
namespace Drawing {
class IDrawGizmos;
}
// Write type traits
MARK_REF_T(::Drawing::IDrawGizmos*);
DEFINE_IL2CPP_CLASS(::Drawing::IDrawGizmos*, "Drawing", "IDrawGizmos");
// Dependencies 
namespace Drawing {
// Is value type: false
// CS Name: Drawing.IDrawGizmos
class CORDL_TYPE IDrawGizmos {
public:
// Declarations
/// @brief Method DrawGizmos, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DrawGizmos() ;

// Ctor Parameters [CppParam { name: "", ty: "IDrawGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDrawGizmos(IDrawGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Drawing
