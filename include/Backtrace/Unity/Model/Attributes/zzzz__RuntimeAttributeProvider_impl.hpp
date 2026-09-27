#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/RuntimeAttributeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__RuntimeAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IScopeAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0xc28;
  constexpr static std::size_t addrs = 0x5f22e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider.GetScriptingBackend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::*)()>(&::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::GetScriptingBackend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f23ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {"GetScriptingBackend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider.GetApiCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::*)()>(&::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::GetApiCompatibility)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f23a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {"GetApiCompatibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::*)()>(&::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f19a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::StringW Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::GetScriptingBackend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {"GetScriptingBackend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::GetApiCompatibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {"GetApiCompatibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider* Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr  Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::operator ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider* Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::i___Backtrace__Unity__Model__Attributes__IScopeAttributeProvider() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Attributes::RuntimeAttributeProvider::RuntimeAttributeProvider()   {
}
