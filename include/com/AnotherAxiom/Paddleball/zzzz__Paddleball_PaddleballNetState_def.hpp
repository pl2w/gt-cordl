#pragma once
// IWYU pragma private; include "com/AnotherAxiom/Paddleball/Paddleball_PaddleballNetState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Paddleball_PaddleballNetState)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Paddleball_PaddleballNetState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Paddleball_PaddleballNetState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Paddleball_PaddleballNetState, "com.AnotherAxiom.Paddleball", "Paddleball/PaddleballNetState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: com.AnotherAxiom.Paddleball.Paddleball/PaddleballNetState
struct CORDL_TYPE Paddleball_PaddleballNetState {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>*() ;

/// @brief Method Equals, addr 0x5cd4db4, size 0x13c, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::Paddleball_PaddleballNetState  other) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Paddleball_PaddleballNetState>* i___System__IEquatable_1___GlobalNamespace__Paddleball_PaddleballNetState_() ;

// Ctor Parameters []
// @brief default ctor
constexpr Paddleball_PaddleballNetState() ;

// Ctor Parameters [CppParam { name: "P0LocY", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P1LocY", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2LocY", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "P3LocY", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BallLocX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BallLocY", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BallTrajectoryX", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BallTrajectoryY", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BallSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScoreLeft", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScoreRight", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScreenMode", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Paddleball_PaddleballNetState(uint8_t  P0LocY, uint8_t  P1LocY, uint8_t  P2LocY, uint8_t  P3LocY, float_t  BallLocX, uint8_t  BallLocY, uint8_t  BallTrajectoryX, uint8_t  BallTrajectoryY, float_t  BallSpeed, int32_t  ScoreLeft, int32_t  ScoreRight, int32_t  ScreenMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4477};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field P0LocY, offset: 0x0, size: 0x1, def value: None
 uint8_t  P0LocY;

/// @brief Field P1LocY, offset: 0x1, size: 0x1, def value: None
 uint8_t  P1LocY;

/// @brief Field P2LocY, offset: 0x2, size: 0x1, def value: None
 uint8_t  P2LocY;

/// @brief Field P3LocY, offset: 0x3, size: 0x1, def value: None
 uint8_t  P3LocY;

/// @brief Field BallLocX, offset: 0x4, size: 0x4, def value: None
 float_t  BallLocX;

/// @brief Field BallLocY, offset: 0x8, size: 0x1, def value: None
 uint8_t  BallLocY;

/// @brief Field BallTrajectoryX, offset: 0x9, size: 0x1, def value: None
 uint8_t  BallTrajectoryX;

/// @brief Field BallTrajectoryY, offset: 0xa, size: 0x1, def value: None
 uint8_t  BallTrajectoryY;

/// @brief Field BallSpeed, offset: 0xc, size: 0x4, def value: None
 float_t  BallSpeed;

/// @brief Field ScoreLeft, offset: 0x10, size: 0x4, def value: None
 int32_t  ScoreLeft;

/// @brief Field ScoreRight, offset: 0x14, size: 0x4, def value: None
 int32_t  ScoreRight;

/// @brief Field ScreenMode, offset: 0x18, size: 0x4, def value: None
 int32_t  ScreenMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, P0LocY) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, P1LocY) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, P2LocY) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, P3LocY) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, BallLocX) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, BallLocY) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, BallTrajectoryX) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, BallTrajectoryY) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, BallSpeed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, ScoreLeft) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, ScoreRight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Paddleball_PaddleballNetState, ScreenMode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Paddleball_PaddleballNetState) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
