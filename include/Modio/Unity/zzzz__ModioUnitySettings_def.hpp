#pragma once
// IWYU pragma private; include "Modio/Unity/ModioUnitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUnitySettings)
namespace Modio {
class ModioSettings;
}
// Forward declare root types
namespace Modio::Unity {
class ModioUnitySettings;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ModioUnitySettings*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioUnitySettings*, "Modio.Unity", "ModioUnitySettings");
// [CreateAssetMenu(fileName = "config.asset", menuName = "ModIo/v3/config")]
// Dependencies Modio.IModioServiceSettings, UnityEngine.ScriptableObject
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioUnitySettings
class CORDL_TYPE ModioUnitySettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Settings)) ::Modio::ModioSettings*  Settings;

/// @brief Field _platformSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__platformSettings, put=__cordl_internal_set__platformSettings)) ::ArrayW<::Modio::IModioServiceSettings*>  _platformSettings;

/// @brief Field _settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Modio::ModioSettings*  _settings;

static inline ::Modio::Unity::ModioUnitySettings* New_ctor() ;

constexpr ::ArrayW<::Modio::IModioServiceSettings*> const& __cordl_internal_get__platformSettings() const;

constexpr ::ArrayW<::Modio::IModioServiceSettings*>& __cordl_internal_get__platformSettings() ;

constexpr ::Modio::ModioSettings* const& __cordl_internal_get__settings() const;

constexpr ::Modio::ModioSettings*& __cordl_internal_get__settings() ;

constexpr void __cordl_internal_set__platformSettings(::ArrayW<::Modio::IModioServiceSettings*>  value) ;

constexpr void __cordl_internal_set__settings(::Modio::ModioSettings*  value) ;

/// @brief Method .ctor, addr 0x9f9583c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Settings, addr 0x9f95364, size 0x2c, virtual false, abstract: false, final false
inline ::Modio::ModioSettings* get_Settings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnitySettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnitySettings(ModioUnitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnitySettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnitySettings(ModioUnitySettings const& ) = delete;

/// @brief Field DefaultResourceName offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultResourceName{u"mod.io/v3_config"};

/// @brief Field DefaultResourceNameOverride offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultResourceNameOverride{u"mod.io/v3_config_local"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32067};

/// [SerializeField]
/// @brief Field _settings, offset: 0x18, size: 0x8, def value: None
 ::Modio::ModioSettings*  ____settings;

/// [SerializeField]
/// [SerializeReference]
/// @brief Field _platformSettings, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Modio::IModioServiceSettings*>  ____platformSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::ModioUnitySettings, ____settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ModioUnitySettings, ____platformSettings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::ModioUnitySettings) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity
