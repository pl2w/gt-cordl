#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityWebRequestExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestExtensions)
namespace GlobalNamespace {
class UnityWebRequestExtensions___c__DisplayClass0_0;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityWebRequestExtensions;
}
namespace GlobalNamespace {
class UnityWebRequestExtensions___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityWebRequestExtensions*);
MARK_REF_T(::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityWebRequestExtensions*, "", "UnityWebRequestExtensions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0*, "", "UnityWebRequestExtensions/<>c__DisplayClass0_0");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityWebRequestExtensions
class CORDL_TYPE UnityWebRequestExtensions : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x5a5bb5c, size 0x160, virtual false, abstract: false, final false
static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*> GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOp) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestExtensions(UnityWebRequestExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestExtensions(UnityWebRequestExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityWebRequestExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityWebRequestExtensions/<>c__DisplayClass0_0
class CORDL_TYPE UnityWebRequestExtensions___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field asyncOp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOp, put=__cordl_internal_set_asyncOp)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOp;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>*  tcs;

static inline ::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <GetAwaiter>b__0, addr 0x5a5bcc4, size 0x5c, virtual false, abstract: false, final false
inline void _GetAwaiter_b__0(::UnityEngine::AsyncOperation*  operation) ;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& __cordl_internal_get_asyncOp() const;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_asyncOp() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_asyncOp(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>*  value) ;

/// @brief Method .ctor, addr 0x5a5bcbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestExtensions___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestExtensions___c__DisplayClass0_0(UnityWebRequestExtensions___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestExtensions___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestExtensions___c__DisplayClass0_0(UnityWebRequestExtensions___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3042};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>*  ___tcs;

/// @brief Field asyncOp, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  ___asyncOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0, ___asyncOp) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
