#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Recorder_SampleTypeConv.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Recorder_SampleTypeConv)
// Forward declare root types
namespace GlobalNamespace {
struct Recorder_SampleTypeConv;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Recorder_SampleTypeConv);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Recorder_SampleTypeConv, "Photon.Voice.Unity", "Recorder/SampleTypeConv");
// [Obsolete("No longer needed. Implicit conversion is done internally when needed.")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.Unity.Recorder/SampleTypeConv
struct CORDL_TYPE Recorder_SampleTypeConv {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Recorder_SampleTypeConv_Unwrapped
enum struct __Recorder_SampleTypeConv_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Short = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Recorder_SampleTypeConv_Unwrapped () const noexcept {
return static_cast<__Recorder_SampleTypeConv_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Recorder_SampleTypeConv() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Recorder_SampleTypeConv(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Recorder_SampleTypeConv const None;

/// @brief Field Short value: I32(1)
static ::GlobalNamespace::Recorder_SampleTypeConv const Short;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Recorder_SampleTypeConv, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Recorder_SampleTypeConv) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
