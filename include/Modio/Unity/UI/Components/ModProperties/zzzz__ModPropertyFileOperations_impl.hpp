#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyFileOperations.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyFileOperations_Operation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyFileOperations_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizedText_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyFileOperations_Operation_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::OnModUpdate)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x9fc672c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc6cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operations;
}
constexpr ::GlobalNamespace::ModPropertyFileOperations_Operation const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operations;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__operations(::GlobalNamespace::ModPropertyFileOperations_Operation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operations = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__noOperationActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noOperationActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__noOperationActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noOperationActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__noOperationActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noOperationActive = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operationActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operationActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__operationActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operationActive = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operationName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operationName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationName;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__operationName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operationName = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operationNameLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationNameLocalised;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__operationNameLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationNameLocalised;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__operationNameLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operationNameLocalised = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__progressPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressPercent;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__progressPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressPercent;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__progressPercent(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressPercent = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__progressFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressFill;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__progressFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressFill;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__progressFill(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressFill = value;
}
constexpr bool& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__invertProgressFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertProgressFill;
}
constexpr bool const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__invertProgressFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertProgressFill;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__invertProgressFill(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invertProgressFill = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__downloadSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadSpeed;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_get__downloadSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadSpeed;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::__cordl_internal_set__downloadSpeed(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downloadSpeed = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations* Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyFileOperations::ModPropertyFileOperations()   {
}
