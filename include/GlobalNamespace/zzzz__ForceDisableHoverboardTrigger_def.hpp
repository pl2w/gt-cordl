#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceDisableHoverboardTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ForceDisableHoverboardTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class ForceDisableHoverboardTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ForceDisableHoverboardTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ForceDisableHoverboardTrigger*, "", "ForceDisableHoverboardTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ForceDisableHoverboardTrigger
class CORDL_TYPE ForceDisableHoverboardTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field reEnableOnlyInVStump, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_reEnableOnlyInVStump, put=__cordl_internal_set_reEnableOnlyInVStump)) bool  reEnableOnlyInVStump;

static inline ::GlobalNamespace::ForceDisableHoverboardTrigger* New_ctor() ;

/// @brief Method OnDisable, addr 0x59c7484, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x59c715c, size 0x140, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x59c729c, size 0x1e8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_reEnableOnlyInVStump() const;

constexpr bool& __cordl_internal_get_reEnableOnlyInVStump() ;

constexpr void __cordl_internal_set_reEnableOnlyInVStump(bool  value) ;

/// @brief Method .ctor, addr 0x59c75a4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ForceDisableHoverboardTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ForceDisableHoverboardTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ForceDisableHoverboardTrigger(ForceDisableHoverboardTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ForceDisableHoverboardTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ForceDisableHoverboardTrigger(ForceDisableHoverboardTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2682};

/// @brief Field reEnableOnlyInVStump, offset: 0x20, size: 0x1, def value: None
 bool  ___reEnableOnlyInVStump;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ForceDisableHoverboardTrigger, ___reEnableOnlyInVStump) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ForceDisableHoverboardTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
