#pragma once
// IWYU pragma private; include "Modio/Images/LazyImage`1__SetImage_d__10_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LazyImage`1__SetImage_d__10_1)
namespace Modio::Images {
template<typename TImage>
class LazyImage_1;
}
namespace Modio::Images {
template<typename TResolution>
class ModioImageSource_1;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TImage,typename T>
struct LazyImage_1__SetImage_d__10_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::LazyImage_1__SetImage_d__10_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::LazyImage_1__SetImage_d__10_1, "Modio.Images", "LazyImage`1/<SetImage>d__10`1");
// [CompilerGenerated]
// Dependencies Modio.Images.ImageReference, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// cpp template
template<typename TImage,typename T>
// Is value type: true
// CS Name: Modio.Images.LazyImage`1/<SetImage>d__10`1<TImage,T>
struct CORDL_TYPE LazyImage_1__SetImage_d__10_1 {
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
constexpr LazyImage_1__SetImage_d__10_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::Modio::Images::ModioImageSource_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "resolution", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Images::LazyImage_1<TImage>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentlyDownloading_5__2", ty: "::Modio::Images::ImageReference", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,TImage>>", modifiers: "", def_value: None, comment: None }]
constexpr LazyImage_1__SetImage_d__10_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Modio::Images::ModioImageSource_1<T>*  source, T  resolution, ::Modio::Images::LazyImage_1<TImage>*  __4__this, ::Modio::Images::ImageReference  _currentlyDownloading_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,TImage>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field source, offset: 0x28, size: 0x8, def value: None
 ::Modio::Images::ModioImageSource_1<T>*  source;

/// @brief Field resolution, offset: 0x30, size: 0x8, def value: None
 T  resolution;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::Modio::Images::LazyImage_1<TImage>*  __4__this;

/// @brief Field <currentlyDownloading>5__2, offset: 0x40, size: 0x8, def value: None
 ::Modio::Images::ImageReference  _currentlyDownloading_5__2;

/// [TupleElementNames(new[] { "errror", "image" })]
/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,TImage>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
