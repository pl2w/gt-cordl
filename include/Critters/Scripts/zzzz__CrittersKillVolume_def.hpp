#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersKillVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CrittersKillVolume)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Critters::Scripts {
class CrittersKillVolume;
}
// Write type traits
MARK_REF_T(::Critters::Scripts::CrittersKillVolume*);
DEFINE_IL2CPP_CLASS(::Critters::Scripts::CrittersKillVolume*, "Critters.Scripts", "CrittersKillVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace Critters::Scripts {
// Is value type: false
// CS Name: Critters.Scripts.CrittersKillVolume
class CORDL_TYPE CrittersKillVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Critters::Scripts::CrittersKillVolume* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5ddda08, size 0x10c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method .ctor, addr 0x5dddb14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersKillVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersKillVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersKillVolume(CrittersKillVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersKillVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersKillVolume(CrittersKillVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5114};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Critters::Scripts::CrittersKillVolume) == 0x20, "Size mismatch!");

} // namespace end def Critters::Scripts
