#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_LZ4HC_optimal_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_LZ4HC_optimal_t)
// Forward declare root types
namespace GlobalNamespace {
struct LL_LZ4HC_optimal_t;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_LZ4HC_optimal_t);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_LZ4HC_optimal_t, "K4os.Compression.LZ4.Engine", "LL/LZ4HC_optimal_t");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/LZ4HC_optimal_t
struct CORDL_TYPE LL_LZ4HC_optimal_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LL_LZ4HC_optimal_t() ;

// Ctor Parameters [CppParam { name: "price", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mlen", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "litlen", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LL_LZ4HC_optimal_t(int32_t  price, int32_t  off, int32_t  mlen, int32_t  litlen) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field price, offset: 0x0, size: 0x4, def value: None
 int32_t  price;

/// @brief Field off, offset: 0x4, size: 0x4, def value: None
 int32_t  off;

/// @brief Field mlen, offset: 0x8, size: 0x4, def value: None
 int32_t  mlen;

/// @brief Field litlen, offset: 0xc, size: 0x4, def value: None
 int32_t  litlen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_LZ4HC_optimal_t, price) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4HC_optimal_t, off) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4HC_optimal_t, mlen) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_LZ4HC_optimal_t, litlen) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_LZ4HC_optimal_t) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
