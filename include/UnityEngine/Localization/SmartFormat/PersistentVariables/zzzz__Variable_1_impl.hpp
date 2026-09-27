#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/Variable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableValueChanged_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
template<typename T>
constexpr T& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::__cordl_internal_get_m_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
template<typename T>
constexpr T const& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::__cordl_internal_get_m_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
template<typename T>
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::__cordl_internal_set_m_Value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Value = value;
}
template<typename T>
constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::__cordl_internal_get_ValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueChanged;
}
template<typename T>
constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* const& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::__cordl_internal_get_ValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueChanged;
}
template<typename T>
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::__cordl_internal_set_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValueChanged = value;
}
template<typename T>
inline T UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::get_ValueUXML()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"get_ValueUXML", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::set_ValueUXML(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"set_ValueUXML", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::add_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"add_ValueChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::remove_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"remove_ValueChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Object* UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::GetSourceValue(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"GetSourceValue", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, _);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::SendValueChangedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {"SendValueChangedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>* UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
template<typename T>
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
template<typename T>
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged* UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableValueChanged() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
template<typename T>
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
template<typename T>
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>::Variable_1()   {
}
template<typename T>
constexpr T& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::__cordl_internal_get_ValueUXML()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueUXML;
}
template<typename T>
constexpr T const& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::__cordl_internal_get_ValueUXML() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueUXML;
}
template<typename T>
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::__cordl_internal_set_ValueUXML(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValueUXML = value;
}
template<typename T>
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::__cordl_internal_get_ValueUXML_UxmlAttributeFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueUXML_UxmlAttributeFlags;
}
template<typename T>
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::__cordl_internal_get_ValueUXML_UxmlAttributeFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueUXML_UxmlAttributeFlags;
}
template<typename T>
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::__cordl_internal_set_ValueUXML_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValueUXML_UxmlAttributeFlags = value;
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::Deserialize(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>* UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>::Variable_1_UxmlSerializedData()   {
}
