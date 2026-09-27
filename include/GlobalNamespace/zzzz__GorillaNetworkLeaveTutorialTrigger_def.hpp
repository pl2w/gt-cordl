#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkLeaveTutorialTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
CORDL_MODULE_EXPORT(GorillaNetworkLeaveTutorialTrigger)
// Forward declare root types
namespace GlobalNamespace {
class GorillaNetworkLeaveTutorialTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*, "", "GorillaNetworkLeaveTutorialTrigger");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaNetworkLeaveTutorialTrigger
class CORDL_TYPE GorillaNetworkLeaveTutorialTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
static inline ::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5aadf5c, size 0x7c, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method .ctor, addr 0x5aadfd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkLeaveTutorialTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkLeaveTutorialTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkLeaveTutorialTrigger(GorillaNetworkLeaveTutorialTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkLeaveTutorialTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkLeaveTutorialTrigger(GorillaNetworkLeaveTutorialTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
