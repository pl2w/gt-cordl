#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_cParams_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "K4os/Compression/LZ4/Engine/zzzz__LL_lz4hc_strat_e_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_cParams_t)
namespace GlobalNamespace {
struct LL_lz4hc_strat_e;
}
// Forward declare root types
namespace GlobalNamespace {
struct LL_cParams_t;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_cParams_t);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_cParams_t, "K4os.Compression.LZ4.Engine", "LL/cParams_t");
// Dependencies K4os.Compression.LZ4.Engine.LL::lz4hc_strat_e
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/cParams_t
struct CORDL_TYPE LL_cParams_t {
public:
// Declarations
/// @brief Method .ctor, addr 0x9cbc7d8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::LL_lz4hc_strat_e  strat, uint32_t  nbSearches, uint32_t  targetLength) ;

// Ctor Parameters []
// @brief default ctor
constexpr LL_cParams_t() ;

// Ctor Parameters [CppParam { name: "strat", ty: "::GlobalNamespace::LL_lz4hc_strat_e", modifiers: "", def_value: None, comment: None }, CppParam { name: "nbSearches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetLength", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LL_cParams_t(::GlobalNamespace::LL_lz4hc_strat_e  strat, uint32_t  nbSearches, uint32_t  targetLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field strat, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LL_lz4hc_strat_e  strat;

/// @brief Field nbSearches, offset: 0x4, size: 0x4, def value: None
 uint32_t  nbSearches;

/// @brief Field targetLength, offset: 0x8, size: 0x4, def value: None
 uint32_t  targetLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_cParams_t, strat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_cParams_t, nbSearches) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LL_cParams_t, targetLength) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_cParams_t) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
