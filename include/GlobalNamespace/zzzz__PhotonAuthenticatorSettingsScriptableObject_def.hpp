#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonAuthenticatorSettingsScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PhotonAuthenticatorSettingsScriptableObject)
// Forward declare root types
namespace GlobalNamespace {
class PhotonAuthenticatorSettingsScriptableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject*, "", "PhotonAuthenticatorSettingsScriptableObject");
// [CreateAssetMenu(fileName = "PhotonAuthenticatorSettings", menuName = "ScriptableObjects/PhotonAuthenticatorSettings")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonAuthenticatorSettingsScriptableObject
class CORDL_TYPE PhotonAuthenticatorSettingsScriptableObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field FusionAppId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FusionAppId, put=__cordl_internal_set_FusionAppId)) ::StringW  FusionAppId;

/// @brief Field PunAppId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PunAppId, put=__cordl_internal_set_PunAppId)) ::StringW  PunAppId;

/// @brief Field VoiceAppId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceAppId, put=__cordl_internal_set_VoiceAppId)) ::StringW  VoiceAppId;

static inline ::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FusionAppId() const;

constexpr ::StringW& __cordl_internal_get_FusionAppId() ;

constexpr ::StringW const& __cordl_internal_get_PunAppId() const;

constexpr ::StringW& __cordl_internal_get_PunAppId() ;

constexpr ::StringW const& __cordl_internal_get_VoiceAppId() const;

constexpr ::StringW& __cordl_internal_get_VoiceAppId() ;

constexpr void __cordl_internal_set_FusionAppId(::StringW  value) ;

constexpr void __cordl_internal_set_PunAppId(::StringW  value) ;

constexpr void __cordl_internal_set_VoiceAppId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ab2080, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAuthenticatorSettingsScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAuthenticatorSettingsScriptableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAuthenticatorSettingsScriptableObject(PhotonAuthenticatorSettingsScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAuthenticatorSettingsScriptableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAuthenticatorSettingsScriptableObject(PhotonAuthenticatorSettingsScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3292};

/// @brief Field PunAppId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PunAppId;

/// @brief Field FusionAppId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___FusionAppId;

/// @brief Field VoiceAppId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___VoiceAppId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject, ___PunAppId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject, ___FusionAppId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject, ___VoiceAppId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
