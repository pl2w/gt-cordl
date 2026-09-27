#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenario.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SlingshotTestScenario)
// Forward declare root types
namespace GlobalNamespace {
class SlingshotTestScenario;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotTestScenario*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotTestScenario*, "", "SlingshotTestScenario");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotTestScenario
class CORDL_TYPE SlingshotTestScenario : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SlingshotTestScenario* New_ctor() ;

/// @brief Method .ctor, addr 0x573d1dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotTestScenario() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenario", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotTestScenario(SlingshotTestScenario && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTestScenario", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotTestScenario(SlingshotTestScenario const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotTestScenario) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
