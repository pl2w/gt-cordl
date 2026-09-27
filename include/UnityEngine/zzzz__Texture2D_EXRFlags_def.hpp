#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D_EXRFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2D_EXRFlags)
// Forward declare root types
namespace GlobalNamespace {
struct Texture2D_EXRFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Texture2D_EXRFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Texture2D_EXRFlags, "UnityEngine", "Texture2D/EXRFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Texture2D/EXRFlags
struct CORDL_TYPE Texture2D_EXRFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Texture2D_EXRFlags_Unwrapped
enum struct __Texture2D_EXRFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OutputAsFloat = static_cast<int32_t>(0x1),
__E_CompressZIP = static_cast<int32_t>(0x2),
__E_CompressRLE = static_cast<int32_t>(0x4),
__E_CompressPIZ = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Texture2D_EXRFlags_Unwrapped () const noexcept {
return static_cast<__Texture2D_EXRFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Texture2D_EXRFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Texture2D_EXRFlags(int32_t  value__) noexcept;

/// @brief Field CompressPIZ value: I32(8)
static ::GlobalNamespace::Texture2D_EXRFlags const CompressPIZ;

/// @brief Field CompressRLE value: I32(4)
static ::GlobalNamespace::Texture2D_EXRFlags const CompressRLE;

/// @brief Field CompressZIP value: I32(2)
static ::GlobalNamespace::Texture2D_EXRFlags const CompressZIP;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Texture2D_EXRFlags const None;

/// @brief Field OutputAsFloat value: I32(1)
static ::GlobalNamespace::Texture2D_EXRFlags const OutputAsFloat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Texture2D_EXRFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Texture2D_EXRFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
