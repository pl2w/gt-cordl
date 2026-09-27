#pragma once
// IWYU pragma private; include "System/Net/ContextAwareResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ContextAwareResult_StateFlags_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContextAwareResult)
namespace GlobalNamespace {
struct ContextAwareResult_StateFlags;
}
namespace System::Net {
class CallbackClosure;
}
namespace System::Net {
class ContextAwareResult___c;
}
namespace System::Net {
class EndPoint;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ContextAwareResult;
}
namespace System::Net {
class ContextAwareResult___c;
}
// Write type traits
MARK_REF_T(::System::Net::ContextAwareResult*);
MARK_REF_T(::System::Net::ContextAwareResult___c*);
DEFINE_IL2CPP_CLASS(::System::Net::ContextAwareResult*, "System.Net", "ContextAwareResult");
DEFINE_IL2CPP_CLASS(::System::Net::ContextAwareResult___c*, "System.Net", "ContextAwareResult/<>c");
// Dependencies System.Net.ContextAwareResult::StateFlags, System.Net.LazyAsyncResult
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ContextAwareResult
class CORDL_TYPE ContextAwareResult : public ::System::Net::LazyAsyncResult {
public:
// Declarations
using StateFlags = ::GlobalNamespace::ContextAwareResult_StateFlags;

using __c = ::System::Net::ContextAwareResult___c;

 __declspec(property(get=get_ContextCopy)) ::System::Threading::ExecutionContext*  ContextCopy;

 __declspec(property(get=get_RemoteEndPoint)) ::System::Net::EndPoint*  RemoteEndPoint;

/// @brief Field _context, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::System::Threading::ExecutionContext*  _context;

/// @brief Field _flags, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__flags, put=__cordl_internal_set__flags)) ::GlobalNamespace::ContextAwareResult_StateFlags  _flags;

/// @brief Field _lock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Method CaptureOrComplete, addr 0xada7328, size 0x3ec, virtual false, abstract: false, final false
inline bool CaptureOrComplete(::by_ref<::System::Threading::ExecutionContext*>  cachedContext, bool  returnContext) ;

/// @brief Method Cleanup, addr 0xada78b0, size 0xa0, virtual true, abstract: false, final false
inline void Cleanup() ;

/// @brief Method CleanupInternal, addr 0xada6db8, size 0x4, virtual false, abstract: false, final false
inline void CleanupInternal() ;

/// @brief Method Complete, addr 0xada7b74, size 0x2cc, virtual true, abstract: false, final false
inline void Complete(::System::IntPtr  userToken) ;

/// @brief Method CompleteCallback, addr 0xada7e40, size 0xac, virtual false, abstract: false, final false
inline void CompleteCallback() ;

/// @brief Method FinishPostingAsyncOp, addr 0xada72e8, size 0x40, virtual false, abstract: false, final false
inline bool FinishPostingAsyncOp() ;

/// @brief Method FinishPostingAsyncOp, addr 0xada7714, size 0x12c, virtual false, abstract: false, final false
inline bool FinishPostingAsyncOp(::by_ref<::System::Net::CallbackClosure*>  closure) ;

static inline ::System::Net::ContextAwareResult* New_ctor(bool  captureIdentity, bool  forceCaptureContext, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

static inline ::System::Net::ContextAwareResult* New_ctor(bool  captureIdentity, bool  forceCaptureContext, bool  threadSafeContextCopy, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

static inline ::System::Net::ContextAwareResult* New_ctor(::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method SafeCaptureIdentity, addr 0xada6db4, size 0x4, virtual false, abstract: false, final false
inline void SafeCaptureIdentity() ;

/// @brief Method StartPostingAsyncOp, addr 0xada71e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* StartPostingAsyncOp() ;

/// @brief Method StartPostingAsyncOp, addr 0xada71e8, size 0x100, virtual false, abstract: false, final false
inline ::System::Object* StartPostingAsyncOp(bool  lockCapture) ;

constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get__context() const;

constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get__context() ;

constexpr ::GlobalNamespace::ContextAwareResult_StateFlags const& __cordl_internal_get__flags() const;

constexpr ::GlobalNamespace::ContextAwareResult_StateFlags& __cordl_internal_get__flags() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr void __cordl_internal_set__context(::System::Threading::ExecutionContext*  value) ;

constexpr void __cordl_internal_set__flags(::GlobalNamespace::ContextAwareResult_StateFlags  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xada6dc4, size 0x50, virtual false, abstract: false, final false
inline void _ctor(bool  captureIdentity, bool  forceCaptureContext, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method .ctor, addr 0xada6e14, size 0x78, virtual false, abstract: false, final false
inline void _ctor(bool  captureIdentity, bool  forceCaptureContext, bool  threadSafeContextCopy, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method .ctor, addr 0xada6dbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack) ;

/// @brief Method get_ContextCopy, addr 0xada6e8c, size 0x284, virtual false, abstract: false, final false
inline ::System::Threading::ExecutionContext* get_ContextCopy() ;

/// @brief Method get_RemoteEndPoint, addr 0xada7eec, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::EndPoint* get_RemoteEndPoint() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextAwareResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextAwareResult(ContextAwareResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextAwareResult(ContextAwareResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10382};

/// @brief Field _context, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::ExecutionContext*  ____context;

/// @brief Field _lock, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ____lock;

/// @brief Field _flags, offset: 0x58, size: 0x1, def value: None
 ::GlobalNamespace::ContextAwareResult_StateFlags  ____flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContextAwareResult, ____context) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ContextAwareResult, ____lock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::ContextAwareResult, ____flags) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::Net::ContextAwareResult) == 0x60, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ContextAwareResult/<>c
class CORDL_TYPE ContextAwareResult___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::ContextAwareResult___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Threading::ContextCallback*  __9__17_0;

static inline ::System::Net::ContextAwareResult___c* New_ctor() ;

/// @brief Method <Complete>b__17_0, addr 0xada7f64, size 0x80, virtual false, abstract: false, final false
inline void _Complete_b__17_0(::System::Object*  s) ;

/// @brief Method .ctor, addr 0xada7f5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::ContextAwareResult___c* getStaticF___9() ;

static inline ::System::Threading::ContextCallback* getStaticF___9__17_0() ;

static inline void setStaticF___9(::System::Net::ContextAwareResult___c*  value) ;

static inline void setStaticF___9__17_0(::System::Threading::ContextCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextAwareResult___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextAwareResult___c(ContextAwareResult___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextAwareResult___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextAwareResult___c(ContextAwareResult___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::ContextAwareResult___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net
