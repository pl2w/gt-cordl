#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/IVelocityCalculator.hpp"
#include "Oculus/Interaction/Throw/zzzz__IVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__ReleaseVelocityInformation_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::IVelocityCalculator.get_UpdateFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::IVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::IVelocityCalculator::get_UpdateFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::IVelocityCalculator.add_WhenThrowVelocitiesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::IVelocityCalculator::*)(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*)>(&::Oculus::Interaction::Throw::IVelocityCalculator::add_WhenThrowVelocitiesChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::IVelocityCalculator.remove_WhenThrowVelocitiesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::IVelocityCalculator::*)(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*)>(&::Oculus::Interaction::Throw::IVelocityCalculator::remove_WhenThrowVelocitiesChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::IVelocityCalculator.add_WhenNewSampleAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::IVelocityCalculator::*)(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*)>(&::Oculus::Interaction::Throw::IVelocityCalculator::add_WhenNewSampleAvailable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::IVelocityCalculator.remove_WhenNewSampleAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::IVelocityCalculator::*)(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*)>(&::Oculus::Interaction::Throw::IVelocityCalculator::remove_WhenNewSampleAvailable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::IVelocityCalculator.LastThrowVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* (::Oculus::Interaction::Throw::IVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::IVelocityCalculator::LastThrowVelocities)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::IVelocityCalculator.SetUpdateFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::IVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::IVelocityCalculator::SetUpdateFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 6}
                ));
    return ___internal_method;
  }
};
inline float_t Oculus::Interaction::Throw::IVelocityCalculator::get_UpdateFrequency()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::IVelocityCalculator::add_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::IVelocityCalculator::remove_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::IVelocityCalculator::add_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::IVelocityCalculator::remove_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* Oculus::Interaction::Throw::IVelocityCalculator::LastThrowVelocities()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::IVelocityCalculator::SetUpdateFrequency(float_t  frequency)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IVelocityCalculator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency);
}
/// @brief Convert operator to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr  Oculus::Interaction::Throw::IVelocityCalculator::operator ::Oculus::Interaction::Throw::IThrowVelocityCalculator*() noexcept {
return static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* Oculus::Interaction::Throw::IVelocityCalculator::i___Oculus__Interaction__Throw__IThrowVelocityCalculator() noexcept {
return static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(static_cast<void*>(this));
}
