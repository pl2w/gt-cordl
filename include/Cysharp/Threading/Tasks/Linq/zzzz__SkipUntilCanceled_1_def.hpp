#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SkipUntilCanceled_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkipUntilCanceled_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipUntilCanceled_1__SkipUntilCanceled;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipUntilCanceled_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipUntilCanceled_1__SkipUntilCanceled;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntilCanceled_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntilCanceled_1__SkipUntilCanceled);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntilCanceled_1, "Cysharp.Threading.Tasks.Linq", "SkipUntilCanceled`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntilCanceled_1__SkipUntilCanceled, "Cysharp.Threading.Tasks.Linq", "SkipUntilCanceled`1/_SkipUntilCanceled");
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1<TSource>
class CORDL_TYPE SkipUntilCanceled_1 : public ::System::Object {
public:
// Declarations
using _SkipUntilCanceled = ::Cysharp::Threading::Tasks::Linq::SkipUntilCanceled_1__SkipUntilCanceled<TSource>;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::SkipUntilCanceled_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipUntilCanceled_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipUntilCanceled_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipUntilCanceled_1(SkipUntilCanceled_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipUntilCanceled_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipUntilCanceled_1(SkipUntilCanceled_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20759};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SkipUntilCanceled`1/_SkipUntilCanceled<TSource>
class CORDL_TYPE SkipUntilCanceled_1__SkipUntilCanceled : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
/// @brief Field CancelDelegate1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CancelDelegate1, put=setStaticF_CancelDelegate1)) ::System::Action_1<::System::Object*>*  CancelDelegate1;

/// @brief Field CancelDelegate2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CancelDelegate2, put=setStaticF_CancelDelegate2)) ::System::Action_1<::System::Object*>*  CancelDelegate2;

 __declspec(property(get=get_Current, put=set_Current)) TSource  Current;

/// @brief Field MoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MoveNextCoreDelegate, put=setStaticF_MoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  MoveNextCoreDelegate;

/// @brief Field <Current>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TSource  _Current_k__BackingField;

/// @brief Field awaiter, offset 0x90, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter;

/// @brief Field cancellationToken1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken1, put=__cordl_internal_set_cancellationToken1)) ::System::Threading::CancellationToken  cancellationToken1;

/// @brief Field cancellationToken2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken2, put=__cordl_internal_set_cancellationToken2)) ::System::Threading::CancellationToken  cancellationToken2;

/// @brief Field cancellationTokenRegistration1, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration1, put=__cordl_internal_set_cancellationTokenRegistration1)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration1;

/// @brief Field cancellationTokenRegistration2, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration2, put=__cordl_internal_set_cancellationTokenRegistration2)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration2;

/// @brief Field continueNext, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_continueNext, put=__cordl_internal_set_continueNext)) bool  continueNext;

/// @brief Field enumerator, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field isCanceled, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_isCanceled, put=__cordl_internal_set_isCanceled)) int32_t  isCanceled;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method MoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void MoveNextCore(::System::Object*  state) ;

static inline ::Cysharp::Threading::Tasks::Linq::SkipUntilCanceled_1__SkipUntilCanceled<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2) ;

/// @brief Method OnCanceled1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled1(::System::Object*  state) ;

/// @brief Method OnCanceled2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled2(::System::Object*  state) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

constexpr TSource const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TSource& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken1() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken1() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken2() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken2() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration1() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration1() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration2() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration2() ;

constexpr bool const& __cordl_internal_get_continueNext() const;

constexpr bool& __cordl_internal_get_continueNext() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr int32_t const& __cordl_internal_get_isCanceled() const;

constexpr int32_t& __cordl_internal_get_isCanceled() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TSource  value) ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationToken2(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration1(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration2(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_continueNext(bool  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_isCanceled(int32_t  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_CancelDelegate1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_CancelDelegate2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_MoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TSource get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept;

static inline void setStaticF_CancelDelegate1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_CancelDelegate2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipUntilCanceled_1__SkipUntilCanceled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipUntilCanceled_1__SkipUntilCanceled", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipUntilCanceled_1__SkipUntilCanceled(SkipUntilCanceled_1__SkipUntilCanceled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipUntilCanceled_1__SkipUntilCanceled", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipUntilCanceled_1__SkipUntilCanceled(SkipUntilCanceled_1__SkipUntilCanceled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20758};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field cancellationToken1, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken1;

/// @brief Field cancellationToken2, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken2;

/// @brief Field cancellationTokenRegistration1, offset: 0x50, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration1;

/// @brief Field cancellationTokenRegistration2, offset: 0x68, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration2;

/// @brief Field isCanceled, offset: 0x80, size: 0x4, def value: None
 int32_t  ___isCanceled;

/// @brief Field enumerator, offset: 0x88, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field awaiter, offset: 0x90, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter;

/// @brief Field continueNext, offset: 0xa8, size: 0x1, def value: None
 bool  ___continueNext;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 TSource  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
