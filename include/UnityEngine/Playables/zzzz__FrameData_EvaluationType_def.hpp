#pragma once
// IWYU pragma private; include "UnityEngine/Playables/FrameData_EvaluationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameData_EvaluationType)
// Forward declare root types
namespace GlobalNamespace {
struct FrameData_EvaluationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FrameData_EvaluationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FrameData_EvaluationType, "UnityEngine.Playables", "FrameData/EvaluationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Playables.FrameData/EvaluationType
struct CORDL_TYPE FrameData_EvaluationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FrameData_EvaluationType_Unwrapped
enum struct __FrameData_EvaluationType_Unwrapped : int32_t {
__E_Evaluate = static_cast<int32_t>(0x0),
__E_Playback = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FrameData_EvaluationType_Unwrapped () const noexcept {
return static_cast<__FrameData_EvaluationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FrameData_EvaluationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FrameData_EvaluationType(int32_t  value__) noexcept;

/// @brief Field Evaluate value: I32(0)
static ::GlobalNamespace::FrameData_EvaluationType const Evaluate;

/// @brief Field Playback value: I32(1)
static ::GlobalNamespace::FrameData_EvaluationType const Playback;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15399};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FrameData_EvaluationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FrameData_EvaluationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
