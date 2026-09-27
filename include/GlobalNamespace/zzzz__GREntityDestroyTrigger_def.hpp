#pragma once
// IWYU pragma private; include "GlobalNamespace/GREntityDestroyTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GREntityDestroyTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GREntityDestroyTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREntityDestroyTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREntityDestroyTrigger*, "", "GREntityDestroyTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREntityDestroyTrigger
class CORDL_TYPE GREntityDestroyTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GREntityDestroyTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x589a784, size 0xd0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method .ctor, addr 0x589a854, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREntityDestroyTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREntityDestroyTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREntityDestroyTrigger(GREntityDestroyTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREntityDestroyTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREntityDestroyTrigger(GREntityDestroyTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1972};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GREntityDestroyTrigger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
