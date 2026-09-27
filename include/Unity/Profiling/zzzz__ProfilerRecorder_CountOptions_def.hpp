#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder_CountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorder_CountOptions)
// Forward declare root types
namespace GlobalNamespace {
struct ProfilerRecorder_CountOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProfilerRecorder_CountOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProfilerRecorder_CountOptions, "Unity.Profiling", "ProfilerRecorder/CountOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorder/CountOptions
struct CORDL_TYPE ProfilerRecorder_CountOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProfilerRecorder_CountOptions_Unwrapped
enum struct __ProfilerRecorder_CountOptions_Unwrapped : int32_t {
__E_Count = static_cast<int32_t>(0x0),
__E_MaxCount = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProfilerRecorder_CountOptions_Unwrapped () const noexcept {
return static_cast<__ProfilerRecorder_CountOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerRecorder_CountOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProfilerRecorder_CountOptions(int32_t  value__) noexcept;

/// @brief Field Count value: I32(0)
static ::GlobalNamespace::ProfilerRecorder_CountOptions const Count;

/// @brief Field MaxCount value: I32(1)
static ::GlobalNamespace::ProfilerRecorder_CountOptions const MaxCount;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfilerRecorder_CountOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProfilerRecorder_CountOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
