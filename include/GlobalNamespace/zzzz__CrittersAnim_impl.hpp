#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersAnim.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersAnim_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersAnim.IsModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersAnim::*)()>(&::GlobalNamespace::CrittersAnim::IsModified)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x55fb530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAnim*>(),
                        {"IsModified", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersAnim.IsModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::CrittersAnim*)>(&::GlobalNamespace::CrittersAnim::IsModified)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55fb5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAnim*>(),
                        {"IsModified", {}, {::i2c::type_of<::GlobalNamespace::CrittersAnim*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersAnim._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersAnim::*)()>(&::GlobalNamespace::CrittersAnim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fb5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAnim*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CrittersAnim::__cordl_internal_get_squashAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squashAmount;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CrittersAnim::__cordl_internal_get_squashAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squashAmount;
}
constexpr void GlobalNamespace::CrittersAnim::__cordl_internal_set_squashAmount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squashAmount = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CrittersAnim::__cordl_internal_get_forwardOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardOffset;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CrittersAnim::__cordl_internal_get_forwardOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardOffset;
}
constexpr void GlobalNamespace::CrittersAnim::__cordl_internal_set_forwardOffset(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardOffset = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CrittersAnim::__cordl_internal_get_horizontalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalOffset;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CrittersAnim::__cordl_internal_get_horizontalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalOffset;
}
constexpr void GlobalNamespace::CrittersAnim::__cordl_internal_set_horizontalOffset(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalOffset = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CrittersAnim::__cordl_internal_get_verticalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalOffset;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CrittersAnim::__cordl_internal_get_verticalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalOffset;
}
constexpr void GlobalNamespace::CrittersAnim::__cordl_internal_set_verticalOffset(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalOffset = value;
}
constexpr float_t& GlobalNamespace::CrittersAnim::__cordl_internal_get_playSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playSpeed;
}
constexpr float_t const& GlobalNamespace::CrittersAnim::__cordl_internal_get_playSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playSpeed;
}
constexpr void GlobalNamespace::CrittersAnim::__cordl_internal_set_playSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playSpeed = value;
}
inline bool GlobalNamespace::CrittersAnim::IsModified()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAnim*>(),
                        {"IsModified", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersAnim::IsModified(::GlobalNamespace::CrittersAnim*  anim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAnim*>(),
                        {"IsModified", {}, {::i2c::type_of<::GlobalNamespace::CrittersAnim*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, anim);
}
inline void GlobalNamespace::CrittersAnim::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAnim*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersAnim* GlobalNamespace::CrittersAnim::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersAnim*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersAnim::CrittersAnim()   {
}
