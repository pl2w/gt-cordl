#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntityComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IGameEntityComponent)
// Forward declare root types
namespace GlobalNamespace {
class IGameEntityComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameEntityComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameEntityComponent*, "", "IGameEntityComponent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameEntityComponent
class CORDL_TYPE IGameEntityComponent {
public:
// Declarations
/// @brief Method OnEntityDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameEntityComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameEntityComponent(IGameEntityComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1728};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
