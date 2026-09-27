#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameAgentComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IGameAgentComponent)
// Forward declare root types
namespace GlobalNamespace {
class IGameAgentComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameAgentComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameAgentComponent*, "", "IGameAgentComponent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameAgentComponent
class CORDL_TYPE IGameAgentComponent {
public:
// Declarations
/// @brief Method OnEntityThink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEntityThink(float_t  dt) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameAgentComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameAgentComponent(IGameAgentComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1714};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
