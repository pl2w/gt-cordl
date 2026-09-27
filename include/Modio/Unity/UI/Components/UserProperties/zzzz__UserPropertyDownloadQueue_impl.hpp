#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyDownloadQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyDownloadQueue_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyDownloadQueue__HideAfterDelay_d__18_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__IPropertyMonoBehaviourEvents_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnUserUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fbf93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fbf940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fbf944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fbf948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnDisable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9fbfb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.OnModChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnModChangeEvent)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9fbfc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnModChangeEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.OnModUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnModUpdated)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x9fbfe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnModUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.HideAfterDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::HideAfterDelay)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fc02ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"HideAfterDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue.SetInstallOrDownloadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)(bool)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::SetInstallOrDownloadState)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9fbfa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"SetInstallOrDownloadState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc0354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__progressBars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressBars;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__progressBars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressBars;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__progressBars(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressBars = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__progressPercentText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressPercentText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__progressPercentText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressPercentText;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__progressPercentText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressPercentText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__progressSizesText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressSizesText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__progressSizesText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressSizesText;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__progressSizesText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressSizesText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__operationCountText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationCountText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__operationCountText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationCountText;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__operationCountText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operationCountText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__speedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__speedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedText;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__speedText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speedText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__disableIfNoOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoOperations;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__disableIfNoOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoOperations;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__disableIfNoOperations(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableIfNoOperations = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__showForDownloadOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showForDownloadOnly;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__showForDownloadOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showForDownloadOnly;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__showForDownloadOnly(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showForDownloadOnly = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__showForInstallOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showForInstallOnly;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__showForInstallOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showForInstallOnly;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__showForInstallOnly(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showForInstallOnly = value;
}
constexpr float_t& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__hideAfterSecondsOfInactivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideAfterSecondsOfInactivity;
}
constexpr float_t const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__hideAfterSecondsOfInactivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideAfterSecondsOfInactivity;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__hideAfterSecondsOfInactivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideAfterSecondsOfInactivity = value;
}
constexpr int32_t& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__completedOperationCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedOperationCount;
}
constexpr int32_t const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__completedOperationCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedOperationCount;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__completedOperationCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____completedOperationCount = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_get__mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::__cordl_internal_set__mod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mod = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnModChangeEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  modChangeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnModChangeEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, modChangeType);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::OnModUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"OnModUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::HideAfterDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"HideAfterDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::SetInstallOrDownloadState(bool  isDownloading)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {"SetInstallOrDownloadState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDownloading);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue* Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::operator ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::operator ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept {
return static_cast<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept {
return static_cast<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue::UserPropertyDownloadQueue()   {
}
