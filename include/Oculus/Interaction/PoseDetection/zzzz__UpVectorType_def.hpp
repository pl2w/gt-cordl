#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/UpVectorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpVectorType)
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
struct UpVectorType;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::PoseDetection::UpVectorType);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::UpVectorType, "Oculus.Interaction.PoseDetection", "UpVectorType");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.UpVectorType
struct CORDL_TYPE UpVectorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UpVectorType_Unwrapped
enum struct __UpVectorType_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_Tracking = static_cast<int32_t>(0x1),
__E_World = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UpVectorType_Unwrapped () const noexcept {
return static_cast<__UpVectorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UpVectorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UpVectorType(int32_t  value__) noexcept;

/// @brief Field Head value: I32(0)
static ::Oculus::Interaction::PoseDetection::UpVectorType const Head;

/// @brief Field Tracking value: I32(1)
static ::Oculus::Interaction::PoseDetection::UpVectorType const Tracking;

/// @brief Field World value: I32(2)
static ::Oculus::Interaction::PoseDetection::UpVectorType const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16158};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::UpVectorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::UpVectorType) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
