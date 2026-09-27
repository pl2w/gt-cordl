#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvasModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointableCanvasModule)
namespace Oculus::Interaction {
class IPointableCanvas;
}
namespace Oculus::Interaction {
class PointableCanvasEventArgs;
}
namespace Oculus::Interaction {
class PointableCanvasModule_PointerImpl;
}
namespace Oculus::Interaction {
class PointableCanvasModule_Pointer;
}
namespace Oculus::Interaction {
class PointableCanvasModule___c__DisplayClass32_0;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
class Pointer_PointableCanvasModule___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableCanvasModule;
}
namespace Oculus::Interaction {
class PointableCanvasModule_Pointer;
}
namespace Oculus::Interaction {
class PointableCanvasModule_PointerImpl;
}
namespace Oculus::Interaction {
class PointableCanvasModule___c__DisplayClass32_0;
}
namespace Oculus::Interaction {
class Pointer_PointableCanvasModule___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableCanvasModule*);
MARK_REF_T(::Oculus::Interaction::PointableCanvasModule_Pointer*);
MARK_REF_T(::Oculus::Interaction::PointableCanvasModule_PointerImpl*);
MARK_REF_T(::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0*);
MARK_REF_T(::Oculus::Interaction::Pointer_PointableCanvasModule___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvasModule*, "Oculus.Interaction", "PointableCanvasModule");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvasModule_Pointer*, "Oculus.Interaction", "PointableCanvasModule/Pointer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvasModule_PointerImpl*, "Oculus.Interaction", "PointableCanvasModule/PointerImpl");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0*, "Oculus.Interaction", "PointableCanvasModule/<>c__DisplayClass32_0");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Pointer_PointableCanvasModule___c*, "Oculus.Interaction", "PointableCanvasModule/Pointer/<>c");
// Dependencies Oculus.Interaction.PointableCanvasModule::PointerImpl, UnityEngine.EventSystems.PointerInputModule
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasModule
class CORDL_TYPE PointableCanvasModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
// Declarations
using Pointer = ::Oculus::Interaction::PointableCanvasModule_Pointer;

using PointerImpl = ::Oculus::Interaction::PointableCanvasModule_PointerImpl;

using __c__DisplayClass32_0 = ::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0;

 __declspec(property(get=get_ExclusiveMode, put=set_ExclusiveMode)) bool  ExclusiveMode;

/// @brief Field WhenPointerStarted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhenPointerStarted, put=setStaticF_WhenPointerStarted)) ::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*  WhenPointerStarted;

/// @brief Field WhenSelectableHovered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhenSelectableHovered, put=setStaticF_WhenSelectableHovered)) ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  WhenSelectableHovered;

/// @brief Field WhenSelectableUnhovered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhenSelectableUnhovered, put=setStaticF_WhenSelectableUnhovered)) ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  WhenSelectableUnhovered;

/// @brief Field WhenSelected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhenSelected, put=setStaticF_WhenSelected)) ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  WhenSelected;

/// @brief Field WhenUnselected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WhenUnselected, put=setStaticF_WhenUnselected)) ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  WhenUnselected;

/// @brief Field _exclusiveMode, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__exclusiveMode, put=__cordl_internal_set__exclusiveMode)) bool  _exclusiveMode;

/// @brief Field _inputModules, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputModules, put=__cordl_internal_set__inputModules)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*  _inputModules;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Oculus::Interaction::PointableCanvasModule>  _instance;

/// @brief Field _pointerCanvasActionMap, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerCanvasActionMap, put=__cordl_internal_set__pointerCanvasActionMap)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>*  _pointerCanvasActionMap;

/// @brief Field _pointerEventCamera, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerEventCamera, put=__cordl_internal_set__pointerEventCamera)) ::UnityW<::UnityEngine::Camera>  _pointerEventCamera;

/// @brief Field _pointerMap, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerMap, put=__cordl_internal_set__pointerMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  _pointerMap;

/// @brief Field _pointersForDeletion, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointersForDeletion, put=__cordl_internal_set__pointersForDeletion)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  _pointersForDeletion;

/// @brief Field _pointersToProcessScratch, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointersToProcessScratch, put=__cordl_internal_set__pointersToProcessScratch)) ::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>  _pointersToProcessScratch;

