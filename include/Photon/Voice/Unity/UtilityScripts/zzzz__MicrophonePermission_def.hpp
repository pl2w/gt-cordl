#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/MicrophonePermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MicrophonePermission)
namespace Photon::Voice::Unity {
class Recorder;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class MicrophonePermission;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*, "Photon.Voice.Unity.UtilityScripts", "MicrophonePermission");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// Dependencies Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.MicrophonePermission
class CORDL_TYPE MicrophonePermission : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
 __declspec(property(get=get_HasPermission, put=set_HasPermission)) bool  HasPermission;

/// @brief Field MicrophonePermissionCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MicrophonePermissionCallback, put=setStaticF_MicrophonePermissionCallback)) ::System::Action_1<bool>*  MicrophonePermissionCallback;

/// @brief Field autoStart, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoStart, put=__cordl_internal_set_autoStart)) bool  autoStart;

/// @brief Field hasPermission, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPermission, put=__cordl_internal_set_hasPermission)) bool  hasPermission;

/// @brief Field isRequesting, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRequesting, put=__cordl_internal_set_isRequesting)) bool  isRequesting;

/// @brief Field recorder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_recorder, put=__cordl_internal_set_recorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  recorder;

/// @brief Method Awake, addr 0xa789784, size 0x88, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InitVoice, addr 0xa78980c, size 0x22c, virtual false, abstract: false, final false
inline void InitVoice() ;

static inline ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission* New_ctor() ;

/// @brief Method PermissionCallbacks_PermissionDenied, addr 0xa789c30, size 0xfc, virtual false, abstract: false, final false
inline void PermissionCallbacks_PermissionDenied(::StringW  permissionName) ;

/// @brief Method PermissionCallbacks_PermissionDeniedAndDontAskAgain, addr 0xa789a38, size 0xfc, virtual false, abstract: false, final false
inline void PermissionCallbacks_PermissionDeniedAndDontAskAgain(::StringW  permissionName) ;

/// @brief Method PermissionCallbacks_PermissionGranted, addr 0xa789b34, size 0xfc, virtual false, abstract: false, final false
inline void PermissionCallbacks_PermissionGranted(::StringW  permissionName) ;

constexpr bool const& __cordl_internal_get_autoStart() const;

constexpr bool& __cordl_internal_get_autoStart() ;

constexpr bool const& __cordl_internal_get_hasPermission() const;

constexpr bool& __cordl_internal_get_hasPermission() ;

constexpr bool const& __cordl_internal_get_isRequesting() const;

constexpr bool& __cordl_internal_get_isRequesting() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_recorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_recorder() ;

constexpr void __cordl_internal_set_autoStart(bool  value) ;

constexpr void __cordl_internal_set_hasPermission(bool  value) ;

constexpr void __cordl_internal_set_isRequesting(bool  value) ;

constexpr void __cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

/// @brief Method .ctor, addr 0xa789d2c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_MicrophonePermissionCallback, addr 0xa78947c, size 0xcc, virtual false, abstract: false, final false
static inline void add_MicrophonePermissionCallback(::System::Action_1<bool>*  value) ;

static inline ::System::Action_1<bool>* getStaticF_MicrophonePermissionCallback() ;

/// @brief Method get_HasPermission, addr 0xa789614, size 0x8, virtual false, abstract: false, final false
inline bool get_HasPermission() ;

/// [CompilerGenerated]
/// @brief Method remove_MicrophonePermissionCallback, addr 0xa789548, size 0xcc, virtual false, abstract: false, final false
static inline void remove_MicrophonePermissionCallback(::System::Action_1<bool>*  value) ;

static inline void setStaticF_MicrophonePermissionCallback(::System::Action_1<bool>*  value) ;

/// @brief Method set_HasPermission, addr 0xa78961c, size 0x168, virtual false, abstract: false, final false
inline void set_HasPermission(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophonePermission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophonePermission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophonePermission(MicrophonePermission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophonePermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophonePermission(MicrophonePermission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28899};

/// @brief Field recorder, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___recorder;

/// @brief Field isRequesting, offset: 0x38, size: 0x1, def value: None
 bool  ___isRequesting;

/// @brief Field hasPermission, offset: 0x39, size: 0x1, def value: None
 bool  ___hasPermission;

/// [SerializeField]
/// @brief Field autoStart, offset: 0x3a, size: 0x1, def value: None
 bool  ___autoStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicrophonePermission, ___recorder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicrophonePermission, ___isRequesting) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicrophonePermission, ___hasPermission) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::MicrophonePermission, ___autoStart) == 0x3a, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::MicrophonePermission) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
