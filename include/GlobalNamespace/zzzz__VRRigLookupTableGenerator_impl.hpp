#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigLookupTableGenerator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigLookupTableGenerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRigLookupTableGenerator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigLookupTableGenerator::*)()>(&::GlobalNamespace::VRRigLookupTableGenerator::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a11340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigLookupTableGenerator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigLookupTableGenerator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigLookupTableGenerator::*)()>(&::GlobalNamespace::VRRigLookupTableGenerator::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a11344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigLookupTableGenerator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigLookupTableGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigLookupTableGenerator::*)()>(&::GlobalNamespace::VRRigLookupTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a11348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigLookupTableGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VRRigLookupTableGenerator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigLookupTableGenerator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigLookupTableGenerator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigLookupTableGenerator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigLookupTableGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigLookupTableGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRigLookupTableGenerator* GlobalNamespace::VRRigLookupTableGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRRigLookupTableGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRigLookupTableGenerator::VRRigLookupTableGenerator()   {
}
