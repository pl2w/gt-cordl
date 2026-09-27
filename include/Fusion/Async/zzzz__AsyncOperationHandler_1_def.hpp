#pragma once
// IWYU pragma private; include "Fusion/Async/AsyncOperationHandler_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AsyncOperationHandler_1)
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Fusion::Async {
template<typename T>
class AsyncOperationHandler_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::Async::AsyncOperationHandler_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Async::AsyncOperationHandler_1, "Fusion.Async", "AsyncOperationHandler`1");
// Dependencies System.Object
namespace Fusion::Async {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.Async.AsyncOperationHandler`1<T>
class CORDL_TYPE AsyncOperationHandler_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<T>*  Task;

/// @brief Field _cancellation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellation, put=__cordl_internal_set__cancellation)) ::System::Threading::CancellationTokenSource*  _cancellation;

/// @brief Field _customTimeoutMsg, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__customTimeoutMsg, put=__cordl_internal_set__customTimeoutMsg)) ::StringW  _customTimeoutMsg;

/// @brief Field _result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::System::Threading::Tasks::TaskCompletionSource_1<T>*  _result;

/// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method Expire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Expire() ;

static inline ::Fusion::Async::AsyncOperationHandler_1<T>* New_ctor(::System::Threading::CancellationToken  externalCancellationToken, float_t  operationTimeout, ::StringW  customTimeoutMsg) ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  e) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(T  result) ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellation() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellation() ;

constexpr ::StringW const& __cordl_internal_get__customTimeoutMsg() const;

constexpr ::StringW& __cordl_internal_get__customTimeoutMsg() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& __cordl_internal_get__result() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get__result() ;

constexpr void __cordl_internal_set__cancellation(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__customTimeoutMsg(::StringW  value) ;

constexpr void __cordl_internal_set__result(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  externalCancellationToken, float_t  operationTimeout, ::StringW  customTimeoutMsg) ;

/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<T>* get_Task() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationHandler_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandler_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationHandler_1(AsyncOperationHandler_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandler_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationHandler_1(AsyncOperationHandler_1 const& ) = delete;

/// @brief Field OperationTimeoutSec offset 0xffffffff size 0x4
static constexpr float_t  OperationTimeoutSec{static_cast<float_t>(30.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31321};

/// @brief Field _result, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<T>*  ____result;

/// @brief Field _cancellation, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellation;

/// @brief Field _customTimeoutMsg, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____customTimeoutMsg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Async
