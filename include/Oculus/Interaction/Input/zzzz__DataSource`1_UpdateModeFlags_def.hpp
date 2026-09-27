#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DataSource`1_UpdateModeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataSource`1_UpdateModeFlags)
// Forward declare root types
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DataSource_1_UpdateModeFlags);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DataSource_1_UpdateModeFlags, "Oculus.Interaction.Input", "DataSource`1/UpdateModeFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TData>
// Is value type: true
// CS Name: Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData>
struct CORDL_TYPE DataSource_1_UpdateModeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DataSource_1_UpdateModeFlags_Unwrapped
enum struct __DataSource_1_UpdateModeFlags_Unwrapped : int32_t {
__E_Manual = static_cast<int32_t>(0x0),
__E_UnityUpdate = static_cast<int32_t>(0x1),
__E_UnityFixedUpdate = static_cast<int32_t>(0x2),
__E_UnityLateUpdate = static_cast<int32_t>(0x4),
__E_AfterPreviousStep = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DataSource_1_UpdateModeFlags_Unwrapped () const noexcept {
return static_cast<__DataSource_1_UpdateModeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DataSource_1_UpdateModeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DataSource_1_UpdateModeFlags(int32_t  value__) noexcept;

/// @brief Field AfterPreviousStep value: I32(8)
static ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> const AfterPreviousStep;

/// @brief Field Manual value: I32(0)
static ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> const Manual;

/// @brief Field UnityFixedUpdate value: I32(2)
static ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> const UnityFixedUpdate;

/// @brief Field UnityLateUpdate value: I32(4)
static ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> const UnityLateUpdate;

/// @brief Field UnityUpdate value: I32(1)
static ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> const UnityUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16468};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
