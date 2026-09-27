#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/InputSystem/UI/BaseInputOverride.hpp"
#include "UnityEngine/InputSystem/UI/ExtendedAxisEventData.hpp"
#include "UnityEngine/InputSystem/UI/ExtendedPointerEventData.hpp"
#include "UnityEngine/InputSystem/UI/ExtendedSubmitCancelEventData.hpp"
#include "UnityEngine/InputSystem/UI/INavigationEventData.hpp"
#include "UnityEngine/InputSystem/UI/InputSystemUIInputModule.hpp"
#include "UnityEngine/InputSystem/UI/InputSystemUIInputModule_CursorLockBehavior.hpp"
#include "UnityEngine/InputSystem/UI/InputSystemUIInputModule_InputActionReferenceState.hpp"
#include "UnityEngine/InputSystem/UI/MultiplayerEventSystem.hpp"
#include "UnityEngine/InputSystem/UI/NavigationModel.hpp"
#include "UnityEngine/InputSystem/UI/PointerModel.hpp"
#include "UnityEngine/InputSystem/UI/PointerModel_ButtonState.hpp"
#include "UnityEngine/InputSystem/UI/SubmitCancelModel.hpp"
#include "UnityEngine/InputSystem/UI/TrackedDeviceRaycaster.hpp"
#include "UnityEngine/InputSystem/UI/TrackedDeviceRaycaster_RaycastHitData.hpp"
#include "UnityEngine/InputSystem/UI/UIPointerBehavior.hpp"
#include "UnityEngine/InputSystem/UI/UIPointerType.hpp"
#include "UnityEngine/InputSystem/UI/VirtualMouseInput.hpp"
#include "UnityEngine/InputSystem/UI/VirtualMouseInput_CursorMode.hpp"
#ifdef __cpp_modules
                    export module UI;
                    #endif
                
