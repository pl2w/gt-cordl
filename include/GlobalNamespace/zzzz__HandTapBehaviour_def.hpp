#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HandTapBehaviour)
namespace GlobalNamespace {
class HandEffectContext;
}
// Forward declare root types
namespace GlobalNamespace {
class HandTapBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandTapBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapBehaviour*, "", "HandTapBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTapBehaviour
class CORDL_TYPE HandTapBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::HandTapBehaviour* New_ctor() ;

/// @brief Method OnTap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTap(::GlobalNamespace::HandEffectContext*  handContext) ;

/// @brief Method .ctor, addr 0x565320c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTapBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTapBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTapBehaviour(HandTapBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTapBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTapBehaviour(HandTapBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{735};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HandTapBehaviour) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
