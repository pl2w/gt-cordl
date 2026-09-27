#pragma once
// IWYU pragma private; include "GlobalNamespace/TrailRendererScalerLocal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TrailRendererScalerLocal)
// Forward declare root types
namespace GlobalNamespace {
class TrailRendererScalerLocal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrailRendererScalerLocal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrailRendererScalerLocal*, "", "TrailRendererScalerLocal");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrailRendererScalerLocal
class CORDL_TYPE TrailRendererScalerLocal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::TrailRendererScalerLocal* New_ctor() ;

/// @brief Method .ctor, addr 0x56b1e34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrailRendererScalerLocal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrailRendererScalerLocal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrailRendererScalerLocal(TrailRendererScalerLocal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrailRendererScalerLocal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrailRendererScalerLocal(TrailRendererScalerLocal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{941};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TrailRendererScalerLocal) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
