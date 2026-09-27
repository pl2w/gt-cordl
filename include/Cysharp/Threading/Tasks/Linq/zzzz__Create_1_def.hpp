#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Create_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Create_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Create_1_AsyncWriter;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Create_1__Create;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class IAsyncWriter_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
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
template<typename T>
struct _Create_Create_1__RunWriterTask_d__12;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Create_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Create_1_AsyncWriter;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Create_1__Create;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Create_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Create_1__Create);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Create_1, "Cysharp.Threading.Tasks.Linq", "Create`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter, "Cysharp.Threading.Tasks.Linq", "Create`1/AsyncWriter");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Create_1__Create, "Cysharp.Threading.Tasks.Linq", "Create`1/_Create");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Create`1<T>
class CORDL_TYPE Create_1 : public ::System::Object {
public:
// Declarations
using AsyncWriter = ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>;

using _Create = ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>;

/// @brief Field create, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_create, put=__cordl_internal_set_create)) ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Create_1<T>* New_ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create) ;

constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>* const& __cordl_internal_get_create() const;

constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*& __cordl_internal_get_create() ;

constexpr void __cordl_internal_set_create(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Create_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Create_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Create_1(Create_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Create_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Create_1(Create_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20508};

/// @brief Field create, offset: 0x10, size: 0x8, def value: None
 ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  ___create;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Create`1/AsyncWriter<T>
class CORDL_TYPE Create_1_AsyncWriter : public ::System::Object {
public:
// Declarations
/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field enumerator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  enumerator;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*() noexcept;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>* New_ctor(::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  enumerator) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method SignalWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SignalWriter() ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

/// @brief Method YieldAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask YieldAsync(T  value) ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*& __cordl_internal_get_enumerator() ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  enumerator) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>"
constexpr ::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>* i___Cysharp__Threading__Tasks__Linq__IAsyncWriter_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Create_1_AsyncWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Create_1_AsyncWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Create_1_AsyncWriter(Create_1_AsyncWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Create_1_AsyncWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Create_1_AsyncWriter(Create_1_AsyncWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20507};

/// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  ___enumerator;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Create`1/_Create<T>
class CORDL_TYPE Create_1__Create : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _RunWriterTask_d__12 = ::GlobalNamespace::_Create_Create_1__RunWriterTask_d__12<T>;

 __declspec(property(get=get_Current, put=set_Current)) T  Current;

/// @brief Field <Current>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) T  _Current_k__BackingField;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field create, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_create, put=__cordl_internal_set_create)) ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create;

/// @brief Field state, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

/// @brief Field writer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*  writer;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MoveNext() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>* New_ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Create`1::_Create::<RunWriterTask>d__12<T>))]
/// @brief Method RunWriterTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RunWriterTask(::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(T  value) ;

constexpr T const& __cordl_internal_get__Current_k__BackingField() const;

constexpr T& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>* const& __cordl_internal_get_create() const;

constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*& __cordl_internal_get_create() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>* const& __cordl_internal_get_writer() const;

constexpr ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*& __cordl_internal_get_writer() ;

constexpr void __cordl_internal_set__Current_k__BackingField(T  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_create(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

constexpr void __cordl_internal_set_writer(::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create, ::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Create_1__Create() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Create_1__Create", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Create_1__Create(Create_1__Create && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Create_1__Create", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Create_1__Create(Create_1__Create const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20506};

/// @brief Field create, offset: 0x38, size: 0x8, def value: None
 ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  ___create;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field state, offset: 0x48, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field writer, offset: 0x50, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*  ___writer;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x58, size: 0x8, def value: None
 T  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
