#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI_OculusInitParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CAPI_OculusInitParams)
// Forward declare root types
namespace GlobalNamespace {
struct CAPI_OculusInitParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CAPI_OculusInitParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CAPI_OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Platform.CAPI/OculusInitParams
struct CORDL_TYPE CAPI_OculusInitParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CAPI_OculusInitParams() ;

// Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CAPI_OculusInitParams(int32_t  sType, ::StringW  email, ::StringW  password, uint64_t  appId, ::StringW  uriPrefixOverride) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field sType, offset: 0x0, size: 0x4, def value: None
 int32_t  sType;

/// @brief Field email, offset: 0x8, size: 0x8, def value: None
 ::StringW  email;

/// @brief Field password, offset: 0x10, size: 0x8, def value: None
 ::StringW  password;

/// @brief Field appId, offset: 0x18, size: 0x8, def value: None
 uint64_t  appId;

/// @brief Field uriPrefixOverride, offset: 0x20, size: 0x8, def value: None
 ::StringW  uriPrefixOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CAPI_OculusInitParams, sType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_OculusInitParams, email) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_OculusInitParams, password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_OculusInitParams, appId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CAPI_OculusInitParams, uriPrefixOverride) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CAPI_OculusInitParams) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
