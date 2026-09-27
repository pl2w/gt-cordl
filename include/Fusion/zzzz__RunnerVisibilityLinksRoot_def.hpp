#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLinksRoot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RunnerVisibilityLinksRoot)
// Forward declare root types
namespace Fusion {
class RunnerVisibilityLinksRoot;
}
// Write type traits
MARK_REF_T(::Fusion::RunnerVisibilityLinksRoot*);
DEFINE_IL2CPP_CLASS(::Fusion::RunnerVisibilityLinksRoot*, "Fusion", "RunnerVisibilityLinksRoot");
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RunnerVisibilityLinksRoot
class CORDL_TYPE RunnerVisibilityLinksRoot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x60f62b0, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Fusion::RunnerVisibilityLinksRoot* New_ctor() ;

/// @brief Method .ctor, addr 0x60f62bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RunnerVisibilityLinksRoot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RunnerVisibilityLinksRoot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RunnerVisibilityLinksRoot(RunnerVisibilityLinksRoot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RunnerVisibilityLinksRoot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RunnerVisibilityLinksRoot(RunnerVisibilityLinksRoot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23488};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RunnerVisibilityLinksRoot) == 0x20, "Size mismatch!");

} // namespace end def Fusion
