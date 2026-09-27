#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportBall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SportBall)
// Forward declare root types
namespace GorillaTag::Sports {
class SportBall;
}
// Write type traits
MARK_REF_T(::GorillaTag::Sports::SportBall*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Sports::SportBall*, "GorillaTag.Sports", "SportBall");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Sports {
// Is value type: false
// CS Name: GorillaTag.Sports.SportBall
class CORDL_TYPE SportBall : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GorillaTag::Sports::SportBall* New_ctor() ;

/// @brief Method .ctor, addr 0x5d3bc9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SportBall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SportBall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SportBall(SportBall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SportBall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SportBall(SportBall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Sports::SportBall) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Sports
