#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/CombineLatest_5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CombineLatest_5)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class CombineLatest_5__CombineLatest;
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
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
struct _CombineLatest_CombineLatest_5__DisposeAsync_d__43;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class CombineLatest_5;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class CombineLatest_5__CombineLatest;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_5);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_5__CombineLatest);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_5, "Cysharp.Threading.Tasks.Linq", "CombineLatest`5");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::CombineLatest_5__CombineLatest, "Cysharp.Threading.Tasks.Linq", "CombineLatest`5/_CombineLatest");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.CombineLatest`5<T1,T2,T3,T4,TResult>
class CORDL_TYPE CombineLatest_5 : public ::System::Object {
public:
// Declarations
using _CombineLatest = ::Cysharp::Threading::Tasks::Linq::CombineLatest_5__CombineLatest<T1, T2, T3, T4, TResult>;

/// @brief Field resultSelector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_5<T1,T2,T3,T4,TResult>*  resultSelector;

/// @brief Field source1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source1, put=__cordl_internal_set_source1)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1;

/// @brief Field source2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_source2, put=__cordl_internal_set_source2)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2;

/// @brief Field source3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source3, put=__cordl_internal_set_source3)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3;

/// @brief Field source4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_source4, put=__cordl_internal_set_source4)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::CombineLatest_5<T1,T2,T3,T4,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::System::Func_5<T1,T2,T3,T4,TResult>*  resultSelector) ;

constexpr ::System::Func_5<T1,T2,T3,T4,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_5<T1,T2,T3,T4,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* const& __cordl_internal_get_source1() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*& __cordl_internal_get_source1() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* const& __cordl_internal_get_source2() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*& __cordl_internal_get_source2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* const& __cordl_internal_get_source3() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*& __cordl_internal_get_source3() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* const& __cordl_internal_get_source4() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*& __cordl_internal_get_source4() ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_5<T1,T2,T3,T4,TResult>*  value) ;

constexpr void __cordl_internal_set_source1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  value) ;

constexpr void __cordl_internal_set_source2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  value) ;

constexpr void __cordl_internal_set_source3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  value) ;

constexpr void __cordl_internal_set_source4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::System::Func_5<T1,T2,T3,T4,TResult>*  resultSelector) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombineLatest_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombineLatest_5(CombineLatest_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombineLatest_5(CombineLatest_5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20459};

/// @brief Field source1, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  ___source1;

/// @brief Field source2, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  ___source2;

/// @brief Field source3, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  ___source3;

/// @brief Field source4, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  ___source4;

/// @brief Field resultSelector, offset: 0x30, size: 0x8, def value: None
 ::System::Func_5<T1,T2,T3,T4,TResult>*  ___resultSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.CombineLatest`5/_CombineLatest<T1,T2,T3,T4,TResult>
class CORDL_TYPE CombineLatest_5__CombineLatest : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _DisposeAsync_d__43 = ::GlobalNamespace::_CombineLatest_CombineLatest_5__DisposeAsync_d__43<T1, T2, T3, T4, TResult>;

/// @brief Field Completed1Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed1Delegate, put=setStaticF_Completed1Delegate)) ::System::Action_1<::System::Object*>*  Completed1Delegate;

/// @brief Field Completed2Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed2Delegate, put=setStaticF_Completed2Delegate)) ::System::Action_1<::System::Object*>*  Completed2Delegate;

/// @brief Field Completed3Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed3Delegate, put=setStaticF_Completed3Delegate)) ::System::Action_1<::System::Object*>*  Completed3Delegate;

/// @brief Field Completed4Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Completed4Delegate, put=setStaticF_Completed4Delegate)) ::System::Action_1<::System::Object*>*  Completed4Delegate;

 __declspec(property(get=get_Current)) TResult  Current;

/// @brief Field awaiter1, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter1, put=__cordl_internal_set_awaiter1)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter1;

/// @brief Field awaiter2, offset 0xa0, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter2, put=__cordl_internal_set_awaiter2)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter2;

/// @brief Field awaiter3, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter3, put=__cordl_internal_set_awaiter3)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter3;

/// @brief Field awaiter4, offset 0x100, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter4, put=__cordl_internal_set_awaiter4)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter4;

/// @brief Field cancellationToken, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completedCount, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field current1, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_current1, put=__cordl_internal_set_current1)) T1  current1;

/// @brief Field current2, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_current2, put=__cordl_internal_set_current2)) T2  current2;

/// @brief Field current3, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_current3, put=__cordl_internal_set_current3)) T3  current3;

/// @brief Field current4, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_current4, put=__cordl_internal_set_current4)) T4  current4;

/// @brief Field enumerator1, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator1, put=__cordl_internal_set_enumerator1)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*  enumerator1;

/// @brief Field enumerator2, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator2, put=__cordl_internal_set_enumerator2)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*  enumerator2;

