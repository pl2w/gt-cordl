#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeEvent_EventTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerTimeEvent_EventTime)
// Forward declare root types
namespace GlobalNamespace {
struct ServerTimeEvent_EventTime;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ServerTimeEvent_EventTime);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerTimeEvent_EventTime, "", "ServerTimeEvent/EventTime");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ServerTimeEvent/EventTime
struct CORDL_TYPE ServerTimeEvent_EventTime {
public:
// Declarations
/// @brief Method .ctor, addr 0x5b23908, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  h, int32_t  m) ;

// Ctor Parameters []
// @brief default ctor
constexpr ServerTimeEvent_EventTime() ;

// Ctor Parameters [CppParam { name: "hour", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ServerTimeEvent_EventTime(int32_t  hour, int32_t  minute) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hour, offset: 0x0, size: 0x4, def value: None
 int32_t  hour;

/// @brief Field minute, offset: 0x4, size: 0x4, def value: None
 int32_t  minute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerTimeEvent_EventTime, hour) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeEvent_EventTime, minute) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerTimeEvent_EventTime) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
