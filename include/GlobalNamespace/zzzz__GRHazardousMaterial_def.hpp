#pragma once
// IWYU pragma private; include "GlobalNamespace/GRHazardousMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRHazardousMaterial)
namespace GlobalNamespace {
class GhostReactor;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class GRHazardousMaterial;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRHazardousMaterial*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRHazardousMaterial*, "", "GRHazardousMaterial");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRHazardousMaterial
class CORDL_TYPE GRHazardousMaterial : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field reactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Method Init, addr 0x589d45c, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GRHazardousMaterial* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x589d6f8, size 0x19c, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnLocalPlayerOverlap, addr 0x589d464, size 0x124, virtual false, abstract: false, final false
inline void OnLocalPlayerOverlap() ;

/// @brief Method OnTriggerEnter, addr 0x589d588, size 0x170, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

/// @brief Method .ctor, addr 0x589d894, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRHazardousMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRHazardousMaterial", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRHazardousMaterial(GRHazardousMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRHazardousMaterial", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRHazardousMaterial(GRHazardousMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1982};

/// @brief Field reactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRHazardousMaterial, ___reactor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRHazardousMaterial) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
