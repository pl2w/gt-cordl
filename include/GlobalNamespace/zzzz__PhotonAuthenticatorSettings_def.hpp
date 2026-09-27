#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonAuthenticatorSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PhotonAuthenticatorSettings)
// Forward declare root types
namespace GlobalNamespace {
class PhotonAuthenticatorSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonAuthenticatorSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonAuthenticatorSettings*, "", "PhotonAuthenticatorSettings");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonAuthenticatorSettings
class CORDL_TYPE PhotonAuthenticatorSettings : public ::System::Object {
public:
// Declarations
/// @brief Field FusionAppId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FusionAppId, put=setStaticF_FusionAppId)) ::StringW  FusionAppId;

/// @brief Field PunAppId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PunAppId, put=setStaticF_PunAppId)) ::StringW  PunAppId;

/// @brief Field VoiceAppId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VoiceAppId, put=setStaticF_VoiceAppId)) ::StringW  VoiceAppId;

/// @brief Method Load, addr 0x5ab1fb8, size 0xc0, virtual false, abstract: false, final false
static inline void Load(::StringW  path) ;

static inline ::GlobalNamespace::PhotonAuthenticatorSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x5ab2078, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_FusionAppId() ;

static inline ::StringW getStaticF_PunAppId() ;

static inline ::StringW getStaticF_VoiceAppId() ;

static inline void setStaticF_FusionAppId(::StringW  value) ;

static inline void setStaticF_PunAppId(::StringW  value) ;

static inline void setStaticF_VoiceAppId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAuthenticatorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAuthenticatorSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAuthenticatorSettings(PhotonAuthenticatorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAuthenticatorSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAuthenticatorSettings(PhotonAuthenticatorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3291};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PhotonAuthenticatorSettings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
