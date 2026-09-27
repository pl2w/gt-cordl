#pragma once
// IWYU pragma private; include "Modio/Images/BaseImageCache`1__DownloadImageInternal_d__5.hpp"
#include "Modio/Images/zzzz__ImageReference_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Images/zzzz__BaseImageCache`1__DownloadImageInternal_d__5_def.hpp"
#include "Modio/Images/zzzz__BaseImageCache_1_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename T>
inline void GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uri", ty: "::Modio::Images::ImageReference", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::Images::BaseImageCache_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_error_5__2", ty: "::Modio::Error*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_memoryStream_5__3", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>::BaseImageCache_1__DownloadImageInternal_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>  __t__builder, ::Modio::Images::ImageReference  uri, ::Modio::Images::BaseImageCache_1<T>*  __4__this, ::Modio::Error*  _error_5__2, ::System::IO::MemoryStream*  _memoryStream_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uri = uri;
this->__4__this = __4__this;
this->_error_5__2 = _error_5__2;
this->_memoryStream_5__3 = _memoryStream_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::BaseImageCache_1__DownloadImageInternal_d__5<T>::BaseImageCache_1__DownloadImageInternal_d__5()   {
}
