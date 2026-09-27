#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DataSource_1.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TData>
constexpr bool& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TData>
constexpr bool const& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
template<typename TData>
constexpr bool& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__requiresUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requiresUpdate;
}
template<typename TData>
constexpr bool const& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__requiresUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requiresUpdate;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_set__requiresUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requiresUpdate = value;
}
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__updateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateMode;
}
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> const& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__updateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateMode;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_set__updateMode(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateMode = value;
}
template<typename TData>
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__updateAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateAfter;
}
template<typename TData>
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__updateAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateAfter;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_set__updateAfter(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateAfter = value;
}
template<typename TData>
constexpr ::Oculus::Interaction::Input::IDataSource*& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get_UpdateAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateAfter;
}
template<typename TData>
constexpr ::Oculus::Interaction::Input::IDataSource* const& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get_UpdateAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateAfter;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_set_UpdateAfter(::Oculus::Interaction::Input::IDataSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateAfter = value;
}
template<typename TData>
constexpr int32_t& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__currentDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDataVersion;
}
template<typename TData>
constexpr int32_t const& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get__currentDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDataVersion;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_set__currentDataVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDataVersion = value;
}
template<typename TData>
constexpr ::System::Action*& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get_InputDataAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputDataAvailable;
}
template<typename TData>
constexpr ::System::Action* const& Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_get_InputDataAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputDataAvailable;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataSource_1<TData>::__cordl_internal_set_InputDataAvailable(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputDataAvailable = value;
}
template<typename TData>
inline bool Oculus::Interaction::Input::DataSource_1<TData>::get_Started()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"get_Started", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TData>
inline ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData> Oculus::Interaction::Input::DataSource_1<TData>::get_UpdateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"get_UpdateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>>(this, ___internal_method);
}
template<typename TData>
inline bool Oculus::Interaction::Input::DataSource_1<TData>::get_UpdateModeAfterPrevious()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"get_UpdateModeAfterPrevious", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::add_InputDataAvailable(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"add_InputDataAvailable", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::remove_InputDataAvailable(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"remove_InputDataAvailable", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TData>
inline int32_t Oculus::Interaction::Input::DataSource_1<TData>::get_CurrentDataVersion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::ResetUpdateAfter(::Oculus::Interaction::Input::IDataSource*  updateAfter, ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"ResetUpdateAfter", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateAfter, updateMode);
}
template<typename TData>
inline TData Oculus::Interaction::Input::DataSource_1<TData>::GetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"GetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method);
}
template<typename TData>
inline bool Oculus::Interaction::Input::DataSource_1<TData>::RequiresUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"RequiresUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::MarkInputDataRequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline TData Oculus::Interaction::Input::DataSource_1<TData>::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::InjectAllDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"InjectAllDataSource", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::InjectUpdateMode(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"InjectUpdateMode", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::InjectUpdateAfter(::Oculus::Interaction::Input::IDataSource*  updateAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {"InjectUpdateAfter", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateAfter);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1<TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1<TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline ::Oculus::Interaction::Input::DataSource_1<TData>* Oculus::Interaction::Input::DataSource_1<TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::DataSource_1<TData>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IDataSource_1<TData>"
template<typename TData>
constexpr  Oculus::Interaction::Input::DataSource_1<TData>::operator ::Oculus::Interaction::Input::IDataSource_1<TData>*() noexcept {
return static_cast<::Oculus::Interaction::Input::IDataSource_1<TData>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IDataSource_1<TData>"
template<typename TData>
constexpr ::Oculus::Interaction::Input::IDataSource_1<TData>* Oculus::Interaction::Input::DataSource_1<TData>::i___Oculus__Interaction__Input__IDataSource_1_TData_() noexcept {
return static_cast<::Oculus::Interaction::Input::IDataSource_1<TData>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IDataSource"
template<typename TData>
constexpr  Oculus::Interaction::Input::DataSource_1<TData>::operator ::Oculus::Interaction::Input::IDataSource*() noexcept {
return static_cast<::Oculus::Interaction::Input::IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IDataSource"
template<typename TData>
constexpr ::Oculus::Interaction::Input::IDataSource* Oculus::Interaction::Input::DataSource_1<TData>::i___Oculus__Interaction__Input__IDataSource() noexcept {
return static_cast<::Oculus::Interaction::Input::IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TData>
constexpr ::Oculus::Interaction::Input::DataSource_1<TData>::DataSource_1()   {
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1___c<TData>::setStaticF___9(::Oculus::Interaction::Input::DataSource_1___c<TData>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::DataSource_1___c<TData>*, "<>9", ::Oculus::Interaction::Input::DataSource_1___c<TData>*>(std::forward<::Oculus::Interaction::Input::DataSource_1___c<TData>*>(value));
}
template<typename TData>
inline ::Oculus::Interaction::Input::DataSource_1___c<TData>* Oculus::Interaction::Input::DataSource_1___c<TData>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::DataSource_1___c<TData>*, "<>9", ::Oculus::Interaction::Input::DataSource_1___c<TData>*>();
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1___c<TData>::setStaticF___9__34_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__34_0", ::Oculus::Interaction::Input::DataSource_1___c<TData>*>(std::forward<::System::Action*>(value));
}
template<typename TData>
inline ::System::Action* Oculus::Interaction::Input::DataSource_1___c<TData>::getStaticF___9__34_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__34_0", ::Oculus::Interaction::Input::DataSource_1___c<TData>*>();
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1___c<TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1___c<TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataSource_1___c<TData>::__ctor_b__34_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataSource_1___c<TData>*>(),
                        {"<.ctor>b__34_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline ::Oculus::Interaction::Input::DataSource_1___c<TData>* Oculus::Interaction::Input::DataSource_1___c<TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::DataSource_1___c<TData>*>());
}
// Ctor Parameters []
template<typename TData>
constexpr ::Oculus::Interaction::Input::DataSource_1___c<TData>::DataSource_1___c()   {
}
