#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/BundleStand.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__BundleStand_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GorillaNetworking/Store/zzzz__BundlePurchaseButton_def.hpp"
#include "GorillaNetworking/Store/zzzz__GtfcPriceLabel_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreBundleData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.get_playfabBundleID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::get_playfabBundleID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca7e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"get_playfabBundleID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.get_GtfcPriceLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::Store::GtfcPriceLabel> (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::get_GtfcPriceLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca7e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"get_GtfcPriceLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.set_GtfcPriceLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)(::GorillaNetworking::Store::GtfcPriceLabel*)>(&::GorillaNetworking::Store::BundleStand::set_GtfcPriceLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca7e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"set_GtfcPriceLabel", {}, {::i2c::type_of<::GorillaNetworking::Store::GtfcPriceLabel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.get_GtfcObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::get_GtfcObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca7e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"get_GtfcObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.set_GtfcObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)(::ArrayW<::UnityEngine::GameObject*>)>(&::GorillaNetworking::Store::BundleStand::set_GtfcObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca7e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"set_GtfcObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ca7e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ca7fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.InitializeEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::InitializeEventListeners)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ca80d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"InitializeEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.NotifyAlreadyOwn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::NotifyAlreadyOwn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca66c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"NotifyAlreadyOwn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.ErrorHappened
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::ErrorHappened)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca6374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"ErrorHappened", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.UpdatePurchaseButtonText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)(::StringW)>(&::GorillaNetworking::Store::BundleStand::UpdatePurchaseButtonText)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ca81b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"UpdatePurchaseButtonText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand.UpdateDescriptionText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)(::StringW)>(&::GorillaNetworking::Store::BundleStand::UpdateDescriptionText)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca8268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"UpdateDescriptionText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStand::*)()>(&::GorillaNetworking::Store::BundleStand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca8308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundlePurchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundlePurchaseButton;
}
constexpr ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundlePurchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundlePurchaseButton;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set__bundlePurchaseButton(::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bundlePurchaseButton = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundleDataReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleDataReference;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundleDataReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleDataReference;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set__bundleDataReference(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bundleDataReference = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>& GorillaNetworking::Store::BundleStand::__cordl_internal_get__GtfcPriceLabel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GtfcPriceLabel_k__BackingField;
}
constexpr ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get__GtfcPriceLabel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GtfcPriceLabel_k__BackingField;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set__GtfcPriceLabel_k__BackingField(::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GtfcPriceLabel_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::Store::BundleStand::__cordl_internal_get__GtfcObjects_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GtfcObjects_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get__GtfcObjects_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GtfcObjects_k__BackingField;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set__GtfcObjects_k__BackingField(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GtfcObjects_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::Store::BundleStand::__cordl_internal_get_creatorCodeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeProvider;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get_creatorCodeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeProvider;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set_creatorCodeProvider(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCodeProvider = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::Store::BundleStand::__cordl_internal_get_EditorOnlyObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EditorOnlyObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get_EditorOnlyObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EditorOnlyObjects;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set_EditorOnlyObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EditorOnlyObjects = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundleDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleDescriptionText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundleDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleDescriptionText;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set__bundleDescriptionText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bundleDescriptionText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundleIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GorillaNetworking::Store::BundleStand::__cordl_internal_get__bundleIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleIcon;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set__bundleIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bundleIcon = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaNetworking::Store::BundleStand::__cordl_internal_get_AlreadyOwnEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlreadyOwnEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaNetworking::Store::BundleStand::__cordl_internal_get_AlreadyOwnEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlreadyOwnEvent;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set_AlreadyOwnEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AlreadyOwnEvent = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaNetworking::Store::BundleStand::__cordl_internal_get_ErrorHappenedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorHappenedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaNetworking::Store::BundleStand::__cordl_internal_get_ErrorHappenedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorHappenedEvent;
}
constexpr void GorillaNetworking::Store::BundleStand::__cordl_internal_set_ErrorHappenedEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorHappenedEvent = value;
}
inline ::StringW GorillaNetworking::Store::BundleStand::get_playfabBundleID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"get_playfabBundleID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GorillaNetworking::Store::GtfcPriceLabel> GorillaNetworking::Store::BundleStand::get_GtfcPriceLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"get_GtfcPriceLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::Store::GtfcPriceLabel>>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleStand::set_GtfcPriceLabel(::GorillaNetworking::Store::GtfcPriceLabel*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"set_GtfcPriceLabel", {}, {::i2c::type_of<::GorillaNetworking::Store::GtfcPriceLabel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> GorillaNetworking::Store::BundleStand::get_GtfcObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"get_GtfcObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleStand::set_GtfcObjects(::ArrayW<::UnityEngine::GameObject*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"set_GtfcObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaNetworking::Store::BundleStand::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleStand::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleStand::InitializeEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"InitializeEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleStand::NotifyAlreadyOwn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"NotifyAlreadyOwn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleStand::ErrorHappened()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"ErrorHappened", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleStand::UpdatePurchaseButtonText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"UpdatePurchaseButtonText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GorillaNetworking::Store::BundleStand::UpdateDescriptionText(::StringW  descriptionText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {"UpdateDescriptionText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptionText);
}
inline void GorillaNetworking::Store::BundleStand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::BundleStand* GorillaNetworking::Store::BundleStand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::BundleStand*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GorillaNetworking::Store::BundleStand::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GorillaNetworking::Store::BundleStand::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::BundleStand::BundleStand()   {
}
