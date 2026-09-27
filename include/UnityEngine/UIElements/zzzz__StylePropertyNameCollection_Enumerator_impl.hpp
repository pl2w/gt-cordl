#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyNameCollection_Enumerator.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StylePropertyNameCollection_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StylePropertyNameCollection_Enumerator::*)(::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>)>(&::GlobalNamespace::StylePropertyNameCollection_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb89e358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StylePropertyNameCollection_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StylePropertyNameCollection_Enumerator::*)()>(&::GlobalNamespace::StylePropertyNameCollection_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb89e42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StylePropertyNameCollection_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StylePropertyName (::GlobalNamespace::StylePropertyNameCollection_Enumerator::*)()>(&::GlobalNamespace::StylePropertyNameCollection_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb89e474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StylePropertyNameCollection_Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::StylePropertyNameCollection_Enumerator::*)()>(&::GlobalNamespace::StylePropertyNameCollection_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb89e4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StylePropertyNameCollection_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StylePropertyNameCollection_Enumerator::*)()>(&::GlobalNamespace::StylePropertyNameCollection_Enumerator::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb89e52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StylePropertyNameCollection_Enumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StylePropertyNameCollection_Enumerator::*)()>(&::GlobalNamespace::StylePropertyNameCollection_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb89e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StylePropertyNameCollection_Enumerator::_ctor(::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerator);
}
inline bool GlobalNamespace::StylePropertyNameCollection_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyName GlobalNamespace::StylePropertyNameCollection_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyName>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::StylePropertyNameCollection_Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void GlobalNamespace::StylePropertyNameCollection_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StylePropertyNameCollection_Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyNameCollection_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr  GlobalNamespace::StylePropertyNameCollection_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>* GlobalNamespace::StylePropertyNameCollection_Enumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__StylePropertyName_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::StylePropertyNameCollection_Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::StylePropertyNameCollection_Enumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::StylePropertyNameCollection_Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::StylePropertyNameCollection_Enumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StylePropertyNameCollection_Enumerator::StylePropertyNameCollection_Enumerator(::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>  m_Enumerator) noexcept  {
this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StylePropertyNameCollection_Enumerator::StylePropertyNameCollection_Enumerator()   {
}
