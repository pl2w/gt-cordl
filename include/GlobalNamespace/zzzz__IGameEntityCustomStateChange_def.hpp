#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntityCustomStateChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IGameEntityCustomStateChange)
// Forward declare root types
namespace GlobalNamespace {
class IGameEntityCustomStateChange;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameEntityCustomStateChange*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameEntityCustomStateChange*, "", "IGameEntityCustomStateChange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameEntityCustomStateChange
class CORDL_TYPE IGameEntityCustomStateChange {
public:
// Declarations
/// @brief Method CanChangeState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanChangeState(int64_t  newState, int32_t  playerId) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameEntityCustomStateChange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameEntityCustomStateChange(IGameEntityCustomStateChange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
