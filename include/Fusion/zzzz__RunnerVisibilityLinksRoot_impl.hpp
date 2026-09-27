#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLinksRoot.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/zzzz__RunnerVisibilityLinksRoot_def.hpp"
//  Writing Method size for method: ::Fusion::RunnerVisibilityLinksRoot.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLinksRoot::*)()>(&::Fusion::RunnerVisibilityLinksRoot::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60f62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLinksRoot*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerVisibilityLinksRoot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerVisibilityLinksRoot::*)()>(&::Fusion::RunnerVisibilityLinksRoot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f62bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLinksRoot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::RunnerVisibilityLinksRoot::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLinksRoot*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerVisibilityLinksRoot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerVisibilityLinksRoot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::RunnerVisibilityLinksRoot* Fusion::RunnerVisibilityLinksRoot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RunnerVisibilityLinksRoot*>());
}
// Ctor Parameters []
constexpr ::Fusion::RunnerVisibilityLinksRoot::RunnerVisibilityLinksRoot()   {
}
