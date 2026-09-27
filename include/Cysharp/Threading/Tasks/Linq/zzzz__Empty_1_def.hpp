#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Empty_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Empty_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Empty_1__Empty;
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
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Empty_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Empty_1__Empty;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Empty_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Empty_1__Empty);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Empty_1, "Cysharp.Threading.Tasks.Linq", "Empty`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Empty_1__Empty, "Cysharp.Threading.Tasks.Linq", "Empty`1/_Empty");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Empty`1<T>
class CORDL_TYPE Empty_1 : public ::System::Object {
public:
// Declarations
using _Empty = ::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  Instance;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Empty_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* getStaticF_Instance() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

static inline void setStaticF_Instance(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Empty_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Empty_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Empty_1(Empty_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Empty_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Empty_1(Empty_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Empty`1/_Empty<T>
class CORDL_TYPE Empty_1__Empty : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  Instance;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* getStaticF_Instance() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

static inline void setStaticF_Instance(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Empty_1__Empty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Empty_1__Empty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Empty_1__Empty(Empty_1__Empty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Empty_1__Empty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Empty_1__Empty(Empty_1__Empty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20532};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
