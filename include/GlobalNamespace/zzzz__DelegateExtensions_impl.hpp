#pragma once
// IWYU pragma private; include "GlobalNamespace/DelegateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DelegateExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelegateExtensions.ToStringList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::ArrayW<::System::Delegate*>)>(&::GlobalNamespace::DelegateExtensions::ToStringList)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x56733dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelegateExtensions*>(),
                        {"ToStringList", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateExtensions.ToText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Delegate*>)>(&::GlobalNamespace::DelegateExtensions::ToText)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5673598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelegateExtensions*>(),
                        {"ToText", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::DelegateExtensions::ToStringList(::ArrayW<::System::Delegate*>  invocationList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelegateExtensions*>(),
                        {"ToStringList", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method, invocationList);
}
inline ::StringW GlobalNamespace::DelegateExtensions::ToText(::ArrayW<::System::Delegate*>  invocationList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelegateExtensions*>(),
                        {"ToText", {}, {::i2c::type_of<::ArrayW<::System::Delegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, invocationList);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DelegateExtensions::DelegateExtensions()   {
}
