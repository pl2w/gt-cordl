#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalObjectRefType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalObjectRefType)
// Forward declare root types
namespace GlobalNamespace {
struct GlobalObjectRefType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GlobalObjectRefType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalObjectRefType, "", "GlobalObjectRefType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GlobalObjectRefType
struct CORDL_TYPE GlobalObjectRefType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlobalObjectRefType_Unwrapped
enum struct __GlobalObjectRefType_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_ImportedAsset = static_cast<int32_t>(0x1),
__E_SceneObject = static_cast<int32_t>(0x2),
__E_SourceAsset = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalObjectRefType_Unwrapped () const noexcept {
return static_cast<__GlobalObjectRefType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GlobalObjectRefType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GlobalObjectRefType(int32_t  value__) noexcept;

/// @brief Field ImportedAsset value: I32(1)
static ::GlobalNamespace::GlobalObjectRefType const ImportedAsset;

/// @brief Field Null value: I32(0)
static ::GlobalNamespace::GlobalObjectRefType const Null;

/// @brief Field SceneObject value: I32(2)
static ::GlobalNamespace::GlobalObjectRefType const SceneObject;

/// @brief Field SourceAsset value: I32(3)
static ::GlobalNamespace::GlobalObjectRefType const SourceAsset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlobalObjectRefType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlobalObjectRefType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
