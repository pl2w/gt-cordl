#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandMirroring_HandsSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HandMirroring_HandsSpace)
namespace GlobalNamespace {
struct HandMirroring_HandSpace;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandMirroring_HandsSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandMirroring_HandsSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandMirroring_HandsSpace, "Oculus.Interaction.Input", "HandMirroring/HandsSpace");
// [DefaultMember("Item")]
// Dependencies Oculus.Interaction.Input.HandMirroring::HandSpace
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Input.HandMirroring/HandsSpace
struct CORDL_TYPE HandMirroring_HandsSpace {
public:
// Declarations
 __declspec(property(get=get_Item)) ::GlobalNamespace::HandMirroring_HandSpace  Item[];

/// @brief Method .ctor, addr 0xa50f9bc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HandMirroring_HandSpace  leftHand, ::GlobalNamespace::HandMirroring_HandSpace  rightHand) ;

/// [IsReadOnly]
/// @brief Method get_Item, addr 0xa50f994, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandMirroring_HandSpace get_Item(::Oculus::Interaction::Input::Handedness  handedness) ;

// Ctor Parameters []
// @brief default ctor
constexpr HandMirroring_HandsSpace() ;

// Ctor Parameters [CppParam { name: "_leftHand", ty: "::GlobalNamespace::HandMirroring_HandSpace", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rightHand", ty: "::GlobalNamespace::HandMirroring_HandSpace", modifiers: "", def_value: None, comment: None }]
constexpr HandMirroring_HandsSpace(::GlobalNamespace::HandMirroring_HandSpace  _leftHand, ::GlobalNamespace::HandMirroring_HandSpace  _rightHand) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16491};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field _leftHand, offset: 0x0, size: 0x34, def value: None
 ::GlobalNamespace::HandMirroring_HandSpace  _leftHand;

/// @brief Field _rightHand, offset: 0x34, size: 0x34, def value: None
 ::GlobalNamespace::HandMirroring_HandSpace  _rightHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandMirroring_HandsSpace, _leftHand) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMirroring_HandsSpace, _rightHand) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandMirroring_HandsSpace) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
