#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckCompositionTarget)
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckCompositionTarget;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckCompositionTarget*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckCompositionTarget*, "Liv.Lck.Rendering", "LckCompositionTarget");
// [DisallowMultipleComponent]
// [RequireComponent(typeof(UnityEngine.Camera))]
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionTarget
class CORDL_TYPE LckCompositionTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Liv::Lck::Rendering::LckCompositionTarget* New_ctor() ;

/// @brief Method .ctor, addr 0x9d3fed8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionTarget(LckCompositionTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionTarget(LckCompositionTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24859};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Rendering::LckCompositionTarget) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