/// @brief Field _raycastResultCache, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastResultCache, put=__cordl_internal_set__raycastResultCache)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  _raycastResultCache;

/// @brief Field _started, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _useInitialPressPositionForDrag, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__useInitialPressPositionForDrag, put=__cordl_internal_set__useInitialPressPositionForDrag)) bool  _useInitialPressPositionForDrag;

/// @brief Method AddPointerCanvas, addr 0xa485aec, size 0x178, virtual false, abstract: false, final false
inline void AddPointerCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas) ;

/// @brief Method Awake, addr 0xa486640, size 0x5c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearPointerSelection, addr 0xa4860d0, size 0xe4, virtual false, abstract: false, final false
inline void ClearPointerSelection(::UnityEngine::EventSystems::PointerEventData*  pointerEvent) ;

/// @brief Method DisableOtherModules, addr 0xa4867a0, size 0x278, virtual false, abstract: false, final false
inline void DisableOtherModules() ;

/// @brief Method FindFirstRaycastWithinCanvas, addr 0xa486c18, size 0x1b4, virtual false, abstract: false, final false
static inline ::UnityEngine::EventSystems::RaycastResult FindFirstRaycastWithinCanvas(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  candidates, ::UnityEngine::Canvas*  canvas) ;

/// @brief Method HandlePointerEvent, addr 0xa4861d0, size 0x3ec, virtual false, abstract: false, final false
inline void HandlePointerEvent(::UnityEngine::Canvas*  canvas, ::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method HandleSelectableHover, addr 0xa488050, size 0x210, virtual false, abstract: false, final false
inline void HandleSelectableHover(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, bool  wasDragging) ;

/// @brief Method HandleSelectablePress, addr 0xa488260, size 0x1b4, virtual false, abstract: false, final false
inline void HandleSelectablePress(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, bool  pressed, bool  released, bool  wasDragging) ;

static inline ::Oculus::Interaction::PointableCanvasModule* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa48669c, size 0x5c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa486acc, size 0x84, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa486a18, size 0xb4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Process, addr 0xa487538, size 0x70, virtual true, abstract: false, final false
inline void Process() ;

/// @brief Method ProcessDrag, addr 0xa488438, size 0x238, virtual true, abstract: false, final false
inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEvent) ;

/// @brief Method ProcessPointer, addr 0xa4877e4, size 0x138, virtual false, abstract: false, final false
inline void ProcessPointer(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, bool  forceRelease) ;

/// @brief Method ProcessPointers, addr 0xa4875a8, size 0x23c, virtual false, abstract: false, final false
inline void ProcessPointers(::System::Collections::Generic::ICollection_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  pointers, bool  clearAndReleasePointers) ;

/// @brief Method RegisterPointableCanvas, addr 0xa484f5c, size 0x58, virtual false, abstract: false, final false
static inline void RegisterPointableCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas) ;

/// @brief Method RemovePointerCanvas, addr 0xa485c64, size 0x464, virtual false, abstract: false, final false
inline void RemovePointerCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas) ;

/// @brief Method ShouldStartDrag, addr 0xa488670, size 0x30, virtual false, abstract: false, final false
static inline bool ShouldStartDrag(::UnityEngine::Vector2  pressPos, ::UnityEngine::Vector2  currentPos, float_t  threshold, bool  useDragThreshold) ;

/// @brief Method Start, addr 0xa4866f8, size 0xa8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnregisterPointableCanvas, addr 0xa484fd4, size 0x60, virtual false, abstract: false, final false
static inline void UnregisterPointableCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas) ;

/// @brief Method UpdateModule, addr 0xa486b50, size 0xc8, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdatePointerEventData, addr 0xa48793c, size 0x714, virtual false, abstract: false, final false
inline void UpdatePointerEventData(::UnityEngine::EventSystems::PointerEventData*  pointerEvent, bool  pressed, bool  released) ;

/// @brief Method UpdateRaycasts, addr 0xa486dcc, size 0x744, virtual false, abstract: false, final false
inline void UpdateRaycasts(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, ::by_ref<bool>  pressed, ::by_ref<bool>  released) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__40_0, addr 0xa4888f0, size 0x8, virtual false, abstract: false, final false
inline void _Start_b__40_0() ;

constexpr bool const& __cordl_internal_get__exclusiveMode() const;

