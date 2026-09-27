#pragma once
// IWYU pragma private; include "GlobalNamespace/ComputePenetration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ComputePenetration)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ComputePenetration;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ComputePenetration*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ComputePenetration*, "", "ComputePenetration");
// Dependencies TimeSince, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ComputePenetration
class CORDL_TYPE ComputePenetration : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colliderA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderA, put=__cordl_internal_set_colliderA)) ::UnityW<::UnityEngine::Collider>  colliderA;

/// @brief Field colliderB, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderB, put=__cordl_internal_set_colliderB)) ::UnityW<::UnityEngine::Collider>  colliderB;

/// @brief Field direction, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::UnityEngine::Vector3  direction;

/// @brief Field distance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field lastUpdate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastUpdate, put=__cordl_internal_set_lastUpdate)) ::GlobalNamespace::TimeSince  lastUpdate;

/// @brief Field overlapped, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_overlapped, put=__cordl_internal_set_overlapped)) bool  overlapped;

/// @brief Method Compute, addr 0x5a1a190, size 0x94, virtual false, abstract: false, final false
inline void Compute() ;

/// @brief Method DrawCollider, addr 0x5a1a5b8, size 0x448, virtual false, abstract: false, final false
inline void DrawCollider(::UnityEngine::Collider*  c, ::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::ComputePenetration* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5a1a224, size 0x33c, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_colliderA() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_colliderA() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_colliderB() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_colliderB() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction() ;

constexpr float_t const& __cordl_internal_get_distance() const;

constexpr float_t& __cordl_internal_get_distance() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get_lastUpdate() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get_lastUpdate() ;

constexpr bool const& __cordl_internal_get_overlapped() const;

constexpr bool& __cordl_internal_get_overlapped() ;

constexpr void __cordl_internal_set_colliderA(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_colliderB(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_lastUpdate(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_overlapped(bool  value) ;

/// @brief Method .ctor, addr 0x5a1aa00, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComputePenetration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComputePenetration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputePenetration(ComputePenetration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputePenetration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputePenetration(ComputePenetration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2794};

/// @brief Field colliderA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___colliderA;

/// @brief Field colliderB, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___colliderB;

/// @brief Field overlapped, offset: 0x30, size: 0x1, def value: None
 bool  ___overlapped;

/// @brief Field direction, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___direction;

/// @brief Field distance, offset: 0x40, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field lastUpdate, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ___lastUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ComputePenetration, ___colliderA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComputePenetration, ___colliderB) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComputePenetration, ___overlapped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComputePenetration, ___direction) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComputePenetration, ___distance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComputePenetration, ___lastUpdate) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ComputePenetration) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
