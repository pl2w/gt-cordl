#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/FastZip_Overwrite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FastZip_Overwrite)
// Forward declare root types
namespace GlobalNamespace {
struct FastZip_Overwrite;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FastZip_Overwrite);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FastZip_Overwrite, "ICSharpCode.SharpZipLib.Zip", "FastZip/Overwrite");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.FastZip/Overwrite
struct CORDL_TYPE FastZip_Overwrite {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FastZip_Overwrite_Unwrapped
enum struct __FastZip_Overwrite_Unwrapped : int32_t {
__E_Prompt = static_cast<int32_t>(0x0),
__E_Never = static_cast<int32_t>(0x1),
__E_Always = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FastZip_Overwrite_Unwrapped () const noexcept {
return static_cast<__FastZip_Overwrite_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FastZip_Overwrite() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FastZip_Overwrite(int32_t  value__) noexcept;

/// @brief Field Always value: I32(2)
static ::GlobalNamespace::FastZip_Overwrite const Always;

/// @brief Field Never value: I32(1)
static ::GlobalNamespace::FastZip_Overwrite const Never;

/// @brief Field Prompt value: I32(0)
static ::GlobalNamespace::FastZip_Overwrite const Prompt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FastZip_Overwrite, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FastZip_Overwrite) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
