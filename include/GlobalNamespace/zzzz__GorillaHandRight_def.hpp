#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandRight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaHandNode_def.hpp"
CORDL_MODULE_EXPORT(GorillaHandRight)
// Forward declare root types
namespace GlobalNamespace {
class GorillaHandRight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHandRight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHandRight*, "", "GorillaHandRight");
// Dependencies GorillaHandNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHandRight
class CORDL_TYPE GorillaHandRight : public ::GlobalNamespace::GorillaHandNode {
public:
// Declarations
static inline ::GlobalNamespace::GorillaHandRight* New_ctor() ;

/// @brief Method .ctor, addr 0x590d934, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHandRight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandRight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHandRight(GorillaHandRight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandRight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHandRight(GorillaHandRight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaHandRight) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
