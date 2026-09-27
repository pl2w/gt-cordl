#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SupportClass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupportClass)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
template<typename K,typename V>
class NonAllocDictionary_2;
}
namespace ExitGames::Client::Photon {
class SupportClass_IntegerMillisecondsDelegate;
}
namespace ExitGames::Client::Photon {
class SupportClass_ThreadSafeRandom;
}
namespace ExitGames::Client::Photon {
class SupportClass___c;
}
namespace ExitGames::Client::Photon {
class SupportClass___c__DisplayClass6_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class TextWriter;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Threading {
class Thread;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
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
namespace System {
class Random;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SupportClass;
}
namespace ExitGames::Client::Photon {
class SupportClass_IntegerMillisecondsDelegate;
}
namespace ExitGames::Client::Photon {
class SupportClass_ThreadSafeRandom;
}
namespace ExitGames::Client::Photon {
class SupportClass___c;
}
namespace ExitGames::Client::Photon {
class SupportClass___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::SupportClass*);
MARK_REF_T(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*);
MARK_REF_T(::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*);
MARK_REF_T(::ExitGames::Client::Photon::SupportClass___c*);
MARK_REF_T(::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SupportClass*, "ExitGames.Client.Photon", "SupportClass");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*, "ExitGames.Client.Photon", "SupportClass/IntegerMillisecondsDelegate");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*, "ExitGames.Client.Photon", "SupportClass/ThreadSafeRandom");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SupportClass___c*, "ExitGames.Client.Photon", "SupportClass/<>c");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0*, "ExitGames.Client.Photon", "SupportClass/<>c__DisplayClass6_0");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SupportClass
class CORDL_TYPE SupportClass : public ::System::Object {
public:
// Declarations
using IntegerMillisecondsDelegate = ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate;

using ThreadSafeRandom = ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom;

using __c = ::ExitGames::Client::Photon::SupportClass___c;

using __c__DisplayClass6_0 = ::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0;

/// @brief Field IntegerMilliseconds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IntegerMilliseconds, put=setStaticF_IntegerMilliseconds)) ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*  IntegerMilliseconds;

/// @brief Field ThreadListLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ThreadListLock, put=setStaticF_ThreadListLock)) ::System::Object*  ThreadListLock;

/// @brief Field crcLookupTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crcLookupTable, put=setStaticF_crcLookupTable)) ::ArrayW<uint32_t>  crcLookupTable;

/// @brief Field threadList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_threadList, put=setStaticF_threadList)) ::System::Collections::Generic::List_1<::System::Threading::Thread*>*  threadList;

/// @brief Method ByteArrayToString, addr 0xa6ebe5c, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW ByteArrayToString(::ArrayW<uint8_t>  list, int32_t  length) ;

/// @brief Method CalculateCrc, addr 0xa6ebf30, size 0x130, virtual false, abstract: false, final false
static inline uint32_t CalculateCrc(::ArrayW<uint8_t>  buffer, int32_t  length) ;

/// @brief Method DictionaryToString, addr 0xa6eb388, size 0xa7c, virtual false, abstract: false, final false
static inline ::StringW DictionaryToString(::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*  dictionary, bool  includeTypes) ;

/// @brief Method DictionaryToString, addr 0xa6ea578, size 0xe10, virtual false, abstract: false, final false
static inline ::StringW DictionaryToString(::System::Collections::IDictionary*  dictionary, bool  includeTypes) ;

/// @brief Method GetMethods, addr 0xa6e983c, size 0x1cc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* GetMethods(::System::Type*  type, ::System::Type*  attribute) ;

/// [Obsolete("Use a Stopwatch (or equivalent) instead.")]
/// @brief Method GetTickCount, addr 0xa6e9a08, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetTickCount() ;

/// [Obsolete("Use DictionaryToString() instead.")]
/// @brief Method HashtableToString, addr 0xa6ebe04, size 0x58, virtual false, abstract: false, final false
static inline ::StringW HashtableToString(::ExitGames::Client::Photon::Hashtable*  hash) ;

/// @brief Method InitializeTable, addr 0xa6ebe98, size 0x98, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> InitializeTable(uint32_t  polynomial) ;

static inline ::ExitGames::Client::Photon::SupportClass* New_ctor() ;

/// @brief Method StartBackgroundCalls, addr 0xa6e9a74, size 0x4e0, virtual false, abstract: false, final false
static inline uint8_t StartBackgroundCalls(::System::Func_1<bool>*  myThread, int32_t  millisecondsInterval, ::StringW  taskName) ;

/// @brief Method StopAllBackgroundCalls, addr 0xa6ea194, size 0x2cc, virtual false, abstract: false, final false
static inline bool StopAllBackgroundCalls() ;

/// @brief Method StopBackgroundCalls, addr 0xa6e9f5c, size 0x238, virtual false, abstract: false, final false
static inline bool StopBackgroundCalls(uint8_t  id) ;

/// @brief Method WriteStackTrace, addr 0xa6ea520, size 0x58, virtual false, abstract: false, final false
static inline void WriteStackTrace(::System::Exception*  throwable) ;

/// @brief Method WriteStackTrace, addr 0xa6ea460, size 0xc0, virtual false, abstract: false, final false
static inline void WriteStackTrace(::System::Exception*  throwable, ::System::IO::TextWriter*  stream) ;

/// @brief Method .ctor, addr 0xa6ec060, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate* getStaticF_IntegerMilliseconds() ;

static inline ::System::Object* getStaticF_ThreadListLock() ;

static inline ::ArrayW<uint32_t> getStaticF_crcLookupTable() ;

static inline ::System::Collections::Generic::List_1<::System::Threading::Thread*>* getStaticF_threadList() ;

static inline void setStaticF_IntegerMilliseconds(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*  value) ;

static inline void setStaticF_ThreadListLock(::System::Object*  value) ;

static inline void setStaticF_crcLookupTable(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_threadList(::System::Collections::Generic::List_1<::System::Threading::Thread*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportClass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportClass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportClass(SupportClass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportClass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportClass(SupportClass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::SupportClass) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// [CompilerGenerated]
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
class CORDL_TYPE SupportClass___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field millisecondsInterval, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_millisecondsInterval, put=__cordl_internal_set_millisecondsInterval)) int32_t  millisecondsInterval;

/// @brief Field myThread, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_myThread, put=__cordl_internal_set_myThread)) ::System::Func_1<bool>*  myThread;

static inline ::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <StartBackgroundCalls>b__0, addr 0xa6ec494, size 0xb8, virtual false, abstract: false, final false
inline void _StartBackgroundCalls_b__0() ;

constexpr int32_t const& __cordl_internal_get_millisecondsInterval() const;

constexpr int32_t& __cordl_internal_get_millisecondsInterval() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_myThread() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_myThread() ;

constexpr void __cordl_internal_set_millisecondsInterval(int32_t  value) ;

constexpr void __cordl_internal_set_myThread(::System::Func_1<bool>*  value) ;

/// @brief Method .ctor, addr 0xa6e9f54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportClass___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportClass___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportClass___c__DisplayClass6_0(SupportClass___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportClass___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportClass___c__DisplayClass6_0(SupportClass___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26481};

/// @brief Field millisecondsInterval, offset: 0x10, size: 0x4, def value: None
 int32_t  ___millisecondsInterval;

/// @brief Field myThread, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___myThread;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0, ___millisecondsInterval) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0, ___myThread) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// [CompilerGenerated]
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SupportClass/<>c
class CORDL_TYPE SupportClass___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::ExitGames::Client::Photon::SupportClass___c*  __9;

static inline ::ExitGames::Client::Photon::SupportClass___c* New_ctor() ;

/// @brief Method <.cctor>b__20_0, addr 0xa6ec48c, size 0x8, virtual false, abstract: false, final false
inline int32_t __cctor_b__20_0() ;

/// @brief Method .ctor, addr 0xa6ec484, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ExitGames::Client::Photon::SupportClass___c* getStaticF___9() ;

static inline void setStaticF___9(::ExitGames::Client::Photon::SupportClass___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportClass___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportClass___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportClass___c(SupportClass___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportClass___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportClass___c(SupportClass___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::SupportClass___c) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
class CORDL_TYPE SupportClass_ThreadSafeRandom : public ::System::Object {
public:
// Declarations
/// @brief Field _r, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__r, put=setStaticF__r)) ::System::Random*  _r;

static inline ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom* New_ctor() ;

/// @brief Method Next, addr 0xa6ec25c, size 0x13c, virtual false, abstract: false, final false
static inline int32_t Next() ;

/// @brief Method .ctor, addr 0xa6ec398, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Random* getStaticF__r() ;

static inline void setStaticF__r(::System::Random*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportClass_ThreadSafeRandom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportClass_ThreadSafeRandom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportClass_ThreadSafeRandom(SupportClass_ThreadSafeRandom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportClass_ThreadSafeRandom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportClass_ThreadSafeRandom(SupportClass_ThreadSafeRandom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// [Obsolete("Use a Stopwatch (or equivalent) instead.")]
// Dependencies System.MulticastDelegate
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
class CORDL_TYPE SupportClass_IntegerMillisecondsDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa6ec218, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6ec234, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa6ec204, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke() ;

static inline ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6ec168, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportClass_IntegerMillisecondsDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportClass_IntegerMillisecondsDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportClass_IntegerMillisecondsDelegate(SupportClass_IntegerMillisecondsDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportClass_IntegerMillisecondsDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportClass_IntegerMillisecondsDelegate(SupportClass_IntegerMillisecondsDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate) == 0x80, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
