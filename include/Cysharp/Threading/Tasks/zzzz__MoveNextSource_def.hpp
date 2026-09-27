#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/MoveNextSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MoveNextSource)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask_1_Awaiter;
}
namespace GlobalNamespace {
struct UniTask_Awaiter;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class MoveNextSource;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::MoveNextSource*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::MoveNextSource*, "Cysharp.Threading.Tasks", "MoveNextSource");
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.MoveNextSource
class CORDL_TYPE MoveNextSource : public ::System::Object {
public:
// Declarations
/// @brief Field completionSource, offset 0x10, size 0x28 
 __declspec(property(get=__cordl_internal_get_completionSource, put=__cordl_internal_set_completionSource)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>  completionSource;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xade807c, size 0x58, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xade7ea4, size 0x58, virtual true, abstract: false, final true
inline bool GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xade7efc, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::MoveNextSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xade7f54, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryGetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetResult(::GlobalNamespace::UniTask_1_Awaiter<T>  awaiter, ::by_ref<T>  result) ;

/// @brief Method TryGetResult, addr 0xade80d4, size 0x154, virtual false, abstract: false, final false
inline bool TryGetResult(::GlobalNamespace::UniTask_Awaiter  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0xade7fc4, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool> const& __cordl_internal_get_completionSource() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>& __cordl_internal_get_completionSource() ;

constexpr void __cordl_internal_set_completionSource(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>  value) ;

/// @brief Method .ctor, addr 0xade8228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_bool_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveNextSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveNextSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveNextSource(MoveNextSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveNextSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveNextSource(MoveNextSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21621};

/// @brief Field completionSource, offset: 0x10, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>  ___completionSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::MoveNextSource, ___completionSource) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::MoveNextSource) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
