#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRigidBodyNoiseEventMaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRRigidBodyNoiseEventMaker)
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class GRRigidBodyNoiseEventMaker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRRigidBodyNoiseEventMaker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRRigidBodyNoiseEventMaker*, "", "GRRigidBodyNoiseEventMaker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRRigidBodyNoiseEventMaker
class CORDL_TYPE GRRigidBodyNoiseEventMaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field velocityThreshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityThreshold, put=__cordl_internal_set_velocityThreshold)) float_t  velocityThreshold;

static inline ::GlobalNamespace::GRRigidBodyNoiseEventMaker* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x58aa0a8, size 0x194, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

constexpr float_t const& __cordl_internal_get_velocityThreshold() const;

constexpr float_t& __cordl_internal_get_velocityThreshold() ;

constexpr void __cordl_internal_set_velocityThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x58aa23c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRRigidBodyNoiseEventMaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRRigidBodyNoiseEventMaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRRigidBodyNoiseEventMaker(GRRigidBodyNoiseEventMaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRRigidBodyNoiseEventMaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRRigidBodyNoiseEventMaker(GRRigidBodyNoiseEventMaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2021};

/// @brief Field velocityThreshold, offset: 0x20, size: 0x4, def value: None
 float_t  ___velocityThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRRigidBodyNoiseEventMaker, ___velocityThreshold) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRRigidBodyNoiseEventMaker) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
