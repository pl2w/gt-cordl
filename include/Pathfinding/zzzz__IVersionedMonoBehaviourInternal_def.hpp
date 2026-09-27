#pragma once
// IWYU pragma private; include "Pathfinding/IVersionedMonoBehaviourInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVersionedMonoBehaviourInternal)
// Forward declare root types
namespace Pathfinding {
class IVersionedMonoBehaviourInternal;
}
// Write type traits
MARK_REF_T(::Pathfinding::IVersionedMonoBehaviourInternal*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IVersionedMonoBehaviourInternal*, "Pathfinding", "IVersionedMonoBehaviourInternal");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IVersionedMonoBehaviourInternal
class CORDL_TYPE IVersionedMonoBehaviourInternal {
public:
// Declarations
/// @brief Method UpgradeFromUnityThread, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpgradeFromUnityThread() ;

// Ctor Parameters [CppParam { name: "", ty: "IVersionedMonoBehaviourInternal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVersionedMonoBehaviourInternal(IVersionedMonoBehaviourInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
