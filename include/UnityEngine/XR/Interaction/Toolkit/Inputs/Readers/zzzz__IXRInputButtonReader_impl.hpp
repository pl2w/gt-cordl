#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/IXRInputButtonReader.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader.ReadIsPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::ReadIsPerformed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader.ReadWasPerformedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::ReadWasPerformedThisFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader.ReadWasCompletedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::ReadWasCompletedThisFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::ReadIsPerformed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::ReadWasPerformedThisFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::ReadWasCompletedThisFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
