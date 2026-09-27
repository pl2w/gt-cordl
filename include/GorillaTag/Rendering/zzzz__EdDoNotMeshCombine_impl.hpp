#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdDoNotMeshCombine.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Rendering/zzzz__EdDoNotMeshCombine_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::EdDoNotMeshCombine.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdDoNotMeshCombine::*)()>(&::GorillaTag::Rendering::EdDoNotMeshCombine::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d55814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdDoNotMeshCombine*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdDoNotMeshCombine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdDoNotMeshCombine::*)()>(&::GorillaTag::Rendering::EdDoNotMeshCombine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d5586c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdDoNotMeshCombine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Rendering::EdDoNotMeshCombine::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdDoNotMeshCombine*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::EdDoNotMeshCombine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdDoNotMeshCombine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::EdDoNotMeshCombine* GorillaTag::Rendering::EdDoNotMeshCombine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::EdDoNotMeshCombine*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::EdDoNotMeshCombine::EdDoNotMeshCombine()   {
}
