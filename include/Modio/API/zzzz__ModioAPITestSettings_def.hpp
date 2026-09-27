#pragma once
// IWYU pragma private; include "Modio/API/ModioAPITestSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ModioAPITestSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::API {
class ModioAPITestSettings;
}
// Write type traits
MARK_REF_T(::Modio::API::ModioAPITestSettings*);
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPITestSettings*, "Modio.API", "ModioAPITestSettings");
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPITestSettings
class CORDL_TYPE ModioAPITestSettings : public ::System::Object {
public:
// Declarations
/// @brief Field FakeDisconnected, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_FakeDisconnected, put=__cordl_internal_set_FakeDisconnected)) bool  FakeDisconnected;

/// @brief Field FakeDisconnectedOnEndpointRegex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FakeDisconnectedOnEndpointRegex, put=__cordl_internal_set_FakeDisconnectedOnEndpointRegex)) ::StringW  FakeDisconnectedOnEndpointRegex;

/// @brief Field FakeDisconnectedTimeoutDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_FakeDisconnectedTimeoutDuration, put=__cordl_internal_set_FakeDisconnectedTimeoutDuration)) float_t  FakeDisconnectedTimeoutDuration;

/// @brief Field RateLimitError, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_RateLimitError, put=__cordl_internal_set_RateLimitError)) bool  RateLimitError;

/// @brief Field RateLimitOnEndpointRegex, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RateLimitOnEndpointRegex, put=__cordl_internal_set_RateLimitOnEndpointRegex)) ::StringW  RateLimitOnEndpointRegex;

/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::API::ModioAPITestSettings* New_ctor() ;

/// @brief Method ShouldFakeDisconnected, addr 0x9fdeb94, size 0x94, virtual false, abstract: false, final false
inline bool ShouldFakeDisconnected(::StringW  url) ;

/// @brief Method ShouldFakeRateLimit, addr 0x9fdec28, size 0x94, virtual false, abstract: false, final false
inline bool ShouldFakeRateLimit(::StringW  url) ;

constexpr bool const& __cordl_internal_get_FakeDisconnected() const;

constexpr bool& __cordl_internal_get_FakeDisconnected() ;

constexpr ::StringW const& __cordl_internal_get_FakeDisconnectedOnEndpointRegex() const;

constexpr ::StringW& __cordl_internal_get_FakeDisconnectedOnEndpointRegex() ;

constexpr float_t const& __cordl_internal_get_FakeDisconnectedTimeoutDuration() const;

constexpr float_t& __cordl_internal_get_FakeDisconnectedTimeoutDuration() ;

constexpr bool const& __cordl_internal_get_RateLimitError() const;

constexpr bool& __cordl_internal_get_RateLimitError() ;

constexpr ::StringW const& __cordl_internal_get_RateLimitOnEndpointRegex() const;

constexpr ::StringW& __cordl_internal_get_RateLimitOnEndpointRegex() ;

constexpr void __cordl_internal_set_FakeDisconnected(bool  value) ;

constexpr void __cordl_internal_set_FakeDisconnectedOnEndpointRegex(::StringW  value) ;

constexpr void __cordl_internal_set_FakeDisconnectedTimeoutDuration(float_t  value) ;

constexpr void __cordl_internal_set_RateLimitError(bool  value) ;

constexpr void __cordl_internal_set_RateLimitOnEndpointRegex(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fdecbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPITestSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPITestSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPITestSettings(ModioAPITestSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPITestSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPITestSettings(ModioAPITestSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18029};

/// @brief Field FakeDisconnected, offset: 0x10, size: 0x1, def value: None
 bool  ___FakeDisconnected;

/// @brief Field FakeDisconnectedOnEndpointRegex, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FakeDisconnectedOnEndpointRegex;

/// @brief Field FakeDisconnectedTimeoutDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___FakeDisconnectedTimeoutDuration;

/// @brief Field RateLimitError, offset: 0x24, size: 0x1, def value: None
 bool  ___RateLimitError;

/// @brief Field RateLimitOnEndpointRegex, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RateLimitOnEndpointRegex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::ModioAPITestSettings, ___FakeDisconnected) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPITestSettings, ___FakeDisconnectedOnEndpointRegex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPITestSettings, ___FakeDisconnectedTimeoutDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPITestSettings, ___RateLimitError) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Modio::API::ModioAPITestSettings, ___RateLimitOnEndpointRegex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::ModioAPITestSettings) == 0x30, "Size mismatch!");

} // namespace end def Modio::API
