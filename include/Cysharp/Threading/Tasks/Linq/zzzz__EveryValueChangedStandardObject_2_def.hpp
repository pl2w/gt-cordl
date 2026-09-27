#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/EveryValueChangedStandardObject_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EveryValueChangedStandardObject_2)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TTarget,typename TProperty>
class EveryValueChangedStandardObject_2__EveryValueChanged;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
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
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class WeakReference_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TTarget,typename TProperty>
class EveryValueChangedStandardObject_2;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TTarget,typename TProperty>
class EveryValueChangedStandardObject_2__EveryValueChanged;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2, "Cysharp.Threading.Tasks.Linq", "EveryValueChangedStandardObject`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged, "Cysharp.Threading.Tasks.Linq", "EveryValueChangedStandardObject`2/_EveryValueChanged");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TTarget,typename TProperty>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.EveryValueChangedStandardObject`2<TTarget,TProperty>
class CORDL_TYPE EveryValueChangedStandardObject_2 : public ::System::Object {
public:
// Declarations
using _EveryValueChanged = ::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget, TProperty>;

/// @brief Field equalityComparer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_equalityComparer, put=__cordl_internal_set_equalityComparer)) ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer;

/// @brief Field monitorTiming, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_monitorTiming, put=__cordl_internal_set_monitorTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming;

/// @brief Field propertySelector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertySelector, put=__cordl_internal_set_propertySelector)) ::System::Func_2<TTarget,TProperty>*  propertySelector;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::System::WeakReference_1<TTarget>*  target;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>* New_ctor(TTarget  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>* const& __cordl_internal_get_equalityComparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>*& __cordl_internal_get_equalityComparer() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_monitorTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_monitorTiming() ;

constexpr ::System::Func_2<TTarget,TProperty>* const& __cordl_internal_get_propertySelector() const;

constexpr ::System::Func_2<TTarget,TProperty>*& __cordl_internal_get_propertySelector() ;

constexpr ::System::WeakReference_1<TTarget>* const& __cordl_internal_get_target() const;

constexpr ::System::WeakReference_1<TTarget>*& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_equalityComparer(::System::Collections::Generic::IEqualityComparer_1<TProperty>*  value) ;

constexpr void __cordl_internal_set_monitorTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

constexpr void __cordl_internal_set_propertySelector(::System::Func_2<TTarget,TProperty>*  value) ;

constexpr void __cordl_internal_set_target(::System::WeakReference_1<TTarget>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TTarget  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TProperty_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EveryValueChangedStandardObject_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EveryValueChangedStandardObject_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EveryValueChangedStandardObject_2(EveryValueChangedStandardObject_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EveryValueChangedStandardObject_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EveryValueChangedStandardObject_2(EveryValueChangedStandardObject_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20889};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::System::WeakReference_1<TTarget>*  ___target;

/// @brief Field propertySelector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TTarget,TProperty>*  ___propertySelector;

/// @brief Field equalityComparer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  ___equalityComparer;

/// @brief Field monitorTiming, offset: 0x28, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___monitorTiming;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TTarget,typename TProperty>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.EveryValueChangedStandardObject`2/_EveryValueChanged<TTarget,TProperty>
class CORDL_TYPE EveryValueChangedStandardObject_2__EveryValueChanged : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current)) TProperty  Current;

/// @brief Field cancellationToken, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field currentValue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentValue, put=__cordl_internal_set_currentValue)) TProperty  currentValue;

/// @brief Field disposed, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field equalityComparer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_equalityComparer, put=__cordl_internal_set_equalityComparer)) ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer;

/// @brief Field first, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) bool  first;

/// @brief Field propertySelector, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertySelector, put=__cordl_internal_set_propertySelector)) ::System::Func_2<TTarget,TProperty>*  propertySelector;

/// @brief Field target, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::System::WeakReference_1<TTarget>*  target;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>* New_ctor(::System::WeakReference_1<TTarget>*  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr TProperty const& __cordl_internal_get_currentValue() const;

constexpr TProperty& __cordl_internal_get_currentValue() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>* const& __cordl_internal_get_equalityComparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>*& __cordl_internal_get_equalityComparer() ;

constexpr bool const& __cordl_internal_get_first() const;

constexpr bool& __cordl_internal_get_first() ;

constexpr ::System::Func_2<TTarget,TProperty>* const& __cordl_internal_get_propertySelector() const;

constexpr ::System::Func_2<TTarget,TProperty>*& __cordl_internal_get_propertySelector() ;

constexpr ::System::WeakReference_1<TTarget>* const& __cordl_internal_get_target() const;

constexpr ::System::WeakReference_1<TTarget>*& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_currentValue(TProperty  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_equalityComparer(::System::Collections::Generic::IEqualityComparer_1<TProperty>*  value) ;

constexpr void __cordl_internal_set_first(bool  value) ;

constexpr void __cordl_internal_set_propertySelector(::System::Func_2<TTarget,TProperty>*  value) ;

constexpr void __cordl_internal_set_target(::System::WeakReference_1<TTarget>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::WeakReference_1<TTarget>*  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TProperty get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TProperty_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EveryValueChangedStandardObject_2__EveryValueChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EveryValueChangedStandardObject_2__EveryValueChanged", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EveryValueChangedStandardObject_2__EveryValueChanged(EveryValueChangedStandardObject_2__EveryValueChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EveryValueChangedStandardObject_2__EveryValueChanged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EveryValueChangedStandardObject_2__EveryValueChanged(EveryValueChangedStandardObject_2__EveryValueChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20888};

/// @brief Field target, offset: 0x38, size: 0x8, def value: None
 ::System::WeakReference_1<TTarget>*  ___target;

/// @brief Field equalityComparer, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  ___equalityComparer;

/// @brief Field propertySelector, offset: 0x48, size: 0x8, def value: None
 ::System::Func_2<TTarget,TProperty>*  ___propertySelector;

/// @brief Field cancellationToken, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field first, offset: 0x58, size: 0x1, def value: None
 bool  ___first;

/// @brief Field currentValue, offset: 0x60, size: 0x8, def value: None
 TProperty  ___currentValue;

/// @brief Field disposed, offset: 0x68, size: 0x1, def value: None
 bool  ___disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
