#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAPIUnityClient__GetJson_d__19_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIUnityClient__GetJson_d__19_1)
namespace Modio::API {
class ModioAPIRequest;
}
namespace Modio::Unity {
class ModioAPIUnityClient;
}
namespace Modio {
class Error;
}
namespace Newtonsoft::Json {
class JsonTextReader;
}
namespace System::IO {
class StringReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct ModioAPIUnityClient__GetJson_d__19_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1, "Modio.Unity", "ModioAPIUnityClient/<GetJson>d__19`1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Modio.Unity.ModioAPIUnityClient/<GetJson>d__19`1<T>
struct CORDL_TYPE ModioAPIUnityClient__GetJson_d__19_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIUnityClient__GetJson_d__19_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Unity::ModioAPIUnityClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::Modio::API::ModioAPIRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "reader", ty: "::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_target_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_webRequest_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cachedShutdownToken_5__4", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stringReader_5__5", ty: "::System::IO::StringReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_jsonTextReader_5__6", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIUnityClient__GetJson_d__19_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>  __t__builder, ::Modio::Unity::ModioAPIUnityClient*  __4__this, ::Modio::API::ModioAPIRequest*  request, ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*  reader, ::StringW  _target_5__2, ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__3, ::System::Threading::CancellationToken  _cachedShutdownToken_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::IO::StringReader*  _stringReader_5__5, ::Newtonsoft::Json::JsonTextReader*  _jsonTextReader_5__6, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Unity::ModioAPIUnityClient*  __4__this;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::Modio::API::ModioAPIRequest*  request;

/// @brief Field reader, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*  reader;

/// @brief Field <target>5__2, offset: 0x38, size: 0x8, def value: None
 ::StringW  _target_5__2;

/// @brief Field <webRequest>5__3, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__3;

/// @brief Field <cachedShutdownToken>5__4, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  _cachedShutdownToken_5__4;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

/// @brief Field <stringReader>5__5, offset: 0x58, size: 0x8, def value: None
 ::System::IO::StringReader*  _stringReader_5__5;

/// @brief Field <jsonTextReader>5__6, offset: 0x60, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextReader*  _jsonTextReader_5__6;

/// @brief Field <>u__2, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <>u__3, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
