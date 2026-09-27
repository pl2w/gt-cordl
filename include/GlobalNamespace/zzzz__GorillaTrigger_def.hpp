#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaTrigger)
// Forward declare root types
namespace GlobalNamespace {
class GorillaTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTrigger*, "", "GorillaTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTrigger
class CORDL_TYPE GorillaTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaTrigger* New_ctor() ;

/// @brief Method OnTriggered, addr 0x59470bc, size 0x4, virtual true, abstract: false, final false
inline void OnTriggered() ;

/// @brief Method .ctor, addr 0x59470c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTrigger(GorillaTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTrigger(GorillaTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaTrigger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
