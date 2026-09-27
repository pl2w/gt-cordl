#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnityTls_unitytls_tlsctx_callbacks)
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class UnityTls_unitytls_tlsctx_write_callback;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_tlsctx_callbacks;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks, "Mono.Unity", "UnityTls/unitytls_tlsctx_callbacks");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_tlsctx_callbacks
struct CORDL_TYPE UnityTls_unitytls_tlsctx_callbacks {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_tlsctx_callbacks() ;

// Ctor Parameters [CppParam { name: "read", ty: "::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "write", ty: "::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "void*", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_tlsctx_callbacks(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*  read, ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*  write, void*  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field read, offset: 0x0, size: 0x8, def value: None
 ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*  read;

/// @brief Field write, offset: 0x8, size: 0x8, def value: None
 ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*  write;

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 void*  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks, read) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks, write) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks, data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
