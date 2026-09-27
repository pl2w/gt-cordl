#pragma once
// IWYU pragma private; include "Liv/Lck/InteractionSystemDetector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__InteractionSystemDetector_def.hpp"
#include "Liv/Lck/zzzz__InteractionSystemDetector_InteractionSystem_def.hpp"
#include "Liv/Lck/zzzz__InteractionSystemDetector_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector.GetAvailableInteractionSystems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>* (*)()>(&::Liv::Lck::InteractionSystemDetector::GetAvailableInteractionSystems)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cec8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"GetAvailableInteractionSystems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector.EnsureScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::InteractionSystemDetector::EnsureScanned)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9cec950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"EnsureScanned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector.AnyTypeExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>)>(&::Liv::Lck::InteractionSystemDetector::AnyTypeExists)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cecb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"AnyTypeExists", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector.TypeExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Liv::Lck::InteractionSystemDetector::TypeExists)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9cecba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"TypeExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector.TypeExistsInAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Reflection::Assembly*)>(&::Liv::Lck::InteractionSystemDetector::TypeExistsInAssembly)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cecd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"TypeExistsInAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::InteractionSystemDetector::*)()>(&::Liv::Lck::InteractionSystemDetector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cece00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::InteractionSystemDetector::setStaticF__scanned(bool  value)  {
::cordl_internals::setStaticField<bool, "_scanned", ::Liv::Lck::InteractionSystemDetector*>(std::forward<bool>(value));
}
inline bool Liv::Lck::InteractionSystemDetector::getStaticF__scanned()  {
return ::cordl_internals::getStaticField<bool, "_scanned", ::Liv::Lck::InteractionSystemDetector*>();
}
inline void Liv::Lck::InteractionSystemDetector::setStaticF__detectedSystems(::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>*, "_detectedSystems", ::Liv::Lck::InteractionSystemDetector*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>* Liv::Lck::InteractionSystemDetector::getStaticF__detectedSystems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>*, "_detectedSystems", ::Liv::Lck::InteractionSystemDetector*>();
}
inline void Liv::Lck::InteractionSystemDetector::setStaticF__xrInteractionToolkitTypeNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_xrInteractionToolkitTypeNames", ::Liv::Lck::InteractionSystemDetector*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Liv::Lck::InteractionSystemDetector::getStaticF__xrInteractionToolkitTypeNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_xrInteractionToolkitTypeNames", ::Liv::Lck::InteractionSystemDetector*>();
}
inline void Liv::Lck::InteractionSystemDetector::setStaticF__oculusInteractionTypeNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_oculusInteractionTypeNames", ::Liv::Lck::InteractionSystemDetector*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Liv::Lck::InteractionSystemDetector::getStaticF__oculusInteractionTypeNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_oculusInteractionTypeNames", ::Liv::Lck::InteractionSystemDetector*>();
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>* Liv::Lck::InteractionSystemDetector::GetAvailableInteractionSystems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"GetAvailableInteractionSystems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>*>(nullptr, ___internal_method);
}
inline void Liv::Lck::InteractionSystemDetector::EnsureScanned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"EnsureScanned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Liv::Lck::InteractionSystemDetector::AnyTypeExists(::ArrayW<::StringW>  typeNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"AnyTypeExists", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, typeNames);
}
inline bool Liv::Lck::InteractionSystemDetector::TypeExists(::StringW  fullTypeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"TypeExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullTypeName);
}
inline bool Liv::Lck::InteractionSystemDetector::TypeExistsInAssembly(::StringW  fullTypeName, ::System::Reflection::Assembly*  assembly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {"TypeExistsInAssembly", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullTypeName, assembly);
}
inline void Liv::Lck::InteractionSystemDetector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::InteractionSystemDetector* Liv::Lck::InteractionSystemDetector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::InteractionSystemDetector*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::InteractionSystemDetector::InteractionSystemDetector()   {
}
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::*)()>(&::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cecd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0._TypeExists_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::*)(::System::Reflection::Assembly*)>(&::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::_TypeExists_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9ced060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0*>(),
                        {"<TypeExists>b__0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::__cordl_internal_get_fullTypeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTypeName;
}
constexpr ::StringW const& Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::__cordl_internal_get_fullTypeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTypeName;
}
constexpr void Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::__cordl_internal_set_fullTypeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullTypeName = value;
}
inline void Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::_TypeExists_b__0(::System::Reflection::Assembly*  assembly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0*>(),
                        {"<TypeExists>b__0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assembly);
}
inline ::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0* Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0::InteractionSystemDetector___c__DisplayClass8_0()   {
}
