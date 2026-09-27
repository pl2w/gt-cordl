#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedProgressionTestingControls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RankedProgressionTestingControls)
// Forward declare root types
namespace GlobalNamespace {
class RankedProgressionTestingControls;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RankedProgressionTestingControls*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedProgressionTestingControls*, "", "RankedProgressionTestingControls");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedProgressionTestingControls
class CORDL_TYPE RankedProgressionTestingControls : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::RankedProgressionTestingControls* New_ctor() ;

/// @brief Method .ctor, addr 0x5968e74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedProgressionTestingControls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionTestingControls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedProgressionTestingControls(RankedProgressionTestingControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedProgressionTestingControls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedProgressionTestingControls(RankedProgressionTestingControls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RankedProgressionTestingControls) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
