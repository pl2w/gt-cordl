#pragma once
// IWYU pragma private; include "Modio/Images/ImageReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::Images::ImageReference.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Images::ImageReference::*)()>(&::Modio::Images::ImageReference::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa0408ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference.get_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Images::ImageReference::*)()>(&::Modio::Images::ImageReference::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0408cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"get_Url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference.set_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Images::ImageReference::*)(::StringW)>(&::Modio::Images::ImageReference::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0408d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Images::ImageReference::*)(::StringW)>(&::Modio::Images::ImageReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0408dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Images::ImageReference, ::Modio::Images::ImageReference)>(&::Modio::Images::ImageReference::op_Equality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0408e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"op_Equality", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Images::ImageReference, ::Modio::Images::ImageReference)>(&::Modio::Images::ImageReference::op_Inequality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa0408f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Images::ImageReference::*)(::Modio::Images::ImageReference)>(&::Modio::Images::ImageReference::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa0408ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Images::ImageReference::*)(::System::Object*)>(&::Modio::Images::ImageReference::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa040914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Images::ImageReference>(),
                    {::i2c::class_of<::Modio::Images::ImageReference>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Images::ImageReference::*)()>(&::Modio::Images::ImageReference::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa040994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Images::ImageReference>(),
                    {::i2c::class_of<::Modio::Images::ImageReference>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Modio::Images::ImageReference::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW Modio::Images::ImageReference::get_Url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"get_Url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Modio::Images::ImageReference::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Modio::Images::ImageReference::_ctor(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, url);
}
inline bool Modio::Images::ImageReference::op_Equality(::Modio::Images::ImageReference  left, ::Modio::Images::ImageReference  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"op_Equality", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Modio::Images::ImageReference::op_Inequality(::Modio::Images::ImageReference  left, ::Modio::Images::ImageReference  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Modio::Images::ImageReference::Equals(::Modio::Images::ImageReference  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Modio::Images::ImageReference::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::ImageReference>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Modio::Images::ImageReference::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::ImageReference>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Modio::Images::ImageReference>"
constexpr  Modio::Images::ImageReference::operator ::System::IEquatable_1<::Modio::Images::ImageReference>*()  {
return static_cast<::System::IEquatable_1<::Modio::Images::ImageReference>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Modio::Images::ImageReference>"
constexpr ::System::IEquatable_1<::Modio::Images::ImageReference>* Modio::Images::ImageReference::i___System__IEquatable_1___Modio__Images__ImageReference_()  {
return static_cast<::System::IEquatable_1<::Modio::Images::ImageReference>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Url_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Images::ImageReference::ImageReference(::StringW  _Url_k__BackingField) noexcept  {
this->_Url_k__BackingField = _Url_k__BackingField;
}
// Ctor Parameters []
constexpr ::Modio::Images::ImageReference::ImageReference()   {
}
//  Writing Method size for method: ::Modio::Images::ImageReference_UrlEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Images::ImageReference_UrlEqualityComparer::*)(::Modio::Images::ImageReference, ::Modio::Images::ImageReference)>(&::Modio::Images::ImageReference_UrlEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa0409ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference_UrlEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference_UrlEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Images::ImageReference_UrlEqualityComparer::*)(::Modio::Images::ImageReference)>(&::Modio::Images::ImageReference_UrlEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa0409bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference_UrlEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageReference_UrlEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Images::ImageReference_UrlEqualityComparer::*)()>(&::Modio::Images::ImageReference_UrlEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0409dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference_UrlEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Modio::Images::ImageReference_UrlEqualityComparer::Equals(::Modio::Images::ImageReference  x, ::Modio::Images::ImageReference  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference_UrlEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Modio::Images::ImageReference_UrlEqualityComparer::GetHashCode(::Modio::Images::ImageReference  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference_UrlEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Modio::Images::ImageReference_UrlEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageReference_UrlEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Images::ImageReference_UrlEqualityComparer* Modio::Images::ImageReference_UrlEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Images::ImageReference_UrlEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>"
constexpr  Modio::Images::ImageReference_UrlEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>* Modio::Images::ImageReference_UrlEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Modio__Images__ImageReference_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Modio::Images::ImageReference>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Images::ImageReference_UrlEqualityComparer::ImageReference_UrlEqualityComparer()   {
}
