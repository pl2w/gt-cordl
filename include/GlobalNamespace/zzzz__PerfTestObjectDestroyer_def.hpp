#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestObjectDestroyer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PerfTestObjectDestroyer)
// Forward declare root types
namespace GlobalNamespace {
class PerfTestObjectDestroyer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerfTestObjectDestroyer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerfTestObjectDestroyer*, "", "PerfTestObjectDestroyer");
// [GTStripGameObjectFromBuild("!GT_AUTOMATED_PERF_TEST && !BETA")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerfTestObjectDestroyer
class CORDL_TYPE PerfTestObjectDestroyer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::PerfTestObjectDestroyer* New_ctor() ;

/// @brief Method Start, addr 0x56bcec0, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x56bcf30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerfTestObjectDestroyer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerfTestObjectDestroyer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerfTestObjectDestroyer(PerfTestObjectDestroyer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerfTestObjectDestroyer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerfTestObjectDestroyer(PerfTestObjectDestroyer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerfTestObjectDestroyer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
