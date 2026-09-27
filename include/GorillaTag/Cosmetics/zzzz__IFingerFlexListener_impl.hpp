#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/IFingerFlexListener.hpp"
#include "GorillaTag/Cosmetics/zzzz__IFingerFlexListener_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IFingerFlexListener_ComponentActivator_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::IFingerFlexListener.FingerFlexValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::IFingerFlexListener::*)(bool)>(&::GorillaTag::Cosmetics::IFingerFlexListener::FingerFlexValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d99840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::IFingerFlexListener.OnButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::IFingerFlexListener::*)(bool, float_t)>(&::GorillaTag::Cosmetics::IFingerFlexListener::OnButtonPressed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::IFingerFlexListener.OnButtonReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::IFingerFlexListener::*)(bool, float_t)>(&::GorillaTag::Cosmetics::IFingerFlexListener::OnButtonReleased)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::IFingerFlexListener.OnButtonPressStayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::IFingerFlexListener::*)(bool, float_t)>(&::GorillaTag::Cosmetics::IFingerFlexListener::OnButtonPressStayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool GorillaTag::Cosmetics::IFingerFlexListener::FingerFlexValidation(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isLeftHand);
}
inline void GorillaTag::Cosmetics::IFingerFlexListener::OnButtonPressed(bool  isLeftHand, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, value);
}
inline void GorillaTag::Cosmetics::IFingerFlexListener::OnButtonReleased(bool  isLeftHand, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, value);
}
inline void GorillaTag::Cosmetics::IFingerFlexListener::OnButtonPressStayed(bool  isLeftHand, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IFingerFlexListener*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, value);
}
