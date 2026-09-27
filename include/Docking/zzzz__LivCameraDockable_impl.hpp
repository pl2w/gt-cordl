#pragma once
// IWYU pragma private; include "Docking/LivCameraDockable.hpp"
#include "Docking/zzzz__Dockable_impl.hpp"
#include "Docking/zzzz__LivCameraDockable_def.hpp"
//  Writing Method size for method: ::Docking::LivCameraDockable.Dock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::LivCameraDockable::*)()>(&::Docking::LivCameraDockable::Dock)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ddcf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Docking::LivCameraDockable*>(),
                    {::i2c::class_of<::Docking::LivCameraDockable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::LivCameraDockable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::LivCameraDockable::*)()>(&::Docking::LivCameraDockable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ddd0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDockable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Docking::LivCameraDockable::Dock()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Docking::LivCameraDockable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::LivCameraDockable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDockable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Docking::LivCameraDockable* Docking::LivCameraDockable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Docking::LivCameraDockable*>());
}
// Ctor Parameters []
constexpr ::Docking::LivCameraDockable::LivCameraDockable()   {
}
