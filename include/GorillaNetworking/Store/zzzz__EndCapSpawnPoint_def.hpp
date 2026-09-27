#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/EndCapSpawnPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EndCapSpawnPoint)
// Forward declare root types
namespace GorillaNetworking::Store {
class EndCapSpawnPoint;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::EndCapSpawnPoint*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::EndCapSpawnPoint*, "GorillaNetworking.Store", "EndCapSpawnPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.EndCapSpawnPoint
class CORDL_TYPE EndCapSpawnPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GorillaNetworking::Store::EndCapSpawnPoint* New_ctor() ;

/// @brief Method .ctor, addr 0x5ca8310, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndCapSpawnPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndCapSpawnPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EndCapSpawnPoint(EndCapSpawnPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndCapSpawnPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndCapSpawnPoint(EndCapSpawnPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::Store::EndCapSpawnPoint) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
