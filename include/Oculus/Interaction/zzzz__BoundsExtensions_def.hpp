#pragma once
// IWYU pragma private; include "Oculus/Interaction/BoundsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoundsExtensions)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Oculus::Interaction {
class BoundsExtensions;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::BoundsExtensions*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::BoundsExtensions*, "Oculus.Interaction", "BoundsExtensions");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.BoundsExtensions
class CORDL_TYPE BoundsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Clip, addr 0xa48aee8, size 0xcc, virtual false, abstract: false, final false
static inline bool Clip(::UnityEngine::Bounds  bounds, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  clipper, ::by_ref<::UnityEngine::Bounds>  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsExtensions(BoundsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsExtensions(BoundsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::BoundsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
