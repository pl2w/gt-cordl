#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractorPreInteract.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractorPreInteract_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractorPreInteract.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractorPreInteract::*)()>(&::GlobalNamespace::BuilderPieceInteractorPreInteract::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b35a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorPreInteract*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractorPreInteract.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractorPreInteract::*)()>(&::GlobalNamespace::BuilderPieceInteractorPreInteract::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b35a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorPreInteract*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractorPreInteract._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractorPreInteract::*)()>(&::GlobalNamespace::BuilderPieceInteractorPreInteract::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b35a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorPreInteract*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor>& GlobalNamespace::BuilderPieceInteractorPreInteract::__cordl_internal_get_interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactor;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor> const& GlobalNamespace::BuilderPieceInteractorPreInteract::__cordl_internal_get_interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactor;
}
constexpr void GlobalNamespace::BuilderPieceInteractorPreInteract::__cordl_internal_set_interactor(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactor = value;
}
inline void GlobalNamespace::BuilderPieceInteractorPreInteract::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorPreInteract*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractorPreInteract::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorPreInteract*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractorPreInteract::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorPreInteract*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceInteractorPreInteract* GlobalNamespace::BuilderPieceInteractorPreInteract::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceInteractorPreInteract*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceInteractorPreInteract::BuilderPieceInteractorPreInteract()   {
}
