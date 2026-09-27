#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/FusionAppSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__EncryptionMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionAppSettings)
// Forward declare root types
namespace Fusion::Photon::Realtime {
class FusionAppSettings;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::FusionAppSettings*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::FusionAppSettings*, "Fusion.Photon.Realtime", "FusionAppSettings");
// Dependencies Fusion.Photon.Realtime.AppSettings, Fusion.Photon.Realtime.EncryptionMode
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.FusionAppSettings
class CORDL_TYPE FusionAppSettings : public ::Fusion::Photon::Realtime::AppSettings {
public:
// Declarations
/// @brief Field emptyRoomTtl, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_emptyRoomTtl, put=__cordl_internal_set_emptyRoomTtl)) int32_t  emptyRoomTtl;

/// @brief Field encryptionMode, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_encryptionMode, put=__cordl_internal_set_encryptionMode)) ::Fusion::Photon::Realtime::EncryptionMode  encryptionMode;

/// @brief Method GetCopy, addr 0x5f68960, size 0x78, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::FusionAppSettings* GetCopy() ;

static inline ::Fusion::Photon::Realtime::FusionAppSettings* New_ctor() ;

/// @brief Method ToString, addr 0x5f689e0, size 0xbc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_emptyRoomTtl() const;

constexpr int32_t& __cordl_internal_get_emptyRoomTtl() ;

constexpr ::Fusion::Photon::Realtime::EncryptionMode const& __cordl_internal_get_encryptionMode() const;

constexpr ::Fusion::Photon::Realtime::EncryptionMode& __cordl_internal_get_encryptionMode() ;

constexpr void __cordl_internal_set_emptyRoomTtl(int32_t  value) ;

constexpr void __cordl_internal_set_encryptionMode(::Fusion::Photon::Realtime::EncryptionMode  value) ;

/// @brief Method .ctor, addr 0x5f689d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionAppSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionAppSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionAppSettings(FusionAppSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionAppSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionAppSettings(FusionAppSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28113};

/// [InlineHelp]
/// @brief Field encryptionMode, offset: 0x74, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::EncryptionMode  ___encryptionMode;

/// [InlineHelp]
/// @brief Field emptyRoomTtl, offset: 0x78, size: 0x4, def value: None
 int32_t  ___emptyRoomTtl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::FusionAppSettings, ___encryptionMode) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::FusionAppSettings, ___emptyRoomTtl) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::FusionAppSettings) == 0x80, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
