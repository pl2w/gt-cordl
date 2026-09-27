#pragma once
// IWYU pragma private; include "Fusion/Timer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Timer)
// Forward declare root types
namespace Fusion {
struct Timer;
}
// Write type traits
MARK_VAL_T(::Fusion::Timer);
DEFINE_IL2CPP_CLASS(::Fusion::Timer, "Fusion", "Timer");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Timer
struct CORDL_TYPE Timer {
public:
// Declarations
 __declspec(property(get=get_ElapsedInMilliseconds)) double_t  ElapsedInMilliseconds;

 __declspec(property(get=get_ElapsedInSeconds)) double_t  ElapsedInSeconds;

 __declspec(property(get=get_ElapsedInTicks)) int64_t  ElapsedInTicks;

 __declspec(property(get=get_IsRunning)) bool  IsRunning;

/// @brief Method GetDelta, addr 0x5f3ff80, size 0x60, virtual false, abstract: false, final false
inline int64_t GetDelta() ;

/// @brief Method Reset, addr 0x5f3ff0c, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Restart, addr 0x5f3ff18, size 0x68, virtual false, abstract: false, final false
inline void Restart() ;

/// @brief Method Start, addr 0x5f3fe20, size 0x6c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartNew, addr 0x5f3fb98, size 0x6c, virtual false, abstract: false, final false
static inline ::Fusion::Timer StartNew() ;

/// @brief Method Stop, addr 0x5f3fe8c, size 0x80, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method get_ElapsedInMilliseconds, addr 0x5f3fc7c, size 0xd0, virtual false, abstract: false, final false
inline double_t get_ElapsedInMilliseconds() ;

/// @brief Method get_ElapsedInSeconds, addr 0x5f3fd4c, size 0xc4, virtual false, abstract: false, final false
inline double_t get_ElapsedInSeconds() ;

/// @brief Method get_ElapsedInTicks, addr 0x5f3fc04, size 0x78, virtual false, abstract: false, final false
inline int64_t get_ElapsedInTicks() ;

/// @brief Method get_IsRunning, addr 0x5f3fe10, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

// Ctor Parameters []
// @brief default ctor
constexpr Timer() ;

// Ctor Parameters [CppParam { name: "_start", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_elapsed", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_running", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Timer(int64_t  _start, int64_t  _elapsed, uint8_t  _running) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31308};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _start, offset: 0x0, size: 0x8, def value: None
 int64_t  _start;

/// @brief Field _elapsed, offset: 0x8, size: 0x8, def value: None
 int64_t  _elapsed;

/// @brief Field _running, offset: 0x10, size: 0x1, def value: None
 uint8_t  _running;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Timer, _start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Timer, _elapsed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Timer, _running) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Timer) == 0x18, "Size mismatch!");

} // namespace end def Fusion
