#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioUploadHandler.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioUploadHandler_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDataUploadHandler_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioUploadHandler.get_IsInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Interfaces::IAudioUploadHandler::*)()>(&::Meta::WitAi::Interfaces::IAudioUploadHandler::get_IsInputStreamReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioUploadHandler.set_OnInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::IAudioUploadHandler::*)(::System::Action*)>(&::Meta::WitAi::Interfaces::IAudioUploadHandler::set_OnInputStreamReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioUploadHandler.set_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::IAudioUploadHandler::*)(::Meta::WitAi::Data::AudioEncoding*)>(&::Meta::WitAi::Interfaces::IAudioUploadHandler::set_AudioEncoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::Interfaces::IAudioUploadHandler::get_IsInputStreamReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Interfaces::IAudioUploadHandler::set_OnInputStreamReady(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Interfaces::IAudioUploadHandler::set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr  Meta::WitAi::Interfaces::IAudioUploadHandler::operator ::Meta::WitAi::Interfaces::IDataUploadHandler*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDataUploadHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IDataUploadHandler* Meta::WitAi::Interfaces::IAudioUploadHandler::i___Meta__WitAi__Interfaces__IDataUploadHandler() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDataUploadHandler*>(static_cast<void*>(this));
}
