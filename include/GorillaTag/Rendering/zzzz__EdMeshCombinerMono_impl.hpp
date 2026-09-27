#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerMono.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerMono_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerMono.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinerMono::*)()>(&::GorillaTag::Rendering::EdMeshCombinerMono::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d55874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerMono*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerMono.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinerMono::*)()>(&::GorillaTag::Rendering::EdMeshCombinerMono::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d558cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerMono*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinerMono::*)()>(&::GorillaTag::Rendering::EdMeshCombinerMono::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d558d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Rendering::EdMeshCombinerMono::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerMono*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::EdMeshCombinerMono::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerMono*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::EdMeshCombinerMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::EdMeshCombinerMono* GorillaTag::Rendering::EdMeshCombinerMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::EdMeshCombinerMono*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::EdMeshCombinerMono::EdMeshCombinerMono()   {
}
