#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/INativeClient.hpp"
#include "Backtrace/Unity/Runtime/Native/zzzz__INativeClient_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IDynamicAttributeProvider_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::INativeClient.HandleAnr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::INativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::INativeClient::HandleAnr)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::INativeClient.SetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::INativeClient::*)(::StringW, ::StringW)>(&::Backtrace::Unity::Runtime::Native::INativeClient::SetAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::INativeClient.OnOOM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Runtime::Native::INativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::INativeClient::OnOOM)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::INativeClient.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::INativeClient::*)(float_t)>(&::Backtrace::Unity::Runtime::Native::INativeClient::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::INativeClient.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::INativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::INativeClient::Disable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::INativeClient.PauseAnrThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::INativeClient::*)(bool)>(&::Backtrace::Unity::Runtime::Native::INativeClient::PauseAnrThread)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Runtime::Native::INativeClient::HandleAnr()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::INativeClient::SetAttribute(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool Backtrace::Unity::Runtime::Native::INativeClient::OnOOM()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::INativeClient::Update(float_t  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void Backtrace::Unity::Runtime::Native::INativeClient::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::INativeClient::PauseAnrThread(bool  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::INativeClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr  Backtrace::Unity::Runtime::Native::INativeClient::operator ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* Backtrace::Unity::Runtime::Native::INativeClient::i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
