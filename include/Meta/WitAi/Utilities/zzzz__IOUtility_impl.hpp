#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/IOUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__IOUtility_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Utilities::IOUtility.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::WitAi::Utilities::IOUtility::LogError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e84bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::IOUtility*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::IOUtility.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, bool)>(&::Meta::WitAi::Utilities::IOUtility::CreateDirectory)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e84c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::IOUtility*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Utilities::IOUtility::LogError(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::IOUtility*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline bool Meta::WitAi::Utilities::IOUtility::CreateDirectory(::StringW  directoryPath, bool  recursively)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::IOUtility*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, directoryPath, recursively);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::IOUtility::IOUtility()   {
}
