#pragma once
// IWYU pragma private; include "UnityEngine/TextAsset.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__TextAsset_CreateOptions_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextAsset.get_bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_bytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5e5df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"get_bytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.Internal_CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextAsset*, ::StringW)>(&::UnityEngine::TextAsset::Internal_CreateInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb5e5eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"Internal_CreateInstance", {}, {::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::GetDataPtr)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5e6060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::GetDataSize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5e6114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_text)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5e61c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"get_text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5e6480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::TextAsset*>(),
                    {::i2c::class_of<::UnityEngine::TextAsset*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5e6484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAsset::*)(::GlobalNamespace::TextAsset_CreateOptions, ::StringW)>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb5e6490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TextAsset_CreateOptions>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.DecodeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::UnityEngine::TextAsset::DecodeString)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xb5e6204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"DecodeString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_bytes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr)>(&::UnityEngine::TextAsset::get_bytes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5e5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"get_bytes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.Internal_CreateInstance_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextAsset*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::TextAsset::Internal_CreateInstance_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5e601c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"Internal_CreateInstance_Injected", {}, {::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataPtr_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TextAsset::GetDataPtr_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5e60d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataPtr_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataSize_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::TextAsset::GetDataSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5e618c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataSize_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> UnityEngine::TextAsset::get_bytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"get_bytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void UnityEngine::TextAsset::Internal_CreateInstance(/* [Writable] */ ::UnityEngine::TextAsset*  self, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"Internal_CreateInstance", {}, {::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, text);
}
inline ::System::IntPtr UnityEngine::TextAsset::GetDataPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int64_t UnityEngine::TextAsset::GetDataSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::get_text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"get_text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::TextAsset*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextAsset::_ctor(::GlobalNamespace::TextAsset_CreateOptions  options, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TextAsset_CreateOptions>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, text);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::TextAsset::GetData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::TextAsset*>(),
                    {"GetData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::DecodeString(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"DecodeString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::ArrayW<uint8_t> UnityEngine::TextAsset::get_bytes_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"get_bytes_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TextAsset::Internal_CreateInstance_Injected(/* [Writable] */ ::UnityEngine::TextAsset*  self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"Internal_CreateInstance_Injected", {}, {::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, text);
}
inline ::System::IntPtr UnityEngine::TextAsset::GetDataPtr_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataPtr_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline int64_t UnityEngine::TextAsset::GetDataSize_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextAsset*>(),
                        {"GetDataSize_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAsset*>());
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor(::GlobalNamespace::TextAsset_CreateOptions  options, ::StringW  text)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAsset*>(options, text));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset::TextAsset()   {
}
inline void UnityEngine::TextAsset_EncodingUtility::setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>>, "encodingLookup", ::UnityEngine::TextAsset_EncodingUtility*>(std::forward<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>>>(value));
}
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>> UnityEngine::TextAsset_EncodingUtility::getStaticF_encodingLookup()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>>, "encodingLookup", ::UnityEngine::TextAsset_EncodingUtility*>();
}
inline void UnityEngine::TextAsset_EncodingUtility::setStaticF_targetEncoding(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "targetEncoding", ::UnityEngine::TextAsset_EncodingUtility*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* UnityEngine::TextAsset_EncodingUtility::getStaticF_targetEncoding()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "targetEncoding", ::UnityEngine::TextAsset_EncodingUtility*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset_EncodingUtility::TextAsset_EncodingUtility()   {
}
