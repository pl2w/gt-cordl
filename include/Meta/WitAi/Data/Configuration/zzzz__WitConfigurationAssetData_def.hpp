#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Configuration/WitConfigurationAssetData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(WitConfigurationAssetData)
// Forward declare root types
namespace Meta::WitAi::Data::Configuration {
class WitConfigurationAssetData;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*, "Meta.WitAi.Data.Configuration", "WitConfigurationAssetData");
// Dependencies UnityEngine.ScriptableObject
namespace Meta::WitAi::Data::Configuration {
// Is value type: false
// CS Name: Meta.WitAi.Data.Configuration.WitConfigurationAssetData
class CORDL_TYPE WitConfigurationAssetData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Meta::WitAi::Data::Configuration::WitConfigurationAssetData* New_ctor() ;

/// @brief Method .ctor, addr 0x9e479f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitConfigurationAssetData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitConfigurationAssetData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitConfigurationAssetData(WitConfigurationAssetData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitConfigurationAssetData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitConfigurationAssetData(WitConfigurationAssetData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Data::Configuration::WitConfigurationAssetData) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Configuration
