#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableSerializationConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BuilderTableSerializationConfig)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderTableSerializationConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderTableSerializationConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTableSerializationConfig*, "", "BuilderTableSerializationConfig");
// [CreateAssetMenu(fileName = "BuilderTableSerializationConfig", menuName = "Gorilla Tag/Builder/Serialization", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderTableSerializationConfig
class CORDL_TYPE BuilderTableSerializationConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field localMapsPrefsKey, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_localMapsPrefsKey, put=__cordl_internal_set_localMapsPrefsKey)) ::StringW  localMapsPrefsKey;

/// @brief Field playfabScanKey, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabScanKey, put=__cordl_internal_set_playfabScanKey)) ::StringW  playfabScanKey;

/// @brief Field publishedScanMothershipKey, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_publishedScanMothershipKey, put=__cordl_internal_set_publishedScanMothershipKey)) ::StringW  publishedScanMothershipKey;

/// @brief Field recentVotesPrefsKey, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_recentVotesPrefsKey, put=__cordl_internal_set_recentVotesPrefsKey)) ::StringW  recentVotesPrefsKey;

/// @brief Field scanSlotDevKey, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanSlotDevKey, put=__cordl_internal_set_scanSlotDevKey)) ::StringW  scanSlotDevKey;

/// @brief Field scanSlotMothershipKeys, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanSlotMothershipKeys, put=__cordl_internal_set_scanSlotMothershipKeys)) ::System::Collections::Generic::List_1<::StringW>*  scanSlotMothershipKeys;

/// @brief Field sharedBlocksApiBaseURL, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedBlocksApiBaseURL, put=__cordl_internal_set_sharedBlocksApiBaseURL)) ::StringW  sharedBlocksApiBaseURL;

/// @brief Field startingMapConfigKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingMapConfigKey, put=__cordl_internal_set_startingMapConfigKey)) ::StringW  startingMapConfigKey;

/// @brief Field tableConfigurationKey, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableConfigurationKey, put=__cordl_internal_set_tableConfigurationKey)) ::StringW  tableConfigurationKey;

/// @brief Field timeAppend, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeAppend, put=__cordl_internal_set_timeAppend)) ::StringW  timeAppend;

/// @brief Field titleDataKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

static inline ::GlobalNamespace::BuilderTableSerializationConfig* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_localMapsPrefsKey() const;

constexpr ::StringW& __cordl_internal_get_localMapsPrefsKey() ;

constexpr ::StringW const& __cordl_internal_get_playfabScanKey() const;

constexpr ::StringW& __cordl_internal_get_playfabScanKey() ;

constexpr ::StringW const& __cordl_internal_get_publishedScanMothershipKey() const;

constexpr ::StringW& __cordl_internal_get_publishedScanMothershipKey() ;

constexpr ::StringW const& __cordl_internal_get_recentVotesPrefsKey() const;

constexpr ::StringW& __cordl_internal_get_recentVotesPrefsKey() ;

constexpr ::StringW const& __cordl_internal_get_scanSlotDevKey() const;

constexpr ::StringW& __cordl_internal_get_scanSlotDevKey() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_scanSlotMothershipKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_scanSlotMothershipKeys() ;

constexpr ::StringW const& __cordl_internal_get_sharedBlocksApiBaseURL() const;

constexpr ::StringW& __cordl_internal_get_sharedBlocksApiBaseURL() ;

constexpr ::StringW const& __cordl_internal_get_startingMapConfigKey() const;

constexpr ::StringW& __cordl_internal_get_startingMapConfigKey() ;

constexpr ::StringW const& __cordl_internal_get_tableConfigurationKey() const;

constexpr ::StringW& __cordl_internal_get_tableConfigurationKey() ;

constexpr ::StringW const& __cordl_internal_get_timeAppend() const;

constexpr ::StringW& __cordl_internal_get_timeAppend() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr void __cordl_internal_set_localMapsPrefsKey(::StringW  value) ;

constexpr void __cordl_internal_set_playfabScanKey(::StringW  value) ;

constexpr void __cordl_internal_set_publishedScanMothershipKey(::StringW  value) ;

constexpr void __cordl_internal_set_recentVotesPrefsKey(::StringW  value) ;

constexpr void __cordl_internal_set_scanSlotDevKey(::StringW  value) ;

constexpr void __cordl_internal_set_scanSlotMothershipKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_sharedBlocksApiBaseURL(::StringW  value) ;

constexpr void __cordl_internal_set_startingMapConfigKey(::StringW  value) ;

constexpr void __cordl_internal_set_tableConfigurationKey(::StringW  value) ;

constexpr void __cordl_internal_set_timeAppend(::StringW  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x57b46ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableSerializationConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableSerializationConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableSerializationConfig(BuilderTableSerializationConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableSerializationConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableSerializationConfig(BuilderTableSerializationConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1574};

/// @brief Field tableConfigurationKey, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___tableConfigurationKey;

/// @brief Field titleDataKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// @brief Field startingMapConfigKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___startingMapConfigKey;

/// @brief Field scanSlotMothershipKeys, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___scanSlotMothershipKeys;

/// @brief Field scanSlotDevKey, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___scanSlotDevKey;

/// @brief Field publishedScanMothershipKey, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___publishedScanMothershipKey;

/// @brief Field timeAppend, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___timeAppend;

/// @brief Field playfabScanKey, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___playfabScanKey;

/// @brief Field sharedBlocksApiBaseURL, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___sharedBlocksApiBaseURL;

/// @brief Field recentVotesPrefsKey, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___recentVotesPrefsKey;

/// @brief Field localMapsPrefsKey, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___localMapsPrefsKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___tableConfigurationKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___titleDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___startingMapConfigKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___scanSlotMothershipKeys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___scanSlotDevKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___publishedScanMothershipKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___timeAppend) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___playfabScanKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___sharedBlocksApiBaseURL) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___recentVotesPrefsKey) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSerializationConfig, ___localMapsPrefsKey) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTableSerializationConfig) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
