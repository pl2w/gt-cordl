#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ChannelReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ChannelReader_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename T>
struct ChannelReader_1__ReadAsyncCore_d__5;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class ChannelReader_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::ChannelReader_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::ChannelReader_1, "Cysharp.Threading.Tasks", "ChannelReader`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ChannelReader`1<T>
class CORDL_TYPE ChannelReader_1 : public ::System::Object {
public:
// Declarations
using _ReadAsyncCore_d__5 = ::GlobalNamespace::ChannelReader_1__ReadAsyncCore_d__5<T>;

 __declspec(property(get=get_Completion)) ::Cysharp::Threading::Tasks::UniTask  Completion;

static inline ::Cysharp::Threading::Tasks::ChannelReader_1<T>* New_ctor() ;

/// @brief Method ReadAllAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* ReadAllAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> ReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.ChannelReader`1::<ReadAsyncCore>d__5<T>))]
/// @brief Method ReadAsyncCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> ReadAsyncCore(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryRead(::by_ref<T>  item) ;

/// @brief Method WaitToReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> WaitToReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Completion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Completion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelReader_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelReader_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelReader_1(ChannelReader_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelReader_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelReader_1(ChannelReader_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21592};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
