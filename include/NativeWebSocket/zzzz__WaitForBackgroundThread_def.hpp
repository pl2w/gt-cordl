#pragma once
// IWYU pragma private; include "NativeWebSocket/WaitForBackgroundThread.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WaitForBackgroundThread)
namespace GlobalNamespace {
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter;
}
namespace NativeWebSocket {
class WaitForBackgroundThread___c;
}
namespace System {
class Action;
}
// Forward declare root types
namespace NativeWebSocket {
class WaitForBackgroundThread;
}
namespace NativeWebSocket {
class WaitForBackgroundThread___c;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WaitForBackgroundThread*);
MARK_REF_T(::NativeWebSocket::WaitForBackgroundThread___c*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WaitForBackgroundThread*, "NativeWebSocket", "WaitForBackgroundThread");
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WaitForBackgroundThread___c*, "NativeWebSocket", "WaitForBackgroundThread/<>c");
// Dependencies System.Object
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WaitForBackgroundThread
class CORDL_TYPE WaitForBackgroundThread : public ::System::Object {
public:
// Declarations
using __c = ::NativeWebSocket::WaitForBackgroundThread___c;

/// @brief Method GetAwaiter, addr 0x5f34fa0, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter GetAwaiter() ;

static inline ::NativeWebSocket::WaitForBackgroundThread* New_ctor() ;

/// @brief Method .ctor, addr 0x5f350b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForBackgroundThread() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForBackgroundThread", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForBackgroundThread(WaitForBackgroundThread && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForBackgroundThread", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForBackgroundThread(WaitForBackgroundThread const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WaitForBackgroundThread) == 0x10, "Size mismatch!");

} // namespace end def NativeWebSocket
// [CompilerGenerated]
// Dependencies System.Object
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WaitForBackgroundThread/<>c
class CORDL_TYPE WaitForBackgroundThread___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::NativeWebSocket::WaitForBackgroundThread___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action*  __9__0_0;

static inline ::NativeWebSocket::WaitForBackgroundThread___c* New_ctor() ;

/// @brief Method <GetAwaiter>b__0_0, addr 0x5f3512c, size 0x4, virtual false, abstract: false, final false
inline void _GetAwaiter_b__0_0() ;

/// @brief Method .ctor, addr 0x5f35124, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::NativeWebSocket::WaitForBackgroundThread___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__0_0() ;

static inline void setStaticF___9(::NativeWebSocket::WaitForBackgroundThread___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForBackgroundThread___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForBackgroundThread___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForBackgroundThread___c(WaitForBackgroundThread___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForBackgroundThread___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForBackgroundThread___c(WaitForBackgroundThread___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WaitForBackgroundThread___c) == 0x10, "Size mismatch!");

} // namespace end def NativeWebSocket
