#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyDateUpdated.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyDateBase_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyDateUpdated_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::GetValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fc5fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::OnModUpdate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9fc5fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fc60ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::__cordl_internal_get__disableIfNoUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoUpdate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::__cordl_internal_get__disableIfNoUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoUpdate;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::__cordl_internal_set__disableIfNoUpdate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableIfNoUpdate = value;
}
inline ::System::DateTime Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::GetValue(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::OnModUpdate(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated* Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated::ModPropertyDateUpdated()   {
}
