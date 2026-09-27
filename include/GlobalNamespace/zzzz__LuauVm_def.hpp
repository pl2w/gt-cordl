#pragma once
// IWYU pragma private; include "GlobalNamespace/LuauVm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LuauVm)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
struct lua_State;
}
namespace Photon::Realtime {
class IOnEventCallback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LuauVm;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LuauVm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LuauVm*, "", "LuauVm");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: LuauVm
class CORDL_TYPE LuauVm : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
/// @brief Field ClassBuilders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ClassBuilders, put=setStaticF_ClassBuilders)) ::System::Collections::Generic::List_1<::System::Object*>*  ClassBuilders;

/// @brief Field Handles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Handles, put=setStaticF_Handles)) ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*  Handles;

/// @brief Field callCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_callCount, put=setStaticF_callCount)) float_t  callCount;

/// @brief Field callTimers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callTimers, put=setStaticF_callTimers)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  callTimers;

/// @brief Field eventQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_eventQueue, put=setStaticF_eventQueue)) ::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*  eventQueue;

/// @brief Field localEventQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localEventQueue, put=setStaticF_localEventQueue)) ::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*  localEventQueue;

/// @brief Field touchEventsQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_touchEventsQueue, put=setStaticF_touchEventsQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  touchEventsQueue;

/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr operator  ::Photon::Realtime::IOnEventCallback*() noexcept;

/// @brief Method Awake, addr 0x5a95988, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Finalize, addr 0x5a97914, size 0x5f0, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method LateUpdate, addr 0x5a95594, size 0x23c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LuauVm* New_ctor() ;

/// @brief Method OnEvent, addr 0x5a9598c, size 0x448, virtual true, abstract: false, final true
inline void OnEvent(::ExitGames::Client::Photon::EventData*  eventData) ;

/// @brief Method ProcessEvents, addr 0x5a972dc, size 0x638, virtual false, abstract: false, final false
static inline void ProcessEvents() ;

/// @brief Method SendEvent, addr 0x5a95dd4, size 0x1508, virtual false, abstract: false, final false
static inline int32_t SendEvent(::GlobalNamespace::lua_State*  L, ::ArrayW<::System::Object*>  args, bool  useTable) ;

/// @brief Method Start, addr 0x5a95984, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x5a97f04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::System::Object*>* getStaticF_ClassBuilders() ;

static inline ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>* getStaticF_Handles() ;

static inline float_t getStaticF_callCount() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* getStaticF_callTimers() ;

static inline ::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>* getStaticF_eventQueue() ;

static inline ::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>* getStaticF_localEventQueue() ;

static inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_touchEventsQueue() ;

/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* i___Photon__Realtime__IOnEventCallback() noexcept;

static inline void setStaticF_ClassBuilders(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

static inline void setStaticF_Handles(::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*  value) ;

static inline void setStaticF_callCount(float_t  value) ;

static inline void setStaticF_callTimers(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

static inline void setStaticF_eventQueue(::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*  value) ;

static inline void setStaticF_localEventQueue(::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*  value) ;

static inline void setStaticF_touchEventsQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LuauVm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LuauVm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LuauVm(LuauVm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LuauVm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LuauVm(LuauVm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3232};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LuauVm) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
