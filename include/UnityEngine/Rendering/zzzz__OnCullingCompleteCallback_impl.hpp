#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OnCullingCompleteCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OnCullingCompleteCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::OnCullingCompleteCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb1f621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::Unity::Jobs::JobHandle, ::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::by_ref<::UnityEngine::Rendering::BatchCullingOutput>)>(&::UnityEngine::Rendering::OnCullingCompleteCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1f62bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OnCullingCompleteCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::OnCullingCompleteCallback::Invoke(::Unity::Jobs::JobHandle  jobHandle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cullingContext, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingOutput>  cullingOutput)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobHandle, cullingContext, cullingOutput);
}
inline ::UnityEngine::Rendering::OnCullingCompleteCallback* UnityEngine::Rendering::OnCullingCompleteCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::OnCullingCompleteCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OnCullingCompleteCallback::OnCullingCompleteCallback()   {
}
