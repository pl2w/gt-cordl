#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_tlsctx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnityTls_unitytls_tlsctx)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_tlsctx;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_tlsctx);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_tlsctx, "Mono.Unity", "UnityTls/unitytls_tlsctx");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx
#pragma pack(push, 0)
struct CORDL_TYPE UnityTls_unitytls_tlsctx {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_tlsctx) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