constexpr bool& __cordl_internal_get__exclusiveMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* const& __cordl_internal_get__inputModules() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*& __cordl_internal_get__inputModules() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>* const& __cordl_internal_get__pointerCanvasActionMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>*& __cordl_internal_get__pointerCanvasActionMap() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__pointerEventCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__pointerEventCamera() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>* const& __cordl_internal_get__pointerMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*& __cordl_internal_get__pointerMap() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>* const& __cordl_internal_get__pointersForDeletion() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*& __cordl_internal_get__pointersForDeletion() ;

constexpr ::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*> const& __cordl_internal_get__pointersToProcessScratch() const;

constexpr ::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>& __cordl_internal_get__pointersToProcessScratch() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& __cordl_internal_get__raycastResultCache() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& __cordl_internal_get__raycastResultCache() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr bool const& __cordl_internal_get__useInitialPressPositionForDrag() const;

constexpr bool& __cordl_internal_get__useInitialPressPositionForDrag() ;

constexpr void __cordl_internal_set__exclusiveMode(bool  value) ;

constexpr void __cordl_internal_set__inputModules(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*  value) ;

constexpr void __cordl_internal_set__pointerCanvasActionMap(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>*  value) ;

constexpr void __cordl_internal_set__pointerEventCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__pointerMap(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  value) ;

constexpr void __cordl_internal_set__pointersForDeletion(::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  value) ;

constexpr void __cordl_internal_set__pointersToProcessScratch(::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>  value) ;

