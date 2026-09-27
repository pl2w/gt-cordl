#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/MachineAttributeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__MachineAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IScopeAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/zzzz__MachineIdStorage_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::MachineAttributeProvider.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f20750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::MachineAttributeProvider.IncludeOsInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::IncludeOsInformation)> {
  constexpr static std::size_t size = 0xf24;
  constexpr static std::size_t addrs = 0x5f20f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {"IncludeOsInformation", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::MachineAttributeProvider.IncludeGraphicCardInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::IncludeGraphicCardInformation)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5f20840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {"IncludeGraphicCardInformation", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::MachineAttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::*)()>(&::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f19a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::MachineIdStorage*& Backtrace::Unity::Model::Attributes::MachineAttributeProvider::__cordl_internal_get__machineIdStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____machineIdStorage;
}
constexpr ::Backtrace::Unity::Model::MachineIdStorage* const& Backtrace::Unity::Model::Attributes::MachineAttributeProvider::__cordl_internal_get__machineIdStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____machineIdStorage;
}
constexpr void Backtrace::Unity::Model::Attributes::MachineAttributeProvider::__cordl_internal_set__machineIdStorage(::Backtrace::Unity::Model::MachineIdStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____machineIdStorage = value;
}
inline void Backtrace::Unity::Model::Attributes::MachineAttributeProvider::GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void Backtrace::Unity::Model::Attributes::MachineAttributeProvider::IncludeOsInformation(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {"IncludeOsInformation", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void Backtrace::Unity::Model::Attributes::MachineAttributeProvider::IncludeGraphicCardInformation(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {"IncludeGraphicCardInformation", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void Backtrace::Unity::Model::Attributes::MachineAttributeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Attributes::MachineAttributeProvider* Backtrace::Unity::Model::Attributes::MachineAttributeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr  Backtrace::Unity::Model::Attributes::MachineAttributeProvider::operator ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider* Backtrace::Unity::Model::Attributes::MachineAttributeProvider::i___Backtrace__Unity__Model__Attributes__IScopeAttributeProvider() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Attributes::MachineAttributeProvider::MachineAttributeProvider()   {
}
