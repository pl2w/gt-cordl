#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyPrice.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyNumberBase_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyPrice_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::GetValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fc76a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc77ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_get__disableIfFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfFree;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_get__disableIfFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfFree;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_set__disableIfFree(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableIfFree = value;
}
constexpr bool& Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_get__alsoDisableIfPurchased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alsoDisableIfPurchased;
}
constexpr bool const& Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_get__alsoDisableIfPurchased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alsoDisableIfPurchased;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_set__alsoDisableIfPurchased(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alsoDisableIfPurchased = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_get__enableIfPurchased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableIfPurchased;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_get__enableIfPurchased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableIfPurchased;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::__cordl_internal_set__enableIfPurchased(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableIfPurchased = value;
}
inline int64_t Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::GetValue(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice* Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice::ModPropertyPrice()   {
}
