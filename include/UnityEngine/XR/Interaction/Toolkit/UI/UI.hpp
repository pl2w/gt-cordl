#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/UI/ButtonDeltaState.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/CanvasOptimizer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/CanvasTracker.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/IUIHoverInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/IUIInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/IUIModelUpdater.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/InteractorHitData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/LazyFollow.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/LazyFollow_PositionFollowMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/LazyFollow_RotationFollowMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/MouseButtonModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/MouseButtonModel_ImplementationData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/NavigationModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/NavigationModel_ImplementationData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/PointerHitData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/PointerModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/PointerModel_InternalData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/QueryUIDocumentInteraction.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/RegisteredUIInteractorCache.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TouchModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TouchModel_ImplementationData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceEventData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceGraphicRaycaster.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceGraphicRaycaster_RaycastHitData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceModel_ImplementationData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDevicePhysicsRaycaster.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/UIHoverEnterEvent.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/UIHoverEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/UIHoverExitEvent.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/UIInputModule.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/UIInteractionType.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule_ActiveInputMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule_RegisteredInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule_RegisteredTouch.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitHandler.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitManager.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitPokeHandler.hpp"
#ifdef __cpp_modules
                    export module UI;
                    #endif
                
