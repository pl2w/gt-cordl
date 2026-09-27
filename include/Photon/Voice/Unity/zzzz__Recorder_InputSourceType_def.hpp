#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Recorder_InputSourceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Recorder_InputSourceType)
// Forward declare root types
namespace GlobalNamespace {
struct Recorder_InputSourceType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Recorder_InputSourceType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Recorder_InputSourceType, "Photon.Voice.Unity", "Recorder/InputSourceType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.Unity.Recorder/InputSourceType
struct CORDL_TYPE Recorder_InputSourceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Recorder_InputSourceType_Unwrapped
enum struct __Recorder_InputSourceType_Unwrapped : int32_t {
__E_Microphone = static_cast<int32_t>(0x0),
__E_AudioClip = static_cast<int32_t>(0x1),
__E_Factory = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Recorder_InputSourceType_Unwrapped () const noexcept {
return static_cast<__Recorder_InputSourceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Recorder_InputSourceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Recorder_InputSourceType(int32_t  value__) noexcept;

/// @brief Field AudioClip value: I32(1)
static ::GlobalNamespace::Recorder_InputSourceType const AudioClip;

/// @brief Field Factory value: I32(2)
static ::GlobalNamespace::Recorder_InputSourceType const Factory;

/// @brief Field Microphone value: I32(0)
static ::GlobalNamespace::Recorder_InputSourceType const Microphone;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Recorder_InputSourceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Recorder_InputSourceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
