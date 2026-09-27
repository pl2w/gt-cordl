#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceMonkeIdol.hpp"
#include "GlobalNamespace/zzzz__SIResource_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceMonkeIdol_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResourceMonkeIdol.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceMonkeIdol::*)()>(&::GlobalNamespace::SIResourceMonkeIdol::OnEnable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5aed0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(),
                    {::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceMonkeIdol.HandleDepositAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceMonkeIdol::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIResourceMonkeIdol::HandleDepositAuth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5aed144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(),
                    {::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceMonkeIdol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceMonkeIdol::*)()>(&::GlobalNamespace::SIResourceMonkeIdol::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5aed1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceMonkeIdol::__cordl_internal_get_depositEnabledParticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEnabledParticle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceMonkeIdol::__cordl_internal_get_depositEnabledParticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEnabledParticle;
}
constexpr void GlobalNamespace::SIResourceMonkeIdol::__cordl_internal_set_depositEnabledParticle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositEnabledParticle = value;
}
inline void GlobalNamespace::SIResourceMonkeIdol::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceMonkeIdol::HandleDepositAuth(::GlobalNamespace::SIPlayer*  depositingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depositingPlayer);
}
inline void GlobalNamespace::SIResourceMonkeIdol::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceMonkeIdol*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIResourceMonkeIdol* GlobalNamespace::SIResourceMonkeIdol::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResourceMonkeIdol*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceMonkeIdol::SIResourceMonkeIdol()   {
}
