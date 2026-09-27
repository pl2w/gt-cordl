#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__RationalTime_TicksPerSecond_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RationalTime)
namespace GlobalNamespace {
struct RationalTime_TicksPerSecond;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
// Forward declare root types
namespace Unity::IntegerTime {
struct RationalTime;
}
// Write type traits
MARK_VAL_T(::Unity::IntegerTime::RationalTime);
DEFINE_IL2CPP_CLASS(::Unity::IntegerTime::RationalTime, "Unity.IntegerTime", "RationalTime");
// [NativeHeader("Runtime/Input/RationalTime.h")]
// Dependencies Unity.IntegerTime.RationalTime::TicksPerSecond
namespace Unity::IntegerTime {
// Is value type: true
// CS Name: Unity.IntegerTime.RationalTime
struct CORDL_TYPE RationalTime {
public:
// Declarations
using TicksPerSecond = ::GlobalNamespace::RationalTime_TicksPerSecond;

 __declspec(property(get=get_Count)) int64_t  Count;

/// @brief Method get_Count, addr 0xb55c6e4, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Count() ;

/// @brief Method op_Explicit, addr 0xb55c6ec, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::IntegerTime::DiscreteTime op_Explicit___Unity__IntegerTime__DiscreteTime(::Unity::IntegerTime::RationalTime  t) ;

// Ctor Parameters []
// @brief default ctor
constexpr RationalTime() ;

// Ctor Parameters [CppParam { name: "m_Count", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TicksPerSecond", ty: "::GlobalNamespace::RationalTime_TicksPerSecond", modifiers: "", def_value: None, comment: None }]
constexpr RationalTime(int64_t  m_Count, ::GlobalNamespace::RationalTime_TicksPerSecond  m_TicksPerSecond) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field m_Count, offset: 0x0, size: 0x8, def value: None
 int64_t  m_Count;

/// [SerializeField]
/// @brief Field m_TicksPerSecond, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::RationalTime_TicksPerSecond  m_TicksPerSecond;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IntegerTime::RationalTime, m_Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IntegerTime::RationalTime, m_TicksPerSecond) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::IntegerTime::RationalTime) == 0x10, "Size mismatch!");

} // namespace end def Unity::IntegerTime
