#pragma once
// IWYU pragma private; include "Fusion/SceneRef.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::SceneRef.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (*)()>(&::Fusion::SceneRef::get_None)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa3fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SceneRef::*)()>(&::Fusion::SceneRef::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa3fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.get_IsIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SceneRef::*)()>(&::Fusion::SceneRef::get_IsIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa3fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_IsIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.get_AsIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SceneRef::*)()>(&::Fusion::SceneRef::get_AsIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fa3fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_AsIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.get_AsPathHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::SceneRef::*)()>(&::Fusion::SceneRef::get_AsPathHash)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fa4070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_AsPathHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.IsPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SceneRef::*)(::StringW)>(&::Fusion::SceneRef::IsPath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fa40f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"IsPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.FromIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (*)(int32_t)>(&::Fusion::SceneRef::FromIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fa4194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"FromIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.FromPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (*)(::StringW)>(&::Fusion::SceneRef::FromPath)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fa4124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"FromPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.FromRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (*)(uint32_t)>(&::Fusion::SceneRef::FromRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa41f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"FromRaw", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SceneRef::*)(::System::Object*)>(&::Fusion::SceneRef::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa41f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SceneRef>(),
                    {::i2c::class_of<::Fusion::SceneRef>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SceneRef::*)(::Fusion::SceneRef)>(&::Fusion::SceneRef::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa4270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SceneRef::*)()>(&::Fusion::SceneRef::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SceneRef>(),
                    {::i2c::class_of<::Fusion::SceneRef>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SceneRef::*)()>(&::Fusion::SceneRef::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SceneRef>(),
                    {::i2c::class_of<::Fusion::SceneRef>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SceneRef::*)(bool, bool)>(&::Fusion::SceneRef::ToString)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5fa4294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"ToString", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (*)(::StringW)>(&::Fusion::SceneRef::Parse)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5fa4448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::SceneRef, ::Fusion::SceneRef)>(&::Fusion::SceneRef::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SceneRef.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::SceneRef, ::Fusion::SceneRef)>(&::Fusion::SceneRef::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa494c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Fusion::SceneRef::__cordl_internal_get_RawValue()  {
return this->___RawValue;
}
constexpr uint32_t const& Fusion::SceneRef::__cordl_internal_get_RawValue() const {
return this->___RawValue;
}
constexpr void Fusion::SceneRef::__cordl_internal_set_RawValue(uint32_t  value)  {
this->___RawValue = value;
}
inline ::Fusion::SceneRef Fusion::SceneRef::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(nullptr, ___internal_method);
}
inline bool Fusion::SceneRef::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::SceneRef::get_IsIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_IsIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::SceneRef::get_AsIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_AsIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t Fusion::SceneRef::get_AsPathHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"get_AsPathHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool Fusion::SceneRef::IsPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"IsPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, path);
}
inline ::Fusion::SceneRef Fusion::SceneRef::FromIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"FromIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(nullptr, ___internal_method, index);
}
inline ::Fusion::SceneRef Fusion::SceneRef::FromPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"FromPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(nullptr, ___internal_method, path);
}
inline ::Fusion::SceneRef Fusion::SceneRef::FromRaw(uint32_t  rawValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"FromRaw", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(nullptr, ___internal_method, rawValue);
}
inline bool Fusion::SceneRef::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SceneRef>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Fusion::SceneRef::Equals(::Fusion::SceneRef  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Fusion::SceneRef::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SceneRef>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::SceneRef::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SceneRef>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Fusion::SceneRef::ToString(bool  brackets, bool  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"ToString", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, brackets, prefix);
}
inline ::Fusion::SceneRef Fusion::SceneRef::Parse(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(nullptr, ___internal_method, str);
}
inline bool Fusion::SceneRef::op_Equality(::Fusion::SceneRef  a, ::Fusion::SceneRef  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::SceneRef::op_Inequality(::Fusion::SceneRef  a, ::Fusion::SceneRef  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneRef>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::SceneRef::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::SceneRef::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::SceneRef>"
constexpr  Fusion::SceneRef::operator ::System::IEquatable_1<::Fusion::SceneRef>*()  {
return static_cast<::System::IEquatable_1<::Fusion::SceneRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::SceneRef>"
constexpr ::System::IEquatable_1<::Fusion::SceneRef>* Fusion::SceneRef::i___System__IEquatable_1___Fusion__SceneRef_()  {
return static_cast<::System::IEquatable_1<::Fusion::SceneRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "RawValue", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SceneRef::SceneRef(uint32_t  RawValue) noexcept  {
this->RawValue = RawValue;
}
// Ctor Parameters []
constexpr ::Fusion::SceneRef::SceneRef()   {
}
