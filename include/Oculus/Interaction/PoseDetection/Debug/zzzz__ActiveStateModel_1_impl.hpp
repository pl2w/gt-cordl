#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateModel_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel`1__GetChildrenAsync_d__0_def.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__IActiveStateModel_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template<typename TActiveState>
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::GetChildrenAsync(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*>(),
                        {"GetChildrenAsync", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, activeState);
}
template<typename TActiveState>
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::GetChildrenAsync(TActiveState  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, instance);
}
template<typename TActiveState>
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::GetChildren(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*>(),
                        {"GetChildren", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>(this, ___internal_method, activeState);
}
template<typename TActiveState>
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::GetChildren(TActiveState  activeState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>(this, ___internal_method, activeState);
}
template<typename TActiveState>
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TActiveState>
inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>* Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel"
template<typename TActiveState>
constexpr  Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::operator ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel"
template<typename TActiveState>
constexpr ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel* Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::i___Oculus__Interaction__PoseDetection__Debug__IActiveStateModel() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TActiveState>
constexpr ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>::ActiveStateModel_1()   {
}
