#pragma once
// IWYU pragma private; include "GlobalNamespace/GradientHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GradientHelper)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class GradientHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GradientHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GradientHelper*, "", "GradientHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GradientHelper
class CORDL_TYPE GradientHelper : public ::System::Object {
public:
// Declarations
/// @brief Method FromColor, addr 0x5a1c214, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Gradient* FromColor(::UnityEngine::Color  color) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GradientHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GradientHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GradientHelper(GradientHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GradientHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GradientHelper(GradientHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2812};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GradientHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
