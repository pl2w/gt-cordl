#pragma once
// IWYU pragma private; include "UnityEngine/TextAsset_CreateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAsset_CreateOptions)
// Forward declare root types
namespace GlobalNamespace {
struct TextAsset_CreateOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextAsset_CreateOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextAsset_CreateOptions, "UnityEngine", "TextAsset/CreateOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextAsset/CreateOptions
struct CORDL_TYPE TextAsset_CreateOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextAsset_CreateOptions_Unwrapped
enum struct __TextAsset_CreateOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CreateNativeObject = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextAsset_CreateOptions_Unwrapped () const noexcept {
return static_cast<__TextAsset_CreateOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextAsset_CreateOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextAsset_CreateOptions(int32_t  value__) noexcept;

/// @brief Field CreateNativeObject value: I32(1)
static ::GlobalNamespace::TextAsset_CreateOptions const CreateNativeObject;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TextAsset_CreateOptions const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15102};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextAsset_CreateOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextAsset_CreateOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
