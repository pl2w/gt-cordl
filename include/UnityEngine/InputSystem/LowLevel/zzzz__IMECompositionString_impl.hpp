#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IMECompositionString.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString__buffer_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_Enumerator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString__buffer_e__FixedBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionString.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::IMECompositionString::*)()>(&::UnityEngine::InputSystem::LowLevel::IMECompositionString::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafef410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionString.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::InputSystem::LowLevel::IMECompositionString::*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::IMECompositionString::get_Item)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xafef418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IMECompositionString::*)(::StringW)>(&::UnityEngine::InputSystem::LowLevel::IMECompositionString::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xafef390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionString.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::IMECompositionString::*)()>(&::UnityEngine::InputSystem::LowLevel::IMECompositionString::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafef480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionString.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>* (::UnityEngine::InputSystem::LowLevel::IMECompositionString::*)()>(&::UnityEngine::InputSystem::LowLevel::IMECompositionString::GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xafef498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionString.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::LowLevel::IMECompositionString::*)()>(&::UnityEngine::InputSystem::LowLevel::IMECompositionString::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xafef550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::LowLevel::IMECompositionString::__cordl_internal_get_size()  {
return this->___size;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::IMECompositionString::__cordl_internal_get_size() const {
return this->___size;
}
constexpr void UnityEngine::InputSystem::LowLevel::IMECompositionString::__cordl_internal_set_size(int32_t  value)  {
this->___size = value;
}
constexpr ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::IMECompositionString::__cordl_internal_get_buffer()  {
return this->___buffer;
}
constexpr ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::IMECompositionString::__cordl_internal_get_buffer() const {
return this->___buffer;
}
constexpr void UnityEngine::InputSystem::LowLevel::IMECompositionString::__cordl_internal_set_buffer(::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer  value)  {
this->___buffer = value;
}
inline int32_t UnityEngine::InputSystem::LowLevel::IMECompositionString::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline char16_t UnityEngine::InputSystem::LowLevel::IMECompositionString::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::LowLevel::IMECompositionString::_ctor(::StringW  characters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, characters);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::IMECompositionString::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* UnityEngine::InputSystem::LowLevel::IMECompositionString::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<char16_t>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::IMECompositionString::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IMECompositionString>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr  UnityEngine::InputSystem::LowLevel::IMECompositionString::operator ::System::Collections::Generic::IEnumerable_1<char16_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* UnityEngine::InputSystem::LowLevel::IMECompositionString::i___System__Collections__Generic__IEnumerable_1_char16_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::LowLevel::IMECompositionString::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::LowLevel::IMECompositionString::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString::IMECompositionString(int32_t  size, ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer  buffer) noexcept  {
this->size = size;
this->buffer = buffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString::IMECompositionString()   {
}
