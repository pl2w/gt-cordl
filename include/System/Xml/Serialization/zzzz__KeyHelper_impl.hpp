#pragma once
// IWYU pragma private; include "System/Xml/Serialization/KeyHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__KeyHelper_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::KeyHelper.AddField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, ::StringW)>(&::System::Xml::Serialization::KeyHelper::AddField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xabff220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::KeyHelper.AddField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, ::StringW, ::StringW)>(&::System::Xml::Serialization::KeyHelper::AddField)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xabff228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::KeyHelper.AddField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, bool)>(&::System::Xml::Serialization::KeyHelper::AddField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xabff30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::KeyHelper.AddField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, bool, bool)>(&::System::Xml::Serialization::KeyHelper::AddField)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xabff314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::KeyHelper.AddField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t, int32_t)>(&::System::Xml::Serialization::KeyHelper::AddField)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xabff364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::KeyHelper.AddField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, ::System::Type*)>(&::System::Xml::Serialization::KeyHelper::AddField)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xabff41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::KeyHelper::AddField(::System::Text::StringBuilder*  sb, int32_t  n, ::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, val);
}
inline void System::Xml::Serialization::KeyHelper::AddField(::System::Text::StringBuilder*  sb, int32_t  n, ::StringW  val, ::StringW  def)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, val, def);
}
inline void System::Xml::Serialization::KeyHelper::AddField(::System::Text::StringBuilder*  sb, int32_t  n, bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, val);
}
inline void System::Xml::Serialization::KeyHelper::AddField(::System::Text::StringBuilder*  sb, int32_t  n, bool  val, bool  def)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, val, def);
}
inline void System::Xml::Serialization::KeyHelper::AddField(::System::Text::StringBuilder*  sb, int32_t  n, int32_t  val, int32_t  def)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, val, def);
}
inline void System::Xml::Serialization::KeyHelper::AddField(::System::Text::StringBuilder*  sb, int32_t  n, ::System::Type*  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::KeyHelper*>(),
                        {"AddField", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, val);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::KeyHelper::KeyHelper()   {
}
