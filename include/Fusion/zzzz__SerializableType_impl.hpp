#pragma once
// IWYU pragma private; include "Fusion/SerializableType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SerializableType_def.hpp"
#include "Fusion/zzzz__SerializableType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::SerializableType.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::SerializableType::*)()>(&::Fusion::SerializableType::get_Value)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5f3d9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SerializableType.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SerializableType::*)(::Fusion::SerializableType)>(&::Fusion::SerializableType::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3ddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::SerializableType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SerializableType.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SerializableType::*)(::System::Object*)>(&::Fusion::SerializableType::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f3ddb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SerializableType>(),
                    {::i2c::class_of<::Fusion::SerializableType>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SerializableType.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SerializableType::*)()>(&::Fusion::SerializableType::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3de4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SerializableType>(),
                    {::i2c::class_of<::Fusion::SerializableType>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SerializableType.GetShortAssemblyQualifiedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::Fusion::SerializableType::GetShortAssemblyQualifiedName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f3de64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"GetShortAssemblyQualifiedName", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SerializableType.GetShortAssemblyQualifiedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Fusion::SerializableType::GetShortAssemblyQualifiedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f3dfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"GetShortAssemblyQualifiedName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::SerializableType::setStaticF_s_shortNameRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_shortNameRegex", ::Fusion::SerializableType>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Fusion::SerializableType::getStaticF_s_shortNameRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_shortNameRegex", ::Fusion::SerializableType>();
}
inline ::System::Type* Fusion::SerializableType::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline bool Fusion::SerializableType::Equals(::Fusion::SerializableType  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::SerializableType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::SerializableType::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SerializableType>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::SerializableType::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SerializableType>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::SerializableType::GetShortAssemblyQualifiedName(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"GetShortAssemblyQualifiedName", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW Fusion::SerializableType::GetShortAssemblyQualifiedName(::StringW  assemblyQualifiedName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SerializableType>(),
                        {"GetShortAssemblyQualifiedName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, assemblyQualifiedName);
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::SerializableType>"
constexpr  Fusion::SerializableType::operator ::System::IEquatable_1<::Fusion::SerializableType>*()  {
return static_cast<::System::IEquatable_1<::Fusion::SerializableType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::SerializableType>"
constexpr ::System::IEquatable_1<::Fusion::SerializableType>* Fusion::SerializableType::i___System__IEquatable_1___Fusion__SerializableType_()  {
return static_cast<::System::IEquatable_1<::Fusion::SerializableType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "AssemblyQualifiedName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SerializableType::SerializableType(::StringW  AssemblyQualifiedName) noexcept  {
this->AssemblyQualifiedName = AssemblyQualifiedName;
}
// Ctor Parameters []
constexpr ::Fusion::SerializableType::SerializableType()   {
}
inline void Fusion::SerializableType_Cache::setStaticF_Types(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "Types", ::Fusion::SerializableType_Cache*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Fusion::SerializableType_Cache::getStaticF_Types()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "Types", ::Fusion::SerializableType_Cache*>();
}
// Ctor Parameters []
constexpr ::Fusion::SerializableType_Cache::SerializableType_Cache()   {
}
