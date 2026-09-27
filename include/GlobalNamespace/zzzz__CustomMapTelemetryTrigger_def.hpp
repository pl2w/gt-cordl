#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapTelemetryTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomMapTelemetryTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapTelemetryTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapTelemetryTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapTelemetryTrigger*, "", "CustomMapTelemetryTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapTelemetryTrigger
class CORDL_TYPE CustomMapTelemetryTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::CustomMapTelemetryTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x59c1188, size 0x11c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x59c12a4, size 0x15c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method .ctor, addr 0x59c1400, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapTelemetryTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTelemetryTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapTelemetryTrigger(CustomMapTelemetryTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapTelemetryTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapTelemetryTrigger(CustomMapTelemetryTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomMapTelemetryTrigger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
