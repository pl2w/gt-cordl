#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_x509name.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnityTls_unitytls_x509name)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_x509name;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_x509name);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_x509name, "Mono.Unity", "UnityTls/unitytls_x509name");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_x509name
#pragma pack(push, 0)
struct CORDL_TYPE UnityTls_unitytls_x509name {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_x509name() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_x509name) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
