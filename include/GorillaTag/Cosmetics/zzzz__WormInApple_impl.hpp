#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/WormInApple.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__WormInApple_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__UpdateBlendShapeCosmetic_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::WormInApple.OnHandTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::WormInApple::*)()>(&::GorillaTag::Cosmetics::WormInApple::OnHandTap)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5da62e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::WormInApple*>(),
                        {"OnHandTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::WormInApple._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::WormInApple::*)()>(&::GorillaTag::Cosmetics::WormInApple::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da637c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::WormInApple*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>& GorillaTag::Cosmetics::WormInApple::__cordl_internal_get_blendShapeCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeCosmetic;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic> const& GorillaTag::Cosmetics::WormInApple::__cordl_internal_get_blendShapeCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeCosmetic;
}
constexpr void GorillaTag::Cosmetics::WormInApple::__cordl_internal_set_blendShapeCosmetic(::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeCosmetic = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::WormInApple::__cordl_internal_get_OnHandTapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHandTapped;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::WormInApple::__cordl_internal_get_OnHandTapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHandTapped;
}
constexpr void GorillaTag::Cosmetics::WormInApple::__cordl_internal_set_OnHandTapped(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHandTapped = value;
}
inline void GorillaTag::Cosmetics::WormInApple::OnHandTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::WormInApple*>(),
                        {"OnHandTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::WormInApple::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::WormInApple*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::WormInApple* GorillaTag::Cosmetics::WormInApple::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::WormInApple*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::WormInApple::WormInApple()   {
}
