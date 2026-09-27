#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTester.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SlingshotTester)
namespace GlobalNamespace {
class SlingshotTestScenario;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotTester;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotTester*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotTester*, "", "SlingshotTester");
// Dependencies SlingshotTestScenario, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotTester
class CORDL_TYPE SlingshotTester : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentScenario, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentScenario, put=__cordl_internal_set_currentScenario)) ::UnityW<::GlobalNamespace::SlingshotTestScenario>  currentScenario;

/// @brief Field scenarioList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenarioList, put=__cordl_internal_set_scenarioList)) ::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>>  scenarioList;

static inline ::GlobalNamespace::SlingshotTester* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotTestScenario> const& __cordl_internal_get_currentScenario() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotTestScenario>& __cordl_internal_get_currentScenario() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>> const& __cordl_internal_get_scenarioList() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>>& __cordl_internal_get_scenarioList() ;

constexpr void __cordl_internal_set_currentScenario(::UnityW<::GlobalNamespace::SlingshotTestScenario>  value) ;

constexpr void __cordl_internal_set_scenarioList(::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>>  value) ;

/// @brief Method .ctor, addr 0x573d1d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotTester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTester", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotTester(SlingshotTester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotTester", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotTester(SlingshotTester const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1226};

/// @brief Field currentScenario, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotTestScenario>  ___currentScenario;

/// @brief Field scenarioList, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>>  ___scenarioList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotTester, ___currentScenario) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotTester, ___scenarioList) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotTester) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
