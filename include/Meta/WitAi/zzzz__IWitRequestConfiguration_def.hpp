#pragma once
// IWYU pragma private; include "Meta/WitAi/IWitRequestConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWitRequestConfiguration)
namespace Meta::WitAi {
class IWitRequestEndpointInfo;
}
// Forward declare root types
namespace Meta::WitAi {
class IWitRequestConfiguration;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::IWitRequestConfiguration*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::IWitRequestConfiguration*, "Meta.WitAi", "IWitRequestConfiguration");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.IWitRequestConfiguration
class CORDL_TYPE IWitRequestConfiguration {
public:
// Declarations
 __declspec(property(get=get_RequestTimeoutMs)) int32_t  RequestTimeoutMs;

/// @brief Method GetClientAccessToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetClientAccessToken() ;

/// @brief Method GetConfigurationId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetConfigurationId() ;

/// @brief Method GetEndpointInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::IWitRequestEndpointInfo* GetEndpointInfo() ;

/// @brief Method GetVersionTag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetVersionTag() ;

/// @brief Method get_RequestTimeoutMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_RequestTimeoutMs() ;

// Ctor Parameters [CppParam { name: "", ty: "IWitRequestConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitRequestConfiguration(IWitRequestConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25535};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
