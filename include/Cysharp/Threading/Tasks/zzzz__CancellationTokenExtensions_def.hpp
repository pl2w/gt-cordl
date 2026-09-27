#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenExtensions)
namespace Cysharp::Threading::Tasks {
struct CancellationTokenAwaitable;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
struct CancellationTokenExtensions__ToCancellationTokenCore_d__6;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class CancellationTokenExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CancellationTokenExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenExtensions*, "Cysharp.Threading.Tasks", "CancellationTokenExtensions");
// [Extension]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CancellationTokenExtensions
class CORDL_TYPE CancellationTokenExtensions : public ::System::Object {
public:
// Declarations
using _ToCancellationTokenCore_d__6 = ::GlobalNamespace::CancellationTokenExtensions__ToCancellationTokenCore_d__6;

/// @brief Field cancellationTokenCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationTokenCallback, put=setStaticF_cancellationTokenCallback)) ::System::Action_1<::System::Object*>*  cancellationTokenCallback;

/// @brief Field disposeCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_disposeCallback, put=setStaticF_disposeCallback)) ::System::Action_1<::System::Object*>*  disposeCallback;

/// [Extension]
/// @brief Method AddTo, addr 0xade4a4c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationTokenRegistration AddTo(::System::IDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Callback, addr 0xade4818, size 0x84, virtual false, abstract: false, final false
static inline void Callback(::System::Object*  state) ;

/// @brief Method DisposeCallback, addr 0xade4ae0, size 0xe0, virtual false, abstract: false, final false
static inline void DisposeCallback(::System::Object*  state) ;

/// [Extension]
/// @brief Method RegisterWithoutCaptureExecutionContext, addr 0xade48b8, size 0x194, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action*  callback) ;

/// [Extension]
/// @brief Method RegisterWithoutCaptureExecutionContext, addr 0xade467c, size 0x19c, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  callback, ::System::Object*  state) ;

/// [Extension]
/// @brief Method ToCancellationToken, addr 0xade40c4, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task) ;

/// [Extension]
/// @brief Method ToCancellationToken, addr 0xade423c, size 0x1a4, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationToken  linkToken) ;

/// [Extension]
/// @brief Method ToCancellationToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// [Extension]
/// @brief Method ToCancellationToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationToken  linkToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.CancellationTokenExtensions::<ToCancellationTokenCore>d__6))]
/// @brief Method ToCancellationTokenCore, addr 0xade4188, size 0xb4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid ToCancellationTokenCore(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationTokenSource*  cts) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xade43e0, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration> ToUniTask(::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WaitUntilCanceled, addr 0xade489c, size 0x1c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::CancellationTokenAwaitable WaitUntilCanceled(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationTokenCallback() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_disposeCallback() ;

static inline void setStaticF_cancellationTokenCallback(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_disposeCallback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CancellationTokenExtensions(CancellationTokenExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancellationTokenExtensions(CancellationTokenExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21584};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
