#pragma once
// IWYU pragma private; include "Modio/Images/LazyImage`1__SetImage_d__10_1.hpp"
#include "Modio/Images/zzzz__ImageReference_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Images/zzzz__LazyImage`1__SetImage_d__10_1_def.hpp"
#include "Modio/Images/zzzz__LazyImage_1_def.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TImage,typename T>
inline void GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TImage,typename T>
inline void GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TImage,typename T>
constexpr  GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TImage,typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::Modio::Images::ModioImageSource_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resolution", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::Images::LazyImage_1<TImage>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentlyDownloading_5__2", ty: "::Modio::Images::ImageReference", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,TImage>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TImage,typename T>
constexpr ::GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>::LazyImage_1__SetImage_d__10_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Modio::Images::ModioImageSource_1<T>*  source, T  resolution, ::Modio::Images::LazyImage_1<TImage>*  __4__this, ::Modio::Images::ImageReference  _currentlyDownloading_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,TImage>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->source = source;
this->resolution = resolution;
this->__4__this = __4__this;
this->_currentlyDownloading_5__2 = _currentlyDownloading_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TImage,typename T>
constexpr ::GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage,T>::LazyImage_1__SetImage_d__10_1()   {
}
