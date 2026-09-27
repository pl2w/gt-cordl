#pragma once
// IWYU pragma private; include "System/ComponentModel/SyntaxCheck.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__SyntaxCheck_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::SyntaxCheck.CheckMachineName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::ComponentModel::SyntaxCheck::CheckMachineName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xad69ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SyntaxCheck*>(),
                        {"CheckMachineName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SyntaxCheck.CheckPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::ComponentModel::SyntaxCheck::CheckPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xad69d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SyntaxCheck*>(),
                        {"CheckPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SyntaxCheck.CheckRootedPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::ComponentModel::SyntaxCheck::CheckRootedPath)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xad69de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SyntaxCheck*>(),
                        {"CheckRootedPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::SyntaxCheck::CheckMachineName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SyntaxCheck*>(),
                        {"CheckMachineName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::ComponentModel::SyntaxCheck::CheckPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SyntaxCheck*>(),
                        {"CheckPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::ComponentModel::SyntaxCheck::CheckRootedPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SyntaxCheck*>(),
                        {"CheckRootedPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::SyntaxCheck::SyntaxCheck()   {
}
