#pragma once
// IWYU pragma private; include "BoingKit/BoingReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingBehavior_def.hpp"
CORDL_MODULE_EXPORT(BoingReactor)
// Forward declare root types
namespace BoingKit {
class BoingReactor;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingReactor*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingReactor*, "BoingKit", "BoingReactor");
// Dependencies BoingKit.BoingBehavior
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingReactor
class CORDL_TYPE BoingReactor : public ::BoingKit::BoingBehavior {
public:
// Declarations
static inline ::BoingKit::BoingReactor* New_ctor() ;

/// @brief Method PrepareExecute, addr 0x5e155dc, size 0x8, virtual true, abstract: false, final false
inline void PrepareExecute() ;

/// @brief Method Register, addr 0x5e1b700, size 0x54, virtual true, abstract: false, final false
inline void Register() ;

/// @brief Method Unregister, addr 0x5e1b754, size 0x54, virtual true, abstract: false, final false
inline void Unregister() ;

/// @brief Method .ctor, addr 0x5e15b30, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingReactor(BoingReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingReactor(BoingReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingReactor) == 0x238, "Size mismatch!");

} // namespace end def BoingKit
