#pragma once
// IWYU pragma private; include "BoingKit/Version.hpp"
#include "BoingKit/zzzz__Version_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BoingKit::Version.get_MajorVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BoingKit::Version::*)()>(&::BoingKit::Version::get_MajorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e165f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"get_MajorVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.get_MinorVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BoingKit::Version::*)()>(&::BoingKit::Version::get_MinorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e165fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"get_MinorVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.get_Revision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BoingKit::Version::*)()>(&::BoingKit::Version::get_Revision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e16604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"get_Revision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BoingKit::Version::*)()>(&::BoingKit::Version::ToString)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5e1660c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::Version>(),
                    {::i2c::class_of<::BoingKit::Version>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::Version::*)()>(&::BoingKit::Version::IsValid)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e16790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Version::*)(int32_t, int32_t, int32_t)>(&::BoingKit::Version::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e165e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BoingKit::Version, ::BoingKit::Version)>(&::BoingKit::Version::op_Equality)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e16824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"op_Equality", {}, {::i2c::type_of<::BoingKit::Version>(), ::i2c::type_of<::BoingKit::Version>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BoingKit::Version, ::BoingKit::Version)>(&::BoingKit::Version::op_Inequality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e16924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"op_Inequality", {}, {::i2c::type_of<::BoingKit::Version>(), ::i2c::type_of<::BoingKit::Version>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::Version::*)(::System::Object*)>(&::BoingKit::Version::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e169ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::Version>(),
                    {::i2c::class_of<::BoingKit::Version>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::Version::*)(::BoingKit::Version)>(&::BoingKit::Version::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e16a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"Equals", {}, {::i2c::type_of<::BoingKit::Version>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Version.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BoingKit::Version::*)()>(&::BoingKit::Version::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e16b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::Version>(),
                    {::i2c::class_of<::BoingKit::Version>(), 2}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::Version::setStaticF_Invalid(::BoingKit::Version  value)  {
::cordl_internals::setStaticField<::BoingKit::Version, "Invalid", ::BoingKit::Version>(std::forward<::BoingKit::Version>(value));
}
inline ::BoingKit::Version BoingKit::Version::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::BoingKit::Version, "Invalid", ::BoingKit::Version>();
}
inline void BoingKit::Version::setStaticF_FirstTracked(::BoingKit::Version  value)  {
::cordl_internals::setStaticField<::BoingKit::Version, "FirstTracked", ::BoingKit::Version>(std::forward<::BoingKit::Version>(value));
}
inline ::BoingKit::Version BoingKit::Version::getStaticF_FirstTracked()  {
return ::cordl_internals::getStaticField<::BoingKit::Version, "FirstTracked", ::BoingKit::Version>();
}
inline void BoingKit::Version::setStaticF_LastUntracked(::BoingKit::Version  value)  {
::cordl_internals::setStaticField<::BoingKit::Version, "LastUntracked", ::BoingKit::Version>(std::forward<::BoingKit::Version>(value));
}
inline ::BoingKit::Version BoingKit::Version::getStaticF_LastUntracked()  {
return ::cordl_internals::getStaticField<::BoingKit::Version, "LastUntracked", ::BoingKit::Version>();
}
inline int32_t BoingKit::Version::get_MajorVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"get_MajorVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t BoingKit::Version::get_MinorVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"get_MinorVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t BoingKit::Version::get_Revision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"get_Revision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW BoingKit::Version::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::Version>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool BoingKit::Version::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void BoingKit::Version::_ctor(int32_t  majorVersion, int32_t  minorVersion, int32_t  revision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, majorVersion, minorVersion, revision);
}
inline bool BoingKit::Version::op_Equality(::BoingKit::Version  lhs, ::BoingKit::Version  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"op_Equality", {}, {::i2c::type_of<::BoingKit::Version>(), ::i2c::type_of<::BoingKit::Version>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool BoingKit::Version::op_Inequality(::BoingKit::Version  lhs, ::BoingKit::Version  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"op_Inequality", {}, {::i2c::type_of<::BoingKit::Version>(), ::i2c::type_of<::BoingKit::Version>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool BoingKit::Version::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::Version>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool BoingKit::Version::Equals(::BoingKit::Version  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Version>(),
                        {"Equals", {}, {::i2c::type_of<::BoingKit::Version>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t BoingKit::Version::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::Version>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::BoingKit::Version>"
constexpr  BoingKit::Version::operator ::System::IEquatable_1<::BoingKit::Version>*()  {
return static_cast<::System::IEquatable_1<::BoingKit::Version>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::BoingKit::Version>"
constexpr ::System::IEquatable_1<::BoingKit::Version>* BoingKit::Version::i___System__IEquatable_1___BoingKit__Version_()  {
return static_cast<::System::IEquatable_1<::BoingKit::Version>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_MajorVersion_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MinorVersion_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Revision_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::Version::Version(int32_t  _MajorVersion_k__BackingField, int32_t  _MinorVersion_k__BackingField, int32_t  _Revision_k__BackingField) noexcept  {
this->_MajorVersion_k__BackingField = _MajorVersion_k__BackingField;
this->_MinorVersion_k__BackingField = _MinorVersion_k__BackingField;
this->_Revision_k__BackingField = _Revision_k__BackingField;
}
// Ctor Parameters []
constexpr ::BoingKit::Version::Version()   {
}
