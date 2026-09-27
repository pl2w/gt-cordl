#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameActivatable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameActivatable)
// Forward declare root types
namespace GlobalNamespace {
class IGameActivatable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameActivatable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameActivatable*, "", "IGameActivatable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameActivatable
class CORDL_TYPE IGameActivatable {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IGameActivatable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameActivatable(IGameActivatable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
