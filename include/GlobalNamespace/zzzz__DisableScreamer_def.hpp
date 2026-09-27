#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableScreamer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableScreamer)
// Forward declare root types
namespace GlobalNamespace {
class DisableScreamer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisableScreamer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisableScreamer*, "", "DisableScreamer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableScreamer
class CORDL_TYPE DisableScreamer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::DisableScreamer* New_ctor() ;

/// @brief Method OnDisable, addr 0x579a988, size 0x84, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method .ctor, addr 0x579aa0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableScreamer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableScreamer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableScreamer(DisableScreamer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableScreamer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableScreamer(DisableScreamer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DisableScreamer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
