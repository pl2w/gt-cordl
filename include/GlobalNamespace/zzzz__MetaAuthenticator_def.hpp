#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaAuthenticator)
// Forward declare root types
namespace GlobalNamespace {
class MetaAuthenticator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaAuthenticator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaAuthenticator*, "", "MetaAuthenticator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaAuthenticator
class CORDL_TYPE MetaAuthenticator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MaxAppEntitlementCheckAttempts, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxAppEntitlementCheckAttempts, put=__cordl_internal_set_MaxAppEntitlementCheckAttempts)) int32_t  MaxAppEntitlementCheckAttempts;

/// @brief Field MaxGetDeviceAttestationTokenAttempts, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxGetDeviceAttestationTokenAttempts, put=__cordl_internal_set_MaxGetDeviceAttestationTokenAttempts)) int32_t  MaxGetDeviceAttestationTokenAttempts;

/// @brief Field MaxGetUserNonceAttempts, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxGetUserNonceAttempts, put=__cordl_internal_set_MaxGetUserNonceAttempts)) int32_t  MaxGetUserNonceAttempts;

static inline ::GlobalNamespace::MetaAuthenticator* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_MaxAppEntitlementCheckAttempts() const;

constexpr int32_t& __cordl_internal_get_MaxAppEntitlementCheckAttempts() ;

constexpr int32_t const& __cordl_internal_get_MaxGetDeviceAttestationTokenAttempts() const;

constexpr int32_t& __cordl_internal_get_MaxGetDeviceAttestationTokenAttempts() ;

constexpr int32_t const& __cordl_internal_get_MaxGetUserNonceAttempts() const;

constexpr int32_t& __cordl_internal_get_MaxGetUserNonceAttempts() ;

constexpr void __cordl_internal_set_MaxAppEntitlementCheckAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_MaxGetDeviceAttestationTokenAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_MaxGetUserNonceAttempts(int32_t  value) ;

/// @brief Method .ctor, addr 0x5aafd60, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaAuthenticator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaAuthenticator(MetaAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaAuthenticator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaAuthenticator(MetaAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3284};

/// @brief Field MaxAppEntitlementCheckAttempts, offset: 0x20, size: 0x4, def value: None
 int32_t  ___MaxAppEntitlementCheckAttempts;

/// @brief Field MaxGetUserNonceAttempts, offset: 0x24, size: 0x4, def value: None
 int32_t  ___MaxGetUserNonceAttempts;

/// @brief Field MaxGetDeviceAttestationTokenAttempts, offset: 0x28, size: 0x4, def value: None
 int32_t  ___MaxGetDeviceAttestationTokenAttempts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaAuthenticator, ___MaxAppEntitlementCheckAttempts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaAuthenticator, ___MaxGetUserNonceAttempts) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaAuthenticator, ___MaxGetDeviceAttestationTokenAttempts) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaAuthenticator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
