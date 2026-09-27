#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_ExampleSkinnedMeshDescription.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_ExampleSkinnedMeshDescription_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_ExampleSkinnedMeshDescription.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_ExampleSkinnedMeshDescription::*)()>(&::GlobalNamespace::MB_ExampleSkinnedMeshDescription::OnGUI)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9dfd830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleSkinnedMeshDescription*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_ExampleSkinnedMeshDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_ExampleSkinnedMeshDescription::*)()>(&::GlobalNamespace::MB_ExampleSkinnedMeshDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfd8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleSkinnedMeshDescription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB_ExampleSkinnedMeshDescription::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleSkinnedMeshDescription*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_ExampleSkinnedMeshDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_ExampleSkinnedMeshDescription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_ExampleSkinnedMeshDescription* GlobalNamespace::MB_ExampleSkinnedMeshDescription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_ExampleSkinnedMeshDescription*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_ExampleSkinnedMeshDescription::MB_ExampleSkinnedMeshDescription()   {
}
