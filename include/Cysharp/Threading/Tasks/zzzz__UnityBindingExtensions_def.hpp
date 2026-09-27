#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityBindingExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityBindingExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
template<typename TSource,typename TObject>
struct UnityBindingExtensions__BindToCore_d__12_2;
}
namespace GlobalNamespace {
struct UnityBindingExtensions__BindToCore_d__2;
}
namespace GlobalNamespace {
template<typename T>
struct UnityBindingExtensions__BindToCore_d__6_1;
}
namespace GlobalNamespace {
struct UnityBindingExtensions__BindToCore_d__9;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UnityBindingExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UnityBindingExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityBindingExtensions*, "Cysharp.Threading.Tasks", "UnityBindingExtensions");
// [Extension]
// Dependencies System.Object, UnityEngine.MonoBehaviour
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityBindingExtensions
class CORDL_TYPE UnityBindingExtensions : public ::System::Object {
public:
// Declarations
template<typename TSource,typename TObject>
using _BindToCore_d__12_2 = ::GlobalNamespace::UnityBindingExtensions__BindToCore_d__12_2<TSource, TObject>;

using _BindToCore_d__2 = ::GlobalNamespace::UnityBindingExtensions__BindToCore_d__2;

template<typename T>
using _BindToCore_d__6_1 = ::GlobalNamespace::UnityBindingExtensions__BindToCore_d__6_1<T>;

using _BindToCore_d__9 = ::GlobalNamespace::UnityBindingExtensions__BindToCore_d__9;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0xae32ba8, size 0x4, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0xae32a90, size 0x3c, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TObject>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  bindTarget, ::System::Action_2<TObject,TSource>*  bindAction, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::MonoBehaviour*>)
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  monoBehaviour, ::System::Action_2<TObject,TSource>*  bindAction, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0xae32cc4, size 0x4, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [Extension]
/// @brief Method BindTo, addr 0xae32bac, size 0x3c, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, bool  rebindOnError) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UnityBindingExtensions::<BindToCore>d__2))]
/// @brief Method BindToCore, addr 0xae32acc, size 0xdc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UnityBindingExtensions::<BindToCore>d__6`1<T>))]
/// @brief Method BindToCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UnityBindingExtensions::<BindToCore>d__12`2<TSource, TObject>))]
/// @brief Method BindToCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TObject>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  bindTarget, ::System::Action_2<TObject,TSource>*  bindAction, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UnityBindingExtensions::<BindToCore>d__9))]
/// @brief Method BindToCore, addr 0xae32be8, size 0xdc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityBindingExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityBindingExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityBindingExtensions(UnityBindingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityBindingExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityBindingExtensions(UnityBindingExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21919};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UnityBindingExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
