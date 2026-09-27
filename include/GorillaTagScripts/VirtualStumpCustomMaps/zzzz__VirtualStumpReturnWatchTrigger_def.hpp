#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/VirtualStumpReturnWatchTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VirtualStumpReturnWatchTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class VirtualStumpReturnWatchTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatchTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatchTrigger*, "GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpReturnWatchTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpReturnWatchTrigger
class CORDL_TYPE VirtualStumpReturnWatchTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatchTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5bef6dc, size 0x148, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5bef824, size 0x188, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method .ctor, addr 0x5bef9ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpReturnWatchTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpReturnWatchTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpReturnWatchTrigger(VirtualStumpReturnWatchTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpReturnWatchTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpReturnWatchTrigger(VirtualStumpReturnWatchTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4063};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatchTrigger) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
