#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_key_ref.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls_unitytls_key_ref)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_key_ref;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_key_ref);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_key_ref, "Mono.Unity", "UnityTls/unitytls_key_ref");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_key_ref
struct CORDL_TYPE UnityTls_unitytls_key_ref {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_key_ref() ;

// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_key_ref(uint64_t  handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field handle, offset: 0x0, size: 0x8, def value: None
 uint64_t  handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_key_ref, handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_key_ref) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
