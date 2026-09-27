#pragma once
// IWYU pragma private; include "Modio/Unity/Examples/Android/AndroidExample.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/Examples/Android/zzzz__AndroidExample_def.hpp"
//  Writing Method size for method: ::Modio::Unity::Examples::Android::AndroidExample.OnAssemblyLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Unity::Examples::Android::AndroidExample::OnAssemblyLoaded)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9f9d1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::Android::AndroidExample*>(),
                        {"OnAssemblyLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::Examples::Android::AndroidExample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Examples::Android::AndroidExample::*)()>(&::Modio::Unity::Examples::Android::AndroidExample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9d3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::Android::AndroidExample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::Examples::Android::AndroidExample::OnAssemblyLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::Android::AndroidExample*>(),
                        {"OnAssemblyLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Modio::Unity::Examples::Android::AndroidExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::Android::AndroidExample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::Examples::Android::AndroidExample* Modio::Unity::Examples::Android::AndroidExample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::Examples::Android::AndroidExample*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::Examples::Android::AndroidExample::AndroidExample()   {
}
