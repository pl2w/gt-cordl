#pragma once
// IWYU pragma private; include "Cosmetics/ICreatorCodeProvider.hpp"
#include "Cosmetics/zzzz__ICreatorCodeProvider_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Cosmetics::ICreatorCodeProvider.get_GameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Cosmetics::ICreatorCodeProvider::*)()>(&::Cosmetics::ICreatorCodeProvider::get_GameObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(),
                    {::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::ICreatorCodeProvider.get_TerminalId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Cosmetics::ICreatorCodeProvider::*)()>(&::Cosmetics::ICreatorCodeProvider::get_TerminalId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(),
                    {::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::ICreatorCodeProvider.GetCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::ICreatorCodeProvider::*)(::by_ref<::StringW>, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>)>(&::Cosmetics::ICreatorCodeProvider::GetCreatorCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(),
                    {::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> Cosmetics::ICreatorCodeProvider::get_GameObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::StringW Cosmetics::ICreatorCodeProvider::get_TerminalId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Cosmetics::ICreatorCodeProvider::GetCreatorCode(::by_ref<::StringW>  code, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>  groups)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cosmetics::ICreatorCodeProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, groups);
}
