#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnPoint)
// Forward declare root types
namespace GlobalNamespace {
class SpawnPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpawnPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnPoint*, "", "SpawnPoint");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnPoint
class CORDL_TYPE SpawnPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field startSize, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSize, put=__cordl_internal_set_startSize)) float_t  startSize;

/// @brief Field startZone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_startZone, put=__cordl_internal_set_startZone)) ::GlobalNamespace::GTZone  startZone;

static inline ::GlobalNamespace::SpawnPoint* New_ctor() ;

constexpr float_t const& __cordl_internal_get_startSize() const;

constexpr float_t& __cordl_internal_get_startSize() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_startZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_startZone() ;

constexpr void __cordl_internal_set_startSize(float_t  value) ;

constexpr void __cordl_internal_set_startZone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5b206a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnPoint(SpawnPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnPoint(SpawnPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3601};

/// @brief Field startZone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___startZone;

/// @brief Field startSize, offset: 0x24, size: 0x4, def value: None
 float_t  ___startSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnPoint, ___startZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnPoint, ___startSize) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpawnPoint) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
