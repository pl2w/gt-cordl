#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PhotonAppSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionGlobalScriptableObject_1_def.hpp"
CORDL_MODULE_EXPORT(PhotonAppSettings)
namespace Fusion::Photon::Realtime {
class FusionAppSettings;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class PhotonAppSettings;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::PhotonAppSettings*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::PhotonAppSettings*, "Fusion.Photon.Realtime", "PhotonAppSettings");
// [HelpURL("https://doc.photonengine.com/en-us/pun/v2/getting-started/initial-setup")]
// [CreateAssetMenu(menuName = "Fusion/Photon Application Settings", fileName = "PhotonAppSettings")]
// [FusionGlobalScriptableObject("Assets/Photon/Fusion/Resources/PhotonAppSettings.asset")]
// Dependencies Fusion.FusionGlobalScriptableObject`1<T>
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.PhotonAppSettings
class CORDL_TYPE PhotonAppSettings : public ::Fusion::FusionGlobalScriptableObject_1<::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>> {
public:
// Declarations
/// @brief Field AppSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppSettings, put=__cordl_internal_set_AppSettings)) ::Fusion::Photon::Realtime::FusionAppSettings*  AppSettings;

static inline ::Fusion::Photon::Realtime::PhotonAppSettings* New_ctor() ;

/// @brief Method TryGetGlobal, addr 0x5f68adc, size 0x48, virtual false, abstract: false, final false
static inline bool TryGetGlobal(::by_ref<::Fusion::Photon::Realtime::PhotonAppSettings*>  settings) ;

constexpr ::Fusion::Photon::Realtime::FusionAppSettings* const& __cordl_internal_get_AppSettings() const;

constexpr ::Fusion::Photon::Realtime::FusionAppSettings*& __cordl_internal_get_AppSettings() ;

constexpr void __cordl_internal_set_AppSettings(::Fusion::Photon::Realtime::FusionAppSettings*  value) ;

/// @brief Method .ctor, addr 0x5f68b64, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Global, addr 0x5f68a9c, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings> get_Global() ;

/// @brief Method get_IsGlobalLoaded, addr 0x5f68b24, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsGlobalLoaded() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAppSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAppSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAppSettings(PhotonAppSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAppSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAppSettings(PhotonAppSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28114};

/// [InlineHelp]
/// @brief Field AppSettings, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::FusionAppSettings*  ___AppSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::PhotonAppSettings, ___AppSettings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::PhotonAppSettings) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
