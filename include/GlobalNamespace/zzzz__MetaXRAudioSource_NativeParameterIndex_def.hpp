#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioSource_NativeParameterIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioSource_NativeParameterIndex)
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAudioSource_NativeParameterIndex;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex, "", "MetaXRAudioSource/NativeParameterIndex");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAudioSource/NativeParameterIndex
struct CORDL_TYPE MetaXRAudioSource_NativeParameterIndex {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MetaXRAudioSource_NativeParameterIndex_Unwrapped
enum struct __MetaXRAudioSource_NativeParameterIndex_Unwrapped : int32_t {
__E_P_GAIN = static_cast<int32_t>(0x0),
__E_P_USEINVSQR = static_cast<int32_t>(0x1),
__E_P_NEAR = static_cast<int32_t>(0x2),
__E_P_FAR = static_cast<int32_t>(0x3),
__E_P_RADIUS = static_cast<int32_t>(0x4),
__E_P_DISABLE_RFL = static_cast<int32_t>(0x5),
__E_P_AMBISTAT = static_cast<int32_t>(0x6),
__E_P_READONLY_GLOBAL_RFL_ENABLED = static_cast<int32_t>(0x7),
__E_P_READONLY_NUM_VOICES = static_cast<int32_t>(0x8),
__E_P_HRTF_INTENSITY = static_cast<int32_t>(0x9),
__E_P_REFLECTIONS_SEND = static_cast<int32_t>(0xa),
__E_P_REVERB_SEND = static_cast<int32_t>(0xb),
__E_P_DIRECTIVITY_ENABLED = static_cast<int32_t>(0xc),
__E_P_DIRECTIVITY_INTENSITY = static_cast<int32_t>(0xd),
__E_P_AMBI_DIRECT_ENABLED = static_cast<int32_t>(0xe),
__E_P_REVERB_REACH = static_cast<int32_t>(0xf),
__E_P_DIRECT_ENABLED = static_cast<int32_t>(0x10),
__E_P_OCCLUSION_INTENSITY = static_cast<int32_t>(0x11),
__E_P_MEDIUM_ABSORPTION = static_cast<int32_t>(0x12),
__E_P_NUM = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetaXRAudioSource_NativeParameterIndex_Unwrapped () const noexcept {
return static_cast<__MetaXRAudioSource_NativeParameterIndex_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioSource_NativeParameterIndex() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAudioSource_NativeParameterIndex(int32_t  value__) noexcept;

/// @brief Field P_AMBISTAT value: I32(6)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_AMBISTAT;

/// @brief Field P_AMBI_DIRECT_ENABLED value: I32(14)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_AMBI_DIRECT_ENABLED;

/// @brief Field P_DIRECTIVITY_ENABLED value: I32(12)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_DIRECTIVITY_ENABLED;

/// @brief Field P_DIRECTIVITY_INTENSITY value: I32(13)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_DIRECTIVITY_INTENSITY;

/// @brief Field P_DIRECT_ENABLED value: I32(16)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_DIRECT_ENABLED;

/// @brief Field P_DISABLE_RFL value: I32(5)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_DISABLE_RFL;

/// @brief Field P_FAR value: I32(3)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_FAR;

/// @brief Field P_GAIN value: I32(0)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_GAIN;

/// @brief Field P_HRTF_INTENSITY value: I32(9)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_HRTF_INTENSITY;

/// @brief Field P_MEDIUM_ABSORPTION value: I32(18)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_MEDIUM_ABSORPTION;

/// @brief Field P_NEAR value: I32(2)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_NEAR;

/// @brief Field P_NUM value: I32(19)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_NUM;

/// @brief Field P_OCCLUSION_INTENSITY value: I32(17)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_OCCLUSION_INTENSITY;

/// @brief Field P_RADIUS value: I32(4)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_RADIUS;

/// @brief Field P_READONLY_GLOBAL_RFL_ENABLED value: I32(7)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_READONLY_GLOBAL_RFL_ENABLED;

/// @brief Field P_READONLY_NUM_VOICES value: I32(8)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_READONLY_NUM_VOICES;

/// @brief Field P_REFLECTIONS_SEND value: I32(10)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_REFLECTIONS_SEND;

/// @brief Field P_REVERB_REACH value: I32(15)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_REVERB_REACH;

/// @brief Field P_REVERB_SEND value: I32(11)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_REVERB_SEND;

/// @brief Field P_USEINVSQR value: I32(1)
static ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex const P_USEINVSQR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
