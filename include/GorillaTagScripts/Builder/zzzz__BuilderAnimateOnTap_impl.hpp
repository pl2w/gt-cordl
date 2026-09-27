#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderAnimateOnTap.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceTappable_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderAnimateOnTap_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderAnimateOnTap.OnTapReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderAnimateOnTap::*)()>(&::GorillaTagScripts::Builder::BuilderAnimateOnTap::OnTapReplicated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c1eef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::BuilderAnimateOnTap*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::BuilderAnimateOnTap*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderAnimateOnTap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderAnimateOnTap::*)()>(&::GorillaTagScripts::Builder::BuilderAnimateOnTap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1ef2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderAnimateOnTap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& GorillaTagScripts::Builder::BuilderAnimateOnTap::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GorillaTagScripts::Builder::BuilderAnimateOnTap::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GorillaTagScripts::Builder::BuilderAnimateOnTap::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
inline void GorillaTagScripts::Builder::BuilderAnimateOnTap::OnTapReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::BuilderAnimateOnTap*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderAnimateOnTap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderAnimateOnTap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderAnimateOnTap* GorillaTagScripts::Builder::BuilderAnimateOnTap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderAnimateOnTap*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderAnimateOnTap::BuilderAnimateOnTap()   {
}
