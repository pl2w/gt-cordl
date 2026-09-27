#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/Algorithm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Algorithm)
// Forward declare root types
namespace K4os::Compression::LZ4::Engine {
struct Algorithm;
}
// Write type traits
MARK_VAL_T(::K4os::Compression::LZ4::Engine::Algorithm);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Engine::Algorithm, "K4os.Compression.LZ4.Engine", "Algorithm");
// Dependencies 
namespace K4os::Compression::LZ4::Engine {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.Algorithm
struct CORDL_TYPE Algorithm {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Algorithm_Unwrapped
enum struct __Algorithm_Unwrapped : int32_t {
__E_X32 = static_cast<int32_t>(0x0),
__E_X64 = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Algorithm_Unwrapped () const noexcept {
return static_cast<__Algorithm_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Algorithm() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Algorithm(int32_t  value__) noexcept;

/// @brief Field X32 value: I32(0)
static ::K4os::Compression::LZ4::Engine::Algorithm const X32;

/// @brief Field X64 value: I32(1)
static ::K4os::Compression::LZ4::Engine::Algorithm const X64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::K4os::Compression::LZ4::Engine::Algorithm, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::K4os::Compression::LZ4::Engine::Algorithm) == 0x4, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Engine
