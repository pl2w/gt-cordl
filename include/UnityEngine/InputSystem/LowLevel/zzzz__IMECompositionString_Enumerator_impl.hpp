#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IMECompositionString_Enumerator.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMECompositionString_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMECompositionString_Enumerator::*)(::UnityEngine::InputSystem::LowLevel::IMECompositionString)>(&::GlobalNamespace::IMECompositionString_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xafef52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMECompositionString_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IMECompositionString_Enumerator::*)()>(&::GlobalNamespace::IMECompositionString_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xafef554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMECompositionString_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMECompositionString_Enumerator::*)()>(&::GlobalNamespace::IMECompositionString_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafef584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMECompositionString_Enumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IMECompositionString_Enumerator::*)()>(&::GlobalNamespace::IMECompositionString_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xafef590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMECompositionString_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::IMECompositionString_Enumerator::*)()>(&::GlobalNamespace::IMECompositionString_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafef594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMECompositionString_Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::IMECompositionString_Enumerator::*)()>(&::GlobalNamespace::IMECompositionString_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xafef59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IMECompositionString_Enumerator::_ctor(::UnityEngine::InputSystem::LowLevel::IMECompositionString  compositionString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, compositionString);
}
inline bool GlobalNamespace::IMECompositionString_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::IMECompositionString_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::IMECompositionString_Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline char16_t GlobalNamespace::IMECompositionString_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::IMECompositionString_Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IMECompositionString_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr  GlobalNamespace::IMECompositionString_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<char16_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::IMECompositionString_Enumerator::i___System__Collections__Generic__IEnumerator_1_char16_t_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::IMECompositionString_Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::IMECompositionString_Enumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::IMECompositionString_Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IMECompositionString_Enumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_CompositionString", ty: "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentCharacter", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IMECompositionString_Enumerator::IMECompositionString_Enumerator(::UnityEngine::InputSystem::LowLevel::IMECompositionString  m_CompositionString, char16_t  m_CurrentCharacter, int32_t  m_CurrentIndex) noexcept  {
this->m_CompositionString = m_CompositionString;
this->m_CurrentCharacter = m_CurrentCharacter;
this->m_CurrentIndex = m_CurrentIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IMECompositionString_Enumerator::IMECompositionString_Enumerator()   {
}
