#pragma once
// IWYU pragma private; include "Fusion/TickAccumulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TickAccumulator)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion {
struct TickAccumulator;
}
// Write type traits
MARK_VAL_T(::Fusion::TickAccumulator);
DEFINE_IL2CPP_CLASS(::Fusion::TickAccumulator, "Fusion", "TickAccumulator");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.TickAccumulator
struct CORDL_TYPE TickAccumulator {
public:
// Declarations
 __declspec(property(get=get_Pending)) int32_t  Pending;

 __declspec(property(get=get_Remainder)) double_t  Remainder;

 __declspec(property(get=get_Running)) bool  Running;

 __declspec(property(get=get_TimeScale, put=set_TimeScale)) double_t  TimeScale;

/// @brief Method AddTicks, addr 0x5fa4be4, size 0x10, virtual false, abstract: false, final false
inline void AddTicks(int32_t  ticks) ;

/// @brief Method AddTime, addr 0x5fa4bf4, size 0x130, virtual false, abstract: false, final false
inline void AddTime(double_t  dt, double_t  step, ::System::Nullable_1<int32_t>  maxTicks) ;

/// @brief Method Alpha, addr 0x5fa4b70, size 0x74, virtual false, abstract: false, final false
inline float_t Alpha(double_t  step) ;

/// @brief Method ConsumeTick, addr 0x5fa4d38, size 0x5c, virtual false, abstract: false, final false
inline bool ConsumeTick(::by_ref<bool>  last) ;

/// @brief Method Start, addr 0x5fa4d2c, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartNew, addr 0x5fa4d94, size 0x44, virtual false, abstract: false, final false
static inline ::Fusion::TickAccumulator StartNew() ;

/// @brief Method Stop, addr 0x5fa4d24, size 0x8, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method get_Pending, addr 0x5fa4b20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Pending() ;

/// @brief Method get_Remainder, addr 0x5fa4b28, size 0x8, virtual false, abstract: false, final false
inline double_t get_Remainder() ;

/// @brief Method get_Running, addr 0x5fa4b30, size 0x8, virtual false, abstract: false, final false
inline bool get_Running() ;

/// @brief Method get_TimeScale, addr 0x5fa4b38, size 0x8, virtual false, abstract: false, final false
inline double_t get_TimeScale() ;

/// @brief Method set_TimeScale, addr 0x5fa4b40, size 0x30, virtual false, abstract: false, final false
inline void set_TimeScale(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TickAccumulator() ;

// Ctor Parameters [CppParam { name: "_time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scale", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ticks", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_running", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr TickAccumulator(double_t  _time, double_t  _scale, int32_t  _ticks, bool  _running) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _time, offset: 0x0, size: 0x8, def value: None
 double_t  _time;

/// @brief Field _scale, offset: 0x8, size: 0x8, def value: None
 double_t  _scale;

/// @brief Field _ticks, offset: 0x10, size: 0x4, def value: None
 int32_t  _ticks;

/// @brief Field _running, offset: 0x14, size: 0x1, def value: None
 bool  _running;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TickAccumulator, _time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::TickAccumulator, _scale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::TickAccumulator, _ticks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::TickAccumulator, _running) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Fusion::TickAccumulator) == 0x18, "Size mismatch!");

} // namespace end def Fusion
