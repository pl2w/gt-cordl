#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Unity/zzzz__UnityTls_unitytls_error_code_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls_unitytls_errorstate)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_errorstate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_errorstate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_errorstate, "Mono.Unity", "UnityTls/unitytls_errorstate");
// Dependencies Mono.Unity.UnityTls::unitytls_error_code
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_errorstate
struct CORDL_TYPE UnityTls_unitytls_errorstate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_errorstate() ;

// Ctor Parameters [CppParam { name: "magic", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "code", ty: "::GlobalNamespace::UnityTls_unitytls_error_code", modifiers: "", def_value: None, comment: None }, CppParam { name: "reserved", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_errorstate(uint32_t  magic, ::GlobalNamespace::UnityTls_unitytls_error_code  code, uint64_t  reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field magic, offset: 0x0, size: 0x4, def value: None
 uint32_t  magic;

/// @brief Field code, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::UnityTls_unitytls_error_code  code;

/// @brief Field reserved, offset: 0x8, size: 0x8, def value: None
 uint64_t  reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_errorstate, magic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_errorstate, code) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_errorstate, reserved) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_errorstate) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
