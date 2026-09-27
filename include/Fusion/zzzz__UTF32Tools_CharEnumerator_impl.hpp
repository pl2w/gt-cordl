#pragma once
// IWYU pragma private; include "Fusion/UTF32Tools_CharEnumerator.hpp"
#include "Fusion/zzzz__UTF32Tools_CharEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_CharEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UTF32Tools_CharEnumerator::*)(uint32_t*, int32_t)>(&::GlobalNamespace::UTF32Tools_CharEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f4183c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_CharEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::UTF32Tools_CharEnumerator::*)()>(&::GlobalNamespace::UTF32Tools_CharEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f41850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_CharEnumerator.set_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UTF32Tools_CharEnumerator::*)(char16_t)>(&::GlobalNamespace::UTF32Tools_CharEnumerator::set_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f41858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"set_Current", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_CharEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::UTF32Tools_CharEnumerator::*)()>(&::GlobalNamespace::UTF32Tools_CharEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f41860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_CharEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UTF32Tools_CharEnumerator::*)()>(&::GlobalNamespace::UTF32Tools_CharEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f41888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_CharEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UTF32Tools_CharEnumerator::*)()>(&::GlobalNamespace::UTF32Tools_CharEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f4188c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF32Tools_CharEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UTF32Tools_CharEnumerator::*)()>(&::GlobalNamespace::UTF32Tools_CharEnumerator::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f418e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UTF32Tools_CharEnumerator::_ctor(uint32_t*  utf32, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, utf32, length);
}
inline char16_t GlobalNamespace::UTF32Tools_CharEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline void GlobalNamespace::UTF32Tools_CharEnumerator::set_Current(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"set_Current", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::UTF32Tools_CharEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void GlobalNamespace::UTF32Tools_CharEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::UTF32Tools_CharEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::UTF32Tools_CharEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UTF32Tools_CharEnumerator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr  GlobalNamespace::UTF32Tools_CharEnumerator::operator ::System::Collections::Generic::IEnumerator_1<char16_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::UTF32Tools_CharEnumerator::i___System__Collections__Generic__IEnumerator_1_char16_t_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::UTF32Tools_CharEnumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::UTF32Tools_CharEnumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::UTF32Tools_CharEnumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UTF32Tools_CharEnumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pendingLowSurrogate", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ptr", ty: "uint32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Current_k__BackingField", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UTF32Tools_CharEnumerator::UTF32Tools_CharEnumerator(int32_t  _index, int32_t  _length, char16_t  _pendingLowSurrogate, uint32_t*  _ptr, char16_t  _Current_k__BackingField) noexcept  {
this->_index = _index;
this->_length = _length;
this->_pendingLowSurrogate = _pendingLowSurrogate;
this->_ptr = _ptr;
this->_Current_k__BackingField = _Current_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UTF32Tools_CharEnumerator::UTF32Tools_CharEnumerator()   {
}
