#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersSpawnPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CrittersSpawnPoint)
// Forward declare root types
namespace Critters::Scripts {
class CrittersSpawnPoint;
}
// Write type traits
MARK_REF_T(::Critters::Scripts::CrittersSpawnPoint*);
DEFINE_IL2CPP_CLASS(::Critters::Scripts::CrittersSpawnPoint*, "Critters.Scripts", "CrittersSpawnPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace Critters::Scripts {
// Is value type: false
// CS Name: Critters.Scripts.CrittersSpawnPoint
class CORDL_TYPE CrittersSpawnPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Critters::Scripts::CrittersSpawnPoint* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5dddd44, size 0x50, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method .ctor, addr 0x5dddd94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersSpawnPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersSpawnPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersSpawnPoint(CrittersSpawnPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersSpawnPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersSpawnPoint(CrittersSpawnPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Critters::Scripts::CrittersSpawnPoint) == 0x20, "Size mismatch!");

} // namespace end def Critters::Scripts
