#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI_JStringBinding.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__AndroidJNI_JStringBinding_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AndroidJNI_JStringBinding.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AndroidJNI_JStringBinding::*)()>(&::GlobalNamespace::AndroidJNI_JStringBinding::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb528694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AndroidJNI_JStringBinding>(),
                    {::i2c::class_of<::GlobalNamespace::AndroidJNI_JStringBinding>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AndroidJNI_JStringBinding.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AndroidJNI_JStringBinding::*)()>(&::GlobalNamespace::AndroidJNI_JStringBinding::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb52d7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AndroidJNI_JStringBinding>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::AndroidJNI_JStringBinding::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AndroidJNI_JStringBinding>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::AndroidJNI_JStringBinding::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AndroidJNI_JStringBinding>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AndroidJNI_JStringBinding::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AndroidJNI_JStringBinding::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "javaString", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chars", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ownsRef", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AndroidJNI_JStringBinding::AndroidJNI_JStringBinding(::System::IntPtr  javaString, ::System::IntPtr  chars, int32_t  length, bool  ownsRef) noexcept  {
this->javaString = javaString;
this->chars = chars;
this->length = length;
this->ownsRef = ownsRef;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AndroidJNI_JStringBinding::AndroidJNI_JStringBinding()   {
}
