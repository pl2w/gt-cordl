#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/ILckOrientationAwareLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckOrientationAwareLayer)
// Forward declare root types
namespace Liv::Lck::Rendering {
class ILckOrientationAwareLayer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::ILckOrientationAwareLayer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::ILckOrientationAwareLayer*, "Liv.Lck.Rendering", "ILckOrientationAwareLayer");
// Dependencies 
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.ILckOrientationAwareLayer
class CORDL_TYPE ILckOrientationAwareLayer {
public:
// Declarations
/// @brief Method SetOrientation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetOrientation(bool  isHorizontal) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckOrientationAwareLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckOrientationAwareLayer(ILckOrientationAwareLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24850};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Rendering