/// @brief Field enumerator3, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator3, put=__cordl_internal_set_enumerator3)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*  enumerator3;

/// @brief Field enumerator4, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator4, put=__cordl_internal_set_enumerator4)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*  enumerator4;

/// @brief Field hasCurrent1, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent1, put=__cordl_internal_set_hasCurrent1)) bool  hasCurrent1;

/// @brief Field hasCurrent2, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent2, put=__cordl_internal_set_hasCurrent2)) bool  hasCurrent2;

/// @brief Field hasCurrent3, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent3, put=__cordl_internal_set_hasCurrent3)) bool  hasCurrent3;

/// @brief Field hasCurrent4, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrent4, put=__cordl_internal_set_hasCurrent4)) bool  hasCurrent4;

/// @brief Field result, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) TResult  result;

/// @brief Field resultSelector, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_5<T1,T2,T3,T4,TResult>*  resultSelector;

/// @brief Field running1, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_running1, put=__cordl_internal_set_running1)) bool  running1;

/// @brief Field running2, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_running2, put=__cordl_internal_set_running2)) bool  running2;

/// @brief Field running3, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get_running3, put=__cordl_internal_set_running3)) bool  running3;

/// @brief Field running4, offset 0x119, size 0x1 
 __declspec(property(get=__cordl_internal_get_running4, put=__cordl_internal_set_running4)) bool  running4;

/// @brief Field source1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source1, put=__cordl_internal_set_source1)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1;

/// @brief Field source2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_source2, put=__cordl_internal_set_source2)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2;

/// @brief Field source3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_source3, put=__cordl_internal_set_source3)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3;

/// @brief Field source4, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_source4, put=__cordl_internal_set_source4)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4;

/// @brief Field syncRunning, offset 0x12c, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncRunning, put=__cordl_internal_set_syncRunning)) bool  syncRunning;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// @brief Method Completed1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed1(::System::Object*  state) ;

/// @brief Method Completed2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed2(::System::Object*  state) ;

/// @brief Method Completed3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed3(::System::Object*  state) ;

/// @brief Method Completed4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Completed4(::System::Object*  state) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.CombineLatest`5::_CombineLatest::<DisposeAsync>d__43<T1, T2, T3, T4, TResult>))]
/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::CombineLatest_5__CombineLatest<T1,T2,T3,T4,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::System::Func_5<T1,T2,T3,T4,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetResult() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter1() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter1() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter2() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter2() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter3() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter3() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter4() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter4() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr T1 const& __cordl_internal_get_current1() const;

constexpr T1& __cordl_internal_get_current1() ;

constexpr T2 const& __cordl_internal_get_current2() const;

constexpr T2& __cordl_internal_get_current2() ;

constexpr T3 const& __cordl_internal_get_current3() const;

constexpr T3& __cordl_internal_get_current3() ;

constexpr T4 const& __cordl_internal_get_current4() const;

constexpr T4& __cordl_internal_get_current4() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* const& __cordl_internal_get_enumerator1() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*& __cordl_internal_get_enumerator1() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* const& __cordl_internal_get_enumerator2() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*& __cordl_internal_get_enumerator2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>* const& __cordl_internal_get_enumerator3() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*& __cordl_internal_get_enumerator3() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>* const& __cordl_internal_get_enumerator4() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*& __cordl_internal_get_enumerator4() ;

constexpr bool const& __cordl_internal_get_hasCurrent1() const;

constexpr bool& __cordl_internal_get_hasCurrent1() ;

constexpr bool const& __cordl_internal_get_hasCurrent2() const;

constexpr bool& __cordl_internal_get_hasCurrent2() ;

constexpr bool const& __cordl_internal_get_hasCurrent3() const;

constexpr bool& __cordl_internal_get_hasCurrent3() ;

constexpr bool const& __cordl_internal_get_hasCurrent4() const;

constexpr bool& __cordl_internal_get_hasCurrent4() ;

constexpr TResult const& __cordl_internal_get_result() const;

constexpr TResult& __cordl_internal_get_result() ;

constexpr ::System::Func_5<T1,T2,T3,T4,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_5<T1,T2,T3,T4,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr bool const& __cordl_internal_get_running1() const;

constexpr bool& __cordl_internal_get_running1() ;

constexpr bool const& __cordl_internal_get_running2() const;

constexpr bool& __cordl_internal_get_running2() ;

constexpr bool const& __cordl_internal_get_running3() const;

constexpr bool& __cordl_internal_get_running3() ;

constexpr bool const& __cordl_internal_get_running4() const;

constexpr bool& __cordl_internal_get_running4() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* const& __cordl_internal_get_source1() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*& __cordl_internal_get_source1() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* const& __cordl_internal_get_source2() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*& __cordl_internal_get_source2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* const& __cordl_internal_get_source3() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*& __cordl_internal_get_source3() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* const& __cordl_internal_get_source4() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*& __cordl_internal_get_source4() ;

