#pragma once
// IWYU pragma private; include "GlobalNamespace/PropPlacer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PropPlacer)
// Forward declare root types
namespace GlobalNamespace {
class PropPlacer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropPlacer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropPlacer*, "", "PropPlacer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropPlacer
class CORDL_TYPE PropPlacer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::PropPlacer* New_ctor() ;

/// @brief Method .ctor, addr 0x563fed8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropPlacer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropPlacer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropPlacer(PropPlacer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropPlacer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropPlacer(PropPlacer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{644};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PropPlacer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
