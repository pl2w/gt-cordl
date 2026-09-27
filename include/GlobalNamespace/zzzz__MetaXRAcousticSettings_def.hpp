#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Acoustics/zzzz__AcousticModel_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaXRAcousticSettings)
namespace Meta::XR::Acoustics {
struct AcousticModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticSettings*, "", "MetaXRAcousticSettings");
// Dependencies Meta.XR.Acoustics.AcousticModel, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticSettings
class CORDL_TYPE MetaXRAcousticSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_AcousticModel, put=set_AcousticModel)) ::Meta::XR::Acoustics::AcousticModel  AcousticModel;

 __declspec(property(get=get_DiffractionEnabled, put=set_DiffractionEnabled)) bool  DiffractionEnabled;

 __declspec(property(get=get_ExcludeTags, put=set_ExcludeTags)) ::ArrayW<::StringW>  ExcludeTags;

/// @brief [Tooltip("If enabled, acoustic geometry files will also be written when baking an acoustic map")]
 __declspec(property(get=get_MapBakeWriteGeo, put=set_MapBakeWriteGeo)) bool  MapBakeWriteGeo;

/// @brief Field acousticModel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_acousticModel, put=__cordl_internal_set_acousticModel)) ::Meta::XR::Acoustics::AcousticModel  acousticModel;

/// @brief Field diffractionEnabled, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_diffractionEnabled, put=__cordl_internal_set_diffractionEnabled)) bool  diffractionEnabled;

/// @brief Field excludeTags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_excludeTags, put=__cordl_internal_set_excludeTags)) ::ArrayW<::StringW>  excludeTags;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::MetaXRAcousticSettings>  instance;

/// @brief Field mapBakeWriteGeo, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_mapBakeWriteGeo, put=__cordl_internal_set_mapBakeWriteGeo)) bool  mapBakeWriteGeo;

/// @brief Method ApplyAllSettings, addr 0x9ebac50, size 0x244, virtual false, abstract: false, final false
inline void ApplyAllSettings() ;

static inline ::GlobalNamespace::MetaXRAcousticSettings* New_ctor() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method OnBeforeSceneLoadRuntimeMethod, addr 0x9ebaaf4, size 0x18, virtual false, abstract: false, final false
static inline void OnBeforeSceneLoadRuntimeMethod() ;

constexpr ::Meta::XR::Acoustics::AcousticModel const& __cordl_internal_get_acousticModel() const;

constexpr ::Meta::XR::Acoustics::AcousticModel& __cordl_internal_get_acousticModel() ;

constexpr bool const& __cordl_internal_get_diffractionEnabled() const;

constexpr bool& __cordl_internal_get_diffractionEnabled() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_excludeTags() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_excludeTags() ;

constexpr bool const& __cordl_internal_get_mapBakeWriteGeo() const;

constexpr bool& __cordl_internal_get_mapBakeWriteGeo() ;

constexpr void __cordl_internal_set_acousticModel(::Meta::XR::Acoustics::AcousticModel  value) ;

constexpr void __cordl_internal_set_diffractionEnabled(bool  value) ;

constexpr void __cordl_internal_set_excludeTags(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_mapBakeWriteGeo(bool  value) ;

/// @brief Method .ctor, addr 0x9ebb074, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MetaXRAcousticSettings> getStaticF_instance() ;

/// @brief Method get_AcousticModel, addr 0x9ebae94, size 0x8, virtual false, abstract: false, final false
inline ::Meta::XR::Acoustics::AcousticModel get_AcousticModel() ;

/// @brief Method get_DiffractionEnabled, addr 0x9ebaf68, size 0x8, virtual false, abstract: false, final false
inline bool get_DiffractionEnabled() ;

/// @brief Method get_ExcludeTags, addr 0x9ebb054, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_ExcludeTags() ;

/// @brief Method get_Instance, addr 0x9ebab0c, size 0x144, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MetaXRAcousticSettings> get_Instance() ;

/// @brief Method get_MapBakeWriteGeo, addr 0x9ebb064, size 0x8, virtual false, abstract: false, final false
inline bool get_MapBakeWriteGeo() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::MetaXRAcousticSettings>  value) ;

/// @brief Method set_AcousticModel, addr 0x9ebae9c, size 0xcc, virtual false, abstract: false, final false
inline void set_AcousticModel(::Meta::XR::Acoustics::AcousticModel  value) ;

/// @brief Method set_DiffractionEnabled, addr 0x9ebaf70, size 0xe4, virtual false, abstract: false, final false
inline void set_DiffractionEnabled(bool  value) ;

/// @brief Method set_ExcludeTags, addr 0x9ebb05c, size 0x8, virtual false, abstract: false, final false
inline void set_ExcludeTags(::ArrayW<::StringW>  value) ;

/// @brief Method set_MapBakeWriteGeo, addr 0x9ebb06c, size 0x8, virtual false, abstract: false, final false
inline void set_MapBakeWriteGeo(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticSettings(MetaXRAcousticSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticSettings(MetaXRAcousticSettings const& ) = delete;

/// @brief Field AcousticFileRootDir offset 0xffffffff size 0x8
static constexpr ::ConstString  AcousticFileRootDir{u"StreamingAssets/Acoustics"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29944};

/// [SerializeField]
/// [Tooltip("Select which type of acoustic modeling system is used to generate reverb and reflections.")]
/// @brief Field acousticModel, offset: 0x18, size: 0x4, def value: None
 ::Meta::XR::Acoustics::AcousticModel  ___acousticModel;

/// [SerializeField]
/// [Tooltip("When enabled and using geometry, all spatailized AudioSources will diffract (propagate around corners and obstructions)")]
/// @brief Field diffractionEnabled, offset: 0x1c, size: 0x1, def value: None
 bool  ___diffractionEnabled;

/// [SerializeField]
/// [Tooltip("Geometry will exclude children with these tags")]
/// @brief Field excludeTags, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___excludeTags;

/// [SerializeField]
/// [Tooltip("When you bake an acoustic map, also bake all the acoustic geometry files")]
/// @brief Field mapBakeWriteGeo, offset: 0x28, size: 0x1, def value: None
 bool  ___mapBakeWriteGeo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticSettings, ___acousticModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticSettings, ___diffractionEnabled) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticSettings, ___excludeTags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticSettings, ___mapBakeWriteGeo) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticSettings) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
