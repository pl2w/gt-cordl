#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_dict_directive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_dict_directive)
// Forward declare root types
namespace GlobalNamespace {
struct LL_dict_directive;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_dict_directive);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_dict_directive, "K4os.Compression.LZ4.Engine", "LL/dict_directive");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/dict_directive
struct CORDL_TYPE LL_dict_directive {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LL_dict_directive_Unwrapped
enum struct __LL_dict_directive_Unwrapped : int32_t {
__E_noDict = static_cast<int32_t>(0x0),
__E_withPrefix64k = static_cast<int32_t>(0x1),
__E_usingExtDict = static_cast<int32_t>(0x2),
__E_usingDictCtx = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LL_dict_directive_Unwrapped () const noexcept {
return static_cast<__LL_dict_directive_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LL_dict_directive() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LL_dict_directive(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field noDict value: I32(0)
static ::GlobalNamespace::LL_dict_directive const noDict;

/// @brief Field usingDictCtx value: I32(3)
static ::GlobalNamespace::LL_dict_directive const usingDictCtx;

/// @brief Field usingExtDict value: I32(2)
static ::GlobalNamespace::LL_dict_directive const usingExtDict;

/// @brief Field withPrefix64k value: I32(1)
static ::GlobalNamespace::LL_dict_directive const withPrefix64k;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_dict_directive, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_dict_directive) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
