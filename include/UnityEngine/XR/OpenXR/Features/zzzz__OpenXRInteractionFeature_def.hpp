#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRInteractionFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_ActionType_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInteractionFeature)
namespace GlobalNamespace {
struct OpenXRInteractionFeature_ActionType;
}
namespace GlobalNamespace {
struct OpenXRInteractionFeature_InteractionProfileType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_UserPaths;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_UserPaths;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_UserPaths*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionBinding");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionConfig");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionMapConfig");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/DeviceConfig");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_UserPaths*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/UserPaths");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
class CORDL_TYPE OpenXRInteractionFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using ActionType = ::GlobalNamespace::OpenXRInteractionFeature_ActionType;

using InteractionProfileType = ::GlobalNamespace::OpenXRInteractionFeature_InteractionProfileType;

using ActionBinding = ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding;

using ActionConfig = ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig;

using ActionMapConfig = ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig;

using DeviceConfig = ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig;

using UserPaths = ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_UserPaths;

 __declspec(property(get=get_IsAdditive)) bool  IsAdditive;

/// @brief Field m_CreatedActionMaps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CreatedActionMaps, put=setStaticF_m_CreatedActionMaps)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*  m_CreatedActionMaps;

/// @brief Field m_InteractionProfileEnabledMaps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_InteractionProfileEnabledMaps, put=setStaticF_m_InteractionProfileEnabledMaps)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OpenXRInteractionFeature_InteractionProfileType,::System::Collections::Generic::Dictionary_2<::StringW,bool>*>*  m_InteractionProfileEnabledMaps;

/// @brief Method AddActionMap, addr 0xb4f16e4, size 0x170, virtual false, abstract: false, final false
inline void AddActionMap(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*  map) ;

/// @brief Method AddAdditiveActions, addr 0xb4f1854, size 0x4, virtual true, abstract: false, final false
inline void AddAdditiveActions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*  actionMaps, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*  additiveMap) ;

/// @brief Method CreateActionMaps, addr 0xb4ec778, size 0xa4, virtual false, abstract: false, final false
inline void CreateActionMaps(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*  configs) ;

/// @brief Method GetDeviceLayoutName, addr 0xb4f16a4, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetDeviceLayoutName() ;

/// @brief Method GetInteractionProfileType, addr 0xb4f169c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::OpenXRInteractionFeature_InteractionProfileType GetInteractionProfileType() ;

static inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* New_ctor() ;

/// @brief Method OnEnabledChange, addr 0xb4f1858, size 0x4, virtual true, abstract: false, final false
inline void OnEnabledChange() ;

/// @brief Method OnInstanceCreate, addr 0xb4f167c, size 0x20, virtual true, abstract: false, final false
inline bool OnInstanceCreate(uint64_t  xrSession) ;

/// @brief Method RegisterActionMapsWithRuntime, addr 0xb4f1678, size 0x4, virtual true, abstract: false, final false
inline void RegisterActionMapsWithRuntime() ;

/// @brief Method RegisterDeviceLayout, addr 0xb4f1670, size 0x4, virtual true, abstract: false, final false
inline void RegisterDeviceLayout() ;

/// @brief Method RegisterLayouts, addr 0xb4ec524, size 0x100, virtual false, abstract: false, final false
static inline void RegisterLayouts() ;

/// @brief Method UnregisterDeviceLayout, addr 0xb4f1674, size 0x4, virtual true, abstract: false, final false
inline void UnregisterDeviceLayout() ;

/// @brief Method .ctor, addr 0xb4f185c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* getStaticF_m_CreatedActionMaps() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OpenXRInteractionFeature_InteractionProfileType,::System::Collections::Generic::Dictionary_2<::StringW,bool>*>* getStaticF_m_InteractionProfileEnabledMaps() ;

/// @brief Method get_IsAdditive, addr 0xb4f1668, size 0x8, virtual true, abstract: false, final false
inline bool get_IsAdditive() ;

static inline void setStaticF_m_CreatedActionMaps(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*  value) ;

