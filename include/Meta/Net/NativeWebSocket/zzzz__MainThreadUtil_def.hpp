#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/MainThreadUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainThreadUtil)
namespace Meta::Net::NativeWebSocket {
class MainThreadUtil___c__DisplayClass10_0;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
class MainThreadUtil;
}
namespace Meta::Net::NativeWebSocket {
class MainThreadUtil___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_T(::Meta::Net::NativeWebSocket::MainThreadUtil*);
MARK_REF_T(::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0*);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::MainThreadUtil*, "Meta.Net.NativeWebSocket", "MainThreadUtil");
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0*, "Meta.Net.NativeWebSocket", "MainThreadUtil/<>c__DisplayClass10_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.MainThreadUtil
class CORDL_TYPE MainThreadUtil : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass10_0 = ::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil>  _Instance_k__BackingField;

/// @brief Field <synchronizationContext>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__synchronizationContext_k__BackingField, put=setStaticF__synchronizationContext_k__BackingField)) ::System::Threading::SynchronizationContext*  _synchronizationContext_k__BackingField;

/// @brief Method Awake, addr 0x9e0454c, size 0x8c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Meta::Net::NativeWebSocket::MainThreadUtil* New_ctor() ;

/// @brief Method Run, addr 0x9e046ec, size 0x1d0, virtual false, abstract: false, final false
static inline void Run(::System::Collections::IEnumerator*  waitForUpdate) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method Setup, addr 0x9e045d8, size 0x114, virtual false, abstract: false, final false
static inline void Setup() ;

/// @brief Method .ctor, addr 0x9e048c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil> getStaticF__Instance_k__BackingField() ;

static inline ::System::Threading::SynchronizationContext* getStaticF__synchronizationContext_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x9e04414, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_synchronizationContext, addr 0x9e044b4, size 0x48, virtual false, abstract: false, final false
static inline ::System::Threading::SynchronizationContext* get_synchronizationContext() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::Meta::Net::NativeWebSocket::MainThreadUtil>  value) ;

static inline void setStaticF__synchronizationContext_k__BackingField(::System::Threading::SynchronizationContext*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x9e0445c, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::Meta::Net::NativeWebSocket::MainThreadUtil*  value) ;

/// [CompilerGenerated]
/// @brief Method set_synchronizationContext, addr 0x9e044fc, size 0x50, virtual false, abstract: false, final false
static inline void set_synchronizationContext(::System::Threading::SynchronizationContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadUtil(MainThreadUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadUtil(MainThreadUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Net::NativeWebSocket::MainThreadUtil) == 0x20, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.MainThreadUtil/<>c__DisplayClass10_0
class CORDL_TYPE MainThreadUtil___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field waitForUpdate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitForUpdate, put=__cordl_internal_set_waitForUpdate)) ::System::Collections::IEnumerator*  waitForUpdate;

static inline ::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <Run>b__0, addr 0x9e048cc, size 0x5c, virtual false, abstract: false, final false
inline void _Run_b__0(::System::Object*  _) ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_waitForUpdate() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_waitForUpdate() ;

constexpr void __cordl_internal_set_waitForUpdate(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0x9e048bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainThreadUtil___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainThreadUtil___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainThreadUtil___c__DisplayClass10_0(MainThreadUtil___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadUtil___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainThreadUtil___c__DisplayClass10_0(MainThreadUtil___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32833};

/// @brief Field waitForUpdate, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___waitForUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0, ___waitForUpdate) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::Net::NativeWebSocket::MainThreadUtil___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
