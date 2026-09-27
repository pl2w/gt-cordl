#pragma once
// IWYU pragma private; include "Pathfinding/Util/Guid.hpp"
#include "Pathfinding/Util/zzzz__Guid_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::Guid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Guid::*)(::ArrayW<uint8_t>)>(&::Pathfinding::Util::Guid::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5edf61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::Guid::*)(::StringW)>(&::Pathfinding::Util::Guid::_ctor)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5edf768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::Guid (*)(::StringW)>(&::Pathfinding::Util::Guid::Parse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5edfa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.SwapEndianness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::Pathfinding::Util::Guid::SwapEndianness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edf760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"SwapEndianness", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Util::Guid::*)()>(&::Pathfinding::Util::Guid::ToByteArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5edfa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"ToByteArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.NewGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::Guid (*)()>(&::Pathfinding::Util::Guid::NewGuid)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5edfb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"NewGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Util::Guid, ::Pathfinding::Util::Guid)>(&::Pathfinding::Util::Guid::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5edfc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Pathfinding::Util::Guid>(), ::i2c::type_of<::Pathfinding::Util::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Util::Guid, ::Pathfinding::Util::Guid)>(&::Pathfinding::Util::Guid::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5edfc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Pathfinding::Util::Guid>(), ::i2c::type_of<::Pathfinding::Util::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::Guid::*)(::System::Object*)>(&::Pathfinding::Util::Guid::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5edfc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::Guid>(),
                    {::i2c::class_of<::Pathfinding::Util::Guid>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Util::Guid::*)()>(&::Pathfinding::Util::Guid::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5edfcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::Guid>(),
                    {::i2c::class_of<::Pathfinding::Util::Guid>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::Guid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Util::Guid::*)()>(&::Pathfinding::Util::Guid::ToString)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5edfd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::Guid>(),
                    {::i2c::class_of<::Pathfinding::Util::Guid>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::Util::Guid::setStaticF_zero(::Pathfinding::Util::Guid  value)  {
::cordl_internals::setStaticField<::Pathfinding::Util::Guid, "zero", ::Pathfinding::Util::Guid>(std::forward<::Pathfinding::Util::Guid>(value));
}
inline ::Pathfinding::Util::Guid Pathfinding::Util::Guid::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::Pathfinding::Util::Guid, "zero", ::Pathfinding::Util::Guid>();
}
inline void Pathfinding::Util::Guid::setStaticF_zeroString(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "zeroString", ::Pathfinding::Util::Guid>(std::forward<::StringW>(value));
}
inline ::StringW Pathfinding::Util::Guid::getStaticF_zeroString()  {
return ::cordl_internals::getStaticField<::StringW, "zeroString", ::Pathfinding::Util::Guid>();
}
inline void Pathfinding::Util::Guid::setStaticF_random(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "random", ::Pathfinding::Util::Guid>(std::forward<::System::Random*>(value));
}
inline ::System::Random* Pathfinding::Util::Guid::getStaticF_random()  {
return ::cordl_internals::getStaticField<::System::Random*, "random", ::Pathfinding::Util::Guid>();
}
inline void Pathfinding::Util::Guid::setStaticF_text(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "text", ::Pathfinding::Util::Guid>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* Pathfinding::Util::Guid::getStaticF_text()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "text", ::Pathfinding::Util::Guid>();
}
inline void Pathfinding::Util::Guid::_ctor(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bytes);
}
inline void Pathfinding::Util::Guid::_ctor(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, str);
}
inline ::Pathfinding::Util::Guid Pathfinding::Util::Guid::Parse(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::Guid>(nullptr, ___internal_method, input);
}
inline uint64_t Pathfinding::Util::Guid::SwapEndianness(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"SwapEndianness", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Pathfinding::Util::Guid::ToByteArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"ToByteArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline ::Pathfinding::Util::Guid Pathfinding::Util::Guid::NewGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"NewGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::Guid>(nullptr, ___internal_method);
}
inline bool Pathfinding::Util::Guid::op_Equality(::Pathfinding::Util::Guid  lhs, ::Pathfinding::Util::Guid  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Pathfinding::Util::Guid>(), ::i2c::type_of<::Pathfinding::Util::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Pathfinding::Util::Guid::op_Inequality(::Pathfinding::Util::Guid  lhs, ::Pathfinding::Util::Guid  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::Guid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Pathfinding::Util::Guid>(), ::i2c::type_of<::Pathfinding::Util::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Pathfinding::Util::Guid::Equals(::System::Object*  _rhs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::Guid>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, _rhs);
}
inline int32_t Pathfinding::Util::Guid::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::Guid>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Pathfinding::Util::Guid::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::Guid>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_a", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Util::Guid::Guid(uint64_t  _a, uint64_t  _b) noexcept  {
this->_a = _a;
this->_b = _b;
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::Guid::Guid()   {
}
