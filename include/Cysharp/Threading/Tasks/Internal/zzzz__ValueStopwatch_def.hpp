#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ValueStopwatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueStopwatch)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
struct ValueStopwatch;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::Internal::ValueStopwatch);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::ValueStopwatch, "Cysharp.Threading.Tasks.Internal", "ValueStopwatch");
// [IsReadOnly]
// Dependencies 
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Internal.ValueStopwatch
struct CORDL_TYPE ValueStopwatch {
public:
// Declarations
 __declspec(property(get=get_Elapsed)) ::System::TimeSpan  Elapsed;

 __declspec(property(get=get_ElapsedTicks)) int64_t  ElapsedTicks;

 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Field TimestampToTicks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TimestampToTicks, put=setStaticF_TimestampToTicks)) double_t  TimestampToTicks;

/// @brief Method StartNew, addr 0xae4b274, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::Internal::ValueStopwatch StartNew() ;

/// @brief Method .ctor, addr 0xae4b2c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  startTimestamp) ;

static inline double_t getStaticF_TimestampToTicks() ;

/// @brief Method get_Elapsed, addr 0xae4b2cc, size 0x8c, virtual false, abstract: false, final false
inline ::System::TimeSpan get_Elapsed() ;

/// @brief Method get_ElapsedTicks, addr 0xae4b358, size 0x108, virtual false, abstract: false, final false
inline int64_t get_ElapsedTicks() ;

/// @brief Method get_IsInvalid, addr 0xae4b460, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInvalid() ;

static inline void setStaticF_TimestampToTicks(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ValueStopwatch() ;

// Ctor Parameters [CppParam { name: "startTimestamp", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ValueStopwatch(int64_t  startTimestamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field startTimestamp, offset: 0x0, size: 0x8, def value: None
 int64_t  startTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ValueStopwatch, startTimestamp) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::ValueStopwatch) == 0x8, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
