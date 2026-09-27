#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PinnedArray_1.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PinnedArray_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
template<typename T>
inline void GlobalNamespace::OVRPlugin_PinnedArray_1<T>::_ctor(::ArrayW<T>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_PinnedArray_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template<typename T>
inline void GlobalNamespace::OVRPlugin_PinnedArray_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_PinnedArray_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline ::System::IntPtr GlobalNamespace::OVRPlugin_PinnedArray_1<T>::op_Implicit___System__IntPtr(::GlobalNamespace::OVRPlugin_PinnedArray_1<T>  pinnedArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_PinnedArray_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_PinnedArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, pinnedArray);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::OVRPlugin_PinnedArray_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::OVRPlugin_PinnedArray_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::OVRPlugin_PinnedArray_1<T>::OVRPlugin_PinnedArray_1(::System::Runtime::InteropServices::GCHandle  _handle) noexcept  {
this->_handle = _handle;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::OVRPlugin_PinnedArray_1<T>::OVRPlugin_PinnedArray_1()   {
}
