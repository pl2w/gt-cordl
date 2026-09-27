#pragma once
// IWYU pragma private; include "Meta/WitAi/ComponentExtensions.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Meta/WitAi/zzzz__ComponentExtensions_def.hpp"
#include "Meta/WitAi/zzzz__ComponentExtensions_ComponentCopyData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ComponentExtensions.IsObsolete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*)>(&::Meta::WitAi::ComponentExtensions::IsObsolete)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e3bf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ComponentExtensions*>(),
                        {"IsObsolete", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::ComponentExtensions::setStaticF__data(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>*, "_data", ::Meta::WitAi::ComponentExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>* Meta::WitAi::ComponentExtensions::getStaticF__data()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::ComponentExtensions_ComponentCopyData>*, "_data", ::Meta::WitAi::ComponentExtensions*>();
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Meta::WitAi::ComponentExtensions::Copy(T  toComponent, T  fromComponent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ComponentExtensions*>(),
                    {"Copy", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toComponent, fromComponent);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Meta::WitAi::ComponentExtensions::PreloadCopyData(T  thisComponent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ComponentExtensions*>(),
                    {"PreloadCopyData", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thisComponent);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::GlobalNamespace::ComponentExtensions_ComponentCopyData Meta::WitAi::ComponentExtensions::GetCopyData(T  thisComponent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ComponentExtensions*>(),
                    {"GetCopyData", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ComponentExtensions_ComponentCopyData>(nullptr, ___internal_method, thisComponent);
}
inline bool Meta::WitAi::ComponentExtensions::IsObsolete(::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ComponentExtensions*>(),
                        {"IsObsolete", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributes);
}
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
inline bool Meta::WitAi::ComponentExtensions::HasCustomAttributes(::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*  attributes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ComponentExtensions*>(),
                    {"HasCustomAttributes", {::i2c::class_of<TAttribute>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAttribute>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributes);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ComponentExtensions::ComponentExtensions()   {
}
