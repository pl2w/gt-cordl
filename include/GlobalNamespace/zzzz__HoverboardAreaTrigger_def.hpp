#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardAreaTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HoverboardAreaTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class HoverboardAreaTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoverboardAreaTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoverboardAreaTrigger*, "", "HoverboardAreaTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoverboardAreaTrigger
class CORDL_TYPE HoverboardAreaTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::HoverboardAreaTrigger* New_ctor() ;

/// @brief Method OnDisable, addr 0x5955bc4, size 0xe0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5955944, size 0x140, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5955a84, size 0x140, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method .ctor, addr 0x5955ca4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverboardAreaTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverboardAreaTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverboardAreaTrigger(HoverboardAreaTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverboardAreaTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverboardAreaTrigger(HoverboardAreaTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2312};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HoverboardAreaTrigger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
