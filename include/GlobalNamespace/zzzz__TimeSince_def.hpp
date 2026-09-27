#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeSince.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSince)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeSince;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSince);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSince, "", "TimeSince");
// Dependencies System.DateTime
namespace GlobalNamespace {
// Is value type: true
// CS Name: TimeSince
struct CORDL_TYPE TimeSince {
public:
// Declarations
 __declspec(property(get=get_secondsElapsed)) double_t  secondsElapsed;

 __declspec(property(get=get_secondsElapsedFloat)) float_t  secondsElapsedFloat;

 __declspec(property(get=get_secondsElapsedInt)) int32_t  secondsElapsedInt;

 __declspec(property(get=get_secondsElapsedLong)) int64_t  secondsElapsedLong;

 __declspec(property(get=get_secondsElapsedSpan)) ::System::TimeSpan  secondsElapsedSpan;

 __declspec(property(get=get_secondsElapsedUint)) uint32_t  secondsElapsedUint;

/// @brief Method GetHashCode, addr 0x5a221c4, size 0x84, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method HasElapsed, addr 0x5a21e00, size 0x78, virtual false, abstract: false, final false
inline bool HasElapsed(::System::TimeSpan  seconds) ;

/// @brief Method HasElapsed, addr 0x5a2204c, size 0xc4, virtual false, abstract: false, final false
inline bool HasElapsed(::System::TimeSpan  seconds, bool  resetOnElapsed) ;

/// @brief Method HasElapsed, addr 0x5a21da8, size 0x24, virtual false, abstract: false, final false
inline bool HasElapsed(double_t  seconds) ;

/// @brief Method HasElapsed, addr 0x5a21f94, size 0x54, virtual false, abstract: false, final false
inline bool HasElapsed(double_t  seconds, bool  resetOnElapsed) ;

/// @brief Method HasElapsed, addr 0x5a21d80, size 0x28, virtual false, abstract: false, final false
inline bool HasElapsed(float_t  seconds) ;

/// @brief Method HasElapsed, addr 0x5a1a560, size 0x58, virtual false, abstract: false, final false
inline bool HasElapsed(float_t  seconds, bool  resetOnElapsed) ;

/// @brief Method HasElapsed, addr 0x5a21d20, size 0x34, virtual false, abstract: false, final false
inline bool HasElapsed(int32_t  seconds) ;

/// @brief Method HasElapsed, addr 0x5a21ed4, size 0x64, virtual false, abstract: false, final false
inline bool HasElapsed(int32_t  seconds, bool  resetOnElapsed) ;

/// @brief Method HasElapsed, addr 0x5a21dcc, size 0x34, virtual false, abstract: false, final false
inline bool HasElapsed(int64_t  seconds) ;

/// @brief Method HasElapsed, addr 0x5a21fe8, size 0x64, virtual false, abstract: false, final false
inline bool HasElapsed(int64_t  seconds, bool  resetOnElapsed) ;

/// @brief Method HasElapsed, addr 0x5a21d54, size 0x2c, virtual false, abstract: false, final false
inline bool HasElapsed(uint32_t  seconds) ;

/// @brief Method HasElapsed, addr 0x5a21f38, size 0x5c, virtual false, abstract: false, final false
inline bool HasElapsed(uint32_t  seconds, bool  resetOnElapsed) ;

/// @brief Method Now, addr 0x5a1aa24, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince Now() ;

/// @brief Method Reset, addr 0x5a21e78, size 0x5c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToString, addr 0x5a22110, size 0xb4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5a219d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  dt) ;

/// @brief Method .ctor, addr 0x5a21c6c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  elapsed) ;

/// @brief Method .ctor, addr 0x5a21b68, size 0x80, virtual false, abstract: false, final false
inline void _ctor(double_t  elapsed) ;

/// @brief Method .ctor, addr 0x5a21ae4, size 0x84, virtual false, abstract: false, final false
inline void _ctor(float_t  elapsed) ;

/// @brief Method .ctor, addr 0x5a219dc, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int32_t  elapsed) ;

/// @brief Method .ctor, addr 0x5a21be8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int64_t  elapsed) ;

/// @brief Method .ctor, addr 0x5a21a60, size 0x84, virtual false, abstract: false, final false
inline void _ctor(uint32_t  elapsed) ;

/// @brief Method get_secondsElapsed, addr 0x5a2182c, size 0xb8, virtual false, abstract: false, final false
inline double_t get_secondsElapsed() ;

/// @brief Method get_secondsElapsedFloat, addr 0x5a218e4, size 0x14, virtual false, abstract: false, final false
inline float_t get_secondsElapsedFloat() ;

/// @brief Method get_secondsElapsedInt, addr 0x5a218f8, size 0x28, virtual false, abstract: false, final false
inline int32_t get_secondsElapsedInt() ;

/// @brief Method get_secondsElapsedLong, addr 0x5a21940, size 0x28, virtual false, abstract: false, final false
inline int64_t get_secondsElapsedLong() ;

/// @brief Method get_secondsElapsedSpan, addr 0x5a21968, size 0x6c, virtual false, abstract: false, final false
inline ::System::TimeSpan get_secondsElapsedSpan() ;

/// @brief Method get_secondsElapsedUint, addr 0x5a21920, size 0x20, virtual false, abstract: false, final false
inline uint32_t get_secondsElapsedUint() ;

/// @brief Method op_Implicit, addr 0x5a22374, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince op_Implicit___GlobalNamespace__TimeSince(::System::DateTime  dt) ;

/// @brief Method op_Implicit, addr 0x5a22358, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince op_Implicit___GlobalNamespace__TimeSince(::System::TimeSpan  elapsed) ;

/// @brief Method op_Implicit, addr 0x5a22324, size 0x18, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince op_Implicit___GlobalNamespace__TimeSince(double_t  elapsed) ;

/// @brief Method op_Implicit, addr 0x5a215fc, size 0x18, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince op_Implicit___GlobalNamespace__TimeSince(float_t  elapsed) ;

/// @brief Method op_Implicit, addr 0x5a222ec, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince op_Implicit___GlobalNamespace__TimeSince(int32_t  elapsed) ;

/// @brief Method op_Implicit, addr 0x5a2233c, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince op_Implicit___GlobalNamespace__TimeSince(int64_t  elapsed) ;

/// @brief Method op_Implicit, addr 0x5a22308, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeSince op_Implicit___GlobalNamespace__TimeSince(uint32_t  elapsed) ;

/// @brief Method op_Implicit, addr 0x5a222d8, size 0x14, virtual false, abstract: false, final false
static inline ::System::TimeSpan op_Implicit___System__TimeSpan(::GlobalNamespace::TimeSince  ts) ;

/// @brief Method op_Implicit, addr 0x5a22274, size 0x14, virtual false, abstract: false, final false
static inline double_t op_Implicit_double_t(::GlobalNamespace::TimeSince  ts) ;

/// @brief Method op_Implicit, addr 0x5a215e4, size 0x18, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::GlobalNamespace::TimeSince  ts) ;

/// @brief Method op_Implicit, addr 0x5a22288, size 0x2c, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::TimeSince  ts) ;

/// @brief Method op_Implicit, addr 0x5a22248, size 0x2c, virtual false, abstract: false, final false
static inline int64_t op_Implicit_int64_t(::GlobalNamespace::TimeSince  ts) ;

/// @brief Method op_Implicit, addr 0x5a222b4, size 0x24, virtual false, abstract: false, final false
static inline uint32_t op_Implicit_uint32_t(::GlobalNamespace::TimeSince  ts) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSince() ;

// Ctor Parameters [CppParam { name: "_dt", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr TimeSince(::System::DateTime  _dt) noexcept;

/// @brief Field INT32_MAX offset 0xffffffff size 0x8
static constexpr double_t  INT32_MAX{static_cast<double_t>(2147483647.0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _dt, offset: 0x0, size: 0x8, def value: None
 ::System::DateTime  _dt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSince, _dt) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSince) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
