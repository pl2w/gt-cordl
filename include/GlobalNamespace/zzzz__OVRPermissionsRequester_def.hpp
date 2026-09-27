#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPermissionsRequester.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OVRPermissionsRequester)
namespace GlobalNamespace {
struct OVRPermissionsRequester_Permission;
}
namespace GlobalNamespace {
class OVRPermissionsRequester___c;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPermissionsRequester;
}
namespace GlobalNamespace {
class OVRPermissionsRequester___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRPermissionsRequester*);
MARK_REF_T(::GlobalNamespace::OVRPermissionsRequester___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPermissionsRequester*, "", "OVRPermissionsRequester");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPermissionsRequester___c*, "", "OVRPermissionsRequester/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPermissionsRequester
class CORDL_TYPE OVRPermissionsRequester : public ::System::Object {
public:
// Declarations
using Permission = ::GlobalNamespace::OVRPermissionsRequester_Permission;

using __c = ::GlobalNamespace::OVRPermissionsRequester___c;

/// @brief Field PermissionGranted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PermissionGranted, put=setStaticF_PermissionGranted)) ::System::Action_1<::StringW>*  PermissionGranted;

/// @brief Method BuildPermissionCallbacks, addr 0xa60d158, size 0x1ac, virtual false, abstract: false, final false
static inline ::UnityEngine::Android::PermissionCallbacks* BuildPermissionCallbacks() ;

/// @brief Method GetPermissionId, addr 0xa60ca40, size 0xec, virtual false, abstract: false, final false
static inline ::StringW GetPermissionId(::GlobalNamespace::OVRPermissionsRequester_Permission  permission) ;

/// @brief Method IsPermissionGranted, addr 0xa60cc90, size 0x14, virtual false, abstract: false, final false
static inline bool IsPermissionGranted(::GlobalNamespace::OVRPermissionsRequester_Permission  permission) ;

/// @brief Method IsPermissionSupportedByPlatform, addr 0xa60cb2c, size 0x164, virtual false, abstract: false, final false
static inline bool IsPermissionSupportedByPlatform(::GlobalNamespace::OVRPermissionsRequester_Permission  permission) ;

/// @brief Method Request, addr 0xa60cca4, size 0x4, virtual false, abstract: false, final false
static inline void Request(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*  permissions) ;

/// @brief Method RequestPermissions, addr 0xa60cca8, size 0x3b4, virtual false, abstract: false, final false
static inline void RequestPermissions(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*  permissions) ;

/// @brief Method ShouldRequestPermission, addr 0xa60d05c, size 0xfc, virtual false, abstract: false, final false
static inline bool ShouldRequestPermission(::GlobalNamespace::OVRPermissionsRequester_Permission  permission) ;

/// [CompilerGenerated]
/// @brief Method add_PermissionGranted, addr 0xa60c8a8, size 0xcc, virtual false, abstract: false, final false
static inline void add_PermissionGranted(::System::Action_1<::StringW>*  value) ;

static inline ::System::Action_1<::StringW>* getStaticF_PermissionGranted() ;

/// [CompilerGenerated]
/// @brief Method remove_PermissionGranted, addr 0xa60c974, size 0xcc, virtual false, abstract: false, final false
static inline void remove_PermissionGranted(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_PermissionGranted(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPermissionsRequester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPermissionsRequester(OVRPermissionsRequester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPermissionsRequester(OVRPermissionsRequester const& ) = delete;

/// @brief Field BodyTrackingPermission offset 0xffffffff size 0x8
static constexpr ::ConstString  BodyTrackingPermission{u"com.oculus.permission.BODY_TRACKING"};

/// @brief Field EyeTrackingPermission offset 0xffffffff size 0x8
static constexpr ::ConstString  EyeTrackingPermission{u"com.oculus.permission.EYE_TRACKING"};

/// @brief Field FaceTrackingPermission offset 0xffffffff size 0x8
static constexpr ::ConstString  FaceTrackingPermission{u"com.oculus.permission.FACE_TRACKING"};

/// @brief Field RecordAudioPermission offset 0xffffffff size 0x8
static constexpr ::ConstString  RecordAudioPermission{u"android.permission.RECORD_AUDIO"};

/// @brief Field ScenePermission offset 0xffffffff size 0x8
static constexpr ::ConstString  ScenePermission{u"com.oculus.permission.USE_SCENE"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPermissionsRequester) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPermissionsRequester/<>c
class CORDL_TYPE OVRPermissionsRequester___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::OVRPermissionsRequester___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Action_1<::StringW>*  __9__15_0;

/// @brief Field <>9__15_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_1, put=setStaticF___9__15_1)) ::System::Action_1<::StringW>*  __9__15_1;

static inline ::GlobalNamespace::OVRPermissionsRequester___c* New_ctor() ;

/// @brief Method <BuildPermissionCallbacks>b__15_0, addr 0xa60d374, size 0xa4, virtual false, abstract: false, final false
inline void _BuildPermissionCallbacks_b__15_0(::StringW  permissionId) ;

/// @brief Method <BuildPermissionCallbacks>b__15_1, addr 0xa60d418, size 0xec, virtual false, abstract: false, final false
inline void _BuildPermissionCallbacks_b__15_1(::StringW  permissionId) ;

/// @brief Method .ctor, addr 0xa60d36c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVRPermissionsRequester___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__15_0() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__15_1() ;

static inline void setStaticF___9(::GlobalNamespace::OVRPermissionsRequester___c*  value) ;

static inline void setStaticF___9__15_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__15_1(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPermissionsRequester___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPermissionsRequester___c(OVRPermissionsRequester___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPermissionsRequester___c(OVRPermissionsRequester___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPermissionsRequester___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
