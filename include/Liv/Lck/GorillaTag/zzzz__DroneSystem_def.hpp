#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DroneSystem)
namespace Liv::Lck::GorillaTag {
class DroneController;
}
namespace Liv::Lck::GorillaTag {
class DroneSystem_OnRequestDroneModeDelegate;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneSystem;
}
namespace Liv::Lck::GorillaTag {
class DroneSystem_OnRequestDroneModeDelegate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneSystem*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneSystem*, "Liv.Lck.GorillaTag", "DroneSystem");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*, "Liv.Lck.GorillaTag", "DroneSystem/OnRequestDroneModeDelegate");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneSystem
class CORDL_TYPE DroneSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnRequestDroneModeDelegate = ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate;

/// @brief Field OnRequestDroneModeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestDroneModeState, put=__cordl_internal_set_OnRequestDroneModeState)) ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  OnRequestDroneModeState;

/// @brief Field _droneController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneController, put=__cordl_internal_set__droneController)) ::UnityW<::Liv::Lck::GorillaTag::DroneController>  _droneController;

/// @brief Field _dronePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dronePrefab, put=__cordl_internal_set__dronePrefab)) ::UnityW<::UnityEngine::GameObject>  _dronePrefab;

/// @brief Field _gtController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__gtController, put=__cordl_internal_set__gtController)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  _gtController;

/// @brief Field _lckService, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Method Awake, addr 0x9d208e4, size 0x15c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetLckCamera, addr 0x9d20c00, size 0x18, virtual false, abstract: false, final false
inline ::Liv::Lck::ILckCamera* GetLckCamera() ;

static inline ::Liv::Lck::GorillaTag::DroneSystem* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d20c18, size 0x174, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRecordingStarted, addr 0x9d20b3c, size 0x30, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method ProcessDroneMode, addr 0x9d20bc0, size 0x20, virtual false, abstract: false, final false
inline void ProcessDroneMode(bool  value) ;

/// @brief Method SetDronePositionAndRotation, addr 0x9d20be0, size 0x20, virtual false, abstract: false, final false
inline void SetDronePositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Start, addr 0x9d20a40, size 0xfc, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate* const& __cordl_internal_get_OnRequestDroneModeState() const;

constexpr ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*& __cordl_internal_get_OnRequestDroneModeState() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneController> const& __cordl_internal_get__droneController() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneController>& __cordl_internal_get__droneController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__dronePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__dronePrefab() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get__gtController() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get__gtController() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr void __cordl_internal_set_OnRequestDroneModeState(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  value) ;

constexpr void __cordl_internal_set__droneController(::UnityW<::Liv::Lck::GorillaTag::DroneController>  value) ;

constexpr void __cordl_internal_set__dronePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__gtController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

/// @brief Method .ctor, addr 0x9d20d8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnRequestDroneModeState, addr 0x9d207ac, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRequestDroneModeState(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRequestDroneModeState, addr 0x9d20848, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRequestDroneModeState(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneSystem(DroneSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneSystem(DroneSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29617};

/// [CompilerGenerated]
/// @brief Field OnRequestDroneModeState, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  ___OnRequestDroneModeState;

/// [SerializeField]
/// @brief Field _dronePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____dronePrefab;

/// @brief Field _droneController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::DroneController>  ____droneController;

/// [SerializeField]
/// @brief Field _gtController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ____gtController;

/// [InjectLck]
/// @brief Field _lckService, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneSystem, ___OnRequestDroneModeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneSystem, ____dronePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneSystem, ____droneController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneSystem, ____gtController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneSystem, ____lckService) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneSystem) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneSystem/OnRequestDroneModeDelegate
class CORDL_TYPE DroneSystem_OnRequestDroneModeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d20e48, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  isActive, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d20ea4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d20e34, size 0x14, virtual true, abstract: false, final false
inline void Invoke(bool  isActive) ;

static inline ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d20d94, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneSystem_OnRequestDroneModeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneSystem_OnRequestDroneModeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneSystem_OnRequestDroneModeDelegate(DroneSystem_OnRequestDroneModeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneSystem_OnRequestDroneModeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneSystem_OnRequestDroneModeDelegate(DroneSystem_OnRequestDroneModeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
