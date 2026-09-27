#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ZlibBaseStream_StreamMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZlibBaseStream_StreamMode)
// Forward declare root types
namespace GlobalNamespace {
struct ZlibBaseStream_StreamMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZlibBaseStream_StreamMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZlibBaseStream_StreamMode, "Pathfinding.Ionic.Zlib", "ZlibBaseStream/StreamMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode
struct CORDL_TYPE ZlibBaseStream_StreamMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZlibBaseStream_StreamMode_Unwrapped
enum struct __ZlibBaseStream_StreamMode_Unwrapped : int32_t {
__E_Writer = static_cast<int32_t>(0x0),
__E_Reader = static_cast<int32_t>(0x1),
__E_Undefined = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZlibBaseStream_StreamMode_Unwrapped () const noexcept {
return static_cast<__ZlibBaseStream_StreamMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZlibBaseStream_StreamMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZlibBaseStream_StreamMode(int32_t  value__) noexcept;

/// @brief Field Reader value: I32(1)
static ::GlobalNamespace::ZlibBaseStream_StreamMode const Reader;

/// @brief Field Undefined value: I32(2)
static ::GlobalNamespace::ZlibBaseStream_StreamMode const Undefined;

/// @brief Field Writer value: I32(0)
static ::GlobalNamespace::ZlibBaseStream_StreamMode const Writer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZlibBaseStream_StreamMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZlibBaseStream_StreamMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