constexpr void __cordl_internal_set__raycastResultCache(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__useInitialPressPositionForDrag(bool  value) ;

/// @brief Method .ctor, addr 0xa4886a0, size 0x250, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenPointerStarted, addr 0xa4858f4, size 0xd0, virtual false, abstract: false, final false
static inline void add_WhenPointerStarted(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectableHovered, addr 0xa4855b4, size 0xd0, virtual false, abstract: false, final false
static inline void add_WhenSelectableHovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectableUnhovered, addr 0xa485754, size 0xd0, virtual false, abstract: false, final false
static inline void add_WhenSelectableUnhovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelected, addr 0xa48527c, size 0xcc, virtual false, abstract: false, final false
static inline void add_WhenSelected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUnselected, addr 0xa485414, size 0xd0, virtual false, abstract: false, final false
static inline void add_WhenUnselected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

static inline ::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>* getStaticF_WhenPointerStarted() ;

static inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* getStaticF_WhenSelectableHovered() ;

static inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* getStaticF_WhenSelectableUnhovered() ;

static inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* getStaticF_WhenSelected() ;

static inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* getStaticF_WhenUnselected() ;

static inline ::UnityW<::Oculus::Interaction::PointableCanvasModule> getStaticF__instance() ;

/// @brief Method get_ExclusiveMode, addr 0xa485a94, size 0x8, virtual false, abstract: false, final false
inline bool get_ExclusiveMode() ;

/// @brief Method get_Instance, addr 0xa485aa4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Oculus::Interaction::PointableCanvasModule> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenPointerStarted, addr 0xa4859c4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_WhenPointerStarted(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectableHovered, addr 0xa485684, size 0xd0, virtual false, abstract: false, final false
static inline void remove_WhenSelectableHovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectableUnhovered, addr 0xa485824, size 0xd0, virtual false, abstract: false, final false
static inline void remove_WhenSelectableUnhovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelected, addr 0xa485348, size 0xcc, virtual false, abstract: false, final false
static inline void remove_WhenSelected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUnselected, addr 0xa4854e4, size 0xd0, virtual false, abstract: false, final false
static inline void remove_WhenUnselected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

static inline void setStaticF_WhenPointerStarted(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*  value) ;

static inline void setStaticF_WhenSelectableHovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

static inline void setStaticF_WhenSelectableUnhovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

static inline void setStaticF_WhenSelected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

static inline void setStaticF_WhenUnselected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value) ;

static inline void setStaticF__instance(::UnityW<::Oculus::Interaction::PointableCanvasModule>  value) ;

/// @brief Method set_ExclusiveMode, addr 0xa485a9c, size 0x8, virtual false, abstract: false, final false
inline void set_ExclusiveMode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvasModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvasModule(PointableCanvasModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvasModule(PointableCanvasModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16000};

/// [Tooltip("If true, the initial press position will be used as the drag start position, rather than the position when drag threshold is exceeded. This is used to prevent the pointer position shifting relative to the surface while dragging.")]
/// [SerializeField]
/// @brief Field _useInitialPressPositionForDrag, offset: 0x68, size: 0x1, def value: None
 bool  ____useInitialPressPositionForDrag;

/// [Tooltip("If true, this module will disable other input modules in the event system and will be the only input module used in the scene.")]
/// [SerializeField]
/// @brief Field _exclusiveMode, offset: 0x69, size: 0x1, def value: None
 bool  ____exclusiveMode;

/// @brief Field _pointerEventCamera, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____pointerEventCamera;

/// @brief Field _pointerMap, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  ____pointerMap;

/// @brief Field _raycastResultCache, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  ____raycastResultCache;

/// @brief Field _pointersForDeletion, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  ____pointersForDeletion;

/// @brief Field _pointerCanvasActionMap, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>*  ____pointerCanvasActionMap;

/// @brief Field _inputModules, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*  ____inputModules;

/// @brief Field _pointersToProcessScratch, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>  ____pointersToProcessScratch;

/// @brief Field _started, offset: 0xa8, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____useInitialPressPositionForDrag) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____exclusiveMode) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____pointerEventCamera) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____pointerMap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____raycastResultCache) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____pointersForDeletion) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____pointerCanvasActionMap) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____inputModules) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____pointersToProcessScratch) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule, ____started) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvasModule) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass32_0
class CORDL_TYPE PointableCanvasModule___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::PointableCanvasModule>  __4__this;

/// @brief Field pointerCanvas, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerCanvas, put=__cordl_internal_set_pointerCanvas)) ::Oculus::Interaction::IPointableCanvas*  pointerCanvas;

static inline ::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <AddPointerCanvas>b__0, addr 0xa488df8, size 0xe0, virtual false, abstract: false, final false
inline void _AddPointerCanvas_b__0(::Oculus::Interaction::PointerEvent  args) ;

constexpr ::UnityW<::Oculus::Interaction::PointableCanvasModule> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::PointableCanvasModule>& __cordl_internal_get___4__this() ;

constexpr ::Oculus::Interaction::IPointableCanvas* const& __cordl_internal_get_pointerCanvas() const;

constexpr ::Oculus::Interaction::IPointableCanvas*& __cordl_internal_get_pointerCanvas() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PointableCanvasModule>  value) ;

constexpr void __cordl_internal_set_pointerCanvas(::Oculus::Interaction::IPointableCanvas*  value) ;

/// @brief Method .ctor, addr 0xa4860c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvasModule___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvasModule___c__DisplayClass32_0(PointableCanvasModule___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvasModule___c__DisplayClass32_0(PointableCanvasModule___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15999};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PointableCanvasModule>  _____4__this;

/// @brief Field pointerCanvas, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::IPointableCanvas*  ___pointerCanvas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0, ___pointerCanvas) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.PointableCanvasModule::Pointer, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasModule/PointerImpl
class CORDL_TYPE PointableCanvasModule_PointerImpl : public ::Oculus::Interaction::PointableCanvasModule_Pointer {
public:
// Declarations
 __declspec(property(get=get_Canvas)) ::UnityW<::UnityEngine::Canvas>  Canvas;

 __declspec(property(get=get_HoveredSelectable)) ::UnityW<::UnityEngine::GameObject>  HoveredSelectable;

 __declspec(property(get=get_MarkedForDeletion, put=set_MarkedForDeletion)) bool  MarkedForDeletion;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field <MarkedForDeletion>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__MarkedForDeletion_k__BackingField, put=__cordl_internal_set__MarkedForDeletion_k__BackingField)) bool  _MarkedForDeletion_k__BackingField;

/// @brief Field _canvas, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _hoveredSelectable, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveredSelectable, put=__cordl_internal_set__hoveredSelectable)) ::UnityW<::UnityEngine::GameObject>  _hoveredSelectable;

/// @brief Field _position, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) ::UnityEngine::Vector3  _position;

/// @brief Field _pressed, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__pressed, put=__cordl_internal_set__pressed)) bool  _pressed;

/// @brief Field _pressing, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__pressing, put=__cordl_internal_set__pressing)) bool  _pressing;

/// @brief Field _released, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__released, put=__cordl_internal_set__released)) bool  _released;

