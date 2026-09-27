#pragma once
// IWYU pragma private; include "Photon/Voice/DeviceInfo.hpp"
#include "Photon/Voice/zzzz__DeviceInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::DeviceInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(bool, int32_t, ::StringW, ::StringW)>(&::Photon::Voice::DeviceInfo::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa745a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(int32_t, ::StringW)>(&::Photon::Voice::DeviceInfo::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa745ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(::StringW, ::StringW)>(&::Photon::Voice::DeviceInfo::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa745b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(::StringW)>(&::Photon::Voice::DeviceInfo::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa745c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::DeviceInfo::*)()>(&::Photon::Voice::DeviceInfo::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_IsDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.set_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(bool)>(&::Photon::Voice::DeviceInfo::set_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_IsDefault", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.get_IDInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::DeviceInfo::*)()>(&::Photon::Voice::DeviceInfo::get_IDInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_IDInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.set_IDInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(int32_t)>(&::Photon::Voice::DeviceInfo::set_IDInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_IDInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.get_IDString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::DeviceInfo::*)()>(&::Photon::Voice::DeviceInfo::get_IDString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_IDString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.set_IDString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(::StringW)>(&::Photon::Voice::DeviceInfo::set_IDString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_IDString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::DeviceInfo::*)()>(&::Photon::Voice::DeviceInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::DeviceInfo::*)(::StringW)>(&::Photon::Voice::DeviceInfo::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Voice::DeviceInfo, ::Photon::Voice::DeviceInfo)>(&::Photon::Voice::DeviceInfo::op_Equality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa745ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"op_Equality", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>(), ::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Voice::DeviceInfo, ::Photon::Voice::DeviceInfo)>(&::Photon::Voice::DeviceInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa745de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>(), ::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::DeviceInfo::*)(::System::Object*)>(&::Photon::Voice::DeviceInfo::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa745d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                    {::i2c::class_of<::Photon::Voice::DeviceInfo>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::DeviceInfo::*)()>(&::Photon::Voice::DeviceInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa745e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                    {::i2c::class_of<::Photon::Voice::DeviceInfo>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::DeviceInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::DeviceInfo::*)()>(&::Photon::Voice::DeviceInfo::ToString)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa745ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                    {::i2c::class_of<::Photon::Voice::DeviceInfo>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::DeviceInfo::setStaticF_Default(::Photon::Voice::DeviceInfo  value)  {
::cordl_internals::setStaticField<::Photon::Voice::DeviceInfo, "Default", ::Photon::Voice::DeviceInfo>(std::forward<::Photon::Voice::DeviceInfo>(value));
}
inline ::Photon::Voice::DeviceInfo Photon::Voice::DeviceInfo::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::Photon::Voice::DeviceInfo, "Default", ::Photon::Voice::DeviceInfo>();
}
inline void Photon::Voice::DeviceInfo::_ctor(bool  isDefault, int32_t  idInt, ::StringW  idString, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isDefault, idInt, idString, name);
}
inline void Photon::Voice::DeviceInfo::_ctor(int32_t  id, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, name);
}
inline void Photon::Voice::DeviceInfo::_ctor(::StringW  id, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, name);
}
inline void Photon::Voice::DeviceInfo::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline bool Photon::Voice::DeviceInfo::get_IsDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_IsDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Photon::Voice::DeviceInfo::set_IsDefault(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_IsDefault", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::DeviceInfo::get_IDInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_IDInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::DeviceInfo::set_IDInt(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_IDInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Photon::Voice::DeviceInfo::get_IDString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_IDString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Photon::Voice::DeviceInfo::set_IDString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_IDString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Photon::Voice::DeviceInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Photon::Voice::DeviceInfo::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Photon::Voice::DeviceInfo::op_Equality(::Photon::Voice::DeviceInfo  d1, ::Photon::Voice::DeviceInfo  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"op_Equality", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>(), ::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool Photon::Voice::DeviceInfo::op_Inequality(::Photon::Voice::DeviceInfo  d1, ::Photon::Voice::DeviceInfo  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::DeviceInfo>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>(), ::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool Photon::Voice::DeviceInfo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceInfo>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Photon::Voice::DeviceInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceInfo>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Photon::Voice::DeviceInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::DeviceInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_IsDefault_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IDInt_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IDString_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useStringID", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::DeviceInfo::DeviceInfo(bool  _IsDefault_k__BackingField, int32_t  _IDInt_k__BackingField, ::StringW  _IDString_k__BackingField, ::StringW  _Name_k__BackingField, bool  useStringID) noexcept  {
this->_IsDefault_k__BackingField = _IsDefault_k__BackingField;
this->_IDInt_k__BackingField = _IDInt_k__BackingField;
this->_IDString_k__BackingField = _IDString_k__BackingField;
this->_Name_k__BackingField = _Name_k__BackingField;
this->useStringID = useStringID;
}
// Ctor Parameters []
constexpr ::Photon::Voice::DeviceInfo::DeviceInfo()   {
}
