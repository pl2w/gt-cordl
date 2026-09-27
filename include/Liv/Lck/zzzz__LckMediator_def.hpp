#pragma once
// IWYU pragma private; include "Liv/Lck/LckMediator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckMediator)
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
class ILckMonitor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Liv::Lck {
class LckMediator;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckMediator*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckMediator*, "Liv.Lck", "LckMediator");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckMediator
class CORDL_TYPE LckMediator : public ::System::Object {
public:
// Declarations
/// @brief Field CameraRegistered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraRegistered, put=setStaticF_CameraRegistered)) ::System::Action_1<::Liv::Lck::ILckCamera*>*  CameraRegistered;

/// @brief Field CameraUnregistered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraUnregistered, put=setStaticF_CameraUnregistered)) ::System::Action_1<::Liv::Lck::ILckCamera*>*  CameraUnregistered;

/// @brief Field MonitorRegistered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MonitorRegistered, put=setStaticF_MonitorRegistered)) ::System::Action_1<::Liv::Lck::ILckMonitor*>*  MonitorRegistered;

/// @brief Field MonitorToCameraAssignment, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MonitorToCameraAssignment, put=setStaticF_MonitorToCameraAssignment)) ::System::Action_2<::StringW,::StringW>*  MonitorToCameraAssignment;

/// @brief Field MonitorUnregistered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MonitorUnregistered, put=setStaticF_MonitorUnregistered)) ::System::Action_1<::Liv::Lck::ILckMonitor*>*  MonitorUnregistered;

/// @brief Field _cameras, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cameras, put=setStaticF__cameras)) ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>*  _cameras;

/// @brief Field _monitors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__monitors, put=setStaticF__monitors)) ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>*  _monitors;

/// @brief Method GetCameraById, addr 0x9ce43c4, size 0x98, virtual false, abstract: false, final false
static inline ::Liv::Lck::ILckCamera* GetCameraById(::StringW  id) ;

/// @brief Method GetCameras, addr 0x9ce44f4, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckCamera*>* GetCameras() ;

/// @brief Method GetMonitorById, addr 0x9ce445c, size 0x98, virtual false, abstract: false, final false
static inline ::Liv::Lck::ILckMonitor* GetMonitorById(::StringW  id) ;

/// @brief Method GetMonitors, addr 0x9ce456c, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckMonitor*>* GetMonitors() ;

/// @brief Method NotifyMixerAboutMonitorForCamera, addr 0x9ce45e4, size 0x90, virtual false, abstract: false, final false
static inline void NotifyMixerAboutMonitorForCamera(::StringW  monitorId, ::StringW  cameraId) ;

/// @brief Method RegisterCamera, addr 0x9ce0478, size 0x3ac, virtual false, abstract: false, final false
static inline void RegisterCamera(::Liv::Lck::ILckCamera*  camera) ;

/// @brief Method RegisterMonitor, addr 0x9ce3c70, size 0x3ac, virtual false, abstract: false, final false
static inline void RegisterMonitor(::Liv::Lck::ILckMonitor*  monitor) ;

/// @brief Method UnregisterCamera, addr 0x9ce0878, size 0x3a8, virtual false, abstract: false, final false
static inline void UnregisterCamera(::Liv::Lck::ILckCamera*  camera) ;

/// @brief Method UnregisterMonitor, addr 0x9ce401c, size 0x3a8, virtual false, abstract: false, final false
static inline void UnregisterMonitor(::Liv::Lck::ILckMonitor*  monitor) ;

/// [CompilerGenerated]
/// @brief Method add_CameraRegistered, addr 0x9ce32e8, size 0xf4, virtual false, abstract: false, final false
static inline void add_CameraRegistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_CameraUnregistered, addr 0x9ce34d0, size 0xf4, virtual false, abstract: false, final false
static inline void add_CameraUnregistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_MonitorRegistered, addr 0x9ce36b8, size 0xf4, virtual false, abstract: false, final false
static inline void add_MonitorRegistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_MonitorToCameraAssignment, addr 0x9ce3a88, size 0xf4, virtual false, abstract: false, final false
static inline void add_MonitorToCameraAssignment(::System::Action_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_MonitorUnregistered, addr 0x9ce38a0, size 0xf4, virtual false, abstract: false, final false
static inline void add_MonitorUnregistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value) ;

static inline ::System::Action_1<::Liv::Lck::ILckCamera*>* getStaticF_CameraRegistered() ;

static inline ::System::Action_1<::Liv::Lck::ILckCamera*>* getStaticF_CameraUnregistered() ;

static inline ::System::Action_1<::Liv::Lck::ILckMonitor*>* getStaticF_MonitorRegistered() ;

static inline ::System::Action_2<::StringW,::StringW>* getStaticF_MonitorToCameraAssignment() ;

static inline ::System::Action_1<::Liv::Lck::ILckMonitor*>* getStaticF_MonitorUnregistered() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>* getStaticF__cameras() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>* getStaticF__monitors() ;

/// [CompilerGenerated]
/// @brief Method remove_CameraRegistered, addr 0x9ce33dc, size 0xf4, virtual false, abstract: false, final false
static inline void remove_CameraRegistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_CameraUnregistered, addr 0x9ce35c4, size 0xf4, virtual false, abstract: false, final false
static inline void remove_CameraUnregistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_MonitorRegistered, addr 0x9ce37ac, size 0xf4, virtual false, abstract: false, final false
static inline void remove_MonitorRegistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_MonitorToCameraAssignment, addr 0x9ce3b7c, size 0xf4, virtual false, abstract: false, final false
static inline void remove_MonitorToCameraAssignment(::System::Action_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_MonitorUnregistered, addr 0x9ce3994, size 0xf4, virtual false, abstract: false, final false
static inline void remove_MonitorUnregistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value) ;

static inline void setStaticF_CameraRegistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value) ;

static inline void setStaticF_CameraUnregistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value) ;

static inline void setStaticF_MonitorRegistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value) ;

static inline void setStaticF_MonitorToCameraAssignment(::System::Action_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_MonitorUnregistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value) ;

static inline void setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>*  value) ;

static inline void setStaticF__monitors(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMediator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMediator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMediator(LckMediator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMediator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMediator(LckMediator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckMediator) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
