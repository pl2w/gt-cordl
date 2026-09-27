#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/EveryUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EveryUpdate)
namespace Cysharp::Threading::Tasks::Linq {
class EveryUpdate__EveryUpdate;
}
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
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
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class EveryUpdate;
}
namespace Cysharp::Threading::Tasks::Linq {
class EveryUpdate__EveryUpdate;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::EveryUpdate*);
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::EveryUpdate*, "Cysharp.Threading.Tasks.Linq", "EveryUpdate");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate*, "Cysharp.Threading.Tasks.Linq", "EveryUpdate/_EveryUpdate");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.EveryUpdate
class CORDL_TYPE EveryUpdate : public ::System::Object {
public:
// Declarations
using _EveryUpdate = ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate;

/// @brief Field updateTiming, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateTiming, put=__cordl_internal_set_updateTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0xae26214, size 0x6c, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::EveryUpdate* New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming) ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_updateTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_updateTiming() ;

constexpr void __cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

/// @brief Method .ctor, addr 0xae261ec, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EveryUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EveryUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EveryUpdate(EveryUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EveryUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EveryUpdate(EveryUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20885};

/// @brief Field updateTiming, offset: 0x10, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___updateTiming;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::EveryUpdate, ___updateTiming) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::EveryUpdate) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.PlayerLoopTiming, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate
class CORDL_TYPE EveryUpdate__EveryUpdate : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Cysharp::Threading::Tasks::AsyncUnit  Current;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field disposed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field updateTiming, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateTiming, put=__cordl_internal_set_updateTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept;

/// @brief Method DisposeAsync, addr 0xae26414, size 0x1c, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNext, addr 0xae26430, size 0x98, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method MoveNextAsync, addr 0xae26314, size 0x100, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate* New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_updateTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_updateTiming() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_updateTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

/// @brief Method .ctor, addr 0xae26280, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0xae2630c, size 0x8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::AsyncUnit get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EveryUpdate__EveryUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EveryUpdate__EveryUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EveryUpdate__EveryUpdate(EveryUpdate__EveryUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EveryUpdate__EveryUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EveryUpdate__EveryUpdate(EveryUpdate__EveryUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20884};

/// @brief Field updateTiming, offset: 0x38, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___updateTiming;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field disposed, offset: 0x48, size: 0x1, def value: None
 bool  ___disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate, ___updateTiming) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate, ___cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate, ___disposed) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate) == 0x50, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
