#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractorFindNearby.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractorFindNearby_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractorFindNearby.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractorFindNearby::*)()>(&::GlobalNamespace::BuilderPieceInteractorFindNearby::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b3510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorFindNearby*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractorFindNearby.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractorFindNearby::*)()>(&::GlobalNamespace::BuilderPieceInteractorFindNearby::PostTick)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57b3514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorFindNearby*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorFindNearby*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractorFindNearby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractorFindNearby::*)()>(&::GlobalNamespace::BuilderPieceInteractorFindNearby::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b3598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorFindNearby*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor>& GlobalNamespace::BuilderPieceInteractorFindNearby::__cordl_internal_get_pieceInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceInteractor;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor> const& GlobalNamespace::BuilderPieceInteractorFindNearby::__cordl_internal_get_pieceInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceInteractor;
}
constexpr void GlobalNamespace::BuilderPieceInteractorFindNearby::__cordl_internal_set_pieceInteractor(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceInteractor = value;
}
inline void GlobalNamespace::BuilderPieceInteractorFindNearby::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorFindNearby*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractorFindNearby::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorFindNearby*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractorFindNearby::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractorFindNearby*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceInteractorFindNearby* GlobalNamespace::BuilderPieceInteractorFindNearby::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceInteractorFindNearby*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceInteractorFindNearby::BuilderPieceInteractorFindNearby()   {
}
