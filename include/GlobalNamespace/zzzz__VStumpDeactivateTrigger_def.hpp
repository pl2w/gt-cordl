#pragma once
// IWYU pragma private; include "GlobalNamespace/VStumpDeactivateTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VStumpDeactivateTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class VStumpDeactivateTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VStumpDeactivateTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VStumpDeactivateTrigger*, "", "VStumpDeactivateTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VStumpDeactivateTrigger
class CORDL_TYPE VStumpDeactivateTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field armed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_armed, put=__cordl_internal_set_armed)) bool  armed;

static inline ::GlobalNamespace::VStumpDeactivateTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5a10aac, size 0x120, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5a10bcc, size 0xe4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_armed() const;

constexpr bool& __cordl_internal_get_armed() ;

constexpr void __cordl_internal_set_armed(bool  value) ;

/// @brief Method .ctor, addr 0x5a10cb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VStumpDeactivateTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VStumpDeactivateTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VStumpDeactivateTrigger(VStumpDeactivateTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VStumpDeactivateTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VStumpDeactivateTrigger(VStumpDeactivateTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2777};

/// @brief Field armed, offset: 0x20, size: 0x1, def value: None
 bool  ___armed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VStumpDeactivateTrigger, ___armed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VStumpDeactivateTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
