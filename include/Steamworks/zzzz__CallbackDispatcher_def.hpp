#pragma once
// IWYU pragma private; include "Steamworks/CallbackDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackDispatcher)
namespace Steamworks {
class CallResult;
}
namespace Steamworks {
class CallbackDispatcher_SteamworksExceptionHandler;
}
namespace Steamworks {
class Callback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
class CallbackDispatcher;
}
namespace Steamworks {
class CallbackDispatcher_SteamworksExceptionHandler;
}
// Write type traits
MARK_REF_T(::Steamworks::CallbackDispatcher*);
MARK_REF_T(::Steamworks::CallbackDispatcher_SteamworksExceptionHandler*);
DEFINE_IL2CPP_CLASS(::Steamworks::CallbackDispatcher*, "Steamworks", "CallbackDispatcher");
DEFINE_IL2CPP_CLASS(::Steamworks::CallbackDispatcher_SteamworksExceptionHandler*, "Steamworks", "CallbackDispatcher/SteamworksExceptionHandler");
// Dependencies System.IntPtr, System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CallbackDispatcher
class CORDL_TYPE CallbackDispatcher : public ::System::Object {
public:
// Declarations
using SteamworksExceptionHandler = ::Steamworks::CallbackDispatcher_SteamworksExceptionHandler;

/// @brief Field ExceptionHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ExceptionHandler, put=setStaticF_ExceptionHandler)) ::Steamworks::CallbackDispatcher_SteamworksExceptionHandler*  ExceptionHandler;

/// @brief Field m_initCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_initCount, put=setStaticF_m_initCount)) int32_t  m_initCount;

/// @brief Field m_pCallbackMsg, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pCallbackMsg, put=setStaticF_m_pCallbackMsg)) ::System::IntPtr  m_pCallbackMsg;

/// @brief Field m_registeredCallResults, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_registeredCallResults, put=setStaticF_m_registeredCallResults)) ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*  m_registeredCallResults;

/// @brief Field m_registeredCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_registeredCallbacks, put=setStaticF_m_registeredCallbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  m_registeredCallbacks;

/// @brief Field m_registeredGameServerCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_registeredGameServerCallbacks, put=setStaticF_m_registeredGameServerCallbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  m_registeredGameServerCallbacks;

/// @brief Field m_sync, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_sync, put=setStaticF_m_sync)) ::System::Object*  m_sync;

/// @brief Method DefaultExceptionHandler, addr 0x5f301d0, size 0x58, virtual false, abstract: false, final false
static inline void DefaultExceptionHandler(::System::Exception*  e) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method InitOnPlayMode, addr 0x5f30228, size 0x58, virtual false, abstract: false, final false
static inline void InitOnPlayMode() ;

/// @brief Method Initialize, addr 0x5f302e0, size 0x1a8, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method Register, addr 0x5f30e58, size 0x2a0, virtual false, abstract: false, final false
static inline void Register(::Steamworks::Callback*  cb) ;

/// @brief Method RunFrame, addr 0x5f31480, size 0x9b8, virtual false, abstract: false, final false
static inline void RunFrame(bool  isGameServer) ;

/// @brief Method Shutdown, addr 0x5f30488, size 0x188, virtual false, abstract: false, final false
static inline void Shutdown() ;

/// @brief Method Unregister, addr 0x5f31250, size 0x230, virtual false, abstract: false, final false
static inline void Unregister(::Steamworks::Callback*  cb) ;

/// @brief Method UnregisterAll, addr 0x5f30610, size 0x848, virtual false, abstract: false, final false
static inline void UnregisterAll() ;

static inline ::Steamworks::CallbackDispatcher_SteamworksExceptionHandler* getStaticF_ExceptionHandler() ;

static inline int32_t getStaticF_m_initCount() ;

static inline ::System::IntPtr getStaticF_m_pCallbackMsg() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>* getStaticF_m_registeredCallResults() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>* getStaticF_m_registeredCallbacks() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>* getStaticF_m_registeredGameServerCallbacks() ;

static inline ::System::Object* getStaticF_m_sync() ;

/// @brief Method get_IsInitialized, addr 0x5f30280, size 0x60, virtual false, abstract: false, final false
static inline bool get_IsInitialized() ;

static inline void setStaticF_ExceptionHandler(::Steamworks::CallbackDispatcher_SteamworksExceptionHandler*  value) ;

static inline void setStaticF_m_initCount(int32_t  value) ;

static inline void setStaticF_m_pCallbackMsg(::System::IntPtr  value) ;

static inline void setStaticF_m_registeredCallResults(::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*  value) ;

static inline void setStaticF_m_registeredCallbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  value) ;

static inline void setStaticF_m_registeredGameServerCallbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  value) ;

static inline void setStaticF_m_sync(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackDispatcher(CallbackDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackDispatcher(CallbackDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::CallbackDispatcher) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CallbackDispatcher/SteamworksExceptionHandler
class CORDL_TYPE CallbackDispatcher_SteamworksExceptionHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x5f320f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Exception*  e) ;

static inline ::Steamworks::CallbackDispatcher_SteamworksExceptionHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f31fec, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackDispatcher_SteamworksExceptionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackDispatcher_SteamworksExceptionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackDispatcher_SteamworksExceptionHandler(CallbackDispatcher_SteamworksExceptionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackDispatcher_SteamworksExceptionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackDispatcher_SteamworksExceptionHandler(CallbackDispatcher_SteamworksExceptionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32134};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::CallbackDispatcher_SteamworksExceptionHandler) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
