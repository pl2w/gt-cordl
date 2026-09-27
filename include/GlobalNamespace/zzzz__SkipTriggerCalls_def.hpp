#pragma once
// IWYU pragma private; include "GlobalNamespace/SkipTriggerCalls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SkipTriggerCalls)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class SkipTriggerCalls;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkipTriggerCalls*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkipTriggerCalls*, "", "SkipTriggerCalls");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkipTriggerCalls
class CORDL_TYPE SkipTriggerCalls : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SkipTriggerCalls* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x59855e4, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x59855e8, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x59855ec, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method .ctor, addr 0x59855f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipTriggerCalls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipTriggerCalls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipTriggerCalls(SkipTriggerCalls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipTriggerCalls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipTriggerCalls(SkipTriggerCalls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2543};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SkipTriggerCalls) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
