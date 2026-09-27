#pragma once
// IWYU pragma private; include "GlobalNamespace/CreatorCodeProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreatorCodeProvider_def.hpp"
#include "Cosmetics/zzzz__ICreatorCodeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__NexusCreatorCode_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeProvider.Cosmetics_ICreatorCodeProvider_get_TerminalId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreatorCodeProvider::*)()>(&::GlobalNamespace::CreatorCodeProvider::Cosmetics_ICreatorCodeProvider_get_TerminalId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55ef2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"Cosmetics.ICreatorCodeProvider.get_TerminalId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeProvider.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreatorCodeProvider::*)()>(&::GlobalNamespace::CreatorCodeProvider::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55ef318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeProvider.Cosmetics_ICreatorCodeProvider_GetCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreatorCodeProvider::*)(::by_ref<::StringW>, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>)>(&::GlobalNamespace::CreatorCodeProvider::Cosmetics_ICreatorCodeProvider_GetCreatorCode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55ef418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"Cosmetics.ICreatorCodeProvider.GetCreatorCode", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeProvider.Cosmetics_ICreatorCodeProvider_get_GameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CreatorCodeProvider::*)()>(&::GlobalNamespace::CreatorCodeProvider::Cosmetics_ICreatorCodeProvider_get_GameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ef4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"Cosmetics.ICreatorCodeProvider.get_GameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreatorCodeProvider::*)()>(&::GlobalNamespace::CreatorCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ef4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode>& GlobalNamespace::CreatorCodeProvider::__cordl_internal_get_nexusCreatorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nexusCreatorCode;
}
constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode> const& GlobalNamespace::CreatorCodeProvider::__cordl_internal_get_nexusCreatorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nexusCreatorCode;
}
constexpr void GlobalNamespace::CreatorCodeProvider::__cordl_internal_set_nexusCreatorCode(::UnityW<::GlobalNamespace::NexusCreatorCode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nexusCreatorCode = value;
}
inline ::StringW GlobalNamespace::CreatorCodeProvider::Cosmetics_ICreatorCodeProvider_get_TerminalId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"Cosmetics.ICreatorCodeProvider.get_TerminalId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::CreatorCodeProvider::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CreatorCodeProvider::Cosmetics_ICreatorCodeProvider_GetCreatorCode(::by_ref<::StringW>  code, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>  groups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"Cosmetics.ICreatorCodeProvider.GetCreatorCode", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, groups);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CreatorCodeProvider::Cosmetics_ICreatorCodeProvider_get_GameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {"Cosmetics.ICreatorCodeProvider.get_GameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::CreatorCodeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreatorCodeProvider* GlobalNamespace::CreatorCodeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreatorCodeProvider*>());
}
/// @brief Convert operator to "::Cosmetics::ICreatorCodeProvider"
constexpr  GlobalNamespace::CreatorCodeProvider::operator ::Cosmetics::ICreatorCodeProvider*() noexcept {
return static_cast<::Cosmetics::ICreatorCodeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cosmetics::ICreatorCodeProvider"
constexpr ::Cosmetics::ICreatorCodeProvider* GlobalNamespace::CreatorCodeProvider::i___Cosmetics__ICreatorCodeProvider() noexcept {
return static_cast<::Cosmetics::ICreatorCodeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::CreatorCodeProvider::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::CreatorCodeProvider::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreatorCodeProvider::CreatorCodeProvider()   {
}
