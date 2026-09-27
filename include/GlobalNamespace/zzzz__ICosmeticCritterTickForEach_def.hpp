#pragma once
// IWYU pragma private; include "GlobalNamespace/ICosmeticCritterTickForEach.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICosmeticCritterTickForEach)
namespace GlobalNamespace {
class CosmeticCritter;
}
// Forward declare root types
namespace GlobalNamespace {
class ICosmeticCritterTickForEach;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICosmeticCritterTickForEach*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICosmeticCritterTickForEach*, "", "ICosmeticCritterTickForEach");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICosmeticCritterTickForEach
class CORDL_TYPE ICosmeticCritterTickForEach {
public:
// Declarations
/// @brief Method TickForEachCritter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TickForEachCritter(::GlobalNamespace::CosmeticCritter*  critter) ;

// Ctor Parameters [CppParam { name: "", ty: "ICosmeticCritterTickForEach", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICosmeticCritterTickForEach(ICosmeticCritterTickForEach const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1672};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
