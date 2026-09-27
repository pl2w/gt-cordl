#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCategoryButton.hpp"
#include "GlobalNamespace/zzzz__CosmeticButton_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCategoryButton_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCategoryButton.SetIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCategoryButton::*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::CosmeticCategoryButton::SetIcon)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57832f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(),
                        {"SetIcon", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCategoryButton.SetDualIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCategoryButton::*)(::UnityEngine::Sprite*, ::UnityEngine::Sprite*)>(&::GlobalNamespace::CosmeticCategoryButton::SetDualIcon)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x57833b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(),
                        {"SetDualIcon", {}, {::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCategoryButton.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCategoryButton::*)()>(&::GlobalNamespace::CosmeticCategoryButton::UpdatePosition)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x578349c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCategoryButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCategoryButton::*)()>(&::GlobalNamespace::CosmeticCategoryButton::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5783628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::CosmeticCategoryButton::__cordl_internal_get_equippedIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equippedIcon;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::CosmeticCategoryButton::__cordl_internal_get_equippedIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equippedIcon;
}
constexpr void GlobalNamespace::CosmeticCategoryButton::__cordl_internal_set_equippedIcon(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equippedIcon = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::CosmeticCategoryButton::__cordl_internal_get_equippedLeftIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equippedLeftIcon;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::CosmeticCategoryButton::__cordl_internal_get_equippedLeftIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equippedLeftIcon;
}
constexpr void GlobalNamespace::CosmeticCategoryButton::__cordl_internal_set_equippedLeftIcon(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equippedLeftIcon = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::CosmeticCategoryButton::__cordl_internal_get_equippedRightIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equippedRightIcon;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::CosmeticCategoryButton::__cordl_internal_get_equippedRightIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equippedRightIcon;
}
constexpr void GlobalNamespace::CosmeticCategoryButton::__cordl_internal_set_equippedRightIcon(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equippedRightIcon = value;
}
inline void GlobalNamespace::CosmeticCategoryButton::SetIcon(::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(),
                        {"SetIcon", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sprite);
}
inline void GlobalNamespace::CosmeticCategoryButton::SetDualIcon(::UnityEngine::Sprite*  leftSprite, ::UnityEngine::Sprite*  rightSprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(),
                        {"SetDualIcon", {}, {::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftSprite, rightSprite);
}
inline void GlobalNamespace::CosmeticCategoryButton::UpdatePosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCategoryButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCategoryButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCategoryButton* GlobalNamespace::CosmeticCategoryButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCategoryButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCategoryButton::CosmeticCategoryButton()   {
}