/// @brief Field _targetPosition, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Method MarkForDeletion, addr 0xa4861b4, size 0x1c, virtual false, abstract: false, final false
inline void MarkForDeletion() ;

static inline ::Oculus::Interaction::PointableCanvasModule_PointerImpl* New_ctor(int32_t  identifier, ::UnityEngine::Canvas*  canvas) ;

/// @brief Method Press, addr 0xa486610, size 0x18, virtual false, abstract: false, final false
inline void Press() ;

/// @brief Method ReadAndResetPressedReleased, addr 0xa487510, size 0x28, virtual false, abstract: false, final false
inline void ReadAndResetPressedReleased(::by_ref<bool>  pressed, ::by_ref<bool>  released) ;

/// @brief Method Release, addr 0xa486628, size 0x18, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SetHoveredSelectable, addr 0xa488df0, size 0x8, virtual false, abstract: false, final false
inline void SetHoveredSelectable(::UnityEngine::GameObject*  hoveredSelectable) ;

/// @brief Method SetPosition, addr 0xa4865f0, size 0x20, virtual false, abstract: false, final false
inline void SetPosition(::UnityEngine::Vector3  position) ;

constexpr bool const& __cordl_internal_get__MarkedForDeletion_k__BackingField() const;

constexpr bool& __cordl_internal_get__MarkedForDeletion_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hoveredSelectable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hoveredSelectable() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__position() ;

constexpr bool const& __cordl_internal_get__pressed() const;

constexpr bool& __cordl_internal_get__pressed() ;

constexpr bool const& __cordl_internal_get__pressing() const;

constexpr bool& __cordl_internal_get__pressing() ;

constexpr bool const& __cordl_internal_get__released() const;

constexpr bool& __cordl_internal_get__released() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr void __cordl_internal_set__MarkedForDeletion_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set__hoveredSelectable(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__pressed(bool  value) ;

constexpr void __cordl_internal_set__pressing(bool  value) ;

constexpr void __cordl_internal_set__released(bool  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4865bc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  identifier, ::UnityEngine::Canvas*  canvas) ;

/// @brief Method get_Canvas, addr 0xa488dd4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> get_Canvas() ;

/// @brief Method get_HoveredSelectable, addr 0xa488de8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_HoveredSelectable() ;

/// [CompilerGenerated]
/// @brief Method get_MarkedForDeletion, addr 0xa488dc4, size 0x8, virtual false, abstract: false, final false
inline bool get_MarkedForDeletion() ;

/// @brief Method get_Position, addr 0xa488ddc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_MarkedForDeletion, addr 0xa488dcc, size 0x8, virtual false, abstract: false, final false
inline void set_MarkedForDeletion(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvasModule_PointerImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule_PointerImpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvasModule_PointerImpl(PointableCanvasModule_PointerImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule_PointerImpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvasModule_PointerImpl(PointableCanvasModule_PointerImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15998};

/// [CompilerGenerated]
/// @brief Field <MarkedForDeletion>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____MarkedForDeletion_k__BackingField;

/// @brief Field _canvas, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// @brief Field _position, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____position;

/// @brief Field _targetPosition, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _hoveredSelectable, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____hoveredSelectable;

/// @brief Field _pressing, offset: 0x60, size: 0x1, def value: None
 bool  ____pressing;

/// @brief Field _pressed, offset: 0x61, size: 0x1, def value: None
 bool  ____pressed;

/// @brief Field _released, offset: 0x62, size: 0x1, def value: None
 bool  ____released;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____MarkedForDeletion_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____canvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____targetPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____hoveredSelectable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____pressing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____pressed) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_PointerImpl, ____released) == 0x62, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvasModule_PointerImpl) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasModule/Pointer
class CORDL_TYPE PointableCanvasModule_Pointer : public ::System::Object {
public:
// Declarations
using __c = ::Oculus::Interaction::Pointer_PointableCanvasModule___c;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_PointerEventData, put=set_PointerEventData)) ::UnityEngine::EventSystems::PointerEventData*  PointerEventData;

/// @brief Field WhenDisposed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenDisposed, put=__cordl_internal_set_WhenDisposed)) ::System::Action*  WhenDisposed;

/// @brief Field WhenUpdated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUpdated, put=__cordl_internal_set_WhenUpdated)) ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  WhenUpdated;

