#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlenderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineBlenderSettings_CustomBlend_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CinemachineBlenderSettings)
namespace GlobalNamespace {
struct CinemachineBlenderSettings_CustomBlend;
}
namespace Unity::Cinemachine {
struct CinemachineBlendDefinition;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineBlenderSettings;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineBlenderSettings*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBlenderSettings*, "Unity.Cinemachine", "CinemachineBlenderSettings");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineBlending.html")]
// Dependencies Unity.Cinemachine.CinemachineBlenderSettings::CustomBlend, UnityEngine.ScriptableObject
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBlenderSettings
class CORDL_TYPE CinemachineBlenderSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using CustomBlend = ::GlobalNamespace::CinemachineBlenderSettings_CustomBlend;

/// @brief Field CustomBlends, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomBlends, put=__cordl_internal_set_CustomBlends)) ::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend>  CustomBlends;

/// @brief Method GetBlendForVirtualCameras, addr 0xaeaf944, size 0x224, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition GetBlendForVirtualCameras(::StringW  fromCameraName, ::StringW  toCameraName, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend) ;

/// @brief Method LookupBlend, addr 0xaeafb68, size 0x250, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::CinemachineBlendDefinition LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend, ::Unity::Cinemachine::CinemachineBlenderSettings*  customBlends, ::UnityEngine::Object*  owner) ;

static inline ::Unity::Cinemachine::CinemachineBlenderSettings* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend> const& __cordl_internal_get_CustomBlends() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend>& __cordl_internal_get_CustomBlends() ;

constexpr void __cordl_internal_set_CustomBlends(::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend>  value) ;

/// @brief Method .ctor, addr 0xaeafdb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBlenderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBlenderSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineBlenderSettings(CinemachineBlenderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBlenderSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBlenderSettings(CinemachineBlenderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22271};

/// @brief Field kBlendFromAnyCameraLabel offset 0xffffffff size 0x8
static constexpr ::ConstString  kBlendFromAnyCameraLabel{u"**ANY CAMERA**"};

/// [Tooltip("The array containing explicitly defined blends between two Virtual Cameras")]
/// [FormerlySerializedAs("m_CustomBlends")]
/// @brief Field CustomBlends, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend>  ___CustomBlends;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineBlenderSettings, ___CustomBlends) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineBlenderSettings) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
