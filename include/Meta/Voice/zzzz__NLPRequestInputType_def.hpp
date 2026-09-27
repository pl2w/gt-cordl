#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequestInputType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NLPRequestInputType)
// Forward declare root types
namespace Meta::Voice {
struct NLPRequestInputType;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::NLPRequestInputType);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLPRequestInputType, "Meta.Voice", "NLPRequestInputType");
// Dependencies 
namespace Meta::Voice {
// Is value type: true
// CS Name: Meta.Voice.NLPRequestInputType
struct CORDL_TYPE NLPRequestInputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NLPRequestInputType_Unwrapped
enum struct __NLPRequestInputType_Unwrapped : int32_t {
__E_Text = static_cast<int32_t>(0x0),
__E_Audio = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NLPRequestInputType_Unwrapped () const noexcept {
return static_cast<__NLPRequestInputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NLPRequestInputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NLPRequestInputType(int32_t  value__) noexcept;

/// @brief Field Audio value: I32(1)
static ::Meta::Voice::NLPRequestInputType const Audio;

/// @brief Field Text value: I32(0)
static ::Meta::Voice::NLPRequestInputType const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLPRequestInputType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLPRequestInputType) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice
