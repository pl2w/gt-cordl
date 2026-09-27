#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateDebugTree.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_impl.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateDebugTree_def.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateDebugTree__TryGetChildrenAsync_d__3_def.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__IActiveStateModel_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4aa450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree.TryGetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::TryGetChildrenAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa4aa4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::setStaticF__models(::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>*, "_models", ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::getStaticF__models()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>*, "_models", ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>();
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::_ctor(::Oculus::Interaction::IActiveState*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
template<typename TType>
requires(::cordl_internals::type_constraint<TType, ::Oculus::Interaction::IActiveState*> && ::cordl_internals::reference_type_constraint<TType>)
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::RegisterModel(::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*  stateModel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(),
                    {"RegisterModel", {::i2c::class_of<TType>()}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TType>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stateModel);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::TryGetChildrenAsync(::Oculus::Interaction::IActiveState*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, node);
}
inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::New_ctor(::Oculus::Interaction::IActiveState*  root)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree*>(root));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTree::ActiveStateDebugTree()   {
}
