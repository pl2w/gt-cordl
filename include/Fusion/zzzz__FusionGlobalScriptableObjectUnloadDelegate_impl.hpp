#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectUnloadDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectUnloadDelegate_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectUnloadDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectUnloadDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::FusionGlobalScriptableObjectUnloadDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f3e588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectUnloadDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectUnloadDelegate::*)(::Fusion::FusionGlobalScriptableObject*)>(&::Fusion::FusionGlobalScriptableObjectUnloadDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>(),
                    {::i2c::class_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Fusion::FusionGlobalScriptableObjectUnloadDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::FusionGlobalScriptableObjectUnloadDelegate::Invoke(::Fusion::FusionGlobalScriptableObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline ::Fusion::FusionGlobalScriptableObjectUnloadDelegate* Fusion::FusionGlobalScriptableObjectUnloadDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObjectUnloadDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectUnloadDelegate::FusionGlobalScriptableObjectUnloadDelegate()   {
}