constexpr bool const& __cordl_internal_get_syncRunning() const;

constexpr bool& __cordl_internal_get_syncRunning() ;

constexpr void __cordl_internal_set_awaiter1(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter2(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter3(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter4(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_current1(T1  value) ;

constexpr void __cordl_internal_set_current2(T2  value) ;

constexpr void __cordl_internal_set_current3(T3  value) ;

constexpr void __cordl_internal_set_current4(T4  value) ;

constexpr void __cordl_internal_set_enumerator1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*  value) ;

constexpr void __cordl_internal_set_enumerator2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*  value) ;

constexpr void __cordl_internal_set_enumerator3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*  value) ;

constexpr void __cordl_internal_set_enumerator4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*  value) ;

constexpr void __cordl_internal_set_hasCurrent1(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent2(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent3(bool  value) ;

constexpr void __cordl_internal_set_hasCurrent4(bool  value) ;

constexpr void __cordl_internal_set_result(TResult  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_5<T1,T2,T3,T4,TResult>*  value) ;

constexpr void __cordl_internal_set_running1(bool  value) ;

constexpr void __cordl_internal_set_running2(bool  value) ;

constexpr void __cordl_internal_set_running3(bool  value) ;

constexpr void __cordl_internal_set_running4(bool  value) ;

constexpr void __cordl_internal_set_source1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  value) ;

constexpr void __cordl_internal_set_source2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  value) ;

constexpr void __cordl_internal_set_source3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  value) ;

constexpr void __cordl_internal_set_source4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  value) ;

constexpr void __cordl_internal_set_syncRunning(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::System::Func_5<T1,T2,T3,T4,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed1Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed2Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed3Delegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_Completed4Delegate() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

static inline void setStaticF_Completed1Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed2Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed3Delegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_Completed4Delegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombineLatest_5__CombineLatest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_5__CombineLatest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombineLatest_5__CombineLatest(CombineLatest_5__CombineLatest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombineLatest_5__CombineLatest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombineLatest_5__CombineLatest(CombineLatest_5__CombineLatest const& ) = delete;

/// @brief Field CompleteCount offset 0xffffffff size 0x4
static constexpr int32_t  CompleteCount{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20458};

/// @brief Field source1, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  ___source1;

/// @brief Field source2, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  ___source2;

/// @brief Field source3, offset: 0x48, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  ___source3;

/// @brief Field source4, offset: 0x50, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  ___source4;

/// @brief Field resultSelector, offset: 0x58, size: 0x8, def value: None
 ::System::Func_5<T1,T2,T3,T4,TResult>*  ___resultSelector;

/// @brief Field cancellationToken, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field enumerator1, offset: 0x68, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>*  ___enumerator1;

/// @brief Field awaiter1, offset: 0x70, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter1;

/// @brief Field hasCurrent1, offset: 0x88, size: 0x1, def value: None
 bool  ___hasCurrent1;

/// @brief Field running1, offset: 0x89, size: 0x1, def value: None
 bool  ___running1;

/// @brief Field current1, offset: 0x90, size: 0x8, def value: None
 T1  ___current1;

/// @brief Field enumerator2, offset: 0x98, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>*  ___enumerator2;

/// @brief Field awaiter2, offset: 0xa0, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter2;

/// @brief Field hasCurrent2, offset: 0xb8, size: 0x1, def value: None
 bool  ___hasCurrent2;

/// @brief Field running2, offset: 0xb9, size: 0x1, def value: None
 bool  ___running2;

/// @brief Field current2, offset: 0xc0, size: 0x8, def value: None
 T2  ___current2;

/// @brief Field enumerator3, offset: 0xc8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>*  ___enumerator3;

/// @brief Field awaiter3, offset: 0xd0, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter3;

/// @brief Field hasCurrent3, offset: 0xe8, size: 0x1, def value: None
 bool  ___hasCurrent3;

/// @brief Field running3, offset: 0xe9, size: 0x1, def value: None
 bool  ___running3;

/// @brief Field current3, offset: 0xf0, size: 0x8, def value: None
 T3  ___current3;

/// @brief Field enumerator4, offset: 0xf8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>*  ___enumerator4;

/// @brief Field awaiter4, offset: 0x100, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter4;

/// @brief Field hasCurrent4, offset: 0x118, size: 0x1, def value: None
 bool  ___hasCurrent4;

/// @brief Field running4, offset: 0x119, size: 0x1, def value: None
 bool  ___running4;

/// @brief Field current4, offset: 0x120, size: 0x8, def value: None
 T4  ___current4;

/// @brief Field completedCount, offset: 0x128, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field syncRunning, offset: 0x12c, size: 0x1, def value: None
 bool  ___syncRunning;

/// @brief Field result, offset: 0x130, size: 0x8, def value: None
 TResult  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
