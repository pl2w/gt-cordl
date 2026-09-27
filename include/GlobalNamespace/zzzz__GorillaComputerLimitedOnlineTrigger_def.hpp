#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaComputerLimitedOnlineTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
CORDL_MODULE_EXPORT(GorillaComputerLimitedOnlineTrigger)
// Forward declare root types
namespace GlobalNamespace {
class GorillaComputerLimitedOnlineTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*, "", "GorillaComputerLimitedOnlineTrigger");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaComputerLimitedOnlineTrigger
class CORDL_TYPE GorillaComputerLimitedOnlineTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
static inline ::GlobalNamespace::GorillaComputerLimitedOnlineTrigger* New_ctor() ;

/// @brief Method OnBoxExited, addr 0x5996c8c, size 0x70, virtual true, abstract: false, final false
inline void OnBoxExited() ;

/// @brief Method OnBoxTriggered, addr 0x5996c1c, size 0x70, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method .ctor, addr 0x5996cfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputerLimitedOnlineTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerLimitedOnlineTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaComputerLimitedOnlineTrigger(GorillaComputerLimitedOnlineTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaComputerLimitedOnlineTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaComputerLimitedOnlineTrigger(GorillaComputerLimitedOnlineTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaComputerLimitedOnlineTrigger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
