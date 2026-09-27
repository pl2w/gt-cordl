#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenarioBasicRightHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
CORDL_MODULE_EXPORT(SlingshotTestScenarioBasicRightHand)
// Forward declare root types
namespace GlobalNamespace {
class SlingshotTestScenarioBasicRightHand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotTestScenarioBasicRightHand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotTestScenarioBasicRightHand*, "", "SlingshotTestScenarioBasicRightHand");
// Dependencies SlingshotTestScenario
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotTestScenarioBasicRightHand
class CORDL_TYPE SlingshotTestScenarioBasicRightHand : public ::GlobalNamespace::SlingshotTestScenario {
public:
// Declarations
static inline ::GlobalNamespace::SlingshotTestScenarioBasicRightHand* New_ctor() ;

/// @brief Method .ctor, addr 0x573d1ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotTestScenarioBasicRightHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioBasicRightHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotTestScenarioBasicRightHand(SlingshotTestScenarioBasicRightHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenarioBasicRightHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotTestScenarioBasicRightHand(SlingshotTestScenarioBasicRightHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotTestScenarioBasicRightHand) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
