#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardCantHover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HoverboardCantHover)
// Forward declare root types
namespace GlobalNamespace {
class HoverboardCantHover;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoverboardCantHover*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoverboardCantHover*, "", "HoverboardCantHover");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoverboardCantHover
class CORDL_TYPE HoverboardCantHover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::HoverboardCantHover* New_ctor() ;

/// @brief Method Start, addr 0x5955eec, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5955ef0, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5955ef4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverboardCantHover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverboardCantHover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverboardCantHover(HoverboardCantHover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverboardCantHover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverboardCantHover(HoverboardCantHover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HoverboardCantHover) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
