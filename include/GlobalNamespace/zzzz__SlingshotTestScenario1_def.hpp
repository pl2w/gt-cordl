#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenario1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
CORDL_MODULE_EXPORT(SlingshotTestScenario1)
// Forward declare root types
namespace GlobalNamespace {
class SlingshotTestScenario1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotTestScenario1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotTestScenario1*, "", "SlingshotTestScenario1");
// Dependencies SlingshotTestScenario
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotTestScenario1
class CORDL_TYPE SlingshotTestScenario1 : public ::GlobalNamespace::SlingshotTestScenario {
public:
// Declarations
static inline ::GlobalNamespace::SlingshotTestScenario1* New_ctor() ;

/// @brief Method .ctor, addr 0x573d1e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotTestScenario1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenario1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotTestScenario1(SlingshotTestScenario1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenario1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotTestScenario1(SlingshotTestScenario1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotTestScenario1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
