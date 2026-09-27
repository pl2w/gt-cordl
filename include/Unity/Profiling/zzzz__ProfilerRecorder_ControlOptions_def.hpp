#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder_ControlOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorder_ControlOptions)
// Forward declare root types
namespace GlobalNamespace {
struct ProfilerRecorder_ControlOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProfilerRecorder_ControlOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProfilerRecorder_ControlOptions, "Unity.Profiling", "ProfilerRecorder/ControlOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorder/ControlOptions
struct CORDL_TYPE ProfilerRecorder_ControlOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProfilerRecorder_ControlOptions_Unwrapped
enum struct __ProfilerRecorder_ControlOptions_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Stop = static_cast<int32_t>(0x1),
__E_Reset = static_cast<int32_t>(0x2),
__E_Release = static_cast<int32_t>(0x4),
__E_SetFilterToCurrentThread = static_cast<int32_t>(0x5),
__E_SetToCollectFromAllThreads = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProfilerRecorder_ControlOptions_Unwrapped () const noexcept {
return static_cast<__ProfilerRecorder_ControlOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerRecorder_ControlOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProfilerRecorder_ControlOptions(int32_t  value__) noexcept;

/// @brief Field Release value: I32(4)
static ::GlobalNamespace::ProfilerRecorder_ControlOptions const Release;

/// @brief Field Reset value: I32(2)
static ::GlobalNamespace::ProfilerRecorder_ControlOptions const Reset;

/// @brief Field SetFilterToCurrentThread value: I32(5)
static ::GlobalNamespace::ProfilerRecorder_ControlOptions const SetFilterToCurrentThread;

/// @brief Field SetToCollectFromAllThreads value: I32(6)
static ::GlobalNamespace::ProfilerRecorder_ControlOptions const SetToCollectFromAllThreads;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::ProfilerRecorder_ControlOptions const Start;

/// @brief Field Stop value: I32(1)
static ::GlobalNamespace::ProfilerRecorder_ControlOptions const Stop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfilerRecorder_ControlOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProfilerRecorder_ControlOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
