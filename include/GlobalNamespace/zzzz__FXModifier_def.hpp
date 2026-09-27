#pragma once
// IWYU pragma private; include "GlobalNamespace/FXModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FXModifier)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class FXModifier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FXModifier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FXModifier*, "", "FXModifier");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FXModifier
class CORDL_TYPE FXModifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::FXModifier* New_ctor() ;

/// @brief Method UpdateScale, addr 0x5674680, size 0x4, virtual true, abstract: false, final false
inline void UpdateScale(float_t  scale, ::UnityEngine::Color  color) ;

/// @brief Method .ctor, addr 0x5674684, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FXModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FXModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FXModifier(FXModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FXModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FXModifier(FXModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FXModifier) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
