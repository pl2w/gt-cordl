#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckIconRotator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckIconRotator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckIconRotator.Rotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckIconRotator::*)()>(&::Liv::Lck::UI::LckIconRotator::Rotate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d50be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckIconRotator*>(),
                        {"Rotate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckIconRotator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckIconRotator::*)()>(&::Liv::Lck::UI::LckIconRotator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d50c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckIconRotator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::UI::LckIconRotator::__cordl_internal_get__rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr float_t const& Liv::Lck::UI::LckIconRotator::__cordl_internal_get__rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr void Liv::Lck::UI::LckIconRotator::__cordl_internal_set__rotationOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::UI::LckIconRotator::__cordl_internal_get__iconTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::UI::LckIconRotator::__cordl_internal_get__iconTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconTransform;
}
constexpr void Liv::Lck::UI::LckIconRotator::__cordl_internal_set__iconTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iconTransform = value;
}
inline void Liv::Lck::UI::LckIconRotator::Rotate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckIconRotator*>(),
                        {"Rotate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckIconRotator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckIconRotator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckIconRotator* Liv::Lck::UI::LckIconRotator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckIconRotator*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckIconRotator::LckIconRotator()   {
}
