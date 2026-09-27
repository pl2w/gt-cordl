#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType)
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType, "", "MetaXRAudioSourceExperimentalFeatures/DirectivityPatternType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAudioSourceExperimentalFeatures/DirectivityPatternType
struct CORDL_TYPE MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType_Unwrapped
enum struct __MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HumanVoice = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType_Unwrapped () const noexcept {
return static_cast<__MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType(int32_t  value__) noexcept;

/// @brief Field HumanVoice value: I32(1)
static ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType const HumanVoice;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29956};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
