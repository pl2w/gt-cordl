#pragma once
// IWYU pragma private; include "GlobalNamespace/MB2_TextureBakeResults_ResultType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_TextureBakeResults_ResultType)
// Forward declare root types
namespace GlobalNamespace {
struct MB2_TextureBakeResults_ResultType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB2_TextureBakeResults_ResultType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_TextureBakeResults_ResultType, "", "MB2_TextureBakeResults/ResultType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MB2_TextureBakeResults/ResultType
struct CORDL_TYPE MB2_TextureBakeResults_ResultType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB2_TextureBakeResults_ResultType_Unwrapped
enum struct __MB2_TextureBakeResults_ResultType_Unwrapped : int32_t {
__E_atlas = static_cast<int32_t>(0x0),
__E_textureArray = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB2_TextureBakeResults_ResultType_Unwrapped () const noexcept {
return static_cast<__MB2_TextureBakeResults_ResultType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB2_TextureBakeResults_ResultType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB2_TextureBakeResults_ResultType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22560};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field atlas value: I32(0)
static ::GlobalNamespace::MB2_TextureBakeResults_ResultType const atlas;

/// @brief Field textureArray value: I32(1)
static ::GlobalNamespace::MB2_TextureBakeResults_ResultType const textureArray;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_TextureBakeResults_ResultType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_TextureBakeResults_ResultType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
