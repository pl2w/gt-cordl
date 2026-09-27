#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandLeft.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaHandNode_def.hpp"
CORDL_MODULE_EXPORT(GorillaHandLeft)
// Forward declare root types
namespace GlobalNamespace {
class GorillaHandLeft;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHandLeft*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHandLeft*, "", "GorillaHandLeft");
// Dependencies GorillaHandNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHandLeft
class CORDL_TYPE GorillaHandLeft : public ::GlobalNamespace::GorillaHandNode {
public:
// Declarations
static inline ::GlobalNamespace::GorillaHandLeft* New_ctor() ;

/// @brief Method .ctor, addr 0x590d420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHandLeft() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandLeft", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHandLeft(GorillaHandLeft && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandLeft", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHandLeft(GorillaHandLeft const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2169};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaHandLeft) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
