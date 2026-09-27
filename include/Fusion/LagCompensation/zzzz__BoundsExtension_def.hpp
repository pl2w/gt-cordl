#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BoundsExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoundsExtension)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class BoundsExtension;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::BoundsExtension*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BoundsExtension*, "Fusion.LagCompensation", "BoundsExtension");
// [Extension]
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.BoundsExtension
class CORDL_TYPE BoundsExtension : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ContainBounds, addr 0x600e8ac, size 0x78, virtual false, abstract: false, final false
static inline bool ContainBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Bounds  target) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsExtension(BoundsExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsExtension(BoundsExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::LagCompensation::BoundsExtension) == 0x10, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
