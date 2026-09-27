#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyDiskUsage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyDiskUsage_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyDiskUsage__UpdateUsage_d__11_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__IPropertyMonoBehaviourEvents_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fbef74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fbf018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fbf01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fbf11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage.OnModFileStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnModFileStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fbf21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnModFileStateChanged", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnUserUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fbf2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage.UpdateUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::UpdateUsage)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fbf220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"UpdateUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbf2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__fillImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__fillImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillImage;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_set__fillImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillImage = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__enableIfAvailableSpaceSupported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableIfAvailableSpaceSupported;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__enableIfAvailableSpaceSupported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableIfAvailableSpaceSupported;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_set__enableIfAvailableSpaceSupported(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableIfAvailableSpaceSupported = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__disableIfAvailableSpaceSupported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfAvailableSpaceSupported;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__disableIfAvailableSpaceSupported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfAvailableSpaceSupported;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_set__disableIfAvailableSpaceSupported(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableIfAvailableSpaceSupported = value;
}
constexpr bool& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__isUpdatingUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUpdatingUsage;
}
constexpr bool const& Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_get__isUpdatingUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUpdatingUsage;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::__cordl_internal_set__isUpdatingUsage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isUpdatingUsage = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnModFileStateChanged(::Modio::Mods::Mod*  _, ::Modio::Mods::ModChangeType  __)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnModFileStateChanged", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::UpdateUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {"UpdateUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage* Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::operator ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::operator ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept {
return static_cast<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept {
return static_cast<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage::UserPropertyDiskUsage()   {
}
