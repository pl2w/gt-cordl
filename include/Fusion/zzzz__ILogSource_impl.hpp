#pragma once
// IWYU pragma private; include "Fusion/ILogSource.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::ILogSource.GetUnityObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Fusion::ILogSource::*)()>(&::Fusion::ILogSource::GetUnityObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f44710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ILogSource*>(),
                    {::i2c::class_of<::Fusion::ILogSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Object> Fusion::ILogSource::GetUnityObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ILogSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
