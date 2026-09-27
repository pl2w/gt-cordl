#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineRange_SplineRangeEnumerator.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_SplineRangeEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineRange_SplineRangeEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SplineRange_SplineRangeEnumerator::*)()>(&::GlobalNamespace::SplineRange_SplineRangeEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb326c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineRange_SplineRangeEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineRange_SplineRangeEnumerator::*)()>(&::GlobalNamespace::SplineRange_SplineRangeEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb326ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineRange_SplineRangeEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SplineRange_SplineRangeEnumerator::*)()>(&::GlobalNamespace::SplineRange_SplineRangeEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb326cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineRange_SplineRangeEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SplineRange_SplineRangeEnumerator::*)()>(&::GlobalNamespace::SplineRange_SplineRangeEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb326cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineRange_SplineRangeEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineRange_SplineRangeEnumerator::*)(::UnityEngine::Splines::SplineRange)>(&::GlobalNamespace::SplineRange_SplineRangeEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb326b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineRange_SplineRangeEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineRange_SplineRangeEnumerator::*)()>(&::GlobalNamespace::SplineRange_SplineRangeEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb326d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SplineRange_SplineRangeEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::SplineRange_SplineRangeEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::SplineRange_SplineRangeEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SplineRange_SplineRangeEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void GlobalNamespace::SplineRange_SplineRangeEnumerator::_ctor(::UnityEngine::Splines::SplineRange  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::SplineRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, range);
}
inline void GlobalNamespace::SplineRange_SplineRangeEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineRange_SplineRangeEnumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr  GlobalNamespace::SplineRange_SplineRangeEnumerator::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* GlobalNamespace::SplineRange_SplineRangeEnumerator::i___System__Collections__Generic__IEnumerator_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SplineRange_SplineRangeEnumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SplineRange_SplineRangeEnumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SplineRange_SplineRangeEnumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SplineRange_SplineRangeEnumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Reverse", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplineRange_SplineRangeEnumerator::SplineRange_SplineRangeEnumerator(int32_t  m_Index, int32_t  m_Start, int32_t  m_End, int32_t  m_Count, bool  m_Reverse) noexcept  {
this->m_Index = m_Index;
this->m_Start = m_Start;
this->m_End = m_End;
this->m_Count = m_Count;
this->m_Reverse = m_Reverse;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineRange_SplineRangeEnumerator::SplineRange_SplineRangeEnumerator()   {
}
