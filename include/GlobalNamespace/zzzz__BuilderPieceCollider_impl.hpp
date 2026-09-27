#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceCollider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceCollider_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceCollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceCollider::*)()>(&::GlobalNamespace::BuilderPieceCollider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57c7718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceCollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderPieceCollider::__cordl_internal_get_piece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderPieceCollider::__cordl_internal_get_piece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr void GlobalNamespace::BuilderPieceCollider::__cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piece = value;
}
inline void GlobalNamespace::BuilderPieceCollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceCollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceCollider* GlobalNamespace::BuilderPieceCollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceCollider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceCollider::BuilderPieceCollider()   {
}
