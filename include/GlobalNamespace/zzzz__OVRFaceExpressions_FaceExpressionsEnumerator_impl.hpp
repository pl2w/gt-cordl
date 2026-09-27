#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions_FaceExpressionsEnumerator.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_FaceExpressionsEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)(::ArrayW<float_t>)>(&::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa585da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa585ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa585ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa585f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa585f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa585f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::_ctor(::ArrayW<float_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline bool GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr  GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::Collections::Generic::IEnumerator_1<float_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<float_t>* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__Collections__Generic__IEnumerator_1_float_t_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::OVRFaceExpressions_FaceExpressionsEnumerator(::ArrayW<float_t>  _faceExpressions, int32_t  _index, int32_t  _count) noexcept  {
this->_faceExpressions = _faceExpressions;
this->_index = _index;
this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::OVRFaceExpressions_FaceExpressionsEnumerator()   {
}
