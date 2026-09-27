#pragma once
// IWYU pragma private; include "UnityEngine/SendMouseEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__SendMouseEvents_HitInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SendMouseEvents)
namespace GlobalNamespace {
struct SendMouseEvents_HitInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class SendMouseEvents;
}
// Write type traits
MARK_REF_T(::UnityEngine::SendMouseEvents*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SendMouseEvents*, "UnityEngine", "SendMouseEvents");
// Dependencies System.Object, UnityEngine.Camera, UnityEngine.SendMouseEvents::HitInfo, UnityEngine.Vector2
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SendMouseEvents
class CORDL_TYPE SendMouseEvents : public ::System::Object {
public:
// Declarations
using HitInfo = ::GlobalNamespace::SendMouseEvents_HitInfo;

/// @brief Field m_Cameras, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Cameras, put=setStaticF_m_Cameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>>  m_Cameras;

/// @brief Field m_CurrentHit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CurrentHit, put=setStaticF_m_CurrentHit)) ::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo>  m_CurrentHit;

/// @brief Field m_LastHit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_LastHit, put=setStaticF_m_LastHit)) ::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo>  m_LastHit;

/// @brief Field m_MouseDownHit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_MouseDownHit, put=setStaticF_m_MouseDownHit)) ::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo>  m_MouseDownHit;

/// @brief Field s_GetMouseState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_GetMouseState, put=setStaticF_s_GetMouseState)) ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>*  s_GetMouseState;

/// @brief Field s_MouseButtonIsPressed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_MouseButtonIsPressed, put=setStaticF_s_MouseButtonIsPressed)) bool  s_MouseButtonIsPressed;

/// @brief Field s_MouseButtonPressedThisFrame, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_MouseButtonPressedThisFrame, put=setStaticF_s_MouseButtonPressedThisFrame)) bool  s_MouseButtonPressedThisFrame;

/// @brief Field s_MousePosition, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MousePosition, put=setStaticF_s_MousePosition)) ::UnityEngine::Vector2  s_MousePosition;

/// @brief Field s_MouseUsed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_MouseUsed, put=setStaticF_s_MouseUsed)) bool  s_MouseUsed;

/// [RequiredByNativeCode]
/// @brief Method DoSendMouseEvents, addr 0xb667228, size 0x96c, virtual false, abstract: false, final false
static inline void DoSendMouseEvents(int32_t  skipRTCameras) ;

/// @brief Method SendEvents, addr 0xb667b94, size 0x45c, virtual false, abstract: false, final false
static inline void SendEvents(int32_t  i, ::GlobalNamespace::SendMouseEvents_HitInfo  hit) ;

/// [RequiredByNativeCode]
/// @brief Method SetMouseMoved, addr 0xb6671cc, size 0x5c, virtual false, abstract: false, final false
static inline void SetMouseMoved() ;

/// @brief Method UpdateMouse, addr 0xb66700c, size 0x1c0, virtual false, abstract: false, final false
static inline void UpdateMouse() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Camera>> getStaticF_m_Cameras() ;

static inline ::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo> getStaticF_m_CurrentHit() ;

static inline ::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo> getStaticF_m_LastHit() ;

static inline ::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo> getStaticF_m_MouseDownHit() ;

static inline ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>* getStaticF_s_GetMouseState() ;

static inline bool getStaticF_s_MouseButtonIsPressed() ;

static inline bool getStaticF_s_MouseButtonPressedThisFrame() ;

static inline ::UnityEngine::Vector2 getStaticF_s_MousePosition() ;

static inline bool getStaticF_s_MouseUsed() ;

static inline void setStaticF_m_Cameras(::ArrayW<::UnityW<::UnityEngine::Camera>>  value) ;

static inline void setStaticF_m_CurrentHit(::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo>  value) ;

static inline void setStaticF_m_LastHit(::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo>  value) ;

static inline void setStaticF_m_MouseDownHit(::ArrayW<::GlobalNamespace::SendMouseEvents_HitInfo>  value) ;

static inline void setStaticF_s_GetMouseState(::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>*  value) ;

static inline void setStaticF_s_MouseButtonIsPressed(bool  value) ;

static inline void setStaticF_s_MouseButtonPressedThisFrame(bool  value) ;

static inline void setStaticF_s_MousePosition(::UnityEngine::Vector2  value) ;

static inline void setStaticF_s_MouseUsed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendMouseEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SendMouseEvents(SendMouseEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendMouseEvents(SendMouseEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32553};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SendMouseEvents) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
