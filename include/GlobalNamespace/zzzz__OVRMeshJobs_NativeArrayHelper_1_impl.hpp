#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs_NativeArrayHelper_1.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_NativeArrayHelper_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::_ctor(::ArrayW<T>  ovrArray, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ovrArray, length);
}
template<typename T>
inline void GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::OVRMeshJobs_NativeArrayHelper_1(::Unity::Collections::NativeArray_1<T>  UnityNativeArray, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept  {
this->UnityNativeArray = UnityNativeArray;
this->_handle = _handle;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1<T>::OVRMeshJobs_NativeArrayHelper_1()   {
}