/// @brief Field <Identifier>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Identifier_k__BackingField, put=__cordl_internal_set__Identifier_k__BackingField)) int32_t  _Identifier_k__BackingField;

/// @brief Field <PointerEventData>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__PointerEventData_k__BackingField, put=__cordl_internal_set__PointerEventData_k__BackingField)) ::UnityEngine::EventSystems::PointerEventData*  _PointerEventData_k__BackingField;

/// @brief Method InvokeWhenDisposed, addr 0xa48791c, size 0x20, virtual false, abstract: false, final false
inline void InvokeWhenDisposed() ;

/// @brief Method InvokeWhenUpdated, addr 0xa488414, size 0x24, virtual false, abstract: false, final false
inline void InvokeWhenUpdated() ;

static inline ::Oculus::Interaction::PointableCanvasModule_Pointer* New_ctor(int32_t  identifier) ;

constexpr ::System::Action* const& __cordl_internal_get_WhenDisposed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenDisposed() ;

constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_WhenUpdated() const;

constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_WhenUpdated() ;

constexpr int32_t const& __cordl_internal_get__Identifier_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Identifier_k__BackingField() ;

constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get__PointerEventData_k__BackingField() const;

constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get__PointerEventData_k__BackingField() ;

constexpr void __cordl_internal_set_WhenDisposed(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenUpdated(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set__Identifier_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__PointerEventData_k__BackingField(::UnityEngine::EventSystems::PointerEventData*  value) ;

/// @brief Method .ctor, addr 0xa4888f8, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(int32_t  identifier) ;

/// [CompilerGenerated]
/// @brief Method add_WhenDisposed, addr 0xa488c14, size 0x9c, virtual false, abstract: false, final false
inline void add_WhenDisposed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUpdated, addr 0xa488ab4, size 0xb0, virtual false, abstract: false, final false
inline void add_WhenUpdated(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Identifier, addr 0xa488a9c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// [CompilerGenerated]
/// @brief Method get_PointerEventData, addr 0xa488aa4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* get_PointerEventData() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenDisposed, addr 0xa488cb0, size 0x9c, virtual false, abstract: false, final false
inline void remove_WhenDisposed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUpdated, addr 0xa488b64, size 0xb0, virtual false, abstract: false, final false
inline void remove_WhenUpdated(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PointerEventData, addr 0xa488aac, size 0x8, virtual false, abstract: false, final false
inline void set_PointerEventData(::UnityEngine::EventSystems::PointerEventData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvasModule_Pointer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule_Pointer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvasModule_Pointer(PointableCanvasModule_Pointer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasModule_Pointer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvasModule_Pointer(PointableCanvasModule_Pointer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15997};

/// [CompilerGenerated]
/// @brief Field <Identifier>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Identifier_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PointerEventData>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::EventSystems::PointerEventData*  ____PointerEventData_k__BackingField;

/// [CompilerGenerated]
/// @brief Field WhenUpdated, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  ___WhenUpdated;

/// [CompilerGenerated]
/// @brief Field WhenDisposed, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___WhenDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_Pointer, ____Identifier_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_Pointer, ____PointerEventData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_Pointer, ___WhenUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasModule_Pointer, ___WhenDisposed) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvasModule_Pointer) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasModule/Pointer/<>c
class CORDL_TYPE Pointer_PointableCanvasModule___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Pointer_PointableCanvasModule___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::System::Action*  __9__0_1;

static inline ::Oculus::Interaction::Pointer_PointableCanvasModule___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0xa488dbc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__0_0(::UnityEngine::EventSystems::PointerEventData*  _) ;

/// @brief Method <.ctor>b__0_1, addr 0xa488dc0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__0_1() ;

/// @brief Method .ctor, addr 0xa488db4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Pointer_PointableCanvasModule___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* getStaticF___9__0_0() ;

static inline ::System::Action* getStaticF___9__0_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Pointer_PointableCanvasModule___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

static inline void setStaticF___9__0_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pointer_PointableCanvasModule___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pointer_PointableCanvasModule___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pointer_PointableCanvasModule___c(Pointer_PointableCanvasModule___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pointer_PointableCanvasModule___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pointer_PointableCanvasModule___c(Pointer_PointableCanvasModule___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Pointer_PointableCanvasModule___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
