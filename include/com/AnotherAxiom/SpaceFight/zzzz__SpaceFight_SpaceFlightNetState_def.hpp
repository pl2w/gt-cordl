#pragma once
// IWYU pragma private; include "com/AnotherAxiom/SpaceFight/SpaceFight_SpaceFlightNetState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SpaceFight_SpaceFlightNetState)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SpaceFight_SpaceFlightNetState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpaceFight_SpaceFlightNetState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpaceFight_SpaceFlightNetState, "com.AnotherAxiom.SpaceFight", "SpaceFight/SpaceFlightNetState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: com.AnotherAxiom.SpaceFight.SpaceFight/SpaceFlightNetState
struct CORDL_TYPE SpaceFight_SpaceFlightNetState {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>*() ;

/// @brief Method Equals, addr 0x5cd3630, size 0x23c, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::SpaceFight_SpaceFlightNetState  other) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SpaceFight_SpaceFlightNetState>* i___System__IEquatable_1___GlobalNamespace__SpaceFight_SpaceFlightNetState_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SpaceFight_SpaceFlightNetState() ;

// Ctor Parameters [CppParam { name: "P1LocX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P1LocY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P1Rot", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2LocX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2LocY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2Rot", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P1PrLocX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P1PrLocY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2PrLocX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2PrLocY", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SpaceFight_SpaceFlightNetState(float_t  P1LocX, float_t  P1LocY, float_t  P1Rot, float_t  P2LocX, float_t  P2LocY, float_t  P2Rot, float_t  P1PrLocX, float_t  P1PrLocY, float_t  P2PrLocX, float_t  P2PrLocY) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4474};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field P1LocX, offset: 0x0, size: 0x4, def value: None
 float_t  P1LocX;

/// @brief Field P1LocY, offset: 0x4, size: 0x4, def value: None
 float_t  P1LocY;

/// @brief Field P1Rot, offset: 0x8, size: 0x4, def value: None
 float_t  P1Rot;

/// @brief Field P2LocX, offset: 0xc, size: 0x4, def value: None
 float_t  P2LocX;

/// @brief Field P2LocY, offset: 0x10, size: 0x4, def value: None
 float_t  P2LocY;

/// @brief Field P2Rot, offset: 0x14, size: 0x4, def value: None
 float_t  P2Rot;

/// @brief Field P1PrLocX, offset: 0x18, size: 0x4, def value: None
 float_t  P1PrLocX;

/// @brief Field P1PrLocY, offset: 0x1c, size: 0x4, def value: None
 float_t  P1PrLocY;

/// @brief Field P2PrLocX, offset: 0x20, size: 0x4, def value: None
 float_t  P2PrLocX;

/// @brief Field P2PrLocY, offset: 0x24, size: 0x4, def value: None
 float_t  P2PrLocY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P1LocX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P1LocY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P1Rot) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P2LocX) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P2LocY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P2Rot) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P1PrLocX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P1PrLocY) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P2PrLocX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpaceFight_SpaceFlightNetState, P2PrLocY) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpaceFight_SpaceFlightNetState) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
