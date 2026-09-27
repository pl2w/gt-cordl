#pragma once
// IWYU pragma private; include "Fusion/TimerDelta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Timer_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TimerDelta)
// Forward declare root types
namespace Fusion {
struct TimerDelta;
}
// Write type traits
MARK_VAL_T(::Fusion::TimerDelta);
DEFINE_IL2CPP_CLASS(::Fusion::TimerDelta, "Fusion", "TimerDelta");
// Dependencies Fusion.Timer
namespace Fusion {
// Is value type: true
// CS Name: Fusion.TimerDelta
struct CORDL_TYPE TimerDelta {
public:
// Declarations
 __declspec(property(get=get_IsRunning)) bool  IsRunning;

/// @brief Method Consume, addr 0x5f3fff0, size 0x120, virtual false, abstract: false, final false
inline double_t Consume() ;

/// @brief Method Peek, addr 0x5f40110, size 0x118, virtual false, abstract: false, final false
inline double_t Peek() ;

/// @brief Method StartNew, addr 0x5f40228, size 0x34, virtual false, abstract: false, final false
static inline ::Fusion::TimerDelta StartNew() ;

/// @brief Method get_IsRunning, addr 0x5f3ffe0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

// Ctor Parameters []
// @brief default ctor
constexpr TimerDelta() ;

// Ctor Parameters [CppParam { name: "_timer", ty: "::Fusion::Timer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timerLast", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr TimerDelta(::Fusion::Timer  _timer, double_t  _timerLast) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _timer, offset: 0x0, size: 0x18, def value: None
 ::Fusion::Timer  _timer;

/// @brief Field _timerLast, offset: 0x18, size: 0x8, def value: None
 double_t  _timerLast;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TimerDelta, _timer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimerDelta, _timerLast) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::TimerDelta) == 0x20, "Size mismatch!");

} // namespace end def Fusion
