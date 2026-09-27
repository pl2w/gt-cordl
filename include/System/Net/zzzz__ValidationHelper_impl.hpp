#pragma once
// IWYU pragma private; include "System/Net/ValidationHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ValidationHelper_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::ValidationHelper.MakeEmptyArrayNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>)>(&::System::Net::ValidationHelper::MakeEmptyArrayNull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac54f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"MakeEmptyArrayNull", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.MakeStringNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::ValidationHelper::MakeStringNull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac54d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"MakeStringNull", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ExceptionMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception*)>(&::System::Net::ValidationHelper::ExceptionMessage)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xac5a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ExceptionMessage", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Net::ValidationHelper::ToString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xac569c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.HashString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Net::ValidationHelper::HashString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac5a54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"HashString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.IsInvalidHttpString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::ValidationHelper::IsInvalidHttpString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac5a5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"IsInvalidHttpString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.IsBlankString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::ValidationHelper::IsBlankString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac5a674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"IsBlankString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ValidateTcpPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Net::ValidationHelper::ValidateTcpPort)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac5a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ValidateTcpPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ValidateRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::System::Net::ValidationHelper::ValidateRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac5a69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ValidateRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ValidateSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>)>(&::System::Net::ValidationHelper::ValidateSegment)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xac5a6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ValidateSegment", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::ValidationHelper::setStaticF_EmptyArray(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "EmptyArray", ::System::Net::ValidationHelper*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::ValidationHelper::getStaticF_EmptyArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "EmptyArray", ::System::Net::ValidationHelper*>();
}
inline void System::Net::ValidationHelper::setStaticF_InvalidMethodChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidMethodChars", ::System::Net::ValidationHelper*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::ValidationHelper::getStaticF_InvalidMethodChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidMethodChars", ::System::Net::ValidationHelper*>();
}
inline void System::Net::ValidationHelper::setStaticF_InvalidParamChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidParamChars", ::System::Net::ValidationHelper*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::ValidationHelper::getStaticF_InvalidParamChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidParamChars", ::System::Net::ValidationHelper*>();
}
inline ::ArrayW<::StringW> System::Net::ValidationHelper::MakeEmptyArrayNull(::ArrayW<::StringW>  stringArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"MakeEmptyArrayNull", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, stringArray);
}
inline ::StringW System::Net::ValidationHelper::MakeStringNull(::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"MakeStringNull", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stringValue);
}
inline ::StringW System::Net::ValidationHelper::ExceptionMessage(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ExceptionMessage", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, exception);
}
inline ::StringW System::Net::ValidationHelper::ToString(::System::Object*  objectValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, objectValue);
}
inline ::StringW System::Net::ValidationHelper::HashString(::System::Object*  objectValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"HashString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, objectValue);
}
inline bool System::Net::ValidationHelper::IsInvalidHttpString(::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"IsInvalidHttpString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringValue);
}
inline bool System::Net::ValidationHelper::IsBlankString(::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"IsBlankString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringValue);
}
inline bool System::Net::ValidationHelper::ValidateTcpPort(int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ValidateTcpPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, port);
}
inline bool System::Net::ValidationHelper::ValidateRange(int32_t  actual, int32_t  fromAllowed, int32_t  toAllowed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ValidateRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actual, fromAllowed, toAllowed);
}
inline void System::Net::ValidationHelper::ValidateSegment(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ValidationHelper*>(),
                        {"ValidateSegment", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, segment);
}
// Ctor Parameters []
constexpr ::System::Net::ValidationHelper::ValidationHelper()   {
}
