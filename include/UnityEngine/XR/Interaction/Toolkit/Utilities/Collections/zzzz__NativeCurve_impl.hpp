#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/NativeCurve.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__WrapMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve.get_isCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::get_isCreated)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb42f00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"get_isCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve.InitializeValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::*)(int32_t, ::Unity::Collections::Allocator)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::InitializeValues)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb42f050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"InitializeValues", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::*)(::UnityEngine::AnimationCurve*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Update)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb42f100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Evaluate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb42f1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb42f370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve.Repeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Repeat)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb42f3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Repeat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve.PingPong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::PingPong)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb42f46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"PingPong", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::get_isCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"get_isCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::InitializeValues(int32_t  count, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"InitializeValues", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, allocator);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Update(::UnityEngine::AnimationCurve*  curve, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, curve, resolution);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Evaluate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, t);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::Repeat(float_t  t, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"Repeat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, t, length);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::PingPong(float_t  t, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(),
                        {"PingPong", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, t, length);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Values", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PreWrapMode", ty: "::UnityEngine::WrapMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PostWrapMode", ty: "::UnityEngine::WrapMode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::NativeCurve(::Unity::Collections::NativeArray_1<float_t>  m_Values, ::UnityEngine::WrapMode  m_PreWrapMode, ::UnityEngine::WrapMode  m_PostWrapMode) noexcept  {
this->m_Values = m_Values;
this->m_PreWrapMode = m_PreWrapMode;
this->m_PostWrapMode = m_PostWrapMode;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve::NativeCurve()   {
}