static inline void setStaticF_m_InteractionProfileEnabledMaps(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OpenXRInteractionFeature_InteractionProfileType,::System::Collections::Generic::Dictionary_2<::StringW,bool>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInteractionFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInteractionFeature(OpenXRInteractionFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInteractionFeature(OpenXRInteractionFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/UserPaths
class CORDL_TYPE OpenXRInteractionFeature_UserPaths : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInteractionFeature_UserPaths() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_UserPaths", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInteractionFeature_UserPaths(OpenXRInteractionFeature_UserPaths && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_UserPaths", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInteractionFeature_UserPaths(OpenXRInteractionFeature_UserPaths const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27335};

/// @brief Field gamepad offset 0xffffffff size 0x8
static constexpr ::ConstString  gamepad{u"/user/gamepad"};

/// @brief Field head offset 0xffffffff size 0x8
static constexpr ::ConstString  head{u"/user/head"};

/// @brief Field leftHand offset 0xffffffff size 0x8
static constexpr ::ConstString  leftHand{u"/user/hand/left"};

/// @brief Field rightHand offset 0xffffffff size 0x8
static constexpr ::ConstString  rightHand{u"/user/hand/right"};

/// @brief Field treadmill offset 0xffffffff size 0x8
static constexpr ::ConstString  treadmill{u"/user/treadmill"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_UserPaths) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig
class CORDL_TYPE OpenXRInteractionFeature_ActionMapConfig : public ::System::Object {
public:
// Declarations
/// @brief Field actions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_actions, put=__cordl_internal_set_actions)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>*  actions;

/// @brief Field desiredInteractionProfile, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_desiredInteractionProfile, put=__cordl_internal_set_desiredInteractionProfile)) ::StringW  desiredInteractionProfile;

/// @brief Field deviceInfos, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_deviceInfos, put=__cordl_internal_set_deviceInfos)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>*  deviceInfos;

/// @brief Field localizedName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizedName, put=__cordl_internal_set_localizedName)) ::StringW  localizedName;

/// @brief Field manufacturer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_manufacturer, put=__cordl_internal_set_manufacturer)) ::StringW  manufacturer;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field serialNumber, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_serialNumber, put=__cordl_internal_set_serialNumber)) ::StringW  serialNumber;

static inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>* const& __cordl_internal_get_actions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>*& __cordl_internal_get_actions() ;

constexpr ::StringW const& __cordl_internal_get_desiredInteractionProfile() const;

constexpr ::StringW& __cordl_internal_get_desiredInteractionProfile() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>* const& __cordl_internal_get_deviceInfos() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>*& __cordl_internal_get_deviceInfos() ;

constexpr ::StringW const& __cordl_internal_get_localizedName() const;

constexpr ::StringW& __cordl_internal_get_localizedName() ;

constexpr ::StringW const& __cordl_internal_get_manufacturer() const;

constexpr ::StringW& __cordl_internal_get_manufacturer() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::StringW const& __cordl_internal_get_serialNumber() const;

constexpr ::StringW& __cordl_internal_get_serialNumber() ;

constexpr void __cordl_internal_set_actions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>*  value) ;

constexpr void __cordl_internal_set_desiredInteractionProfile(::StringW  value) ;

constexpr void __cordl_internal_set_deviceInfos(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>*  value) ;

constexpr void __cordl_internal_set_localizedName(::StringW  value) ;

constexpr void __cordl_internal_set_manufacturer(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_serialNumber(::StringW  value) ;

/// @brief Method .ctor, addr 0xb4f1928, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInteractionFeature_ActionMapConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_ActionMapConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInteractionFeature_ActionMapConfig(OpenXRInteractionFeature_ActionMapConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_ActionMapConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInteractionFeature_ActionMapConfig(OpenXRInteractionFeature_ActionMapConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27334};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field localizedName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___localizedName;

/// @brief Field deviceInfos, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>*  ___deviceInfos;

/// @brief Field actions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>*  ___actions;

/// @brief Field desiredInteractionProfile, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___desiredInteractionProfile;

/// @brief Field manufacturer, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___manufacturer;

/// @brief Field serialNumber, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___serialNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig, ___localizedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig, ___deviceInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig, ___actions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig, ___desiredInteractionProfile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig, ___manufacturer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig, ___serialNumber) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features
// Dependencies System.Object, UnityEngine.XR.InputDeviceCharacteristics
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig
class CORDL_TYPE OpenXRInteractionFeature_DeviceConfig : public ::System::Object {
public:
// Declarations
/// @brief Field characteristics, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_characteristics, put=__cordl_internal_set_characteristics)) ::UnityEngine::XR::InputDeviceCharacteristics  characteristics;

/// @brief Field userPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_userPath, put=__cordl_internal_set_userPath)) ::StringW  userPath;

static inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* New_ctor() ;

constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& __cordl_internal_get_characteristics() const;

constexpr ::UnityEngine::XR::InputDeviceCharacteristics& __cordl_internal_get_characteristics() ;

constexpr ::StringW const& __cordl_internal_get_userPath() const;

constexpr ::StringW& __cordl_internal_get_userPath() ;

constexpr void __cordl_internal_set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics  value) ;

constexpr void __cordl_internal_set_userPath(::StringW  value) ;

/// @brief Method .ctor, addr 0xb4f1920, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInteractionFeature_DeviceConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_DeviceConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInteractionFeature_DeviceConfig(OpenXRInteractionFeature_DeviceConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_DeviceConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInteractionFeature_DeviceConfig(OpenXRInteractionFeature_DeviceConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27333};

/// @brief Field characteristics, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::XR::InputDeviceCharacteristics  ___characteristics;

/// @brief Field userPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___userPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig, ___characteristics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig, ___userPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features
// Dependencies System.Object, UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::ActionType
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig
class CORDL_TYPE OpenXRInteractionFeature_ActionConfig : public ::System::Object {
public:
// Declarations
/// @brief Field bindings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bindings, put=__cordl_internal_set_bindings)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>*  bindings;

/// @brief Field isAdditive, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAdditive, put=__cordl_internal_set_isAdditive)) bool  isAdditive;

/// @brief Field localizedName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizedName, put=__cordl_internal_set_localizedName)) ::StringW  localizedName;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field type, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::OpenXRInteractionFeature_ActionType  type;

/// @brief Field usages, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_usages, put=__cordl_internal_set_usages)) ::System::Collections::Generic::List_1<::StringW>*  usages;

static inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>* const& __cordl_internal_get_bindings() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>*& __cordl_internal_get_bindings() ;

constexpr bool const& __cordl_internal_get_isAdditive() const;

constexpr bool& __cordl_internal_get_isAdditive() ;

constexpr ::StringW const& __cordl_internal_get_localizedName() const;

constexpr ::StringW& __cordl_internal_get_localizedName() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::OpenXRInteractionFeature_ActionType& __cordl_internal_get_type() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_usages() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_usages() ;

constexpr void __cordl_internal_set_bindings(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>*  value) ;

constexpr void __cordl_internal_set_isAdditive(bool  value) ;

constexpr void __cordl_internal_set_localizedName(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::OpenXRInteractionFeature_ActionType  value) ;

constexpr void __cordl_internal_set_usages(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb4f1918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInteractionFeature_ActionConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_ActionConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInteractionFeature_ActionConfig(OpenXRInteractionFeature_ActionConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_ActionConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInteractionFeature_ActionConfig(OpenXRInteractionFeature_ActionConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27332};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field type, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OpenXRInteractionFeature_ActionType  ___type;

/// @brief Field localizedName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___localizedName;

/// @brief Field bindings, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>*  ___bindings;

/// @brief Field usages, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___usages;

/// @brief Field isAdditive, offset: 0x38, size: 0x1, def value: None
 bool  ___isAdditive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig, ___localizedName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig, ___bindings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig, ___usages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig, ___isAdditive) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding
class CORDL_TYPE OpenXRInteractionFeature_ActionBinding : public ::System::Object {
public:
// Declarations
/// @brief Field interactionPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPath, put=__cordl_internal_set_interactionPath)) ::StringW  interactionPath;

/// @brief Field interactionProfileName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionProfileName, put=__cordl_internal_set_interactionProfileName)) ::StringW  interactionProfileName;

/// @brief Field userPaths, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_userPaths, put=__cordl_internal_set_userPaths)) ::System::Collections::Generic::List_1<::StringW>*  userPaths;

static inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_interactionPath() const;

constexpr ::StringW& __cordl_internal_get_interactionPath() ;

constexpr ::StringW const& __cordl_internal_get_interactionProfileName() const;

constexpr ::StringW& __cordl_internal_get_interactionProfileName() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_userPaths() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_userPaths() ;

constexpr void __cordl_internal_set_interactionPath(::StringW  value) ;

constexpr void __cordl_internal_set_interactionProfileName(::StringW  value) ;

constexpr void __cordl_internal_set_userPaths(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb4f1910, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInteractionFeature_ActionBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_ActionBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRInteractionFeature_ActionBinding(OpenXRInteractionFeature_ActionBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature_ActionBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRInteractionFeature_ActionBinding(OpenXRInteractionFeature_ActionBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27331};

/// @brief Field interactionProfileName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___interactionProfileName;

/// @brief Field interactionPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___interactionPath;

/// @brief Field userPaths, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___userPaths;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding, ___interactionProfileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding, ___interactionPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding, ___userPaths) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR::Features
