#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBehaviorsBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRBehaviorsBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBehaviorsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBehaviorsBase::*)()>(&::GlobalNamespace::GRBehaviorsBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587ea6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBehaviorsBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GRBehaviorsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBehaviorsBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBehaviorsBase* GlobalNamespace::GRBehaviorsBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBehaviorsBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBehaviorsBase::GRBehaviorsBase()   {
}
