#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Unity/zzzz__UnityTls_unitytls_protocol_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnityTls_unitytls_tlsctx_protocolrange)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_tlsctx_protocolrange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange, "Mono.Unity", "UnityTls/unitytls_tlsctx_protocolrange");
// Dependencies Mono.Unity.UnityTls::unitytls_protocol
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange
struct CORDL_TYPE UnityTls_unitytls_tlsctx_protocolrange {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx_protocolrange() ;

// Ctor Parameters [CppParam { name: "min", ty: "::GlobalNamespace::UnityTls_unitytls_protocol", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "::GlobalNamespace::UnityTls_unitytls_protocol", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_tlsctx_protocolrange(::GlobalNamespace::UnityTls_unitytls_protocol  min, ::GlobalNamespace::UnityTls_unitytls_protocol  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field min, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::UnityTls_unitytls_protocol  min;

/// @brief Field max, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::UnityTls_unitytls_protocol  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange, max) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_tlsctx_protocolrange) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
