#pragma once
// IWYU pragma private; include "GlobalNamespace/UGCPermissionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UGCAccessLevel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UGCPermissionManager)
namespace GlobalNamespace {
struct Permission_ManagedByEnum;
}
namespace GlobalNamespace {
struct UGCAccessLevel;
}
namespace GlobalNamespace {
class UGCPermissionManager_IUGCPermissions;
}
namespace GlobalNamespace {
class UGCPermissionManager_KIDPermissions;
}
namespace GlobalNamespace {
class UGCPermissionManager_PlayFabPermissions;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class UGCPermissionManager;
}
namespace GlobalNamespace {
class UGCPermissionManager_IUGCPermissions;
}
namespace GlobalNamespace {
class UGCPermissionManager_KIDPermissions;
}
namespace GlobalNamespace {
class UGCPermissionManager_PlayFabPermissions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UGCPermissionManager*);
MARK_REF_T(::GlobalNamespace::UGCPermissionManager_IUGCPermissions*);
MARK_REF_T(::GlobalNamespace::UGCPermissionManager_KIDPermissions*);
MARK_REF_T(::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UGCPermissionManager*, "", "UGCPermissionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UGCPermissionManager_IUGCPermissions*, "", "UGCPermissionManager/IUGCPermissions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UGCPermissionManager_KIDPermissions*, "", "UGCPermissionManager/KIDPermissions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*, "", "UGCPermissionManager/PlayFabPermissions");
// Dependencies System.Nullable`1<T>, UGCAccessLevel, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UGCPermissionManager
class CORDL_TYPE UGCPermissionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using IUGCPermissions = ::GlobalNamespace::UGCPermissionManager_IUGCPermissions;

using KIDPermissions = ::GlobalNamespace::UGCPermissionManager_KIDPermissions;

using PlayFabPermissions = ::GlobalNamespace::UGCPermissionManager_PlayFabPermissions;

/// @brief Field accessLevel, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_accessLevel, put=setStaticF_accessLevel)) ::System::Nullable_1<::GlobalNamespace::UGCAccessLevel>  accessLevel;

/// @brief Field onUGCDisabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onUGCDisabled, put=setStaticF_onUGCDisabled)) ::System::Action*  onUGCDisabled;

/// @brief Field onUGCEnabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onUGCEnabled, put=setStaticF_onUGCEnabled)) ::System::Action*  onUGCEnabled;

/// @brief Field onVirtualStumpDisabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onVirtualStumpDisabled, put=setStaticF_onVirtualStumpDisabled)) ::System::Action*  onVirtualStumpDisabled;

/// @brief Field onVirtualStumpEnabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onVirtualStumpEnabled, put=setStaticF_onVirtualStumpEnabled)) ::System::Action*  onVirtualStumpEnabled;

/// @brief Field permissions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_permissions, put=setStaticF_permissions)) ::GlobalNamespace::UGCPermissionManager_IUGCPermissions*  permissions;

/// @brief Method CheckPermissions, addr 0x5a43804, size 0xc4, virtual false, abstract: false, final false
static inline void CheckPermissions() ;

static inline ::GlobalNamespace::UGCPermissionManager* New_ctor() ;

/// @brief Method SetAccessLevel, addr 0x5a43e68, size 0x1b0, virtual false, abstract: false, final false
static inline void SetAccessLevel(::GlobalNamespace::UGCAccessLevel  level) ;

/// @brief Method SubscribeToUGCDisabled, addr 0x5a43a30, size 0xb4, virtual false, abstract: false, final false
static inline void SubscribeToUGCDisabled(::System::Action*  callback) ;

/// @brief Method SubscribeToUGCEnabled, addr 0x5a438c8, size 0xb4, virtual false, abstract: false, final false
static inline void SubscribeToUGCEnabled(::System::Action*  callback) ;

/// @brief Method SubscribeToVirtualStumpDisabled, addr 0x5a43d00, size 0xb4, virtual false, abstract: false, final false
static inline void SubscribeToVirtualStumpDisabled(::System::Action*  callback) ;

/// @brief Method SubscribeToVirtualStumpEnabled, addr 0x5a43b98, size 0xb4, virtual false, abstract: false, final false
static inline void SubscribeToVirtualStumpEnabled(::System::Action*  callback) ;

/// @brief Method UnsubscribeFromUGCDisabled, addr 0x5a43ae4, size 0xb4, virtual false, abstract: false, final false
static inline void UnsubscribeFromUGCDisabled(::System::Action*  callback) ;

/// @brief Method UnsubscribeFromUGCEnabled, addr 0x5a4397c, size 0xb4, virtual false, abstract: false, final false
static inline void UnsubscribeFromUGCEnabled(::System::Action*  callback) ;

/// @brief Method UnsubscribeFromVirtualStumpDisabled, addr 0x5a43db4, size 0xb4, virtual false, abstract: false, final false
static inline void UnsubscribeFromVirtualStumpDisabled(::System::Action*  callback) ;

/// @brief Method UnsubscribeFromVirtualStumpEnabled, addr 0x5a43c4c, size 0xb4, virtual false, abstract: false, final false
static inline void UnsubscribeFromVirtualStumpEnabled(::System::Action*  callback) ;

/// @brief Method UseKID, addr 0x5a358cc, size 0x158, virtual false, abstract: false, final false
static inline void UseKID() ;

/// @brief Method UsePlayFabSafety, addr 0x5a35774, size 0x158, virtual false, abstract: false, final false
static inline void UsePlayFabSafety() ;

/// @brief Method .ctor, addr 0x5a44018, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Nullable_1<::GlobalNamespace::UGCAccessLevel> getStaticF_accessLevel() ;

static inline ::System::Action* getStaticF_onUGCDisabled() ;

static inline ::System::Action* getStaticF_onUGCEnabled() ;

static inline ::System::Action* getStaticF_onVirtualStumpDisabled() ;

static inline ::System::Action* getStaticF_onVirtualStumpEnabled() ;

static inline ::GlobalNamespace::UGCPermissionManager_IUGCPermissions* getStaticF_permissions() ;

/// @brief Method get_FeaturedMapsOnly, addr 0x5a4374c, size 0x5c, virtual false, abstract: false, final false
static inline bool get_FeaturedMapsOnly() ;

/// @brief Method get_HasNoMapAccess, addr 0x5a437a8, size 0x5c, virtual false, abstract: false, final false
static inline bool get_HasNoMapAccess() ;

/// @brief Method get_IsUGCDisabled, addr 0x5a436f0, size 0x5c, virtual false, abstract: false, final false
static inline bool get_IsUGCDisabled() ;

static inline void setStaticF_accessLevel(::System::Nullable_1<::GlobalNamespace::UGCAccessLevel>  value) ;

static inline void setStaticF_onUGCDisabled(::System::Action*  value) ;

static inline void setStaticF_onUGCEnabled(::System::Action*  value) ;

static inline void setStaticF_onVirtualStumpDisabled(::System::Action*  value) ;

static inline void setStaticF_onVirtualStumpEnabled(::System::Action*  value) ;

static inline void setStaticF_permissions(::GlobalNamespace::UGCPermissionManager_IUGCPermissions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UGCPermissionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UGCPermissionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UGCPermissionManager(UGCPermissionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UGCPermissionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UGCPermissionManager(UGCPermissionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2974};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UGCPermissionManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UGCPermissionManager/KIDPermissions
class CORDL_TYPE UGCPermissionManager_KIDPermissions : public ::System::Object {
public:
// Declarations
/// @brief Field setAccessLevel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_setAccessLevel, put=__cordl_internal_set_setAccessLevel)) ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel;

/// @brief Convert operator to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr operator  ::GlobalNamespace::UGCPermissionManager_IUGCPermissions*() noexcept;

/// @brief Method CheckPermissions, addr 0x5a441b8, size 0x88, virtual true, abstract: false, final true
inline void CheckPermissions() ;

/// @brief Method Initialize, addr 0x5a440c8, size 0xf0, virtual true, abstract: false, final true
inline void Initialize() ;

static inline ::GlobalNamespace::UGCPermissionManager_KIDPermissions* New_ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel) ;

/// @brief Method OnKIDSessionUpdate, addr 0x5a4469c, size 0xc4, virtual false, abstract: false, final false
inline void OnKIDSessionUpdate(bool  isEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy) ;

/// @brief Method ProcessPermissionKID, addr 0x5a44240, size 0x45c, virtual false, abstract: false, final false
inline void ProcessPermissionKID(bool  hasOptedIn, bool  isEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy) ;

/// @brief Method SetAccessLevel, addr 0x5a440ac, size 0x1c, virtual false, abstract: false, final false
inline void SetAccessLevel(::GlobalNamespace::UGCAccessLevel  level) ;

constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>* const& __cordl_internal_get_setAccessLevel() const;

constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*& __cordl_internal_get_setAccessLevel() ;

constexpr void __cordl_internal_set_setAccessLevel(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  value) ;

/// @brief Method .ctor, addr 0x5a436c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel) ;

/// @brief Convert to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr ::GlobalNamespace::UGCPermissionManager_IUGCPermissions* i___GlobalNamespace__UGCPermissionManager_IUGCPermissions() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UGCPermissionManager_KIDPermissions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UGCPermissionManager_KIDPermissions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UGCPermissionManager_KIDPermissions(UGCPermissionManager_KIDPermissions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UGCPermissionManager_KIDPermissions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UGCPermissionManager_KIDPermissions(UGCPermissionManager_KIDPermissions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2973};

/// @brief Field setAccessLevel, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  ___setAccessLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UGCPermissionManager_KIDPermissions, ___setAccessLevel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UGCPermissionManager_KIDPermissions) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UGCPermissionManager/PlayFabPermissions
class CORDL_TYPE UGCPermissionManager_PlayFabPermissions : public ::System::Object {
public:
// Declarations
/// @brief Field setAccessLevel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_setAccessLevel, put=__cordl_internal_set_setAccessLevel)) ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel;

/// @brief Convert operator to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr operator  ::GlobalNamespace::UGCPermissionManager_IUGCPermissions*() noexcept;

/// @brief Method CheckPermissions, addr 0x5a440a8, size 0x4, virtual true, abstract: false, final true
inline void CheckPermissions() ;

/// @brief Method Initialize, addr 0x5a44020, size 0x88, virtual true, abstract: false, final true
inline void Initialize() ;

static inline ::GlobalNamespace::UGCPermissionManager_PlayFabPermissions* New_ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel) ;

constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>* const& __cordl_internal_get_setAccessLevel() const;

constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*& __cordl_internal_get_setAccessLevel() ;

constexpr void __cordl_internal_set_setAccessLevel(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  value) ;

/// @brief Method .ctor, addr 0x5a43690, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel) ;

/// @brief Convert to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr ::GlobalNamespace::UGCPermissionManager_IUGCPermissions* i___GlobalNamespace__UGCPermissionManager_IUGCPermissions() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UGCPermissionManager_PlayFabPermissions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UGCPermissionManager_PlayFabPermissions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UGCPermissionManager_PlayFabPermissions(UGCPermissionManager_PlayFabPermissions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UGCPermissionManager_PlayFabPermissions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UGCPermissionManager_PlayFabPermissions(UGCPermissionManager_PlayFabPermissions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2972};

/// @brief Field setAccessLevel, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  ___setAccessLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UGCPermissionManager_PlayFabPermissions, ___setAccessLevel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UGCPermissionManager_PlayFabPermissions) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: UGCPermissionManager/IUGCPermissions
class CORDL_TYPE UGCPermissionManager_IUGCPermissions {
public:
// Declarations
/// @brief Method CheckPermissions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CheckPermissions() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize() ;

// Ctor Parameters [CppParam { name: "", ty: "UGCPermissionManager_IUGCPermissions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UGCPermissionManager_IUGCPermissions(UGCPermissionManager_IUGCPermissions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
