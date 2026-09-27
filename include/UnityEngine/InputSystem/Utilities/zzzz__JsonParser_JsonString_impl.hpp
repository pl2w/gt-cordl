#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser_JsonString.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonString_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonString.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JsonParser_JsonString::*)()>(&::GlobalNamespace::JsonParser_JsonString::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaf3dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                    {::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonString.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JsonParser_JsonString::*)(::GlobalNamespace::JsonParser_JsonString)>(&::GlobalNamespace::JsonParser_JsonString::Equals)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xaf3dd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonString.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JsonParser_JsonString::*)(::System::Object*)>(&::GlobalNamespace::JsonParser_JsonString::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf3de98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                    {::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonString.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JsonParser_JsonString::*)()>(&::GlobalNamespace::JsonParser_JsonString::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf3df28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                    {::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonString.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::JsonParser_JsonString, ::GlobalNamespace::JsonParser_JsonString)>(&::GlobalNamespace::JsonParser_JsonString::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaf3df80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonString.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::JsonParser_JsonString, ::GlobalNamespace::JsonParser_JsonString)>(&::GlobalNamespace::JsonParser_JsonString::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf3dfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonParser_JsonString.op_Implicit___GlobalNamespace__JsonParser_JsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonParser_JsonString (*)(::StringW)>(&::GlobalNamespace::JsonParser_JsonString::op_Implicit___GlobalNamespace__JsonParser_JsonString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf3dfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::JsonParser_JsonString::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::JsonParser_JsonString::Equals(::GlobalNamespace::JsonParser_JsonString  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::JsonParser_JsonString::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::JsonParser_JsonString::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::JsonParser_JsonString::op_Equality(::GlobalNamespace::JsonParser_JsonString  left, ::GlobalNamespace::JsonParser_JsonString  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool GlobalNamespace::JsonParser_JsonString::op_Inequality(::GlobalNamespace::JsonParser_JsonString  left, ::GlobalNamespace::JsonParser_JsonString  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>(), ::i2c::type_of<::GlobalNamespace::JsonParser_JsonString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::GlobalNamespace::JsonParser_JsonString GlobalNamespace::JsonParser_JsonString::op_Implicit___GlobalNamespace__JsonParser_JsonString(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonParser_JsonString>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonParser_JsonString>(nullptr, ___internal_method, str);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>"
constexpr  GlobalNamespace::JsonParser_JsonString::operator ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>"
constexpr ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>* GlobalNamespace::JsonParser_JsonString::i___System__IEquatable_1___GlobalNamespace__JsonParser_JsonString_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "text", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonParser_JsonString::JsonParser_JsonString(::UnityEngine::InputSystem::Utilities::Substring  text, bool  hasEscapes) noexcept  {
this->text = text;
this->hasEscapes = hasEscapes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonParser_JsonString::JsonParser_JsonString()   {
}
