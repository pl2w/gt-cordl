#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Never_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Never_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Never_1__Never;
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
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Never_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class Never_1__Never;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Never_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Never_1__Never);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Never_1, "Cysharp.Threading.Tasks.Linq", "Never`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Never_1__Never, "Cysharp.Threading.Tasks.Linq", "Never`1/_Never");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Never`1<T>
class CORDL_TYPE Never_1 : public ::System::Object {
public:
// Declarations
using _Never = ::Cysharp::Threading::Tasks::Linq::Never_1__Never<T>;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  Instance;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Never_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* getStaticF_Instance() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

static inline void setStaticF_Instance(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Never_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Never_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Never_1(Never_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Never_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Never_1(Never_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Never`1/_Never<T>
class CORDL_TYPE Never_1__Never : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::Never_1__Never<T>* New_ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method <MoveNextAsync>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _MoveNextAsync_b__4_0(::System::Object*  state) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Never_1__Never() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Never_1__Never", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Never_1__Never(Never_1__Never && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Never_1__Never", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Never_1__Never(Never_1__Never const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20686};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
