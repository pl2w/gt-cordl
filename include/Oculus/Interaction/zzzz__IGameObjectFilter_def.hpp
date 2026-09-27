#pragma once
// IWYU pragma private; include "Oculus/Interaction/IGameObjectFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameObjectFilter)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction {
class IGameObjectFilter;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IGameObjectFilter*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IGameObjectFilter*, "Oculus.Interaction", "IGameObjectFilter");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IGameObjectFilter
class CORDL_TYPE IGameObjectFilter {
public:
// Declarations
/// @brief Method Filter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Filter(::UnityEngine::GameObject*  gameObject) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameObjectFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameObjectFilter(IGameObjectFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
