#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/IActiveStateModel.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__IActiveStateModel_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel.GetChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* (::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel::GetChildren)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4aaf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel.GetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* (::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel::GetChildrenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* Oculus::Interaction::PoseDetection::Debug::IActiveStateModel::GetChildren(::Oculus::Interaction::IActiveState*  activeState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>(this, ___internal_method, activeState);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::PoseDetection::Debug::IActiveStateModel::GetChildrenAsync(::Oculus::Interaction::IActiveState*  activeState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, activeState);
}
