#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_limitedOutput_directive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_limitedOutput_directive)
// Forward declare root types
namespace GlobalNamespace {
struct LL_limitedOutput_directive;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_limitedOutput_directive);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_limitedOutput_directive, "K4os.Compression.LZ4.Engine", "LL/limitedOutput_directive");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/limitedOutput_directive
struct CORDL_TYPE LL_limitedOutput_directive {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LL_limitedOutput_directive_Unwrapped
enum struct __LL_limitedOutput_directive_Unwrapped : int32_t {
__E_notLimited = static_cast<int32_t>(0x0),
__E_limitedOutput = static_cast<int32_t>(0x1),
__E_fillOutput = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LL_limitedOutput_directive_Unwrapped () const noexcept {
return static_cast<__LL_limitedOutput_directive_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LL_limitedOutput_directive() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LL_limitedOutput_directive(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31579};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field fillOutput value: I32(2)
static ::GlobalNamespace::LL_limitedOutput_directive const fillOutput;

/// @brief Field limitedOutput value: I32(1)
static ::GlobalNamespace::LL_limitedOutput_directive const limitedOutput;

/// @brief Field notLimited value: I32(0)
static ::GlobalNamespace::LL_limitedOutput_directive const notLimited;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_limitedOutput_directive, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_limitedOutput_directive) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
