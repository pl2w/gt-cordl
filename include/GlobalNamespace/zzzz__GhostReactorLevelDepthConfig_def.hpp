#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelDepthConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorLevelDepthConfig)
namespace GlobalNamespace {
class GhostReactorLevelDepthConfig_LevelOption;
}
namespace GlobalNamespace {
class GhostReactorLevelGenConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorLevelDepthConfig;
}
namespace GlobalNamespace {
class GhostReactorLevelDepthConfig_LevelOption;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorLevelDepthConfig*);
MARK_REF_T(::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelDepthConfig*, "", "GhostReactorLevelDepthConfig");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*, "", "GhostReactorLevelDepthConfig/LevelOption");
// [CreateAssetMenu(fileName = "GhostReactorLevelDepthConfig", menuName = "ScriptableObjects/GhostReactorLevelDepthConfig")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelDepthConfig
class CORDL_TYPE GhostReactorLevelDepthConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using LevelOption = ::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption;

/// @brief Field configGenOptions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_configGenOptions, put=__cordl_internal_set_configGenOptions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>*  configGenOptions;

/// @brief Field displayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field options, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*  options;

static inline ::GlobalNamespace::GhostReactorLevelDepthConfig* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>* const& __cordl_internal_get_configGenOptions() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>*& __cordl_internal_get_configGenOptions() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>* const& __cordl_internal_get_options() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set_configGenOptions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>*  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_options(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*  value) ;

/// @brief Method .ctor, addr 0x5847d90, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelDepthConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelDepthConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelDepthConfig(GhostReactorLevelDepthConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelDepthConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelDepthConfig(GhostReactorLevelDepthConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1808};

/// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field configGenOptions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>*  ___configGenOptions;

/// @brief Field options, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*  ___options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelDepthConfig, ___displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelDepthConfig, ___configGenOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelDepthConfig, ___options) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelDepthConfig) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelDepthConfig/LevelOption
class CORDL_TYPE GhostReactorLevelDepthConfig_LevelOption : public ::System::Object {
public:
// Declarations
/// @brief Field levelConfig, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelConfig, put=__cordl_internal_set_levelConfig)) ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>  levelConfig;

/// @brief Field weight, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) int32_t  weight;

static inline ::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig> const& __cordl_internal_get_levelConfig() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>& __cordl_internal_get_levelConfig() ;

constexpr int32_t const& __cordl_internal_get_weight() const;

constexpr int32_t& __cordl_internal_get_weight() ;

constexpr void __cordl_internal_set_levelConfig(::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>  value) ;

constexpr void __cordl_internal_set_weight(int32_t  value) ;

/// @brief Method .ctor, addr 0x5847e6c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelDepthConfig_LevelOption() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelDepthConfig_LevelOption", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelDepthConfig_LevelOption(GhostReactorLevelDepthConfig_LevelOption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelDepthConfig_LevelOption", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelDepthConfig_LevelOption(GhostReactorLevelDepthConfig_LevelOption const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1807};

/// @brief Field weight, offset: 0x10, size: 0x4, def value: None
 int32_t  ___weight;

/// @brief Field levelConfig, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>  ___levelConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption, ___weight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption, ___levelConfig) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
