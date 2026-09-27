#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplayStats`1_DebugProfilingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplayStats`1_DebugProfilingType)
// Forward declare root types
namespace GlobalNamespace {
template<typename TProfileId>
struct DebugDisplayStats_1_DebugProfilingType;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType, "UnityEngine.Rendering", "DebugDisplayStats`1/DebugProfilingType");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TProfileId>
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1/DebugProfilingType<TProfileId>
struct CORDL_TYPE DebugDisplayStats_1_DebugProfilingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugDisplayStats_1_DebugProfilingType_Unwrapped
enum struct __DebugDisplayStats_1_DebugProfilingType_Unwrapped : int32_t {
__E_CPU = static_cast<int32_t>(0x0),
__E_InlineCPU = static_cast<int32_t>(0x1),
__E_GPU = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugDisplayStats_1_DebugProfilingType_Unwrapped () const noexcept {
return static_cast<__DebugDisplayStats_1_DebugProfilingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayStats_1_DebugProfilingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugDisplayStats_1_DebugProfilingType(int32_t  value__) noexcept;

/// @brief Field CPU value: I32(0)
static ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId> const CPU;

/// @brief Field GPU value: I32(2)
static ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId> const GPU;

/// @brief Field InlineCPU value: I32(1)
static ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId> const InlineCPU;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
