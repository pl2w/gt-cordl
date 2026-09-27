#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Cache.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Cache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Cache.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_Cache::*)()>(&::GlobalNamespace::InputControlLayout_Cache::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb008214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Cache>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Cache.FindOrLoadLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::GlobalNamespace::InputControlLayout_Cache::*)(::StringW, bool)>(&::GlobalNamespace::InputControlLayout_Cache::FindOrLoadLayout)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb0076d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Cache>(),
                        {"FindOrLoadLayout", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputControlLayout_Cache::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Cache>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* GlobalNamespace::InputControlLayout_Cache::FindOrLoadLayout(::StringW  name, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Cache>(),
                        {"FindOrLoadLayout", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method, name, throwIfNotFound);
}
// Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlLayout_Cache::InputControlLayout_Cache(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table) noexcept  {
this->table = table;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlLayout_Cache::InputControlLayout_Cache()   {
}
